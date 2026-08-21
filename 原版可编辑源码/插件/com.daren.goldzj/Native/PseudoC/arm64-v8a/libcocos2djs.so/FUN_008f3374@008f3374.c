
bool FUN_008f3374(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  void *pvVar2;
  byte bVar3;
  ulong uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  size_t sVar8;
  char *pcVar9;
  void *pvVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong local_98;
  ulong local_90;
  void *local_88;
  ulong local_80;
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar9 = (char *)*param_1;
  local_80 = 0;
  local_78 = 0;
  local_70 = (void *)0x0;
  sVar8 = strlen(pcVar9);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_008f3404;
  }
  else {
    uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_80 = uVar11 | 1;
    local_78 = sVar8;
    local_70 = pvVar10;
LAB_008f3404:
    memcpy(pvVar10,pcVar9,sVar8);
  }
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  pcVar9 = (char *)*param_2;
  local_98 = 0;
  local_90 = 0;
  local_88 = (void *)0x0;
  sVar8 = strlen(pcVar9);
  if (0xffffffffffffffef < sVar8) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (sVar8 < 0x17) {
    pvVar10 = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 == 0) goto LAB_008f3488;
  }
  else {
    uVar11 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar10 = operator_new(uVar11);
    local_98 = uVar11 | 1;
    local_90 = sVar8;
    local_88 = pvVar10;
  }
  memcpy(pvVar10,pcVar9,sVar8);
LAB_008f3488:
  uVar4 = local_98;
  bVar3 = (byte)local_80;
  *(undefined1 *)((long)pvVar10 + sVar8) = 0;
  pvVar10 = (void *)((ulong)&local_80 | 1);
  uVar11 = (ulong)((byte)local_80 >> 1);
  if ((local_80 & 1) != 0) {
    pvVar10 = local_70;
    uVar11 = local_78;
  }
  if (uVar11 == 0) {
    uVar13 = (ulong)((byte)local_98 >> 1);
    if ((local_98 & 1) != 0) {
      uVar13 = local_90;
    }
  }
  else {
    uVar12 = 0;
    pvVar2 = (void *)((ulong)&local_98 | 1);
    uVar13 = (ulong)((byte)local_98 >> 1);
    if ((local_98 & 1) != 0) {
      pvVar2 = local_88;
      uVar13 = local_90;
    }
    do {
      if (uVar13 == uVar12) break;
      iVar6 = tolower((int)*(char *)((long)pvVar10 + uVar12));
      iVar7 = tolower((int)*(char *)((long)pvVar2 + uVar12));
      if (iVar6 < iVar7) {
        bVar5 = true;
        goto joined_r0x008f3584;
      }
      if (iVar7 < iVar6) {
        bVar5 = false;
        goto joined_r0x008f3584;
      }
      uVar12 = uVar12 + 1;
    } while (uVar11 != uVar12);
  }
  bVar5 = uVar11 < uVar13;
joined_r0x008f3584:
  if ((uVar4 & 1) != 0) {
    operator_delete(local_88);
    bVar3 = (byte)local_80;
  }
  if ((bVar3 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar5;
}

