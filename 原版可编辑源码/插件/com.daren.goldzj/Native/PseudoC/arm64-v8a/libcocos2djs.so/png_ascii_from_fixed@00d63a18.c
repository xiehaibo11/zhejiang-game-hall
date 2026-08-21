
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void png_ascii_from_fixed(undefined8 param_1,char *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  ulong uVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  char *pcVar17;
  uint uVar18;
  uint uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 local_73 [16];
  undefined1 local_63 [15];
  char acStack_54 [12];
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  if (param_3 < 0xd) {
LAB_00d63c48:
                    /* WARNING: Subroutine does not return */
    png_error(param_1,"ASCII conversion buffer too small");
  }
  pcVar16 = param_2;
  if ((int)param_4 < 0) {
    uVar4 = -(int)param_4;
    param_4 = (ulong)uVar4;
    pcVar16 = param_2 + 1;
    *param_2 = '-';
    if (0x80000000 < uVar4) goto LAB_00d63c48;
  }
  auVar6 = _DAT_018a88e0;
  if ((int)param_4 != 0) {
    uVar19 = 0x1c;
    uVar4 = 0xfffffffa;
    uVar18 = 0x10;
    do {
      uVar11 = uVar4;
      uVar12 = uVar19;
      uVar1 = (param_4 & 0xffffffff) / 10;
      uVar7 = (uint)param_4;
      iVar3 = uVar7 + (int)uVar1 * -10;
      uVar2 = uVar11 + 7;
      if (iVar3 == 0 || uVar18 != 0x10) {
        uVar2 = uVar18;
      }
      uVar4 = uVar11 + 1;
      acStack_54[uVar11 + 6] = (char)iVar3 + '0';
      param_4 = uVar1;
      uVar19 = uVar12 + 1;
      uVar18 = uVar2;
    } while (9 < uVar7);
    if (uVar4 != 0xfffffffa) {
      uVar19 = uVar11 + 7;
      pcVar17 = pcVar16;
      if (5 < uVar19) {
        uVar13 = (ulong)uVar4;
        uVar1 = uVar13 + 1;
        uVar8 = (ulong)uVar19;
        if (uVar1 < 0x20) {
LAB_00d63b6c:
          pcVar9 = acStack_54 + ((int)uVar8 - 1);
          do {
            uVar4 = (int)uVar8 - 1;
            uVar8 = (ulong)uVar4;
            *pcVar17 = *pcVar9;
            pcVar9 = pcVar9 + -1;
            pcVar17 = pcVar17 + 1;
          } while (5 < uVar4);
        }
        else {
          uVar4 = uVar11 + 0x22 & 0x1f;
          lVar14 = uVar1 - uVar4;
          if ((lVar14 == 0) ||
             ((pcVar16 < acStack_54 + (ulong)(uVar11 + 6) + 1 &&
              (acStack_54 + ((uVar11 + 6) - uVar13) < pcVar16 + uVar13 + 1)))) goto LAB_00d63b6c;
          uVar8 = uVar8 - lVar14;
          pcVar17 = pcVar16 + 0x10;
          uVar15 = (ulong)uVar19 + 0xffffffff;
          lVar10 = (uVar13 + 1) - (ulong)(uVar12 & 0x1f);
          do {
            uVar13 = uVar15 & 0xffffffff;
            lVar10 = lVar10 + -0x20;
            uVar15 = uVar15 - 0x20;
            auVar20 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(local_63 + uVar13),auVar6);
            auVar21 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(local_73 + uVar13),auVar6);
            *(long *)(pcVar17 + -8) = auVar20._8_8_;
            *(long *)(pcVar17 + -0x10) = auVar20._0_8_;
            *(long *)(pcVar17 + 8) = auVar21._8_8_;
            *(long *)pcVar17 = auVar21._0_8_;
            pcVar17 = pcVar17 + 0x20;
          } while (lVar10 != 0);
          pcVar17 = pcVar16 + lVar14;
          if (uVar4 != 0) goto LAB_00d63b6c;
        }
        pcVar17 = pcVar16 + uVar1;
        uVar19 = 5;
      }
      if (uVar2 < 6) {
        *pcVar17 = '.';
        pcVar16 = pcVar17 + 1;
        if (uVar19 < 5) {
          memset(pcVar17 + 1,0x30,(ulong)(4 - uVar19) + 1);
          pcVar16 = pcVar17 + (ulong)(4 - uVar19) + 2;
        }
        while (pcVar17 = pcVar16, uVar2 <= uVar19) {
          uVar19 = uVar19 - 1;
          *pcVar17 = acStack_54[uVar19];
          pcVar16 = pcVar17 + 1;
        }
      }
      goto LAB_00d63ad8;
    }
  }
  pcVar17 = pcVar16 + 1;
  *pcVar16 = '0';
LAB_00d63ad8:
  *pcVar17 = '\0';
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

