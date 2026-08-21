
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,
   std::__ndk1::allocator<bool> >, false, 0ul> >::value, void>::type std::__ndk1::vector<bool,
   std::__ndk1::allocator<bool>
   >::__construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,
   std::__ndk1::allocator<bool> >, false, 0ul>
   >(std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >, false,
   0ul>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, std::__ndk1::allocator<bool> >,
   false, 0ul>) */

void __thiscall
std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::
__construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false,0ul>>
          (vector<bool,std::__ndk1::allocator<bool>> *this,long *param_2,long *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  __ndk1 a_Stack_68 [16];
  long local_58;
  uint local_50;
  long local_48;
  uint local_40;
  long local_38;
  uint local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00da2474 to 00ea24cf has its CatchHandler @ 00da2474
                       catch() { ... } // from try @ 00da2474 with catch @ 00da2474
                       catch() { ... } // from try @ 00da25b4 with catch @ 00da2474
                       catch() { ... } // from try @ 00da2608 with catch @ 00da2474
                       catch() { ... } // from try @ 00da2660 with catch @ 00da2474 */
  uVar3 = *(ulong *)(this + 8);
  local_30 = *(uint *)(param_2 + 1);
  local_38 = *param_2;
  local_48 = *param_3;
  local_40 = *(uint *)(param_3 + 1);
  uVar1 = (uVar3 - local_30) + (ulong)local_40 + (local_48 - local_38) * 8;
  *(ulong *)(this + 8) = uVar1;
  if ((uVar3 == 0) || (0x3f < (uVar1 - 1 ^ uVar3 - 1))) {
    puVar4 = *(undefined8 **)this;
    if (uVar1 < 0x41) {
      *puVar4 = 0;
    }
    else {
                    /* try { // try from 00da24d0 to 00ea24db has its CatchHandler @ 00da26a4 */
      *(undefined8 *)((long)puVar4 + (uVar1 - 1 >> 3 & 0x1ffffffffffffff8)) = 0;
    }
  }
  else {
    puVar4 = *(undefined8 **)this;
  }
                    /* try { // try from 00da24e0 to 00ea24ef has its CatchHandler @ 00da2694 */
  local_50 = (uint)uVar3 & 0x3f;
                    /* try { // try from 00da24f0 to 00ea24ff has its CatchHandler @ 00da2660 */
  local_58 = (long)puVar4 + (uVar3 >> 3 & 0x1ffffffffffffff8);
  if (local_30 == local_50) {
    local_50 = local_30;
    __copy_aligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false>
              (a_Stack_68,&local_38,&local_48,&local_58);
  }
  else {
    __copy_unaligned<std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>,false>
              (a_Stack_68,&local_38,&local_48,&local_58);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

