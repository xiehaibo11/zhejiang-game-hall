
void FUN_01174eb8(int *param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  
  uVar4 = (param_3 + (long)*param_1) - 1;
  if (param_3 <= uVar4) {
    piVar1 = *(int **)(param_1 + 0x1c);
    piVar2 = *(int **)(param_1 + 0x1e);
    iVar7 = param_1[0xd];
    uVar5 = 0;
    uVar3 = 0;
    if (param_3 != 0) {
      uVar3 = uVar4 / param_3;
    }
    do {
      if (0 < *piVar2) {
        lVar6 = 0;
        do {
          cpArbiterApplyImpulse(*(undefined8 *)(*(long *)(piVar2 + 2) + lVar6 * 8));
          lVar6 = lVar6 + 1;
        } while (lVar6 < *piVar2);
      }
      if (0 < *piVar1) {
        lVar6 = 0;
        do {
          (**(code **)(**(long **)(*(long *)(piVar1 + 2) + lVar6 * 8) + 0x10))(iVar7);
          lVar6 = lVar6 + 1;
        } while (lVar6 < *piVar1);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar3);
  }
  return;
}

