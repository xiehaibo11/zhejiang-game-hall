
/* std::__ndk1::enable_if<__is_forward_iterator<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,
   v8::internal::ZoneAllocator<bool> >, false, 0ul> >::value, void>::type std::__ndk1::vector<bool,
   v8::internal::ZoneAllocator<bool>
   >::__construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,
   v8::internal::ZoneAllocator<bool> >, false, 0ul>
   >(std::__ndk1::__bit_iterator<std::__ndk1::vector<bool, v8::internal::ZoneAllocator<bool> >,
   false, 0ul>, std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,
   v8::internal::ZoneAllocator<bool> >, false, 0ul>) */

void __thiscall
std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::
__construct_at_end<std::__ndk1::__bit_iterator<std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>,false,0ul>>
          (vector<bool,v8::internal::ZoneAllocator<bool>> *this,long *param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  __ndk1 a_Stack_68 [16];
  long local_58;
  uint local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  uint local_30;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar4 = *(ulong *)(this + 8);
  uVar1 = (uVar4 - *(uint *)(param_2 + 1)) + (ulong)*(uint *)(param_3 + 1) +
          (*param_3 - *param_2) * 8;
  *(ulong *)(this + 8) = uVar1;
  if ((uVar4 == 0) || (0x3f < (uVar1 - 1 ^ uVar4 - 1))) {
    uVar2 = 0;
    if (0x40 < uVar1) {
      uVar2 = uVar1 - 1 >> 6;
    }
    *(undefined8 *)(*(long *)this + uVar2 * 8) = 0;
  }
  local_30 = *(uint *)(param_2 + 1);
  local_38 = *param_2;
  local_48 = *param_3;
  local_40 = (undefined4)param_3[1];
  local_50 = (uint)uVar4 & 0x3f;
  local_58 = *(long *)this + (uVar4 >> 3 & 0x1ffffffffffffff8);
  if (local_30 == local_50) {
    local_50 = local_30;
    __copy_aligned<std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>,false>
              (a_Stack_68,&local_38,&local_48,&local_58);
  }
  else {
    __copy_unaligned<std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>,false>
              (a_Stack_68,&local_38,&local_48,&local_58);
  }
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

