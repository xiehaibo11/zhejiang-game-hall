
undefined8 FT_Outline_Decompose(short *param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  short sVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  byte *pbVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  long lVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 auVar18 [16];
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
                    /* catch() { ... } // from try @ 010610b0 with catch @ 0106111c */
  if (param_1 == (short *)0x0) {
LAB_010614bc:
    uVar7 = 0x14;
  }
  else if (param_2 == (undefined8 *)0x0) {
    uVar7 = 6;
  }
  else {
    if (0 < *param_1) {
      uVar1 = *(uint *)(param_2 + 4);
      uVar13 = CONCAT44(0,uVar1);
      lVar14 = param_2[5];
      lVar11 = 0;
      uVar15 = 0;
      do {
        sVar2 = *(short *)(*(long *)(param_1 + 0xc) + lVar11 * 2);
        if (sVar2 < 0) goto LAB_010614bc;
        pauVar10 = (undefined1 (*) [16])(*(long *)(param_1 + 4) + (ulong)uVar15 * 0x10);
        pauVar17 = (undefined1 (*) [16])(*(long *)(param_1 + 4) + (long)(int)sVar2 * 0x10);
        pbVar8 = (byte *)(*(long *)(param_1 + 8) + (ulong)uVar15);
        local_70 = (*(long *)*pauVar10 << (uVar13 & 0x3f)) - lVar14;
        lStack_68 = (*(long *)(*pauVar10 + 8) << (uVar13 & 0x3f)) - lVar14;
        if ((*pbVar8 & 3) == 0) {
          local_80 = (*(long *)*pauVar17 << (uVar13 & 0x3f)) - lVar14;
          lStack_78 = (*(long *)(*pauVar17 + 8) << (uVar13 & 0x3f)) - lVar14;
          if ((*(byte *)(*(long *)(param_1 + 8) + (long)(int)sVar2) & 3) == 1) {
            pauVar17 = pauVar17 + -1;
          }
          else {
            local_80 = local_70 + local_80;
            lStack_78 = lStack_68 + lStack_78;
            if (local_80 < 0) {
              local_80 = local_80 + 1;
            }
            if (lStack_78 < 0) {
              lStack_78 = lStack_78 + 1;
            }
            local_80 = local_80 >> 1;
            lStack_78 = lStack_78 >> 1;
          }
          pauVar10 = pauVar10 + -1;
          pbVar8 = pbVar8 + -1;
        }
        else {
          local_80 = local_70;
          lStack_78 = lStack_68;
          if ((*pbVar8 & 3) == 2) goto LAB_010614bc;
        }
        uVar7 = (*(code *)*param_2)(&local_80,param_3);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        if (pauVar10 < pauVar17) {
          uVar7 = 0;
          do {
            pbVar12 = pbVar8 + 1;
            pauVar16 = pauVar10 + 1;
            if ((*pbVar12 & 3) == 0) {
              auVar18._8_4_ = uVar1;
              auVar18._0_8_ = uVar13;
              auVar18._12_4_ = 0;
              auVar18 = NEON_ushl(*pauVar16,auVar18,8);
              local_70 = auVar18._0_8_ - lVar14;
              lStack_68 = auVar18._8_8_ - lVar14;
              do {
                if (pauVar17 <= pauVar16) {
                  uVar7 = (*(code *)param_2[2])(&local_70,&local_80,param_3);
                  goto LAB_01061454;
                }
                pauVar10 = pauVar16 + 1;
                pbVar12 = pbVar12 + 1;
                local_90 = (*(long *)*pauVar10 << (uVar13 & 0x3f)) - lVar14;
                lStack_88 = (*(long *)(pauVar16[1] + 8) << (uVar13 & 0x3f)) - lVar14;
                if ((*pbVar12 & 3) == 0) {
                  local_a0 = local_90 + local_70;
                  lStack_98 = lStack_88 + lStack_68;
                  if (local_a0 < 0) {
                    local_a0 = local_a0 + 1;
                  }
                  local_a0 = local_a0 >> 1;
                  if (lStack_98 < 0) {
                    lStack_98 = lStack_98 + 1;
                  }
                  lStack_98 = lStack_98 >> 1;
                  uVar7 = (*(code *)param_2[2])(&local_70,&local_a0,param_3);
                  if ((int)uVar7 == 0) {
                    iVar9 = 0x10;
                    lStack_68 = lStack_88;
                    local_70 = local_90;
                  }
                  else {
                    iVar9 = 10;
                  }
                }
                else if ((*pbVar12 & 3) == 1) {
                  uVar7 = (*(code *)param_2[2])(&local_70,&local_90,param_3);
                  iVar9 = 10;
                  if ((int)uVar7 == 0) {
                    iVar9 = 0xb;
                  }
                }
                else {
                  iVar9 = 7;
                }
                pauVar16 = pauVar16 + 1;
              } while (iVar9 == 0x10);
              if (iVar9 != 0xb) goto joined_r0x010614b0;
            }
            else if ((*pbVar12 & 3) == 1) {
              auVar3._8_4_ = uVar1;
              auVar3._0_8_ = uVar13;
              auVar3._12_4_ = 0;
              auVar18 = NEON_ushl(*pauVar16,auVar3,8);
              local_90 = auVar18._0_8_ - lVar14;
              lStack_88 = auVar18._8_8_ - lVar14;
              uVar7 = (*(code *)param_2[1])(&local_90,param_3);
              pauVar10 = pauVar16;
              if ((int)uVar7 != 0) {
                return uVar7;
              }
            }
            else {
              if ((pauVar17 < pauVar10 + 2) || ((pbVar8[2] & 3) != 2)) goto LAB_010614bc;
              auVar6._8_4_ = uVar1;
              auVar6._0_8_ = uVar13;
              auVar6._12_4_ = 0;
              auVar5._8_4_ = uVar1;
              auVar5._0_8_ = uVar13;
              auVar5._12_4_ = 0;
              auVar4._8_4_ = uVar1;
              auVar4._0_8_ = uVar13;
              auVar4._12_4_ = 0;
              pauVar16 = pauVar10 + 3;
              auVar18 = NEON_ushl(pauVar10[1],auVar4,8);
              local_90 = auVar18._0_8_ - lVar14;
              lStack_88 = auVar18._8_8_ - lVar14;
              auVar18 = NEON_ushl(pauVar10[2],auVar5,8);
              local_a0 = auVar18._0_8_ - lVar14;
              lStack_98 = auVar18._8_8_ - lVar14;
              if (pauVar17 < pauVar16) {
                uVar7 = (*(code *)param_2[3])(&local_90,&local_a0,&local_80,param_3);
                goto LAB_01061454;
              }
              auVar18 = NEON_ushl(*pauVar16,auVar6,8);
              local_b0 = auVar18._0_8_ - lVar14;
              lStack_a8 = auVar18._8_8_ - lVar14;
              uVar7 = (*(code *)param_2[3])(&local_90,&local_a0,&local_b0,param_3);
              if ((int)uVar7 != 0) {
                iVar9 = 10;
                goto joined_r0x010614b0;
              }
              pbVar12 = pbVar8 + 3;
              pauVar10 = pauVar16;
            }
            pbVar8 = pbVar12;
          } while (pauVar10 < pauVar17);
        }
        uVar7 = (*(code *)param_2[1])(&local_80,param_3);
LAB_01061454:
        iVar9 = 0;
        if ((int)uVar7 == 0) {
          uVar15 = (int)sVar2 + 1;
        }
        else {
          iVar9 = 10;
        }
joined_r0x010614b0:
        if (iVar9 != 0) {
          if (iVar9 != 7) {
            return uVar7;
          }
          goto LAB_010614bc;
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *param_1);
    }
    uVar7 = 0;
  }
  return uVar7;
}

