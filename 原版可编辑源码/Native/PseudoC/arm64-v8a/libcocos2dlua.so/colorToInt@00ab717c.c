
/* fairygui::ToolSet::colorToInt(cocos2d::Color3B const&) */

uint fairygui::ToolSet::colorToInt(Color3B *param_1)

{
                    /* try { // try from 00ab718c to 00bb719f has its CatchHandler @ 00ab721c */
  return (uint)(byte)*param_1 << 0x10 | (uint)(byte)param_1[1] << 8 | (uint)(byte)param_1[2];
}

