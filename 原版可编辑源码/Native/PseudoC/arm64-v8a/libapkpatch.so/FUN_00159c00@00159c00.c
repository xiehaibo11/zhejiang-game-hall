
void FUN_00159c00(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  undefined **local_50;
  undefined4 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = param_2[1];
  uVar1 = lVar5 + 10;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) goto LAB_00159d34;
    lVar5 = param_2[1];
  }
  builtin_strncpy((char *)((long)pvVar3 + lVar5),"sizeof...(",10);
  local_48 = 0x1010122;
  param_2[1] = param_2[1] + 10;
  local_40 = *(undefined8 *)(param_1 + 0x10);
  local_50 = &PTR_FUN_00167ab0;
  FUN_001564ac(&local_50,param_2);
  lVar5 = param_2[1];
  uVar1 = lVar5 + 1;
  if (uVar1 < (ulong)param_2[2]) {
    pvVar3 = (void *)*param_2;
  }
  else {
    uVar4 = param_2[2] << 1;
    if (uVar1 <= uVar4) {
      uVar1 = uVar4;
    }
    param_2[2] = uVar1;
    pvVar3 = realloc((void *)*param_2,uVar1);
    *param_2 = pvVar3;
    if (pvVar3 == (void *)0x0) {
LAB_00159d34:
                    /* WARNING: Subroutine does not return */
      std::terminate();
    }
    lVar5 = param_2[1];
  }
  *(undefined1 *)((long)pvVar3 + lVar5) = 0x29;
  param_2[1] = param_2[1] + 1;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

