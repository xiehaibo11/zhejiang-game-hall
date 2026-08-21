
/* cocos2d::MenuItemLabel::unselected() */

void __thiscall cocos2d::MenuItemLabel::unselected(MenuItemLabel *this)

{
  long lVar1;
  
  if (this[0x2f9] != (MenuItemLabel)0x0) {
    this[0x2f8] = (MenuItemLabel)0x0;
    Node::stopActionByTag((Node *)this,-0x3f3faffe);
    lVar1 = ScaleTo::create(0.1,*(float *)(this + 0x334));
    *(undefined4 *)(lVar1 + 0x40) = 0xc0c05002;
                    /* WARNING: Could not recover jumptable at 0x00f1dbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x3a8))(this,lVar1);
    return;
  }
  return;
}

