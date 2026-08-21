
void FUN_01466ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  byte bVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x19;
  long unaff_x20;
  long unaff_x26;
  long unaff_x29;
  
  *(int *)(unaff_x29 + -0x20) = ((int)unaff_x19 + -1) * 2;
  lVar12 = *(long *)(unaff_x29 + -8);
  bVar6 = *(byte *)(unaff_x20 + unaff_x19 + 1);
  iVar5 = *(int *)(unaff_x20 + unaff_x19 + 2);
  if (0xb < bVar6) {
    if (0x11 < bVar6) {
      if (0x14 < bVar6) {
        if (0x16 < bVar6) {
          if (bVar6 == 0x17) {
            lVar12 = thunk_FUN_0134a790(*(undefined8 *)(unaff_x29 + (long)iVar5 * 8));
            goto LAB_0146714c;
          }
          if (bVar6 == 0x18) {
            lVar12 = FUN_013492a0(*(undefined8 *)(unaff_x29 + (long)iVar5 * 8));
            goto LAB_0146714c;
          }
        }
        if (bVar6 == 0x15) {
          if ((*(ulong *)(unaff_x29 + (long)iVar5 * 8) & 1) == 0) {
            lVar12 = *(long *)(unaff_x26 + 0xb8);
          }
          else {
            lVar12 = *(long *)(unaff_x26 + 0xc0);
          }
          goto LAB_0146714c;
        }
        if (bVar6 == 0x16) {
          lVar12 = FUN_013e8ae0(*(undefined8 *)(unaff_x29 + (long)iVar5 * 8));
          goto LAB_0146714c;
        }
      }
      if (bVar6 == 0x12) {
        puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
        lVar12 = FUN_01369d20(*puVar2,puVar2[-1]);
        goto LAB_0146714c;
      }
      if (bVar6 == 0x13) {
        uVar9 = *(ulong *)(unaff_x29 + (long)iVar5 * 8);
        if ((uVar9 & 1) == 0) {
          lVar12 = *(long *)(unaff_x26 + 0xc0);
        }
        else if (*(short *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7) == 0x423) {
          lVar12 = *(long *)(unaff_x26 + 0xb8);
        }
        else {
          lVar12 = *(long *)(unaff_x26 + 0xc0);
        }
        goto LAB_0146714c;
      }
      if (bVar6 == 0x14) {
        uVar9 = *(ulong *)(unaff_x29 + (long)iVar5 * 8);
        if ((uVar9 & 1) == 0) {
          lVar12 = *(long *)(unaff_x26 + 0xc0);
        }
        else if (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7) < 0xa9) {
          lVar12 = *(long *)(unaff_x26 + 0xc0);
        }
        else {
          lVar12 = *(long *)(unaff_x26 + 0xb8);
        }
        goto LAB_0146714c;
      }
    }
    if (0xe < bVar6) {
      if (bVar6 == 0xf) {
        puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
        lVar12 = FUN_0136ac20(*puVar2,puVar2[-1]);
        goto LAB_0146714c;
      }
      if (bVar6 == 0x10) {
        puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
        lVar12 = FUN_0137aaa0(*puVar2,puVar2[-1]);
        goto LAB_0146714c;
      }
      if (bVar6 == 0x11) {
        uVar9 = *(ulong *)(unaff_x29 + (long)iVar5 * 8);
        if (((uVar9 & 1) == 0) || (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar9 - 1) + 7) < 0xa9))
        {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x20d8));
        }
        uVar7 = FUN_013c0ba0(uVar9,*(undefined8 *)(unaff_x26 + 0x848));
        uVar13 = **(ulong **)(unaff_x26 + 0x1428);
        lVar3 = unaff_x26 +
                (ulong)*(uint *)(unaff_x26 +
                                 (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar12 + -1) + 0x13)
                                + 0x37);
        lVar8 = (ulong)*(byte *)(lVar3 + 3) * 4;
        uVar4 = uVar13 + lVar8;
        if (uVar4 < **(ulong **)(unaff_x26 + 0x1430)) {
          lVar12 = uVar13 + 1;
          **(ulong **)(unaff_x26 + 0x1428) = uVar4;
        }
        else {
          lVar12 = FUN_01348560();
        }
        *(int *)(lVar12 + -1) = (int)lVar3;
        lVar8 = lVar8 + -1;
        uVar10 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
        *(undefined4 *)(lVar12 + 3) = uVar10;
        *(undefined4 *)(lVar12 + 7) = uVar10;
        if (lVar8 != 0xb) {
          uVar11 = *(undefined8 *)(unaff_x26 + 0xa0);
          do {
            lVar8 = lVar8 + -4;
            *(int *)(lVar12 + lVar8) = (int)uVar11;
          } while (lVar8 != 0xb);
        }
        *(int *)(lVar12 + 0xb) = (int)uVar9;
        *(undefined4 *)(lVar12 + 0xf) = uVar7;
        goto LAB_0146714c;
      }
    }
    if (bVar6 == 0xc) {
      *(undefined4 *)(*(long *)(unaff_x29 + (long)iVar5 * 8) + 0x1f) = 0xfffffffe;
      lVar12 = *(long *)(unaff_x26 + 0xa0);
      goto LAB_0146714c;
    }
    if (bVar6 == 0xd) {
      puVar1 = (uint *)(lVar12 + -1);
      for (; *(int *)(lVar12 + -1) !=
             *(int *)(unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*puVar1 + 0x13) + 0x1ab);
          lVar12 = unaff_x26 + (ulong)*(uint *)(lVar12 + 0xb)) {
      }
      lVar12 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(lVar12 + 0xf) + 0x2b);
      if ((int)lVar12 == (int)*(undefined8 *)(unaff_x26 + 0xa8)) {
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(0,*(undefined8 *)(unaff_x26 + 0x2138));
      }
      goto LAB_0146714c;
    }
    if (bVar6 == 0xe) {
      puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
      FUN_01347360(*(int *)(unaff_x20 + unaff_x19 + 6) + -2,*puVar2,puVar2 + -1);
      return;
    }
  }
  if (5 < bVar6) {
    if (8 < bVar6) {
      if (bVar6 == 9) {
        puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
        lVar12 = FUN_013babe0(*puVar2,puVar2[-1],puVar2[-2]);
        goto LAB_0146714c;
      }
      if (bVar6 == 10) {
        puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
        lVar12 = FUN_0137aba0(*puVar2,puVar2[-1]);
        goto LAB_0146714c;
      }
      if (bVar6 == 0xb) {
        lVar12 = unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x29 + (long)iVar5 * 8) + 0x1b);
        goto LAB_0146714c;
      }
    }
    if (bVar6 == 6) {
      puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
      lVar12 = FUN_013bc980(*puVar2,puVar2[-1]);
      goto LAB_0146714c;
    }
    if (bVar6 == 7) {
      puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
      lVar12 = FUN_013bab20(*puVar2,puVar2[-1]);
      goto LAB_0146714c;
    }
    if (bVar6 == 8) {
      puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
      lVar12 = FUN_013ba980(*puVar2,puVar2[-1],puVar2[-2]);
      goto LAB_0146714c;
    }
  }
  if (2 < bVar6) {
    if (bVar6 == 3) {
      puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
      lVar12 = FUN_01377620(*puVar2,puVar2[-1],puVar2[-2]);
      goto LAB_0146714c;
    }
    if (bVar6 == 4) {
      puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
      lVar12 = FUN_013776e0(*puVar2,puVar2[-1],puVar2[-2]);
      goto LAB_0146714c;
    }
    if (bVar6 == 5) {
      puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
      lVar12 = FUN_013bc480(*puVar2,puVar2[-1]);
      goto LAB_0146714c;
    }
  }
  if (bVar6 == 0) {
    puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
    lVar12 = FUN_013777c0(*puVar2,puVar2[-1]);
  }
  else if (bVar6 == 1) {
    puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
    lVar12 = FUN_01377ce0(*puVar2,puVar2[-1]);
  }
  else {
    if (bVar6 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x2630),param_3,*(undefined8 *)(unaff_x29 + -8));
    }
    puVar2 = (undefined8 *)(unaff_x29 + (long)iVar5 * 8);
    lVar12 = FUN_01377340(*puVar2,puVar2[-1]);
  }
LAB_0146714c:
                    /* WARNING: Could not recover jumptable at 0x0146717c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x26 + 0x13e0) +
              (ulong)*(byte *)(*(long *)(unaff_x29 + -0x18) +
                              ((long)((ulong)*(uint *)(unaff_x29 + -0x20) << 0x20) >> 0x21) + 0xb) *
              8))(lVar12);
  return;
}

