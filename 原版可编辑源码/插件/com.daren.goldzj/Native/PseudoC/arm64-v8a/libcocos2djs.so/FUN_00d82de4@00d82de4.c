
void FUN_00d82de4(long param_1,undefined8 param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x1f8);
  if (*(uint *)(lVar5 + 0x10) < *(uint *)(param_1 + 0x170)) {
    puVar4 = (uint *)(lVar5 + 0x14);
    uVar3 = *puVar4;
    do {
      uVar2 = *(uint *)(param_1 + 0x16c);
      if (uVar3 < uVar2) {
        (**(code **)(*(long *)(param_1 + 0x200) + 8))
                  (param_1,param_2,param_3,param_4,lVar5 + 0x20,puVar4);
        uVar3 = *puVar4;
        uVar2 = *(uint *)(param_1 + 0x16c);
      }
      if (uVar3 != uVar2) {
        return;
      }
      iVar1 = (**(code **)(*(long *)(param_1 + 0x208) + 8))(param_1,lVar5 + 0x20);
      if (iVar1 == 0) {
        if (*(int *)(lVar5 + 0x18) != 0) {
          return;
        }
        *param_3 = *param_3 + -1;
        *(undefined4 *)(lVar5 + 0x18) = 1;
        return;
      }
      if (*(int *)(lVar5 + 0x18) != 0) {
        *param_3 = *param_3 + 1;
        *(undefined4 *)(lVar5 + 0x18) = 0;
      }
      uVar2 = *(int *)(lVar5 + 0x10) + 1;
      *(uint *)(lVar5 + 0x10) = uVar2;
      *(undefined4 *)(lVar5 + 0x14) = 0;
      uVar3 = 0;
    } while (uVar2 < *(uint *)(param_1 + 0x170));
  }
  return;
}

