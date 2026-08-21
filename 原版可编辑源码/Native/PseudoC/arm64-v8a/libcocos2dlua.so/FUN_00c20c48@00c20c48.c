
int FUN_00c20c48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined4 param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  int local_4;
  
  local_4 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  local_10 = param_4;
  local_8 = param_5;
  iVar1 = FUN_00c17684(param_1,0,&local_40,FUN_00c20b0c);
  if (iVar1 == 0) {
    iVar1 = local_4;
  }
  lVar2 = *(long *)(local_28 + 0x10);
  uVar3 = (ulong)(uint)((int)local_38 - (int)local_30);
  *(ulong *)(lVar2 + 0x20) = *(long *)(lVar2 + 0x20) - uVar3;
  (**(code **)(lVar2 + 0x10))(*(undefined8 *)(lVar2 + 0x18),local_30,uVar3,0);
  return iVar1;
}

