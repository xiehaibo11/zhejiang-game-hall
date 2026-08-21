
void FUN_00e39ddc(long param_1,long param_2)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  long lStack_38;
  
  iVar5 = (**(code **)(param_2 + 0x68))(param_2,6,&local_60,3);
  if (iVar5 < 6) {
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
  else {
    lVar1 = -local_48;
    if (-1 < local_48) {
      lVar1 = local_48;
    }
    if (lVar1 != 0) {
      if (lVar1 != 0x10000) {
        uVar4 = FT_DivFix(1000,lVar1);
        *(undefined2 *)(param_1 + 0x88) = uVar4;
        local_60 = FT_DivFix(local_60,lVar1);
        local_58 = FT_DivFix(local_58,lVar1);
        local_50 = FT_DivFix(local_50,lVar1);
        local_40 = FT_DivFix(local_40,lVar1);
        lStack_38 = FT_DivFix(lStack_38,lVar1);
        bVar2 = local_48 < 0;
        local_48 = 0x10000;
        if (bVar2) {
          local_48 = -0x10000;
        }
      }
      *(undefined8 *)(param_1 + 0x2a8) = local_60;
      *(undefined8 *)(param_1 + 0x2b8) = local_58;
      *(long *)(param_1 + 0x2c0) = local_48;
      *(undefined8 *)(param_1 + 0x2b0) = local_50;
      cVar3 = FUN_00e1317c(param_1 + 0x2a8);
      if (cVar3 != '\0') {
        *(long *)(param_1 + 0x2d0) = lStack_38 >> 0x10;
        *(long *)(param_1 + 0x2c8) = local_40 >> 0x10;
        return;
      }
    }
    *(undefined4 *)(param_2 + 0x18) = 3;
  }
  return;
}

