package main

import (
	check "gopkg.in/check.v1"
)

func (s *Suite) TestDeprecated(c *check.C) {
	G.globalData.deprecated = getDeprecatedVars()

	line := NewLine("Makefile", "5", "USE_PERL5=\tyes", nil)
	NewMkLine(line).checkVarassign()

	c.Check(s.Output(), equals, "WARN: Makefile:5: Definition of USE_PERL5 is deprecated. Use USE_TOOLS+=perl or USE_TOOLS+=perl:run instead.\n")
}
