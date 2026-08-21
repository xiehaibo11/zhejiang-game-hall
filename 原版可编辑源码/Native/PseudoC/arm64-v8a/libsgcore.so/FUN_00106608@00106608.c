
void FUN_00106608(uint *param_1,undefined1 *param_2,uint param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  uint3 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  long alStack_98 [9];
  
  iVar5 = DAT_00113190;
  lVar3 = tpidr_el0;
  alStack_98[8] = *(long *)(lVar3 + 0x28);
  uVar6 = (DAT_00113194 + -1) * DAT_00113194;
  do {
    uVar1 = *param_1;
    uVar8 = param_3 * 8;
  } while (9 < DAT_00113190 && (uVar6 & 1) != 0);
  if (((~uVar1 < uVar8) && (param_1[1] = param_1[1] + 1, -1 < iVar5)) && ((int)uVar6 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar9 = param_1[1];
  uVar10 = uVar1;
  if ((-1 < iVar5) && ((int)uVar6 < 0)) goto LAB_00106754;
  while( true ) {
    uVar10 = uVar10 + uVar8;
    uVar9 = uVar9 + (param_3 >> 0x1d);
    *param_1 = uVar10;
    param_1[1] = uVar9;
    uVar6 = uVar1 >> 3 & 0x3f;
    if ((DAT_00113190 < 0) || (-1 < (DAT_00113194 + -1) * DAT_00113194)) break;
LAB_00106754:
    uVar9 = uVar9 + (param_3 >> 0x1d);
    *param_1 = uVar10 + uVar8;
    param_1[1] = uVar9;
    uVar10 = uVar10 + uVar8;
  }
  while( true ) {
    uVar1 = (DAT_00113194 + -1) * DAT_00113194;
    do {
    } while (9 < DAT_00113190 && (uVar1 & 1) != 0);
    if (param_3 == 0) break;
    if ((-1 < DAT_00113190) && ((int)uVar1 < 0)) goto LAB_001067bc;
    while( true ) {
      puVar11 = param_2 + 1;
      uVar1 = uVar6 + 1;
      *(undefined1 *)((long)param_1 + (long)(int)uVar6 + 0x18) = *param_2;
      uVar8 = (DAT_00113194 + -1) * DAT_00113194;
      if ((DAT_00113190 < 0) || (-1 < (int)uVar8)) break;
LAB_001067bc:
      *(undefined1 *)((long)param_1 + (long)(int)uVar6 + 0x18) = *param_2;
    }
    param_3 = param_3 - 1;
    uVar6 = uVar1;
    if (uVar1 == 0x40) {
      lVar7 = 0;
      do {
        puVar2 = (undefined8 *)((long)param_1 + lVar7 + 0x18);
        uVar12 = *puVar2;
        uVar4 = CONCAT12((char)((ulong)uVar12 >> 0x20),(short)uVar12) & 0xff00ff;
        *(undefined8 *)((long)alStack_98 + lVar7 + 8) = puVar2[1];
        *(ulong *)((long)alStack_98 + lVar7) =
             CONCAT17((char)((ulong)uVar12 >> 0x38),
                      CONCAT16((char)((ulong)uVar12 >> 0x30),
                               CONCAT15((char)((ulong)uVar12 >> 0x28),
                                        CONCAT14((char)(uVar4 >> 0x10),
                                                 CONCAT13((char)((ulong)uVar12 >> 0x18),
                                                          CONCAT12((char)((ulong)uVar12 >> 0x10),
                                                                   CONCAT11((char)((ulong)uVar12 >>
                                                                                  8),(char)uVar4))))
                                       )));
        lVar7 = lVar7 + 0x10;
      } while (lVar7 != 0x40);
      while( true ) {
        FUN_00106c48(param_1 + 2,alStack_98);
        uVar6 = 0;
        uVar8 = (DAT_00113194 + -1) * DAT_00113194;
        if ((DAT_00113190 < 10) || ((uVar8 & 1) == 0)) break;
        FUN_00106c48(param_1 + 2,alStack_98);
      }
    }
    do {
      param_2 = puVar11;
    } while (-1 < DAT_00113190 && (int)uVar8 < 0);
  }
  if ((-1 < DAT_00113190) && ((int)uVar1 < 0)) {
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*(long *)(lVar3 + 0x28) != alStack_98[8]) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

