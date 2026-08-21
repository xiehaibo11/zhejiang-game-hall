
void FUN_00d9049c(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,int *param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = *(long *)(param_1 + 600);
  puVar4 = (uint *)(lVar5 + 0x28);
  uVar6 = *puVar4;
  if (uVar6 == 0) {
    uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x24),
                       *(undefined4 *)(lVar5 + 0x20),1);
    uVar6 = *(uint *)(lVar5 + 0x28);
    *(undefined8 *)(lVar5 + 0x18) = uVar2;
  }
  else {
    uVar2 = *(undefined8 *)(lVar5 + 0x18);
  }
  (**(code **)(*(long *)(param_1 + 0x280) + 8))
            (param_1,param_2,param_3,param_4,uVar2,puVar4,*(uint *)(lVar5 + 0x20));
  uVar3 = *puVar4;
  iVar1 = uVar3 - uVar6;
  if (uVar6 <= uVar3 && iVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x290) + 8))
              (param_1,*(long *)(lVar5 + 0x18) + (ulong)uVar6 * 8,0,iVar1);
    *param_6 = *param_6 + iVar1;
    uVar3 = *puVar4;
  }
  uVar6 = *(uint *)(lVar5 + 0x20);
  if (uVar6 <= uVar3) {
    *(uint *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + uVar6;
    *(undefined4 *)(lVar5 + 0x28) = 0;
  }
  return;
}

