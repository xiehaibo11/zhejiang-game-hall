
void FUN_00d908b4(long param_1,long param_2,int *param_3,undefined8 param_4,long param_5,
                 uint *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x280);
  iVar4 = *(int *)(param_1 + 0x1a4);
  iVar3 = *(int *)(lVar7 + 0xb8);
  if (iVar4 <= iVar3) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar5 = *(long *)(param_1 + 0x130);
      lVar8 = 0;
      lVar6 = lVar7 + 0x18;
      do {
        (**(code **)(lVar7 + 0x68 + lVar8 * 8))
                  (param_1,lVar5,
                   *(long *)(param_2 + lVar8 * 8) +
                   (ulong)(uint)(*(int *)(lVar7 + 0x68 + lVar8 * 4 + 0x58) * *param_3) * 8,lVar6);
        lVar8 = lVar8 + 1;
        lVar5 = lVar5 + 0x60;
        lVar6 = lVar6 + 8;
      } while (lVar8 < *(int *)(param_1 + 0x38));
      iVar4 = *(int *)(param_1 + 0x1a4);
    }
    iVar3 = 0;
    *(undefined4 *)(lVar7 + 0xb8) = 0;
  }
  uVar2 = param_7 - *param_6;
  uVar1 = *(uint *)(lVar7 + 0xbc);
  if ((uint)(iVar4 - iVar3) <= *(uint *)(lVar7 + 0xbc)) {
    uVar1 = iVar4 - iVar3;
  }
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  (**(code **)(*(long *)(param_1 + 0x288) + 8))
            (param_1,lVar7 + 0x18,iVar3,param_5 + (ulong)*param_6 * 8,uVar2);
  *param_6 = *param_6 + uVar2;
  iVar4 = *(int *)(lVar7 + 0xb8) + uVar2;
  *(int *)(lVar7 + 0xb8) = iVar4;
  *(uint *)(lVar7 + 0xbc) = *(int *)(lVar7 + 0xbc) - uVar2;
  if (*(int *)(param_1 + 0x1a4) <= iVar4) {
    *param_3 = *param_3 + 1;
  }
  return;
}

