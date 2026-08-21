
void FUN_00e49fc8(long *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar2 = *param_1;
  FT_Activate_Size(param_1[0xb]);
  iVar1 = FT_Select_Size(*(undefined8 *)(lVar2 + 0x328),param_2);
  if (iVar1 != 0) {
    return;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0x328) + 0xa0);
  lVar4 = *(long *)(lVar2 + 0x40);
  lVar3 = *(long *)(lVar2 + 0x38);
  lVar6 = *(long *)(lVar2 + 0x30);
  lVar5 = *(long *)(lVar2 + 0x28);
  lVar8 = *(long *)(lVar2 + 0x20);
  lVar7 = *(long *)(lVar2 + 0x18);
  param_1[9] = *(long *)(lVar2 + 0x48);
  param_1[8] = lVar4;
  param_1[7] = lVar3;
  param_1[6] = lVar6;
  param_1[5] = lVar5;
  param_1[4] = lVar8;
  param_1[3] = lVar7;
  return;
}

