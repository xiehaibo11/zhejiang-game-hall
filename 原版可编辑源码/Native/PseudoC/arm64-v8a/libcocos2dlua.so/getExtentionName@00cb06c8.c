
/* cocos2d::CSLoader::getExtentionName(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::CSLoader::getExtentionName(CSLoader *this,basic_string *param_1)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  ulong *in_x8;
  undefined1 *__dest;
  ulong uVar4;
  ulong uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_70,(basic_string *)this);
  pvVar1 = (void *)((ulong)local_70 | 1);
  uVar4 = (ulong)((byte)local_70[0] >> 1);
  if (((byte)local_70[0] & 1) != 0) {
    pvVar1 = local_60;
    uVar4 = local_68;
  }
  uVar2 = uVar4;
  if (uVar4 == 0) {
LAB_00cb075c:
    uVar5 = 0;
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
  else {
    do {
      uVar5 = uVar2;
      if (uVar5 == 0) goto LAB_00cb075c;
      uVar2 = uVar5 - 1;
    } while (*(char *)((long)pvVar1 + (uVar5 - 1)) != '.');
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
    if (uVar4 < uVar5) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
  }
  uVar2 = uVar4 - uVar5;
  if (uVar4 <= uVar4 - uVar5) {
    uVar2 = uVar4;
  }
  if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar2 < 0x17) {
    __dest = (undefined1 *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)((int)uVar2 << 1);
    if (uVar2 == 0) {
      *__dest = 0;
      goto joined_r0x00cb0800;
    }
  }
  else {
    uVar4 = uVar2 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar4);
    in_x8[1] = uVar2;
    in_x8[2] = (ulong)__dest;
    *in_x8 = uVar4 | 1;
  }
  memcpy(__dest,(void *)((long)pvVar1 + uVar5),uVar2);
  __dest[uVar2] = 0;
joined_r0x00cb0800:
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

