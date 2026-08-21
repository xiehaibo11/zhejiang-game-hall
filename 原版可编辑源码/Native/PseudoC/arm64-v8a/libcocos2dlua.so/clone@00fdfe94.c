
/* cocos2d::Material::clone() const */

RenderState * __thiscall cocos2d::Material::clone(Material *this)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  RenderState *this_00;
  undefined8 uVar5;
  Ref *local_60 [2];
  void *local_50;
  long local_48;
  
                    /* catch() { ... } // from try @ 00fdfe2c with catch @ 00fdfea0 */
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
                    /* catch() { ... } // from try @ 00fdfef4 with catch @ 00fdfebc */
  this_00 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this_00 != (RenderState *)0x0) {
    RenderState::RenderState(this_00);
                    /* try { // try from 00fdfeec to 010dfef3 has its CatchHandler @ 00fdff68 */
    *(undefined ***)this_00 = &PTR__Material_01724038;
                    /* try { // try from 00fdfef4 to 010dff83 has its CatchHandler @ 00fdfebc */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               (this_00 + 0x60),"");
    *(undefined8 *)(this_00 + 0x80) = 0;
    *(undefined8 *)(this_00 + 0x78) = 0;
    *(undefined8 *)(this_00 + 0x99) = 0;
    *(undefined8 *)(this_00 + 0x91) = 0;
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined8 *)(this_00 + 0x88) = 0;
    *(undefined2 *)(this_00 + 0xa1) = 0x101;
    this_00[0xa3] = (RenderState)0x1;
    RenderState::cloneInto((RenderState *)this,this_00);
    puVar3 = *(undefined8 **)(this + 0x80);
    for (puVar1 = *(undefined8 **)(this + 0x78); puVar1 != puVar3; puVar1 = puVar1 + 1) {
      local_60[0] = (Ref *)Technique::clone((Technique *)*puVar1);
      *(RenderState **)(local_60[0] + 0x38) = this_00;
                    /* catch() { ... } // from try @ 00fdfeec with catch @ 00fdff68 */
      plVar2 = *(long **)(this_00 + 0x80);
      if (plVar2 == *(long **)(this_00 + 0x88)) {
        std::__ndk1::vector<cocos2d::Technique*,std::__ndk1::allocator<cocos2d::Technique*>>::
        __push_back_slow_path<cocos2d::Technique*const&>
                  ((vector<cocos2d::Technique*,std::__ndk1::allocator<cocos2d::Technique*>> *)
                   (this_00 + 0x78),(Technique **)local_60);
      }
      else {
        *plVar2 = (long)local_60[0];
        *(long **)(this_00 + 0x80) = plVar2 + 1;
      }
      Ref::retain(local_60[0]);
    }
    Technique::getName();
    uVar5 = getTechniqueByName((Material *)this_00,(basic_string *)local_60);
    *(undefined8 *)(this_00 + 0x90) = uVar5;
    Ref::autorelease((Ref *)this_00);
    if (((ulong)local_60[0] & 1) != 0) {
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

