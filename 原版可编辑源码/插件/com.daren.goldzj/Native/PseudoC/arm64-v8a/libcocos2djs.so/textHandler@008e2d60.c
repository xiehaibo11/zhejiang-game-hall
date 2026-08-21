
/* __JSPlistDelegator::textHandler(void*, char const*, int) */

void __thiscall
__JSPlistDelegator::textHandler(__JSPlistDelegator *this,void *param_1,char *param_2,int param_3)

{
  long lVar1;
  ulong uVar2;
  void *pvVar3;
  bool bVar4;
  size_t __n;
  char *pcVar5;
  void *__dest;
  ulong uVar6;
  void *__src;
  ulong uVar7;
  ulong local_88;
  ulong local_80;
  void *local_78;
  ulong local_70;
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_88 = 0;
  local_80 = 0;
  local_78 = (void *)0x0;
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_88 | 1);
    local_88 = CONCAT71(local_88._1_7_,(char)((int)__n << 1));
    __src = __dest;
    if (__n != 0) goto LAB_008e2dfc;
  }
  else {
    uVar6 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar6);
    local_88 = uVar6 | 1;
    __src = (void *)((ulong)&local_88 | 1);
    local_80 = __n;
    local_78 = __dest;
LAB_008e2dfc:
    memcpy(__dest,param_2,__n);
  }
  pvVar3 = local_78;
  uVar2 = local_88;
  *(undefined1 *)((long)__dest + __n) = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = (char *)0x0;
  bVar4 = (local_88 & 1) != 0;
  uVar6 = local_88 >> 1 & 0x7f;
  if (bVar4) {
    uVar6 = local_80;
  }
  if (bVar4) {
    __src = local_78;
  }
  if ((ulong)(long)param_3 <= uVar6) {
    uVar6 = (long)param_3;
  }
  if (0xffffffffffffffef < uVar6) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (uVar6 < 0x17) {
    pcVar5 = (char *)((ulong)&local_70 | 1);
    local_70 = (ulong)(byte)((int)uVar6 << 1);
    if (uVar6 == 0) {
      *pcVar5 = '\0';
      goto joined_r0x008e2f10;
    }
  }
  else {
    uVar7 = uVar6 + 0x10 & 0xfffffffffffffff0;
    pcVar5 = operator_new(uVar7);
    local_70 = uVar7 | 1;
    local_68 = uVar6;
    local_60 = pcVar5;
  }
  memcpy(pcVar5,__src,uVar6);
  pcVar5[uVar6] = '\0';
joined_r0x008e2f10:
  if ((uVar2 & 1) != 0) {
    operator_delete(pvVar3);
  }
  if (this[0x28] != (__JSPlistDelegator)0x0) {
    uVar6 = local_70 >> 1 & 0x7f;
    pcVar5 = (char *)((ulong)&local_70 | 1);
    if ((local_70 & 1) != 0) {
      uVar6 = local_68;
      pcVar5 = local_60;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),pcVar5,uVar6);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

