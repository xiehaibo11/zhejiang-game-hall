
void FUN_00c0906c(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  uVar4 = *param_1;
  FUN_00c08cac(uVar4);
  FUN_00c079c0(param_1);
  local_18 = (ulong)local_18._4_4_ << 0x20;
  local_c = 0xffffffff;
  local_10 = 3;
  local_8 = 0xffffffff;
  if ((*(int *)((long)param_1 + 0x34) != 0x10a) && (*(int *)((long)param_1 + 0x34) != 0x11f)) {
                    /* WARNING: Subroutine does not return */
    FUN_00c07c88(param_1,0x11f);
  }
  uVar3 = param_1[2];
  FUN_00c079c0(param_1);
  local_18 = uVar3 & 0x7fffffffffff;
  *(undefined4 *)(param_2 + 8) = 9;
  if (((local_10 == 4) || (local_10 != 3)) ||
     (uVar2 = FUN_00c07b10(uVar4,local_18,0xfffffffb), 0xff < uVar2)) {
    uVar1 = FUN_00c08cac(uVar4,&local_18);
    *(undefined4 *)(param_2 + 4) = uVar1;
  }
  else {
    *(uint *)(param_2 + 4) = ~uVar2;
  }
  return;
}

