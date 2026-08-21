
/* cocos2d::TextFieldTTF::setTextColor(cocos2d::Color4B const&) */

void __thiscall cocos2d::TextFieldTTF::setTextColor(TextFieldTTF *this,Color4B *param_1)

{
  long lVar1;
  Color3B aCStack_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 00f56608 with catch @ 00f567c4 */
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00f565d0 with catch @ 00f567c8
                       catch() { ... } // from try @ 00f56644 with catch @ 00f567c8 */
  *(undefined4 *)(this + 0x6ec) = *(undefined4 *)param_1;
  if (((byte)this[0x6b8] & 1) == 0) {
    if ((byte)this[0x6b8] >> 1 == 0) goto LAB_00f56820;
  }
  else if (*(long *)(this + 0x6c0) == 0) goto LAB_00f56820;
  if (*(int *)(this + 0x308) == 1) {
    Color3B::Color3B(aCStack_30,param_1);
    Node::setColor((Node *)this,aCStack_30);
  }
  else {
    Label::setTextColor((Label *)this,param_1);
  }
LAB_00f56820:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00f56838 to 01056887 has its CatchHandler @ 00f56838
                       catch() { ... } // from try @ 00f56838 with catch @ 00f56838
                       catch() { ... } // from try @ 00f5688c with catch @ 00f56838 */
  return;
}

