
void FUN_008f5c8c(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong *puVar5;
  void *pvVar6;
  void *pvVar7;
  ulong uVar8;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  if ((*param_2 & 1) == 0) {
    uVar8 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar8;
    *param_1 = uVar4;
  }
  else {
    uVar4 = param_2[1];
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar7 = (void *)param_2[2];
    if (uVar4 < 0x17) {
      pvVar6 = (void *)((long)param_1 + 1);
      *(char *)param_1 = (char)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_008f5d1c;
    }
    else {
      uVar8 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar8);
      param_1[1] = uVar4;
      param_1[2] = (ulong)pvVar6;
      *param_1 = uVar8 | 1;
LAB_008f5d1c:
      memcpy(pvVar6,pvVar7,uVar4);
    }
    *(undefined1 *)((long)pvVar6 + uVar4) = 0;
  }
  puVar5 = param_1 + 3;
  *puVar5 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if ((param_2[3] & 1) == 0) {
    uVar8 = param_2[4];
    uVar4 = param_2[3];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    *puVar5 = uVar4;
  }
  else {
    uVar4 = param_2[4];
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    pvVar7 = (void *)param_2[5];
    if (uVar4 < 0x17) {
      pvVar6 = (void *)((long)param_1 + 0x19);
      *(char *)puVar5 = (char)((int)uVar4 << 1);
      if (uVar4 != 0) goto LAB_008f5da8;
    }
    else {
      uVar8 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pvVar6 = operator_new(uVar8);
      param_1[4] = uVar4;
      param_1[5] = (ulong)pvVar6;
      param_1[3] = uVar8 | 1;
LAB_008f5da8:
      memcpy(pvVar6,pvVar7,uVar4);
    }
    *(undefined1 *)((long)pvVar6 + uVar4) = 0;
  }
  param_1[6] = param_2[6];
  uVar4 = param_2[7];
  param_1[7] = uVar4;
  if (uVar4 != 0) {
    plVar1 = (long *)(uVar4 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  uVar4 = param_2[8];
  puVar5 = param_1 + 9;
  *puVar5 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int *)(param_1 + 8) = (int)uVar4;
  if ((param_2[9] & 1) == 0) {
    uVar8 = param_2[10];
    uVar4 = param_2[9];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar8;
    *puVar5 = uVar4;
    goto LAB_008f5e74;
  }
  uVar4 = param_2[10];
  if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  pvVar7 = (void *)param_2[0xb];
  if (uVar4 < 0x17) {
    pvVar6 = (void *)((long)param_1 + 0x49);
    *(char *)puVar5 = (char)((int)uVar4 << 1);
    if (uVar4 != 0) goto LAB_008f5e60;
  }
  else {
    uVar8 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar6 = operator_new(uVar8);
    param_1[10] = uVar4;
    param_1[0xb] = (ulong)pvVar6;
    param_1[9] = uVar8 | 1;
LAB_008f5e60:
    memcpy(pvVar6,pvVar7,uVar4);
  }
  *(undefined1 *)((long)pvVar6 + uVar4) = 0;
LAB_008f5e74:
  param_1[0xc] = param_2[0xc];
  uVar4 = param_2[0xd];
  param_1[0xd] = uVar4;
  if (uVar4 != 0) {
    plVar1 = (long *)(uVar4 + 8);
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

