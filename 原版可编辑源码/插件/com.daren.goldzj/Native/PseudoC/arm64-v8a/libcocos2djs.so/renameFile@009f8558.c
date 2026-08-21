
/* universe::CustomFileManager::renameFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) const */

undefined4 __thiscall
universe::CustomFileManager::renameFile
          (CustomFileManager *this,basic_string *param_1,basic_string *param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  char *pcVar5;
  uint *puVar6;
  basic_string *pbVar7;
  undefined4 uVar8;
  void *pvVar9;
  char *pcVar10;
  basic_string *__n;
  ulong uVar11;
  ulong local_b0;
  ulong uStack_a8;
  char *local_a0;
  ulong local_90;
  basic_string *pbStack_88;
  char *local_80;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pbVar7 = param_2;
  dirname((CustomFileManager *)param_2,param_1);
  uVar4 = (**(code **)(*(long *)this + 0x30))(this,local_70);
  if ((uVar4 & 1) == 0) {
    uVar8 = 0;
                    /* catch() { ... } // from try @ 009f8630 with catch @ 009f85f0 */
    goto joined_r0x009f8818;
  }
  uVar4 = (**(code **)(*(long *)this + 0x40))(this,param_1);
  if ((uVar4 & 1) == 0) {
    std::__ndk1::operator+((__ndk1 *)(this + 8),param_1,pbVar7);
  }
  else {
    pbStack_88 = (basic_string *)0x0;
    local_80 = (char *)0x0;
    local_90 = 0;
    if (((byte)*param_1 & 1) == 0) {
      local_80 = *(char **)(param_1 + 0x10);
      pbStack_88 = *(basic_string **)(param_1 + 8);
      local_90 = *(ulong *)param_1;
    }
    else {
      __n = *(basic_string **)(param_1 + 8);
      if ((basic_string *)0xffffffffffffffef < __n) {
                    /* catch() { ... } // from try @ 009f8784 with catch @ 009f8834 */
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      pvVar9 = *(void **)(param_1 + 0x10);
                    /* try { // try from 009f8620 to 00af862f has its CatchHandler @ 009f864c */
      if (__n < (basic_string *)0x17) {
                    /* try { // try from 009f8630 to 00af8693 has its CatchHandler @ 009f85f0 */
        pcVar10 = (char *)((ulong)&local_90 | 1);
        local_90 = (ulong)(byte)((int)__n << 1);
        if (__n != (basic_string *)0x0) goto LAB_009f8660;
      }
      else {
                    /* catch() { ... } // from try @ 009f8620 with catch @ 009f864c */
        pcVar10 = operator_new((ulong)(__n + 0x10) & 0xfffffffffffffff0);
        local_90 = (ulong)(__n + 0x10) & 0xfffffffffffffff0 | 1;
        pbStack_88 = __n;
        local_80 = pcVar10;
LAB_009f8660:
        pbVar7 = __n;
        memcpy(pcVar10,pvVar9,(size_t)__n);
      }
      pcVar10[(long)__n] = '\0';
    }
  }
  uVar4 = (**(code **)(*(long *)this + 0x40))(this,param_2);
  if ((uVar4 & 1) == 0) {
    std::__ndk1::operator+((__ndk1 *)(this + 8),param_2,pbVar7);
  }
  else {
    uStack_a8 = 0;
    local_a0 = (char *)0x0;
    local_b0 = 0;
    if (((byte)*param_2 & 1) == 0) {
      local_a0 = *(char **)(param_2 + 0x10);
      uStack_a8 = *(ulong *)(param_2 + 8);
      local_b0 = *(ulong *)param_2;
    }
    else {
      uVar4 = *(ulong *)(param_2 + 8);
      if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      pvVar9 = *(void **)(param_2 + 0x10);
      if (uVar4 < 0x17) {
        pcVar10 = (char *)((ulong)&local_b0 | 1);
        local_b0 = (ulong)(byte)((int)uVar4 << 1);
        if (uVar4 != 0) goto LAB_009f8714;
      }
      else {
        uVar11 = uVar4 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009f8700 to 00af8783 has its CatchHandler @ 009f8700
                       catch() { ... } // from try @ 009f8700 with catch @ 009f8700
                       catch() { ... } // from try @ 009f87ac with catch @ 009f8700 */
        pcVar10 = operator_new(uVar11);
        local_b0 = uVar11 | 1;
        uStack_a8 = uVar4;
        local_a0 = pcVar10;
LAB_009f8714:
        memcpy(pcVar10,pvVar9,uVar4);
      }
      pcVar10[uVar4] = '\0';
    }
  }
  pcVar10 = (char *)((ulong)&local_90 | 1);
  if ((local_90 & 1) != 0) {
    pcVar10 = local_80;
  }
  pcVar5 = (char *)((ulong)&local_b0 | 1);
  if ((local_b0 & 1) != 0) {
    pcVar5 = local_a0;
  }
  uVar3 = rename(pcVar10,pcVar5);
  if (uVar3 == 0) {
    uVar8 = 1;
  }
  else {
    pcVar5 = (char *)Translated::getInstance();
    pcVar10 = (char *)((ulong)&local_90 | 1);
    if ((local_90 & 1) != 0) {
      pcVar10 = local_80;
    }
    pcVar1 = (char *)((ulong)&local_b0 | 1);
                    /* try { // try from 009f8784 to 00af878b has its CatchHandler @ 009f8834 */
    if ((local_b0 & 1) != 0) {
      pcVar1 = local_a0;
    }
    puVar6 = (uint *)__errno();
                    /* try { // try from 009f87a4 to 00af87ab has its CatchHandler @ 009f880c */
                    /* try { // try from 009f87ac to 00af8aa3 has its CatchHandler @ 009f8700 */
    Translated::log(pcVar5,"CustomFileManager: rename file %s to %s error. code = %d, errno=%d",
                    pcVar10,pcVar1,(ulong)uVar3,(ulong)*puVar6);
    uVar8 = 0;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_90 & 1) != 0) {
                    /* catch() { ... } // from try @ 009f87a4 with catch @ 009f880c */
    operator_delete(local_80);
  }
joined_r0x009f8818:
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

