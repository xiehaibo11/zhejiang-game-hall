
void FUN_00e96d60(undefined8 *param_1,undefined8 param_2,uint param_3,long *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lStack_490;
  long local_488;
  undefined1 auStack_480 [4];
  undefined1 auStack_47c [4];
  undefined1 auStack_478 [4];
  byte local_474;
  byte local_473;
  byte local_472;
  byte local_471;
  byte local_470 [7];
  byte local_469;
  byte local_468;
  byte local_467;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  lVar11 = *param_4;
  if (lVar11 == 0) {
    iVar6 = (*(code *)param_1[1])(param_2,0,0);
    while ((iVar6 == 0 && (iVar6 = (*(code *)*param_1)(local_470,1,10,param_2), 9 < iVar6))) {
      iVar6 = memcmp(&DAT_014294e2,local_470,3);
      if (iVar6 != 0) {
        lVar11 = *param_4;
        goto LAB_00e96da8;
      }
      lVar11 = *param_4 +
               (((ulong)local_470[6] & 0x7f) << 0x15 | ((ulong)local_469 & 0x7f) << 0xe |
                ((ulong)local_468 & 0x7f) << 7 | (ulong)local_467 & 0x7f) + 10;
      *param_4 = lVar11;
      iVar6 = (*(code *)param_1[1])(param_2,lVar11,0);
    }
    uVar10 = 0;
  }
  else {
LAB_00e96da8:
    bVar5 = false;
    lVar15 = 0;
    lVar13 = lVar11;
    while( true ) {
      lVar12 = 0;
      lVar14 = 0;
      while (lVar8 = lVar15 + lVar12, 3 < lVar8) {
        bVar3 = local_470[lVar14 + 3];
        uVar1 = (uint)local_470[lVar14] << 0x18 | (uint)local_470[lVar14 + 1] << 0x10 |
                (uint)local_470[lVar14 + 2] << 8;
        if ((param_3 == 0) || (((uVar1 ^ param_3) & 0xfffe0c00) == 0)) {
          uVar7 = FUN_00e971bc(uVar1 | bVar3,&local_488,auStack_478,auStack_47c,auStack_480,0);
          lVar11 = local_488;
          if (((((uVar7 & 1) != 0) &&
               (((iVar6 = (*(code *)param_1[1])(param_2,lVar13 + lVar14 + local_488,0), iVar6 == 0
                 && (lVar8 = (*(code *)*param_1)(&local_474,1,4,param_2), 3 < lVar8)) &&
                (uVar2 = (uint)local_474 << 0x18 | (uint)local_473 << 0x10 | (uint)local_472 << 8,
                ((uVar2 ^ uVar1) & 0xfffe0c00) == 0)))) &&
              ((((uVar7 = FUN_00e971bc(uVar2 | local_471,&lStack_490,0,0,0,0), lVar8 = lStack_490,
                 (uVar7 & 1) != 0 &&
                 (iVar6 = (*(code *)param_1[1])(param_2,lVar13 + lVar14 + lVar11 + lStack_490,0),
                 iVar6 == 0)) && (lVar9 = (*(code *)*param_1)(&local_474,1,4,param_2), 3 < lVar9))
               && ((uVar2 = (uint)local_474 << 0x18 | (uint)local_473 << 0x10 | (uint)local_472 << 8
                   , ((uVar2 ^ uVar1) & 0xfffe0c00) == 0 &&
                   (uVar7 = FUN_00e971bc(uVar2 | local_471,&lStack_490,0,0,0,0), (uVar7 & 1) != 0)))
               ))) && ((iVar6 = (*(code *)param_1[1])
                                          (param_2,lVar13 + lVar14 + lVar11 + lVar8 + lStack_490,0),
                       iVar6 == 0 &&
                       (((lVar11 = (*(code *)*param_1)(&local_474,1,4,param_2), 3 < lVar11 &&
                         (uVar2 = (uint)local_474 << 0x18 | (uint)local_473 << 0x10 |
                                  (uint)local_472 << 8, ((uVar2 ^ uVar1) & 0xfffe0c00) == 0)) &&
                        (uVar7 = FUN_00e971bc(uVar2 | local_471,&lStack_490,0,0,0,0),
                        (uVar7 & 1) != 0)))))) {
            *param_4 = lVar13 + lVar14;
            if (param_5 != (uint *)0x0) {
              *param_5 = uVar1 | bVar3;
            }
            uVar10 = 1;
            goto LAB_00e970d0;
          }
          lVar11 = *param_4;
        }
        lVar14 = lVar14 + 1;
        lVar12 = lVar12 + -1;
        if (lVar11 + 0x1ffff <= lVar13 + lVar14 + -1) goto LAB_00e970a8;
      }
      if (bVar5) break;
      lVar13 = lVar13 + lVar14;
      __memcpy_chk(local_470,local_470 + lVar14,lVar8,0x400);
      iVar6 = (*(code *)param_1[1])(param_2,lVar13 + lVar8,0);
      if ((iVar6 != 0) ||
         (lVar12 = (*(code *)*param_1)(local_470 + (lVar15 - lVar14),1,(lVar14 - lVar15) + 0x400,
                                       param_2), lVar12 < 1)) break;
      lVar11 = *param_4;
      bVar5 = lVar12 + lVar15 + -0x400 != lVar14;
      lVar15 = (lVar12 + lVar15) - lVar14;
      if (lVar11 + 0x20000 <= lVar13) break;
    }
LAB_00e970a8:
    uVar10 = 0;
  }
LAB_00e970d0:
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}

