
void FUN_00a347e8(long *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if ((param_1 != (long *)0x0) && (iVar1 = (int)param_1[4], 0 < iVar1)) {
    if (param_3 == (code *)0x0) {
      lVar7 = 0;
      do {
        plVar3 = *(long **)(*param_1 + lVar7 * 8);
        lVar2 = *plVar3;
        if (lVar2 != 0) {
          do {
            lVar5 = *(long *)(lVar2 + 0x10);
            FUN_00a34074(plVar3,lVar2,param_1);
            param_1[5] = param_1[5] + -1;
                    /* try { // try from 00a348b8 to 00b3499b has its CatchHandler @ 00a34700 */
            lVar2 = lVar5;
          } while (lVar5 != 0);
          iVar1 = (int)param_1[4];
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar1);
    }
    else {
      lVar7 = 0;
      do {
        puVar4 = *(undefined8 **)(*param_1 + lVar7 * 8);
        puVar6 = (undefined8 *)*puVar4;
        if (puVar6 != (undefined8 *)0x0) {
          do {
            puVar8 = (undefined8 *)puVar6[2];
            iVar1 = (*param_3)(param_2,*(undefined8 *)*puVar6);
            if (iVar1 != 0) {
              FUN_00a34074(puVar4,puVar6,param_1);
              param_1[5] = param_1[5] + -1;
            }
            puVar6 = puVar8;
          } while (puVar8 != (undefined8 *)0x0);
          iVar1 = (int)param_1[4];
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < iVar1);
    }
  }
  return;
}

