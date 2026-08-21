
void FUN_009fc570(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *__ptr;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  
                    /* try { // try from 009fc580 to 00afc58b has its CatchHandler @ 009fc69c */
  lVar12 = 0;
LAB_009fc5c8:
  uVar4 = 0;
  do {
    uVar8 = (ulong)*(uint *)(param_2 + 0x40) & 0x7fffffff;
    if ((lVar12 == 0) && ((int)*(uint *)(param_2 + 0x40) < 0)) {
      lVar12 = *(long *)(param_2 + 0x48);
      lVar3 = *(long *)(lVar12 + 0x10);
    }
    else {
      do {
        uVar9 = uVar4 + uVar8;
        if (*(long *)(param_2 + 0x30) * uVar8 <= uVar9) {
          lVar12 = 0;
          goto LAB_009fc69c;
        }
        lVar12 = *(long *)(param_2 + 0x48) + uVar8 + uVar4;
        uVar4 = uVar9;
      } while (*(long *)(lVar12 + 8) == 0);
      lVar12 = *(long *)(param_2 + 0x48) + uVar9;
      lVar3 = *(long *)(lVar12 + 0x10);
    }
    if (lVar3 != 0) {
      if (*(long *)(param_2 + 0x10) != 0) {
        iVar2 = *(int *)(lVar3 + 0x18);
        if (iVar2 == 0) {
          if (-1 < *(int *)(param_2 + 0x20)) goto LAB_009fc5b0;
          plVar5 = *(long **)(param_2 + 0x28);
        }
        else {
                    /* try { // try from 009fc600 to 00afc617 has its CatchHandler @ 009fc6a4 */
          uVar9 = (long)iVar2 * 0x9e3779b1;
          uVar8 = *(long *)(param_2 + 0x10) - 1;
          uVar4 = uVar8 & uVar9;
                    /* try { // try from 009fc618 to 00afc6ef has its CatchHandler @ 009fc510 */
          if ((uVar8 & uVar9) == 0) {
            uVar4 = 1;
          }
          for (plVar5 = (long *)(*(long *)(param_2 + 0x28) +
                                uVar4 * ((ulong)*(uint *)(param_2 + 0x20) & 0x7fffffff));
              plVar5[1] != (long)iVar2; plVar5 = (long *)((long)plVar5 + *plVar5)) {
            if (*plVar5 == 0) goto LAB_009fc5b0;
          }
        }
        if ((plVar5 != (long *)0x0) && (plVar5[2] == lVar3)) {
          plVar5[1] = 0;
          plVar5[2] = 0;
          lVar3 = *(long *)(lVar12 + 0x10);
        }
      }
LAB_009fc5b0:
      FUN_009fcb38(param_1,lVar3);
    }
    if (lVar12 == 0) goto LAB_009fc5c8;
    uVar4 = lVar12 - *(long *)(param_2 + 0x48);
  } while( true );
LAB_009fc69c:
                    /* catch() { ... } // from try @ 009fc580 with catch @ 009fc69c */
  if (lVar12 == 0) goto LAB_009fc6ac;
  do {
                    /* catch() { ... } // from try @ 009fc600 with catch @ 009fc6a4 */
    uVar4 = lVar12 - *(long *)(param_2 + 0x28);
    while( true ) {
      uVar8 = (ulong)*(uint *)(param_2 + 0x20) & 0x7fffffff;
      if ((lVar12 == 0) && ((int)*(uint *)(param_2 + 0x20) < 0)) {
        lVar12 = *(long *)(param_2 + 0x28);
        lVar3 = *(long *)(lVar12 + 0x10);
      }
      else {
        do {
          uVar9 = uVar4 + uVar8;
          if (*(long *)(param_2 + 0x10) * uVar8 <= uVar9) {
            lVar12 = 0;
            goto LAB_009fc724;
          }
          lVar12 = *(long *)(param_2 + 0x28) + uVar8 + uVar4;
          uVar4 = uVar9;
        } while (*(long *)(lVar12 + 8) == 0);
        lVar12 = *(long *)(param_2 + 0x28) + uVar9;
        lVar3 = *(long *)(lVar12 + 0x10);
      }
      if (lVar3 == 0) goto LAB_009fc69c;
      FUN_009fcb38(param_1);
      if (lVar12 != 0) break;
LAB_009fc6ac:
      uVar4 = 0;
    }
  } while( true );
LAB_009fc724:
  if (lVar12 == 0) goto LAB_009fc734;
  do {
    uVar4 = lVar12 - *(long *)(param_2 + 0x68);
    while( true ) {
      uVar8 = (ulong)*(uint *)(param_2 + 0x60) & 0x7fffffff;
      if ((lVar12 == 0) && ((int)*(uint *)(param_2 + 0x60) < 0)) {
        lVar12 = *(long *)(param_2 + 0x68);
        lVar3 = *(long *)(lVar12 + 0x10);
      }
      else {
        do {
          uVar9 = uVar4 + uVar8;
          if (*(long *)(param_2 + 0x50) * uVar8 <= uVar9) {
            free(*(void **)(param_2 + 0x28));
            uVar1 = *(uint *)(param_2 + 0x20);
            *(undefined8 *)(param_2 + 0x18) = 0;
            *(undefined8 *)(param_2 + 0x10) = 0;
            *(undefined8 *)(param_2 + 0x28) = 0;
            *(undefined8 *)(param_2 + 0x20) = 0;
            *(uint *)(param_2 + 0x20) = uVar1 & 0x7fffffff;
            free(*(void **)(param_2 + 0x48));
            uVar1 = *(uint *)(param_2 + 0x40);
            *(undefined8 *)(param_2 + 0x38) = 0;
            *(undefined8 *)(param_2 + 0x30) = 0;
            *(undefined8 *)(param_2 + 0x48) = 0;
            *(undefined8 *)(param_2 + 0x40) = 0;
            *(uint *)(param_2 + 0x40) = uVar1 & 0x7fffffff;
            free(*(void **)(param_2 + 0x68));
            uVar1 = *(uint *)(param_2 + 0x60);
            *(undefined8 *)(param_2 + 0x58) = 0;
            *(undefined8 *)(param_2 + 0x50) = 0;
            *(undefined8 *)(param_2 + 0x68) = 0;
            *(undefined8 *)(param_2 + 0x60) = 0;
            *(uint *)(param_2 + 0x60) = uVar1 & 0x7fffffff;
            *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0x70000000 | 0x80000000;
            return;
          }
          lVar12 = *(long *)(param_2 + 0x68) + uVar8 + uVar4;
          uVar4 = uVar9;
        } while (*(long *)(lVar12 + 8) == 0);
        lVar12 = *(long *)(param_2 + 0x68) + uVar9;
        lVar3 = *(long *)(lVar12 + 0x10);
      }
      if (lVar3 == 0) goto LAB_009fc724;
      lVar6 = *(long *)(lVar3 + -8);
      if ((ushort)((ulong)lVar6 >> 0x30) < 2) {
        puVar7 = (undefined8 *)
                 (*(long *)(param_1 + 0x30) +
                 (ulong)((uint)lVar6 & *(int *)(param_1 + 0x20) - 1U) * 8);
        puVar10 = (undefined8 *)*puVar7;
        if (puVar10 == (undefined8 *)0x0) goto LAB_009fc724;
        __ptr = (undefined8 *)(lVar3 + -0x10);
        while (puVar10 != __ptr) {
          puVar11 = (undefined8 *)*puVar10;
          puVar7 = puVar10;
          puVar10 = puVar11;
          if (puVar11 == (undefined8 *)0x0) goto LAB_009fc724;
        }
        *puVar7 = *__ptr;
        free(__ptr);
        *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + -1;
      }
      else {
        *(long *)(lVar3 + -8) = lVar6 + -0x1000000000000;
      }
      if (lVar12 != 0) break;
LAB_009fc734:
      uVar4 = 0;
    }
  } while( true );
}

