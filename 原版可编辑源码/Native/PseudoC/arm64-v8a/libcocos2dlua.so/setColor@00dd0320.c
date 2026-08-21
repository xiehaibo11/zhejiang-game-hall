
/* cocos2d::ui::RichElement::setColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::ui::RichElement::setColor(RichElement *this,Color3B *param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)param_1;
  this[0x2e] = *(RichElement *)(param_1 + 2);
                    /* catch() { ... } // from try @ 00dd00ac with catch @ 00dd032c */
  *(undefined2 *)(this + 0x2c) = uVar1;
                    /* catch() { ... } // from try @ 00dcffd4 with catch @ 00dd0330 */
  return;
}

