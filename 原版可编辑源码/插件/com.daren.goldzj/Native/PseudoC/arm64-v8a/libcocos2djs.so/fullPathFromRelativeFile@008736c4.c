
/* cocos2d::FileUtils::fullPathFromRelativeFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void cocos2d::FileUtils::fullPathFromRelativeFile(basic_string *param_1,basic_string *param_2)

{
  ulong uVar1;
  byte *__src;
  long lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  byte *in_x2;
  undefined8 *in_x8;
  ulong uVar5;
  void *__dest;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte local_88 [8];
  ulong local_80;
  char *local_78;
  ulong local_70;
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar1 = *(ulong *)(in_x2 + 8);
  __src = *(byte **)(in_x2 + 0x10);
  if ((*in_x2 & 1) == 0) {
    __src = in_x2 + 1;
    uVar1 = (ulong)(*in_x2 >> 1);
  }
  uVar6 = uVar1;
  if (uVar1 == 0) {
    uVar5 = 0;
  }
  else {
    do {
      uVar5 = uVar6;
      if (uVar5 == 0) break;
      uVar6 = uVar5 - 1;
    } while (__src[uVar5 - 1] != 0x2f);
  }
  if (uVar5 <= uVar1) {
    uVar1 = uVar5;
  }
  local_70 = 0;
  local_68 = 0;
  local_60 = (void *)0x0;
  if (0xffffffffffffffef < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar1 < 0x17) {
    __dest = (void *)((ulong)&local_70 | 1);
    local_70 = (ulong)(byte)((int)uVar1 << 1);
    if (uVar1 == 0) goto LAB_008737b0;
  }
  else {
    uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    local_70 = uVar6 | 1;
    local_68 = uVar1;
    local_60 = __dest;
  }
  memcpy(__dest,__src,uVar1);
LAB_008737b0:
  *(undefined1 *)((long)__dest + uVar1) = 0;
  (**(code **)(*(long *)param_1 + 0x160))(local_88,param_1,param_2);
  uVar1 = (ulong)(local_88[0] >> 1);
  pcVar3 = (char *)((ulong)local_88 | 1);
  if ((local_88[0] & 1) != 0) {
    uVar1 = local_80;
    pcVar3 = local_78;
  }
  puVar4 = (undefined8 *)
           std::__ndk1::
           basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                     ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_70,pcVar3,uVar1);
  uVar8 = puVar4[1];
  uVar7 = *puVar4;
  in_x8[2] = puVar4[2];
  in_x8[1] = uVar8;
  *in_x8 = uVar7;
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

