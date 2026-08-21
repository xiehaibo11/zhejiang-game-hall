
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bef730(undefined4 *param_1,code *param_2,char *param_3,ulong *param_4)

{
  int iVar1;
  size_t sVar2;
  int *piVar3;
  ulong __n;
  uint local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  long local_8;
  
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  local_7c = 0x6e;
  local_8 = ___stack_chk_guard;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  iVar1 = (*param_2)(*param_1,&local_78,&local_7c);
  if (iVar1 < 0) {
    *param_4 = 0;
    piVar3 = (int *)__errno();
    iVar1 = -*piVar3;
  }
  else {
    if (local_78._2_1_ == '\0') {
      local_7c = local_7c - 2;
      __n = (ulong)local_7c;
    }
    else {
      sVar2 = strlen((char *)((long)&local_78 + 2));
      __n = sVar2 & 0xffffffff;
      local_7c = (uint)sVar2;
    }
    if (__n < *param_4) {
      memcpy(param_3,(void *)((long)&local_78 + 2),__n);
      *param_4 = __n;
      iVar1 = 0;
      if (*param_3 != '\0') {
        param_3[__n] = '\0';
      }
    }
    else {
      iVar1 = -0x69;
      *param_4 = (ulong)((int)__n + 1);
    }
  }
  if (local_8 == ___stack_chk_guard) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

