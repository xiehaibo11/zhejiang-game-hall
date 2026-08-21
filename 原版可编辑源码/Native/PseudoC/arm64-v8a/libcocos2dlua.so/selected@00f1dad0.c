
/* cocos2d::MenuItemLabel::selected() */

void __thiscall cocos2d::MenuItemLabel::selected(MenuItemLabel *this)

{
  long lVar1;
  float fVar2;
  
                    /* try { // try from 00f1dad8 to 0101daeb has its CatchHandler @ 00f1db1c */
  if (this[0x2f9] != (MenuItemLabel)0x0) {
                    /* try { // try from 00f1daec to 0101db3f has its CatchHandler @ 00f1da74 */
    this[0x2f8] = (MenuItemLabel)0x1;
    lVar1 = Node::getActionByTag((Node *)this,-0x3f3faffe);
    if (lVar1 == 0) {
                    /* catch() { ... } // from try @ 00f1dacc with catch @ 00f1db2c */
      fVar2 = (float)(**(code **)(*(long *)this + 0x88))(this);
      *(float *)(this + 0x334) = fVar2;
    }
    else {
      Node::stopAction((Action *)this);
      fVar2 = *(float *)(this + 0x334);
    }
    lVar1 = ScaleTo::create(0.1,fVar2 * 1.2);
    *(undefined4 *)(lVar1 + 0x40) = 0xc0c05002;
                    /* WARNING: Could not recover jumptable at 0x00f1db78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x3a8))(this,lVar1);
    return;
  }
                    /* catch() { ... } // from try @ 00f1dad8 with catch @ 00f1db1c */
  return;
}

