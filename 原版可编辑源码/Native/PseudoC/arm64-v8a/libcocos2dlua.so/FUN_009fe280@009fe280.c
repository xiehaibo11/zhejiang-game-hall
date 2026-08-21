
void FUN_009fe280(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined8 uStack_68;
  
  auVar13 = FUN_009fdecc((undefined8 *)(param_3 + 0x110),*param_2,param_2[1],&uStack_68);
  uVar5 = FUN_009fdf6c(param_1,auVar13._0_8_,auVar13._8_8_);
  lVar6 = FUN_009fe644(param_1,uVar5);
  uVar4 = *(uint *)(lVar6 + 0x70);
  uVar3 = uVar4 & 0x1fffffff | (*(uint *)(param_2 + 2) & 1) << 0x1d;
  *(uint *)(lVar6 + 0x70) = uVar4 & 0xc0000000 | uVar3;
  *(uint *)(lVar6 + 0x70) = uVar4 & 0x80000000 | uVar3 | (*(uint *)(param_3 + 0x528) & 1) << 0x1e;
  if ((param_2[7] != 0) && (lVar12 = *(long *)(param_2[7] + -8), lVar12 != 0)) {
    lVar7 = 0;
    do {
      lVar8 = *(long *)(lVar6 + 0x50);
      lVar1 = lVar7 + 1;
      if (lVar8 == 0) {
LAB_009fe32c:
        plVar11 = (long *)FUN_009feb68((long *)(lVar6 + 0x50),lVar1);
      }
      else {
        uVar9 = lVar8 - 1;
        uVar10 = uVar9 & lVar1 * 0x9e3779b1;
        if ((uVar9 & lVar1 * 0x9e3779b1) == 0) {
          uVar10 = 1;
        }
        for (plVar11 = (long *)(*(long *)(lVar6 + 0x68) +
                               uVar10 * ((ulong)*(uint *)(lVar6 + 0x60) & 0x7fffffff));
            plVar11[1] != lVar1; plVar11 = (long *)((long)plVar11 + *plVar11)) {
                    /* try { // try from 009fe3a4 to 00afe543 has its CatchHandler @ 009fe3a4
                       catch() { ... } // from try @ 009fe3a4 with catch @ 009fe3a4
                       catch() { ... } // from try @ 009fe5c4 with catch @ 009fe3a4 */
          if (*plVar11 == 0) goto LAB_009fe32c;
        }
        if (plVar11 == (long *)0x0) goto LAB_009fe32c;
      }
      puVar2 = (undefined8 *)(param_2[7] + lVar7 * 0x10);
      lVar7 = FUN_009fdf6c(param_1,*puVar2,puVar2[1]);
      plVar11[2] = lVar7;
      *(int *)(plVar11 + 3) = (int)lVar1;
      lVar7 = lVar1;
    } while (lVar1 != lVar12);
  }
  lVar12 = param_2[3];
  if ((lVar12 != 0) && (lVar7 = *(long *)(lVar12 + -8), lVar7 != 0)) {
    FUN_009fe510(param_1,lVar12,param_3,lVar6);
    lVar7 = lVar7 + -1;
    if (lVar7 != 0) {
      lVar12 = 0x58;
      do {
        FUN_009fe510(param_1,param_2[3] + lVar12,param_3,lVar6);
        lVar7 = lVar7 + -1;
        lVar12 = lVar12 + 0x58;
      } while (lVar7 != 0);
    }
  }
  lVar6 = param_2[4];
  if ((lVar6 != 0) && (lVar12 = *(long *)(lVar6 + -8), lVar12 != 0)) {
    FUN_009fe510(param_1,lVar6,param_3,0);
    lVar12 = lVar12 + -1;
    if (lVar12 != 0) {
      lVar6 = 0x58;
      do {
        FUN_009fe510(param_1,param_2[4] + lVar6,param_3,0);
        lVar12 = lVar12 + -1;
        lVar6 = lVar6 + 0x58;
      } while (lVar12 != 0);
    }
  }
  lVar6 = param_2[5];
  if ((lVar6 != 0) && (lVar12 = *(long *)(lVar6 + -8), lVar12 != 0)) {
    FUN_009fe1a0(param_1,lVar6,param_3);
    lVar12 = lVar12 + -1;
    if (lVar12 != 0) {
      lVar6 = 0x18;
      do {
        FUN_009fe1a0(param_1,param_2[5] + lVar6,param_3);
        lVar12 = lVar12 + -1;
        lVar6 = lVar6 + 0x18;
      } while (lVar12 != 0);
    }
  }
  lVar6 = param_2[6];
  if ((lVar6 != 0) && (lVar12 = *(long *)(lVar6 + -8), lVar12 != 0)) {
    FUN_009fe280(param_1,lVar6,param_3);
    lVar12 = lVar12 + -1;
    if (lVar12 != 0) {
      lVar6 = 0x40;
      do {
        FUN_009fe280(param_1,param_2[6] + lVar6,param_3);
        lVar12 = lVar12 + -1;
        lVar6 = lVar6 + 0x40;
      } while (lVar12 != 0);
    }
  }
  *(undefined8 *)(param_3 + 0x110) = uStack_68;
  return;
}

