
/* cocos2d::RenderState::cloneInto(cocos2d::RenderState*) const */

void __thiscall cocos2d::RenderState::cloneInto(RenderState *this,RenderState *param_1)

{
  ulong uVar1;
  RenderState *pRVar2;
  Ref *this_00;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(this + 0x30);
  if (lVar3 != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    if (lVar4 == 0) {
                    /* catch() { ... } // from try @ 00fe278c with catch @ 00fe2758 */
      __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                          "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCRenderState.cpp"
                          ,"cloneInto",0x1b0);
    }
    *(undefined1 *)(lVar4 + 0x21) = *(undefined1 *)(lVar3 + 0x21);
    *(undefined1 *)(lVar4 + 0x22) = *(undefined1 *)(lVar3 + 0x22);
    *(undefined1 *)(lVar4 + 0x23) = *(undefined1 *)(lVar3 + 0x23);
                    /* try { // try from 00fe2784 to 010e278b has its CatchHandler @ 00fe27f4 */
    *(undefined4 *)(lVar4 + 0x24) = *(undefined4 *)(lVar3 + 0x24);
                    /* try { // try from 00fe278c to 010e280f has its CatchHandler @ 00fe2758 */
    *(undefined1 *)(lVar4 + 0x28) = *(undefined1 *)(lVar3 + 0x28);
    uVar5 = *(undefined8 *)(lVar3 + 0x2c);
    *(undefined8 *)(lVar4 + 0x34) = *(undefined8 *)(lVar3 + 0x34);
    *(undefined8 *)(lVar4 + 0x2c) = uVar5;
    *(undefined1 *)(lVar4 + 0x3c) = *(undefined1 *)(lVar3 + 0x3c);
    uVar5 = *(undefined8 *)(lVar3 + 0x40);
    *(undefined8 *)(lVar4 + 0x48) = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)(lVar4 + 0x40) = uVar5;
    *(undefined4 *)(lVar4 + 0x50) = *(undefined4 *)(lVar3 + 0x50);
    *(undefined4 *)(lVar4 + 0x54) = *(undefined4 *)(lVar3 + 0x54);
    *(undefined4 *)(lVar4 + 0x58) = *(undefined4 *)(lVar3 + 0x58);
    *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(lVar3 + 0x60);
  }
  if (param_1 != this) {
    uVar1 = *(ulong *)(this + 0x48);
    pRVar2 = *(RenderState **)(this + 0x50);
    if (((byte)this[0x40] & 1) == 0) {
      pRVar2 = this + 0x41;
      uVar1 = (ulong)((byte)this[0x40] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_1 + 0x40),(char *)pRVar2,uVar1);
  }
                    /* catch() { ... } // from try @ 00fe2784 with catch @ 00fe27f4 */
  this_00 = *(Ref **)(this + 0x58);
  *(Ref **)(param_1 + 0x58) = this_00;
  if (this_00 != (Ref *)0x0) {
    Ref::retain(this_00);
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(this + 0x38);
  return;
}

