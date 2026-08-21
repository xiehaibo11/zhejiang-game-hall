
/* fairygui::GLabel::getTitleColor() const */

ulong __thiscall fairygui::GLabel::getTitleColor(GLabel *this)

{
  long *plVar1;
  long lVar2;
  GButton *this_00;
  long lVar3;
  uint3 *puVar4;
  
                    /* try { // try from 00a76a34 to 00b76a4b has its CatchHandler @ 00a76c00 */
  lVar3 = *(long *)(this + 0x280);
  if (lVar3 == 0) {
LAB_00a76ad4:
    puVar4 = (uint3 *)&cocos2d::Color3B::BLACK;
  }
  else {
                    /* try { // try from 00a76a50 to 00b76a67 has its CatchHandler @ 00a76bfc */
    puVar4 = (uint3 *)&cocos2d::Color3B::BLACK;
    do {
      plVar1 = (long *)__dynamic_cast(lVar3,&GObject::typeinfo,&GTextField::typeinfo,0);
      if (plVar1 != (long *)0x0) {
LAB_00a76abc:
        if (plVar1 == (long *)0x0) goto LAB_00a76ad4;
                    /* try { // try from 00a76ac4 to 00b76b93 has its CatchHandler @ 00a769b4 */
        lVar3 = (**(code **)(*plVar1 + 0xd0))();
        puVar4 = (uint3 *)(lVar3 + 0x1c);
        break;
      }
                    /* try { // try from 00a76a74 to 00b76a8b has its CatchHandler @ 00a76bc4 */
      lVar2 = __dynamic_cast(lVar3,&GObject::typeinfo,&typeinfo,0);
      if (lVar2 == 0) {
        this_00 = (GButton *)__dynamic_cast(lVar3,&GObject::typeinfo,&GButton::typeinfo,0);
        if (this_00 != (GButton *)0x0) {
          plVar1 = (long *)GButton::getTextField(this_00);
          goto LAB_00a76abc;
        }
        goto LAB_00a76ad4;
      }
      lVar3 = *(long *)(lVar2 + 0x280);
    } while (lVar3 != 0);
  }
  return (ulong)*puVar4;
}

