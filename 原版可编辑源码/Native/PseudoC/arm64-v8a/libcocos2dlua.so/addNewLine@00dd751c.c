
/* cocos2d::ui::RichText::addNewLine() */

void __thiscall cocos2d::ui::RichText::addNewLine(RichText *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  void *local_70;
  undefined8 *puStack_68;
  undefined8 *local_60;
  void *local_58;
  RichText *pRStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar5 = *(undefined8 **)(this + 0x518);
  *(undefined4 *)(this + 0x540) = *(undefined4 *)(this + 0x39c);
  if (puVar5 < *(undefined8 **)(this + 0x520)) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    *(undefined8 **)(this + 0x518) = puVar5 + 3;
    goto LAB_00dd7624;
  }
  lVar6 = (long)puVar5 - *(long *)(this + 0x510) >> 3;
  uVar8 = 0xaaaaaaaaaaaaaaa;
  uVar1 = lVar6 * -0x5555555555555555 + 1;
  if (0xaaaaaaaaaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar3 = (long)*(undefined8 **)(this + 0x520) - *(long *)(this + 0x510) >> 3;
  pRStack_50 = this + 0x520;
  if ((ulong)(lVar3 * -0x5555555555555555) < 0x555555555555555) {
    uVar7 = lVar3 * 0x5555555555555556;
    uVar8 = uVar1;
    if (uVar1 <= uVar7) {
      uVar8 = uVar7;
    }
    if (uVar8 != 0) goto LAB_00dd75e0;
                    /* try { // try from 00dd75d4 to 00ed76db has its CatchHandler @ 00dd75d4
                       catch() { ... } // from try @ 00dd75d4 with catch @ 00dd75d4
                       catch() { ... } // from try @ 00dd7b18 with catch @ 00dd75d4 */
    local_70 = (void *)0x0;
  }
  else {
LAB_00dd75e0:
    local_58 = (void *)0x0;
    local_70 = operator_new(uVar8 * 0x18);
  }
  puStack_68 = (undefined8 *)((long)local_70 + lVar6 * 8);
  local_58 = (void *)((long)local_70 + uVar8 * 0x18);
  local_60 = puStack_68 + 3;
  *puStack_68 = 0;
  puStack_68[1] = 0;
  puStack_68[2] = 0;
  std::__ndk1::
  vector<cocos2d::Vector<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Node*>>>::
  __swap_out_circular_buffer
            ((vector<cocos2d::Vector<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Node*>>>
              *)(this + 0x510),(__split_buffer *)&local_70);
  std::__ndk1::
  __split_buffer<cocos2d::Vector<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Node*>>&>
  ::~__split_buffer((__split_buffer<cocos2d::Vector<cocos2d::Node*>,std::__ndk1::allocator<cocos2d::Vector<cocos2d::Node*>>&>
                     *)&local_70);
LAB_00dd7624:
  puVar4 = *(undefined4 **)(this + 0x530);
  if (puVar4 < *(undefined4 **)(this + 0x538)) {
    *puVar4 = 0;
    *(undefined4 **)(this + 0x530) = puVar4 + 1;
  }
  else {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__emplace_back_slow_path<>
              ((vector<float,std::__ndk1::allocator<float>> *)(this + 0x528));
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

