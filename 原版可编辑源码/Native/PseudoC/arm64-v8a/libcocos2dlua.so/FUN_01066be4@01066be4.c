
undefined8 FUN_01066be4(long *param_1,uint param_2,ulong *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  uint local_38;
  undefined1 local_34 [4];
  
  lVar3 = param_1[2];
  if ((ulong)param_1[1] <= lVar3 + 3U) {
    return 0x55;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar6 = (uint *)(*param_1 + lVar3);
    uVar7 = 0;
    if (puVar6 != (uint *)0x0) goto LAB_01066c50;
  }
  else {
    lVar3 = (*(code *)param_1[5])(param_1,lVar3,&local_38,4);
    if (lVar3 != 4) {
      return 0x55;
    }
    lVar3 = param_1[2];
    puVar6 = &local_38;
LAB_01066c50:
    uVar7 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
    uVar7 = uVar7 >> 0x10 | uVar7 << 0x10;
  }
  lVar8 = lVar3 + 4;
  param_1[2] = lVar8;
  if (uVar7 != param_2) {
    return 2;
  }
  if ((ulong)param_1[1] <= lVar3 + 7U) {
    return 0x55;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    uVar10 = lVar3 + 0x18;
    param_1[2] = lVar3 + 8;
  }
  else {
                    /* try { // try from 01066c80 to 01166c8b has its CatchHandler @ 01066cfc */
                    /* try { // try from 01066c8c to 01166d33 has its CatchHandler @ 01066b68 */
    lVar3 = (*(code *)param_1[5])(param_1,lVar8,&local_38,4);
    if (lVar3 != 4) {
      return 0x55;
    }
    lVar8 = param_1[2];
    uVar10 = lVar8 + 0x14;
    param_1[2] = lVar8 + 4;
    if ((code *)param_1[5] != (code *)0x0) {
      lVar3 = (*(code *)param_1[5])(param_1,uVar10,0,0);
      if (lVar3 != 0) {
        return 0x55;
      }
      uVar4 = param_1[1];
      goto LAB_01066cec;
    }
  }
  uVar4 = param_1[1];
  if (uVar4 < uVar10) {
    return 0x55;
  }
LAB_01066cec:
  param_1[2] = uVar10;
  if (lVar8 + 0x15U < uVar4) {
                    /* catch() { ... } // from try @ 01066c80 with catch @ 01066cfc */
    if ((code *)param_1[5] == (code *)0x0) {
      puVar5 = (undefined1 *)(*param_1 + uVar10);
      if (puVar5 == (undefined1 *)0x0) {
        param_1[2] = lVar8 + 0x16;
        return 2;
      }
    }
    else {
      lVar3 = (*(code *)param_1[5])(param_1,uVar10,local_34,2);
                    /* catch() { ... } // from try @ 01066bb0 with catch @ 01066d18 */
      if (lVar3 != 2) {
        return 0x55;
      }
      uVar10 = param_1[2];
      puVar5 = local_34;
    }
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    lVar3 = uVar10 + 2;
    param_1[2] = lVar3;
    if (CONCAT11(uVar1,uVar2) == 0) {
      return 2;
    }
    if (uVar10 + 5 < (ulong)param_1[1]) {
      iVar9 = 0;
      do {
        if ((code *)param_1[5] == (code *)0x0) {
          puVar6 = (uint *)(*param_1 + lVar3);
          if (puVar6 != (uint *)0x0) goto LAB_01066d9c;
          param_1[2] = lVar3 + 4;
LAB_01066dfc:
                    /* catch() { ... } // from try @ 01066e58 with catch @ 01066e00
                       catch() { ... } // from try @ 01066f3c with catch @ 01066e00 */
          uVar10 = lVar3 + 0xc;
          if ((code *)param_1[5] == (code *)0x0) {
            if ((ulong)param_1[1] < uVar10) {
              return 0x55;
            }
          }
          else {
            lVar3 = (*(code *)param_1[5])(param_1,uVar10,0,0);
            if (lVar3 != 0) {
              return 0x55;
            }
          }
          param_1[2] = uVar10;
        }
        else {
          lVar3 = (*(code *)param_1[5])(param_1,lVar3,&local_38,4);
          if (lVar3 != 4) {
            return 0x55;
          }
          lVar3 = param_1[2];
          puVar6 = &local_38;
LAB_01066d9c:
          uVar7 = (*puVar6 & 0xff00ff00) >> 8 | (*puVar6 & 0xff00ff) << 8;
          lVar8 = lVar3 + 4;
          param_1[2] = lVar8;
          if ((uVar7 >> 0x10 | uVar7 << 0x10) != 2) goto LAB_01066dfc;
          uVar10 = param_1[1];
          if (lVar3 + 7U < uVar10) {
            if ((code *)param_1[5] == (code *)0x0) {
                    /* try { // try from 01066e58 to 01166f2f has its CatchHandler @ 01066e00 */
              puVar6 = (uint *)(*param_1 + lVar8);
              if (puVar6 != (uint *)0x0) goto LAB_01066e60;
              uVar4 = 0;
            }
            else {
              lVar3 = (*(code *)param_1[5])(param_1,lVar8,&local_38,4);
              if (lVar3 != 4) goto LAB_01066e34;
              uVar10 = param_1[1];
              lVar8 = param_1[2];
              puVar6 = &local_38;
LAB_01066e60:
              uVar4 = (ulong)(byte)*puVar6 << 0x18 | (ulong)*(byte *)((long)puVar6 + 1) << 0x10 |
                      (ulong)*(byte *)((long)puVar6 + 2) << 8 | (ulong)*(byte *)((long)puVar6 + 3);
            }
            lVar3 = lVar8 + 4;
            param_1[2] = lVar3;
            if (lVar8 + 7U < uVar10) {
              if ((code *)param_1[5] == (code *)0x0) {
LAB_01066ec0:
                param_1[2] = lVar3 + 4;
                *param_3 = uVar4;
                return 0;
              }
              lVar3 = (*(code *)param_1[5])(param_1,lVar3,&local_38,4);
              if (lVar3 == 4) {
                lVar3 = param_1[2];
                goto LAB_01066ec0;
              }
            }
          }
        }
LAB_01066e34:
        iVar9 = iVar9 + 1;
        if ((int)(uint)CONCAT11(uVar1,uVar2) <= iVar9) {
          return 2;
        }
        lVar3 = param_1[2];
                    /* try { // try from 01066e4c to 01166e57 has its CatchHandler @ 01066ff8 */
      } while (lVar3 + 3U < (ulong)param_1[1]);
    }
  }
  return 0x55;
}

