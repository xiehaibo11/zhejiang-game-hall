
void FUN_00e45504(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0xc0);
  if ((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x238))) {
    lVar3 = *(long *)(param_1 + 0x240);
    uVar2 = (**(code **)(param_2 + 0x50))(param_2,0);
    lVar3 = lVar3 + (long)iVar1 * 0x150;
    *(undefined8 *)(lVar3 + 0xf8) = uVar2;
    *(undefined8 *)(lVar3 + 0xc0) = uVar2;
  }
  return;
}

