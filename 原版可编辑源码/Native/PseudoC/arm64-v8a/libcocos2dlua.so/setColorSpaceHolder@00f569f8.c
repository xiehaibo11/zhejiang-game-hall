
/* cocos2d::TextFieldTTF::setColorSpaceHolder(cocos2d::Color4B const&) */

void __thiscall cocos2d::TextFieldTTF::setColorSpaceHolder(TextFieldTTF *this,Color4B *param_1)

{
  long lVar1;
  Color3B aCStack_30 [8];
  long local_28;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f56970 with catch @ 00f569f8
                        */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(this + 0x6e8) = *(undefined4 *)param_1;
  if (((byte)this[0x6b8] & 1) == 0) {
    if ((byte)this[0x6b8] >> 1 != 0) goto LAB_00f56a6c;
  }
  else if (*(long *)(this + 0x6c0) != 0) goto LAB_00f56a6c;
  if (*(int *)(this + 0x308) == 1) {
    Color3B::Color3B(aCStack_30,(Color4B *)(this + 0x6e8));
    Node::setColor((Node *)this,aCStack_30);
  }
  else {
    Label::setTextColor((Label *)this,(Color4B *)(this + 0x6e8));
  }
LAB_00f56a6c:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

