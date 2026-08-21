
void FUN_011abfdc(long param_1,int param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  int *piVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_20;
  undefined8 uStack_18;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x68) + (ulong)*(uint *)(param_1 + 0x70) * 8);
  if ((lVar2 != 0) &&
     (uVar4 = *(ulong *)(*(long *)(param_1 + 0x68) + (ulong)(*(uint *)(param_1 + 0x70) + 1) * 8),
     uVar4 != 0)) {
    if (uVar4 < 2) {
      uVar6 = 0;
    }
    else {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar4 - 1;
      uVar6 = 0;
      if ((!CARRY8(lVar2 + 8,(uVar4 - 1) * 0x10)) && (SUB168(auVar1 * ZEXT816(0x10),8) == 0)) {
        uVar6 = uVar4 & 0xfffffffffffffffe;
        piVar3 = (int *)(lVar2 + 0x18);
        uVar7 = uVar6;
        do {
          while (piVar3[-4] == param_2) {
            piVar3[-4] = -1;
            piVar3[-3] = -1;
            if (*piVar3 != param_2) goto LAB_011ac05c;
LAB_011ac078:
            piVar3[0] = -1;
            piVar3[1] = -1;
            uVar7 = uVar7 - 2;
            piVar3 = piVar3 + 8;
            if (uVar7 == 0) goto LAB_011ac088;
          }
          if (*piVar3 == param_2) goto LAB_011ac078;
LAB_011ac05c:
          uVar7 = uVar7 - 2;
          piVar3 = piVar3 + 8;
        } while (uVar7 != 0);
LAB_011ac088:
        if (uVar4 == uVar6) goto LAB_011ac0bc;
      }
    }
    lVar5 = uVar4 - uVar6;
    piVar3 = (int *)(lVar2 + uVar6 * 0x10 + 8);
    do {
      if (*piVar3 == param_2) {
        piVar3[0] = -1;
        piVar3[1] = -1;
      }
      lVar5 = lVar5 + -1;
      piVar3 = piVar3 + 4;
    } while (lVar5 != 0);
  }
LAB_011ac0bc:
  if (-1 < *(int *)(param_1 + 0x40)) {
    local_20 = 0;
    uStack_18 = 0;
    FUN_011ae184(*(int *)(param_1 + 0x40),2,param_2,&local_20);
  }
  return;
}

