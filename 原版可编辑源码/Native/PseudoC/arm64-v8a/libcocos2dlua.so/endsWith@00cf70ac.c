
/* cocosbuilder::CCBReader::endsWith(char const*, char const*) */

bool cocosbuilder::CCBReader::endsWith(char *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  void *__s2;
  size_t __n;
  void *pvVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  bool bVar7;
  uint uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_78 [8];
  ulong local_70;
  void *local_68;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_60,param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_78,param_2);
  bVar6 = local_60[0];
  uVar1 = (ulong)((byte)local_60[0] >> 1);
  if (((byte)local_60[0] & 1) != 0) {
    uVar1 = local_58;
  }
  uVar2 = (ulong)((byte)local_78[0] >> 1);
  if (((byte)local_78[0] & 1) != 0) {
    uVar2 = local_70;
  }
  if (uVar1 < uVar2) {
    bVar7 = false;
    goto joined_r0x00cf71e4;
  }
  bVar7 = ((byte)local_78[0] & 1) != 0;
  uVar3 = (ulong)((byte)local_78[0] >> 1);
  if (bVar7) {
    uVar3 = local_70;
  }
  __s2 = (void *)((ulong)local_78 | 1);
  if (bVar7) {
    __s2 = local_68;
  }
  if ((uVar2 == 0xffffffffffffffff) || (uVar1 < uVar3)) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  __n = uVar2;
  if (uVar3 <= uVar2) {
    __n = uVar3;
  }
  if (__n == 0) {
LAB_00cf71d0:
    uVar8 = (uint)(uVar2 < uVar3);
    if (uVar3 < uVar2) {
      uVar8 = 0xffffffff;
    }
  }
  else {
    pvVar4 = (void *)((ulong)local_60 | 1);
    if (((byte)local_60[0] & 1) != 0) {
      pvVar4 = local_50;
    }
    uVar8 = memcmp((void *)((long)pvVar4 + (uVar1 - uVar3)),__s2,__n);
    if (uVar8 == 0) goto LAB_00cf71d0;
  }
  bVar7 = uVar8 == 0;
joined_r0x00cf71e4:
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
    bVar6 = local_60[0];
  }
  if (((byte)bVar6 & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
}

