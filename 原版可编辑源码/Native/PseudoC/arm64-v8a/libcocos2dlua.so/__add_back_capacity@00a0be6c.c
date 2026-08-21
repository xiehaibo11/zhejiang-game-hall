
/* std::__ndk1::deque<universe::network::ZhouLuJun*,
   std::__ndk1::allocator<universe::network::ZhouLuJun*> >::__add_back_capacity() */

void __thiscall
std::__ndk1::
deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>::
__add_back_capacity(deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>
                    *this)

{
  long lVar1;
  ZhouLuJun **ppZVar2;
  ulong uVar3;
  ZhouLuJun ***pppZVar4;
  long lVar5;
  ZhouLuJun ***pppZVar6;
  ulong uVar7;
  ZhouLuJun ***pppZVar8;
  undefined8 uVar9;
  ZhouLuJun **local_68;
  ZhouLuJun **local_60;
  ZhouLuJun **ppZStack_58;
  ZhouLuJun **local_50;
  ZhouLuJun **ppZStack_48;
  deque<universe::network::ZhouLuJun*,std::__ndk1::allocator<universe::network::ZhouLuJun*>>
  *pdStack_40;
  long local_38;
  
                    /* try { // try from 00a0be6c to 00b0be8f has its CatchHandler @ 00a0bf84 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a0be90 to 00b0bec7 has its CatchHandler @ 00a0bab0 */
  if (*(ulong *)(this + 0x20) < 0x200) {
                    /* try { // try from 00a0bee0 to 00b0bef3 has its CatchHandler @ 00a0bf9c */
    uVar7 = *(long *)(this + 0x10) - *(long *)(this + 8) >> 3;
    lVar5 = *(long *)(this + 0x18) - *(long *)this;
                    /* try { // try from 00a0bef8 to 00b0bf0b has its CatchHandler @ 00a0bfa0 */
    if ((ulong)(lVar5 >> 3) <= uVar7) {
      uVar3 = lVar5 >> 2;
                    /* try { // try from 00a0bf3c to 00b0bfc3 has its CatchHandler @ 00a0bab0 */
      if (lVar5 == 0) {
        uVar3 = 1;
      }
      pdStack_40 = this + 0x18;
      ppZStack_48 = (ZhouLuJun **)0x0;
      if (uVar3 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_007c2210("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar3 * 8);
      ppZStack_58 = local_60 + uVar7;
      ppZStack_48 = local_60 + uVar3;
      local_50 = ppZStack_58;
      local_68 = operator_new(0x1000);
                    /* catch() { ... } // from try @ 00a0be6c with catch @ 00a0bf84 */
      __split_buffer<universe::network::ZhouLuJun**,std::__ndk1::allocator<universe::network::ZhouLuJun**>&>
      ::push_back((__split_buffer<universe::network::ZhouLuJun**,std::__ndk1::allocator<universe::network::ZhouLuJun**>&>
                   *)&local_60,&local_68);
                    /* catch() { ... } // from try @ 00a0bde4 with catch @ 00a0bf88 */
      pppZVar6 = *(ZhouLuJun ****)(this + 0x10);
                    /* catch() { ... } // from try @ 00a0bd0c with catch @ 00a0bf8c */
                    /* catch() { ... } // from try @ 00a0bc60 with catch @ 00a0bf90 */
                    /* catch() { ... } // from try @ 00a0bb5c with catch @ 00a0bf94 */
      while (pppZVar4 = *(ZhouLuJun ****)(this + 8), pppZVar6 != pppZVar4) {
                    /* catch() { ... } // from try @ 00a0bb20 with catch @ 00a0bf98
                       catch() { ... } // from try @ 00a0bec8 with catch @ 00a0bf98 */
        pppZVar6 = pppZVar6 + -1;
                    /* catch() { ... } // from try @ 00a0be0c with catch @ 00a0bf9c
                       catch() { ... } // from try @ 00a0bee0 with catch @ 00a0bf9c */
                    /* catch() { ... } // from try @ 00a0bc84 with catch @ 00a0bfa0
                       catch() { ... } // from try @ 00a0bef8 with catch @ 00a0bfa0 */
                    /* catch() { ... } // from try @ 00a0bd38 with catch @ 00a0bfa4
                       catch() { ... } // from try @ 00a0bf10 with catch @ 00a0bfa4 */
        __split_buffer<universe::network::ZhouLuJun**,std::__ndk1::allocator<universe::network::ZhouLuJun**>&>
        ::push_front((__split_buffer<universe::network::ZhouLuJun**,std::__ndk1::allocator<universe::network::ZhouLuJun**>&>
                      *)&local_60,pppZVar6);
                    /* catch() { ... } // from try @ 00a0bb8c with catch @ 00a0bfa8
                       catch() { ... } // from try @ 00a0bf28 with catch @ 00a0bfa8 */
      }
      ppZVar2 = *(ZhouLuJun ***)this;
      uVar9 = *(undefined8 *)(this + 0x18);
      pppZVar8 = *(ZhouLuJun ****)(this + 0x10);
      *(ZhouLuJun ***)(this + 8) = ppZStack_58;
      *(ZhouLuJun ***)this = local_60;
      *(ZhouLuJun ***)(this + 0x18) = ppZStack_48;
      *(ZhouLuJun ***)(this + 0x10) = local_50;
      local_50 = (ZhouLuJun **)pppZVar8;
      if (pppZVar8 != pppZVar6) {
        local_50 = (ZhouLuJun **)
                   (pppZVar8 +
                   ((ulong)((long)pppZVar8 + (-8 - (long)pppZVar4)) >> 3 ^ 0xffffffffffffffff));
      }
      local_60 = ppZVar2;
      ppZStack_58 = (ZhouLuJun **)pppZVar4;
      ppZStack_48 = (ZhouLuJun **)uVar9;
      if (ppZVar2 != (ZhouLuJun **)0x0) {
        operator_delete(ppZVar2);
      }
      goto LAB_00a0bebc;
    }
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      local_60 = operator_new(0x1000);
      __split_buffer<universe::network::ZhouLuJun**,std::__ndk1::allocator<universe::network::ZhouLuJun**>>
      ::push_back((__split_buffer<universe::network::ZhouLuJun**,std::__ndk1::allocator<universe::network::ZhouLuJun**>>
                   *)this,&local_60);
      goto LAB_00a0bebc;
    }
    local_60 = operator_new(0x1000);
                    /* try { // try from 00a0bf10 to 00b0bf23 has its CatchHandler @ 00a0bfa4 */
    __split_buffer<universe::network::ZhouLuJun**,std::__ndk1::allocator<universe::network::ZhouLuJun**>>
    ::push_front((__split_buffer<universe::network::ZhouLuJun**,std::__ndk1::allocator<universe::network::ZhouLuJun**>>
                  *)this,&local_60);
    local_60 = (ZhouLuJun **)**(undefined8 **)(this + 8);
                    /* try { // try from 00a0bf28 to 00b0bf3b has its CatchHandler @ 00a0bfa8 */
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  else {
    *(ulong *)(this + 0x20) = *(ulong *)(this + 0x20) - 0x200;
    local_60 = (ZhouLuJun **)**(undefined8 **)(this + 8);
    *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  }
  FUN_00a0c080(this,&local_60);
LAB_00a0bebc:
                    /* try { // try from 00a0bec8 to 00b0bedb has its CatchHandler @ 00a0bf98 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

