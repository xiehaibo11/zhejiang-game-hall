
/* cocos2d::TextFieldTTF::deleteBackward() */

void __thiscall cocos2d::TextFieldTTF::deleteBackward(TextFieldTTF *this)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  TextFieldTTF TVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  TextFieldTTF *pTVar6;
  ulong uVar7;
  TextFieldTTF *__src;
  void *__dest;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  byte local_88 [16];
  void *local_78;
  ulong local_70;
  ulong local_68;
  void *local_60;
  long local_58;
  
                    /* try { // try from 00f56244 to 0105624b has its CatchHandler @ 00f562b0 */
                    /* try { // try from 00f5624c to 010562cb has its CatchHandler @ 00f56214 */
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  TVar1 = this[0x6b8];
  if (((byte)TVar1 & 1) == 0) {
    uVar9 = (ulong)((byte)TVar1 >> 1);
  }
  else {
    uVar9 = *(ulong *)(this + 0x6c0);
  }
  if (uVar9 == 0) goto LAB_00f5640c;
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x6b8);
  lVar10 = 0;
  __src = this + 0x6b9;
  lVar5 = 0x100000000;
  while( true ) {
                    /* catch() { ... } // from try @ 00f56244 with catch @ 00f562b0 */
    uVar7 = (ulong)((byte)TVar1 >> 1);
    if (((byte)TVar1 & 1) != 0) {
      uVar7 = *(ulong *)(this + 0x6c0);
    }
    if (uVar7 <= (uVar9 + lVar10) - 1) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    pTVar6 = __src;
    if (((byte)TVar1 & 1) != 0) {
      pTVar6 = *(TextFieldTTF **)(this + 0x6c8);
    }
                    /* try { // try from 00f562cc to 01056483 has its CatchHandler @ 00f562cc
                       catch() { ... } // from try @ 00f562cc with catch @ 00f562cc
                       catch() { ... } // from try @ 00f56668 with catch @ 00f562cc */
    if (((byte)pTVar6[lVar10 + uVar9 + -1] & 0xc0) != 0x80) break;
    lVar10 = lVar10 + -1;
    lVar5 = lVar5 + 0x100000000;
  }
  plVar3 = *(long **)(this + 0x6a8);
  if (plVar3 != (long *)0x0) {
    pTVar6 = __src;
    if (((byte)TVar1 & 1) != 0) {
      pTVar6 = *(TextFieldTTF **)(this + 0x6c8);
    }
    uVar7 = (**(code **)(*plVar3 + 0x28))(plVar3,this,pTVar6 + lVar10 + uVar9 + -1,lVar5 >> 0x20);
    if ((uVar7 & 1) != 0) goto LAB_00f5640c;
  }
  if (uVar9 <= 1U - lVar10) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,"",0);
    *(undefined8 *)(this + 0x6b0) = 0;
    if (this[0x710] != (TextFieldTTF)0x0) {
      *(undefined8 *)(this + 0x718) = 0;
      *(undefined4 *)(this + 0x724) = 0x3f800000;
    }
    (**(code **)(*(long *)this + 0x588))(this,this_00);
    goto LAB_00f5640c;
  }
  if (this[0x710] != (TextFieldTTF)0x0) {
    if (*(long *)(this + 0x718) != 0) {
      uVar9 = *(long *)(this + 0x718) - 1;
      if (uVar9 <= *(ulong *)(this + 0x6b0)) {
        *(ulong *)(this + 0x718) = uVar9;
        *(undefined4 *)(this + 0x724) = 0x3f800000;
      }
      StringUtils::StringUTF8::StringUTF8((StringUTF8 *)&local_70);
      StringUtils::StringUTF8::replace((StringUTF8 *)&local_70,(basic_string *)this_00);
      StringUtils::StringUTF8::deleteChar((StringUTF8 *)&local_70,*(ulong *)(this + 0x718));
      uVar4 = StringUtils::StringUTF8::length((StringUTF8 *)&local_70);
      *(undefined8 *)(this + 0x6b0) = uVar4;
      StringUtils::StringUTF8::getAsCharSequence();
      (**(code **)(*(long *)this + 0x588))(this,local_88);
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      StringUtils::StringUTF8::~StringUTF8((StringUTF8 *)&local_70);
    }
    goto LAB_00f5640c;
  }
  uVar7 = (uVar9 + lVar10) - 1;
  if (((byte)*this_00 & 1) != 0) {
    __src = *(TextFieldTTF **)(this + 0x6c8);
  }
  local_68 = 0;
  local_60 = (void *)0x0;
  local_70 = 0;
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar7 < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = (ulong)(byte)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_00f564a0;
  }
  else {
                    /* try { // try from 00f56484 to 0105648b has its CatchHandler @ 00f56778 */
    uVar8 = uVar9 + lVar10 + 0xf & 0xfffffffffffffff0;
    __dest = operator_new(uVar8);
    local_70 = uVar8 | 1;
    local_68 = uVar7;
    local_60 = __dest;
LAB_00f564a0:
    memcpy(__dest,__src,uVar7);
  }
                    /* try { // try from 00f564b8 to 010564bf has its CatchHandler @ 00f5673c */
  *(undefined1 *)((long)__dest + lVar10 + uVar9 + -1) = 0;
                    /* try { // try from 00f564c0 to 010564c7 has its CatchHandler @ 00f56734 */
                    /* try { // try from 00f564c8 to 010564cf has its CatchHandler @ 00f5672c */
  (**(code **)(*(long *)this + 0x588))(this,&local_70);
                    /* try { // try from 00f564d0 to 010564d7 has its CatchHandler @ 00f56724 */
  if ((local_70 & 1) != 0) {
                    /* try { // try from 00f564d8 to 010564eb has its CatchHandler @ 00f56720 */
    operator_delete(local_60);
  }
LAB_00f5640c:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

