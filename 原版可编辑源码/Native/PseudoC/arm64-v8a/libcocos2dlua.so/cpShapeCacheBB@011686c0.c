
void cpShapeCacheBB(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4
                   ,long *param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar1 = param_5[2];
  local_30 = *(undefined8 *)(lVar1 + 0x5c);
  uStack_38 = *(undefined8 *)(lVar1 + 0x54);
  local_40 = *(undefined8 *)(lVar1 + 0x4c);
  uVar2 = (**(code **)(*param_5 + 8))(param_5,&local_40);
  *(undefined4 *)((long)param_5 + 0x2c) = uVar2;
  *(undefined4 *)(param_5 + 6) = param_2;
  *(undefined4 *)((long)param_5 + 0x34) = param_3;
  *(undefined4 *)(param_5 + 7) = param_4;
  return;
}

