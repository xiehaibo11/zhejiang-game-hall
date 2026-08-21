
void FUN_01100cc4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x248);
  if (*(int *)(lVar3 + 0x60) == 0) {
    iVar2 = (**(code **)(*(long *)(param_1 + 0x250) + 0x18))(param_1,lVar3 + 0x10);
    if (iVar2 == 0) {
      return;
    }
    *(undefined4 *)(lVar3 + 0x60) = 1;
  }
  uVar1 = *(uint *)(param_1 + 0x1ac);
  (**(code **)(*(long *)(param_1 + 600) + 8))
            (param_1,lVar3 + 0x10,lVar3 + 100,uVar1,param_2,param_3,param_4);
  if (uVar1 <= *(uint *)(lVar3 + 100)) {
    *(undefined8 *)(lVar3 + 0x60) = 0;
  }
  return;
}

