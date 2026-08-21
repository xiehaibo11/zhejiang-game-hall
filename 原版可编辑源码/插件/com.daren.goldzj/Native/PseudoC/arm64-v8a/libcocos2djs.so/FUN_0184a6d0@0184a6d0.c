
void FUN_0184a6d0(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  (**(code **)(**(long **)(param_1 + 0x10) + 0x20))();
  uVar3 = *(uint *)(param_1 + 0xc);
  if ((uVar3 & 1) != 0) {
    lVar5 = param_2[1];
    uVar1 = lVar5 + 6;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0184a840;
      lVar5 = param_2[1];
    }
    *(undefined2 *)((undefined4 *)((long)pvVar2 + lVar5) + 1) = 0x7473;
    *(undefined4 *)((long)pvVar2 + lVar5) = 0x6e6f6320;
    param_2[1] = param_2[1] + 6;
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  if ((uVar3 >> 1 & 1) != 0) {
    lVar5 = param_2[1];
    uVar1 = lVar5 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) goto LAB_0184a840;
      lVar5 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar5)," volatile",9);
    param_2[1] = param_2[1] + 9;
    uVar3 = *(uint *)(param_1 + 0xc);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    lVar5 = param_2[1];
    uVar1 = lVar5 + 9;
    if (uVar1 < (ulong)param_2[2]) {
      pvVar2 = (void *)*param_2;
    }
    else {
      uVar4 = param_2[2] << 1;
      if (uVar1 <= uVar4) {
        uVar1 = uVar4;
      }
      param_2[2] = uVar1;
      pvVar2 = realloc((void *)*param_2,uVar1);
      *param_2 = pvVar2;
      if (pvVar2 == (void *)0x0) {
LAB_0184a840:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar5 = param_2[1];
    }
    builtin_strncpy((char *)((long)pvVar2 + lVar5)," restrict",9);
    param_2[1] = param_2[1] + 9;
  }
  return;
}

