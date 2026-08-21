
void FUN_008f6ac0(undefined1 *param_1,undefined1 *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  lVar4 = *(long *)(param_2 + 0x10);
  *(long *)(param_1 + 0x10) = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  lVar4 = *(long *)(param_2 + 0x20);
  *(long *)(param_1 + 0x20) = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  puVar5 = (undefined8 *)(param_1 + 0x28);
  *puVar5 = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((param_2[0x28] & 1) == 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x30);
    uVar10 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar11;
    *puVar5 = uVar10;
  }
  else {
    uVar7 = *(ulong *)(param_2 + 0x30);
    if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar8 = *(void **)(param_2 + 0x38);
    if (uVar7 < 0x17) {
      puVar6 = param_1 + 0x29;
      *(char *)puVar5 = (char)((int)uVar7 << 1);
      if (uVar7 != 0) goto LAB_008f6bb0;
    }
    else {
      uVar9 = uVar7 + 0x10 & 0xfffffffffffffff0;
      puVar6 = operator_new(uVar9);
      *(ulong *)(param_1 + 0x30) = uVar7;
      *(undefined1 **)(param_1 + 0x38) = puVar6;
      *(ulong *)(param_1 + 0x28) = uVar9 | 1;
LAB_008f6bb0:
      memcpy(puVar6,pvVar8,uVar7);
    }
    puVar6[uVar7] = 0;
  }
  puVar5 = (undefined8 *)(param_1 + 0x40);
  *puVar5 = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  if ((param_2[0x40] & 1) == 0) {
    uVar11 = *(undefined8 *)(param_2 + 0x48);
    uVar10 = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar11;
    *puVar5 = uVar10;
    goto LAB_008f6c4c;
  }
  uVar7 = *(ulong *)(param_2 + 0x48);
  if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar8 = *(void **)(param_2 + 0x50);
  if (uVar7 < 0x17) {
    puVar6 = param_1 + 0x41;
    *(char *)puVar5 = (char)((int)uVar7 << 1);
    if (uVar7 != 0) goto LAB_008f6c38;
  }
  else {
    uVar9 = uVar7 + 0x10 & 0xfffffffffffffff0;
    puVar6 = operator_new(uVar9);
    *(ulong *)(param_1 + 0x48) = uVar7;
    *(undefined1 **)(param_1 + 0x50) = puVar6;
    *(ulong *)(param_1 + 0x40) = uVar9 | 1;
LAB_008f6c38:
    memcpy(puVar6,pvVar8,uVar7);
  }
  puVar6[uVar7] = 0;
LAB_008f6c4c:
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  lVar4 = *(long *)(param_2 + 0x60);
  *(long *)(param_1 + 0x60) = lVar4;
  if (lVar4 != 0) {
    plVar1 = (long *)(lVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}

