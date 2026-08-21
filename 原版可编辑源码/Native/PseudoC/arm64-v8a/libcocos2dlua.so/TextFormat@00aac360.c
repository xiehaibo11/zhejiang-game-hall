
/* fairygui::TextFormat::TextFormat(fairygui::TextFormat const&) */

void __thiscall fairygui::TextFormat::TextFormat(TextFormat *this,TextFormat *param_1)

{
                    /* try { // try from 00aac368 to 00bac36b has its CatchHandler @ 00aac3a0 */
                    /* try { // try from 00aac36c to 00bac3b3 has its CatchHandler @ 00aac31c */
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x1c));
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x38));
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x40));
  cocos2d::Size::Size((Size *)(this + 0x44));
                    /* catch() { ... } // from try @ 00aac368 with catch @ 00aac3a0 */
  cocos2d::Color3B::Color3B((Color3B *)(this + 0x50));
  operator=(this,param_1);
                    /* try { // try from 00aac3b4 to 00bac783 has its CatchHandler @ 00aac3b4
                       catch() { ... } // from try @ 00aac3b4 with catch @ 00aac3b4
                       catch() { ... } // from try @ 00aac804 with catch @ 00aac3b4 */
  return;
}

