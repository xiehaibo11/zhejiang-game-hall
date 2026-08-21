
/* cocos2d::Technique::clone() const */

RenderState * __thiscall cocos2d::Technique::clone(Technique *this)

{
  ulong uVar1;
  undefined8 *puVar2;
  long *plVar3;
  Technique *pTVar4;
  undefined8 *puVar5;
  long lVar6;
  RenderState *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_01;
  Ref *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  this_00 = operator_new(0x90,(nothrow_t *)&std::nothrow);
  if (this_00 != (RenderState *)0x0) {
    RenderState::RenderState(this_00);
    this_01 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this_00 + 0x60);
    *(undefined ***)this_00 = &PTR__Technique_01724360;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(this_01,"");
    *(undefined8 *)(this_00 + 0x78) = 0;
    *(undefined8 *)(this_00 + 0x80) = 0;
    *(undefined8 *)(this_00 + 0x88) = 0;
    if (this + 0x60 != (Technique *)this_01) {
      uVar1 = *(ulong *)(this + 0x68);
      pTVar4 = *(Technique **)(this + 0x70);
      if (((byte)this[0x60] & 1) == 0) {
        pTVar4 = this + 0x61;
        uVar1 = (ulong)((byte)this[0x60] >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_01,(char *)pTVar4,uVar1);
    }
    RenderState::cloneInto((RenderState *)this,this_00);
    puVar5 = *(undefined8 **)(this + 0x80);
    for (puVar2 = *(undefined8 **)(this + 0x78); puVar2 != puVar5; puVar2 = puVar2 + 1) {
      local_50 = (Ref *)Pass::clone((Pass *)*puVar2);
      *(RenderState **)(local_50 + 0x38) = this_00;
      plVar3 = *(long **)(this_00 + 0x80);
      if (plVar3 == *(long **)(this_00 + 0x88)) {
                    /* catch() { ... } // from try @ 00fe7c20 with catch @ 00fe7bb0 */
        std::__ndk1::vector<cocos2d::Pass*,std::__ndk1::allocator<cocos2d::Pass*>>::
        __push_back_slow_path<cocos2d::Pass*const&>
                  ((vector<cocos2d::Pass*,std::__ndk1::allocator<cocos2d::Pass*>> *)(this_00 + 0x78)
                   ,(Pass **)&local_50);
      }
      else {
        *plVar3 = (long)local_50;
        *(long **)(this_00 + 0x80) = plVar3 + 1;
      }
      Ref::retain(local_50);
    }
                    /* try { // try from 00fe7bf4 to 010e7bfb has its CatchHandler @ 00fe7c90 */
    Ref::autorelease((Ref *)this_00);
  }
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00fe7c1c to 010e7c1f has its CatchHandler @ 00fe7c80 */
                    /* try { // try from 00fe7c20 to 010e7cab has its CatchHandler @ 00fe7bb0 */
  return this_00;
}

