
void FUN_001385a0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  void *local_68;
  void *local_60;
  void *pvStack_58;
  void *local_50;
  void *pvStack_48;
  long *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if ((ulong)param_1[4] < 0x200) {
    uVar7 = param_1[2] - param_1[1] >> 3;
    lVar6 = param_1[3] - *param_1;
    if ((ulong)(lVar6 >> 3) <= uVar7) {
      uVar5 = lVar6 >> 2;
      if (lVar6 == 0) {
        uVar5 = 1;
      }
      local_40 = param_1 + 3;
      if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00138d84("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      local_60 = operator_new(uVar5 << 3);
      pvStack_58 = (void *)((long)local_60 + uVar7 * 8);
      pvStack_48 = (void *)((long)local_60 + uVar5 * 8);
      local_50 = pvStack_58;
      local_68 = operator_new(0x1000);
      FUN_00138b28(&local_60,&local_68);
      lVar8 = param_1[2];
      lVar6 = lVar8 + 8;
      while (lVar8 != param_1[1]) {
        lVar8 = lVar8 + -8;
        lVar6 = lVar6 + -8;
        FUN_00138c54(&local_60,lVar8);
      }
      lVar1 = param_1[2];
      lVar2 = param_1[3];
      pvVar4 = (void *)*param_1;
      *param_1 = (long)local_60;
      param_1[1] = (long)pvStack_58;
      param_1[2] = (long)local_50;
      param_1[3] = (long)pvStack_48;
      local_50 = (void *)lVar1;
      if (lVar8 != lVar1) {
        local_50 = (void *)(lVar1 + ((ulong)(lVar1 - lVar6) >> 3 ^ 0xffffffffffffffff) * 8);
      }
      local_60 = pvVar4;
      pvStack_58 = (void *)lVar8;
      pvStack_48 = (void *)lVar2;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      goto LAB_001386f8;
    }
    if (param_1[3] != param_1[2]) {
      local_60 = operator_new(0x1000);
      FUN_001388cc(param_1,&local_60);
      goto LAB_001386f8;
    }
    local_60 = operator_new(0x1000);
    FUN_001389f8(param_1,&local_60);
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  else {
    param_1[4] = param_1[4] - 0x200;
    local_60 = *(void **)param_1[1];
    param_1[1] = (long)((undefined8 *)param_1[1] + 1);
  }
  FUN_001387a0(param_1,&local_60);
LAB_001386f8:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

