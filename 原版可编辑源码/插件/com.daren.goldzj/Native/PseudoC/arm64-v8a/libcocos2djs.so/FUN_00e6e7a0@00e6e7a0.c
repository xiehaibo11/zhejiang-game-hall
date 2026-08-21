
undefined8 FUN_00e6e7a0(uint *param_1,int param_2,code *param_3,ulong param_4,ulong param_5)

{
  long *plVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  plVar9 = *(long **)(param_1 + 0x10);
  plVar10 = *(long **)(param_1 + 0xc);
  lVar12 = (long)param_2;
  lVar4 = plVar9[(long)param_2 * 2 + 1];
  if ((lVar4 <= (long)param_5) && ((long)param_4 <= plVar9[1])) {
    lVar5 = (long)(int)param_1[1];
    uVar8 = plVar9[1] & -lVar5;
    if ((long)uVar8 <= (long)param_5) {
      param_5 = uVar8;
    }
    if (lVar4 < (long)param_4) {
      cVar2 = *(char *)((long)param_1 + 0x7a);
      uVar8 = param_4;
    }
    else {
      param_4 = (lVar4 + lVar5) - 1U & -lVar5;
      if (((uint)lVar4 & param_1[1] - 1 & 0xffff) == 0) {
        if (*(char *)((long)param_1 + 0x7b) != '\0') {
          plVar10 = plVar10 + -1;
          *(undefined1 *)((long)param_1 + 0x7b) = 0;
        }
        *plVar10 = plVar9[lVar12 * 2];
        cVar2 = *(char *)((long)param_1 + 0x7a);
        plVar10 = plVar10 + 1;
        uVar8 = param_4 + lVar5;
      }
      else {
        cVar2 = *(char *)((long)param_1 + 0x7a);
        uVar8 = param_4;
      }
    }
    if (cVar2 != '\0') {
      *(long *)(*(long *)(param_1 + 0x20) + 0x28) = (long)param_4 >> ((ulong)*param_1 & 0x3f);
      *(undefined1 *)((long)param_1 + 0x7a) = 0;
    }
    if ((long)uVar8 <= (long)param_5) {
      plVar3 = plVar9;
      if (*(long **)(param_1 + 10) <=
          plVar10 + ((long)(param_5 - uVar8) >> ((ulong)*param_1 & 0x3f)) + 1) {
        *(long **)(param_1 + 0xc) = plVar10;
        param_1[0xe] = 0x62;
        return 1;
      }
      do {
        *(undefined1 *)((long)param_1 + 0x7b) = 0;
        uVar6 = plVar3[1];
        if ((long)uVar8 < (long)uVar6) {
          plVar1 = plVar3 + lVar12 * 2;
          plVar11 = plVar1 + 1;
          lVar4 = uVar6 - *plVar11;
          if (lVar4 < (int)param_1[4]) {
            lVar7 = *plVar1;
            plVar1 = plVar3 + lVar12 * -2;
            lVar5 = 0;
            if (lVar4 != 0) {
              lVar5 = (long)((*plVar3 - lVar7) * (uVar8 - *plVar11)) / lVar4;
            }
            *plVar10 = lVar5 + lVar7;
            uVar8 = uVar8 + (long)(int)param_1[1];
            plVar10 = plVar10 + 1;
          }
          else {
            (*param_3)();
          }
        }
        else {
          plVar11 = plVar10;
          if (uVar6 == uVar8) {
            *(undefined1 *)((long)param_1 + 0x7b) = 1;
            plVar11 = plVar10 + 1;
            *plVar10 = *plVar3;
            uVar8 = uVar8 + (long)(int)param_1[1];
          }
          plVar1 = plVar3 + lVar12 * -2;
          plVar10 = plVar11;
        }
      } while (((long)uVar8 <= (long)param_5) && (plVar3 = plVar1, plVar9 <= plVar1));
      plVar9 = *(long **)(param_1 + 0x10);
    }
  }
  *(long **)(param_1 + 0xc) = plVar10;
  *(long **)(param_1 + 0x10) = plVar9 + lVar12 * -2;
  return 0;
}

