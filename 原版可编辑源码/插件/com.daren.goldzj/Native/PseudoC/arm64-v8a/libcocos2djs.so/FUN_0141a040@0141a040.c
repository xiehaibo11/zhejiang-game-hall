
long FUN_0141a040(undefined8 param_1,double param_2,double param_3,double param_4,double param_5)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  unkuint9 Var4;
  code *pcVar5;
  double *pdVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  double dVar13;
  undefined8 uVar14;
  ulong *puVar15;
  long lVar16;
  undefined4 uVar17;
  int iVar18;
  double dVar19;
  ulong uVar20;
  undefined4 uVar21;
  double dVar22;
  uint uVar23;
  ulong *puVar24;
  undefined8 uVar25;
  undefined4 *puVar26;
  long lVar27;
  long unaff_x26;
  long unaff_x27;
  double local_80;
  double local_78;
  double local_70;
  long local_68;
  ulong local_60;
  double local_58;
  double local_50;
  ulong local_48;
  double local_40;
  ulong local_38;
  double local_30;
  
  pdVar6 = &local_70;
  local_40 = param_3;
  local_30 = param_4;
  local_58 = param_5;
  if (((-1 < *(char *)(unaff_x26 + (ulong)*(uint *)((long)param_2 + -1) + 9)) ||
      (dVar9 = (double)(unaff_x26 + (ulong)*(uint *)((long)param_2 + 0x1b)),
      *(int *)((long)dVar9 - 1) != (int)*(undefined8 *)(unaff_x26 + 0xd0))) ||
     (*(int *)((long)dVar9 + 0x13) != (int)param_1)) {
    local_80 = param_2;
    local_78 = (double)param_1;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2228));
  }
  uVar23 = (uint)(*(byte *)((long)dVar9 + 10) >> 3);
  local_38 = (ulong)uVar23;
  if (uVar23 < 0x16) {
    if (uVar23 < 0x13) {
      if (uVar23 == 0x11) {
        local_48 = 0;
      }
      else {
        if (uVar23 != 0x12) {
LAB_0141b454:
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x141b458);
          (*pcVar5)();
        }
        local_48 = 0;
      }
    }
    else if (uVar23 == 0x13) {
      local_48 = 1;
    }
    else if (uVar23 == 0x14) {
      local_48 = 1;
    }
    else {
      if (uVar23 != 0x15) goto LAB_0141b454;
      local_48 = 2;
    }
  }
  else if (uVar23 < 0x19) {
    if (uVar23 == 0x16) {
      local_48 = 2;
    }
    else if (uVar23 == 0x17) {
      local_48 = 2;
    }
    else {
      if (uVar23 != 0x18) goto LAB_0141b454;
      local_48 = 3;
    }
  }
  else if (uVar23 == 0x19) {
    local_48 = 0;
  }
  else if (uVar23 == 0x1a) {
    local_48 = 3;
  }
  else {
    if (uVar23 != 0x1b) goto LAB_0141b454;
    local_48 = 3;
  }
  bVar7 = ((ulong)param_3 & 1) == 0;
  uVar17 = SUB84(dVar9,0);
  if (bVar7) {
LAB_0141a1e8:
    if (SUB84(param_3,0) == (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
      local_38 = 0;
      param_3 = dVar9;
    }
    else {
      if (!bVar7) {
        param_3 = (double)thunk_FUN_0134a630(param_3);
      }
      if (((ulong)param_3 & 1) == 0) {
        if (SUB84(param_3,0) < 0) goto LAB_0141b738;
        local_38 = ((long)param_3 << 0x20) >> 0x21;
      }
      else {
        dVar8 = *(double *)((long)param_3 + 3);
        if ((dVar8 < 0.0) || (9007199254740991.0 < dVar8)) goto LAB_0141b738;
        local_38 = (ulong)dVar8;
      }
    }
    dVar8 = (double)(unaff_x26 +
                    (ulong)*(uint *)(unaff_x26 +
                                     (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) +
                                                     0x13) + 0x23));
    if ((local_38 < 0x80000000) && (local_38 <= 0x1fffffffffffffU >> (local_48 & 0x3f))) {
      local_40 = (double)(local_38 << (local_48 & 0x3f));
      dVar19 = (double)(ulong)(0x3fffffffU < (ulong)local_40);
      if (0x3fffffffU < (ulong)local_40) {
        uVar10 = **(ulong **)(unaff_x26 + 0x1428);
        uVar12 = uVar10 + 0xc;
        local_30 = dVar8;
        local_50 = dVar19;
        if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
          param_3 = (double)(uVar10 + 1);
          **(ulong **)(unaff_x26 + 0x1428) = uVar12;
        }
        else {
          param_3 = (double)FUN_01348560(param_3,0xc);
        }
        *(int *)((long)param_3 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
        *(double *)((long)param_3 + 3) = (double)(ulong)local_40;
        dVar8 = local_30;
        dVar19 = local_50;
        local_80 = param_3;
      }
      else {
        local_80 = (double)(ulong)(uint)(SUB84(local_40,0) * 2);
      }
      lVar11 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
      lVar16 = unaff_x26 + (ulong)*(uint *)(lVar11 + 0x23);
      if (SUB84(dVar8,0) == (int)lVar16) {
        if ((ulong)local_40 < 0x41) {
          puVar15 = *(ulong **)(unaff_x26 + 0x1428);
          uVar21 = *(undefined4 *)(lVar11 + 0x27);
          puVar24 = *(ulong **)(unaff_x26 + 0x1430);
          uVar12 = *puVar15 + 0x30;
          if (uVar12 < *puVar24) {
            uVar10 = *puVar15 + 1;
            *puVar15 = uVar12;
          }
          else {
            local_50 = dVar19;
            uVar10 = FUN_01348560(param_3,0x30);
            puVar15 = *(ulong **)(unaff_x26 + 0x1428);
            puVar24 = *(ulong **)(unaff_x26 + 0x1430);
            dVar19 = local_50;
          }
          *(undefined4 *)(uVar10 - 1) = uVar21;
          uVar21 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
          *(undefined4 *)(uVar10 + 3) = uVar21;
          *(undefined4 *)(uVar10 + 7) = uVar21;
          dVar8 = 1.48219693752374e-323;
          *(undefined4 *)(uVar10 + 0x1b) = 3;
          *(double *)(uVar10 + 0xb) = local_40;
          *(undefined8 *)(uVar10 + 0x13) = 0;
          *(undefined4 *)(uVar10 + 0x1f) = 0;
          *(undefined4 *)(uVar10 + 0x23) = 0;
          *(undefined4 *)(uVar10 + 0x27) = 0;
          *(undefined4 *)(uVar10 + 0x2b) = 0;
          if (local_40 == 0.0) {
            dVar8 = *(double *)(unaff_x26 + 0x3c0);
            dVar19 = dVar8;
          }
          else {
            uVar12 = (long)local_40 + 0xbU & 0xfffffffffffffffc;
            iVar18 = SUB84(local_40,0);
            if (0x20000 < (long)uVar12) {
              if (SUB84(dVar19,0) == 0) {
                local_80 = (double)(ulong)(uint)(iVar18 * 2);
                local_48 = uVar10;
              }
              else {
                Var4 = (unkuint9)(ulong)local_40;
                uVar12 = *puVar15 + 0xc;
                if (uVar12 < *puVar24) {
                  local_80 = (double)(*puVar15 + 1);
                  *puVar15 = uVar12;
                  local_48 = uVar10;
                }
                else {
                  local_48 = uVar10;
                  local_80 = (double)FUN_01348560(3,0xc);
                }
                *(int *)((long)local_80 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
                *(double *)((long)local_80 + 3) = (double)(unkint9)Var4;
              }
              local_78 = 0.0;
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1f80));
            }
            uVar20 = *puVar15;
            uVar12 = uVar20 + uVar12;
            if (uVar12 < *puVar24) {
              *puVar15 = uVar12;
              dVar19 = (double)(uVar20 + 1);
            }
            else {
              local_48 = uVar10;
              dVar8 = (double)FUN_01348560();
              puVar15 = *(ulong **)(unaff_x26 + 0x1428);
              puVar24 = *(ulong **)(unaff_x26 + 0x1430);
              dVar19 = dVar8;
              uVar10 = local_48;
            }
            *(int *)((long)dVar19 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xd8);
            *(int *)((long)dVar19 + 3) = iVar18 * 2;
          }
          if ((*(uint *)((long)dVar9 + 0xb) >> 0x15 & 1) == 0) {
            dVar8 = *(double *)(unaff_x26 + 0x168);
          }
          else {
            uVar12 = *puVar15 + 0x4c;
            if (uVar12 < *puVar24) {
              dVar8 = (double)(*puVar15 + 1);
              *puVar15 = uVar12;
            }
            else {
              local_48 = uVar10;
              local_30 = dVar19;
              dVar8 = (double)FUN_01348560(dVar8,0x4c);
              puVar15 = *(ulong **)(unaff_x26 + 0x1428);
              puVar24 = *(ulong **)(unaff_x26 + 0x1430);
              dVar19 = local_30;
              uVar10 = local_48;
            }
            *(int *)((long)dVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x208);
            *(undefined4 *)((long)dVar8 + 3) = 0x22;
            if ((long)((ulong)*(uint *)((long)dVar8 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(0,0x141b5f0);
              (*pcVar5)();
            }
            *(undefined4 *)((long)dVar8 + 7) = 0;
            if ((ulong)((long)((ulong)*(uint *)((long)dVar8 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(0,0x141b5f8);
              (*pcVar5)();
            }
            *(undefined4 *)((long)dVar8 + 0xb) = 0;
            if ((ulong)((long)((ulong)*(uint *)((long)dVar8 + 3) << 0x20) >> 0x21) < 3) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(0,0x141b600);
              (*pcVar5)();
            }
            *(undefined4 *)((long)dVar8 + 0xf) = 8;
            if ((ulong)((long)((ulong)*(uint *)((long)dVar8 + 3) << 0x20) >> 0x21) < 4) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(0,0x141b608);
              (*pcVar5)();
            }
            *(undefined4 *)((long)dVar8 + 0x13) = 2;
            if ((ulong)((long)((ulong)*(uint *)((long)dVar8 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(0,0x141b610);
              (*pcVar5)();
            }
            *(undefined4 *)((long)dVar8 + 0x17) = 0;
            puVar26 = (undefined4 *)((long)dVar8 + 0x1b);
            if (puVar26 != (undefined4 *)((long)dVar8 + 0x4bU)) {
              uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
              do {
                *puVar26 = (int)uVar25;
                puVar26 = puVar26 + 1;
              } while (puVar26 != (undefined4 *)((long)dVar8 + 0x4bU));
            }
          }
          dVar13 = (double)((ulong)*(byte *)((long)dVar9 + 3) * 4);
          uVar12 = *puVar15 + (long)dVar13;
          if (uVar12 < *puVar24) {
            lVar11 = *puVar15 + 1;
            *puVar15 = uVar12;
          }
          else {
            local_58 = dVar8;
            local_50 = dVar13;
            local_48 = uVar10;
            local_30 = dVar19;
            lVar11 = FUN_01348560();
            dVar13 = local_50;
            dVar19 = local_30;
            uVar10 = local_48;
            dVar8 = local_58;
          }
          *(undefined4 *)(lVar11 + -1) = uVar17;
          *(int *)(lVar11 + 3) = SUB84(dVar8,0);
          lVar16 = (long)dVar13 - 1;
          *(int *)(lVar11 + 7) = (int)*(undefined8 *)(unaff_x26 + 0x168);
          uVar23 = *(uint *)((long)dVar9 + 0xb);
          if ((uVar23 & 0xe0000000) == 0) {
            if (lVar16 != 0xb) {
              uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
              do {
                lVar16 = lVar16 + -4;
                *(int *)(lVar11 + lVar16) = (int)uVar25;
              } while (lVar16 != 0xb);
            }
          }
          else {
            *(uint *)((long)dVar9 + 0xb) = uVar23 + 0xe0000000;
            lVar27 = (ulong)*(byte *)((long)dVar9 + 5) * 4 + -1;
            if (lVar16 != lVar27) {
              uVar25 = *(undefined8 *)(unaff_x26 + 0x88);
              do {
                lVar16 = lVar16 + -4;
                *(int *)(lVar11 + lVar16) = (int)uVar25;
              } while (lVar16 != lVar27);
            }
            if (lVar27 != 0xb) {
              uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
              do {
                lVar27 = lVar27 + -4;
                *(int *)(lVar11 + lVar27) = (int)uVar25;
              } while (lVar27 != 0xb);
            }
            if ((uVar23 & 0xe0000000) == 0x20000000) {
              local_78 = 0.0;
              local_80 = dVar9;
              local_48 = uVar10;
              local_30 = dVar19;
                    /* WARNING: Subroutine does not return */
              FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x21d0));
            }
          }
          iVar18 = SUB84(dVar19,0);
          *(int *)(lVar11 + 7) = iVar18;
          *(int *)(lVar11 + 0xb) = (int)uVar10;
          *(undefined8 *)(lVar11 + 0xf) = 0;
          *(double *)(lVar11 + 0x17) = local_40;
          *(ulong *)(lVar11 + 0x1f) = local_38;
          *(int *)(lVar11 + 0x2f) = iVar18;
          *(long *)(lVar11 + 0x27) = ((long)dVar19 - (long)iVar18) + 7;
          *(undefined4 *)(lVar11 + 0x33) = 0;
          *(undefined4 *)(lVar11 + 0x37) = 0;
          *(undefined4 *)(lVar11 + 0x3b) = 0;
          *(undefined4 *)(lVar11 + 0x3f) = 0;
          local_78 = *(double *)(lVar11 + 0x27);
          local_80 = (double)(ulong)*(uint *)(lVar11 + 0x2f);
          *(undefined8 *)(unaff_x26 + 0x40) = 0x141a568;
          *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
          (**(code **)(unaff_x26 + 0x11e0))((long)local_78 + (long)local_80);
          *(undefined8 *)(unaff_x26 + 0x38) = 0;
          return lVar11;
        }
        local_78 = *(double *)(unaff_x26 + 0xa0);
        dVar9 = (double)FUN_01341380(1,lVar16,local_40,lVar16);
      }
      else {
        local_78 = *(double *)(unaff_x26 + 0xa0);
        dVar9 = (double)FUN_01341380(1,lVar16);
      }
      if ((((ulong)dVar9 & 1) == 0) ||
         (*(short *)(unaff_x26 + (ulong)*(uint *)((long)dVar9 - 1) + 7) != 0x424)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x141a7f0);
        (*pcVar5)();
      }
      if ((*(uint *)((long)local_30 + 0xb) >> 0x15 & 1) == 0) {
        puVar24 = *(ulong **)(unaff_x26 + 0x1430);
        uVar10 = *(ulong *)(unaff_x26 + 0x168);
        puVar15 = *(ulong **)(unaff_x26 + 0x1428);
        local_40 = dVar9;
      }
      else {
        puVar15 = *(ulong **)(unaff_x26 + 0x1428);
        puVar24 = *(ulong **)(unaff_x26 + 0x1430);
        uVar12 = *puVar15 + 0x4c;
        if (uVar12 < *puVar24) {
          uVar10 = *puVar15 + 1;
          *puVar15 = uVar12;
        }
        else {
          local_40 = dVar9;
          uVar10 = FUN_01348560(dVar9,0x4c);
          puVar15 = *(ulong **)(unaff_x26 + 0x1428);
          puVar24 = *(ulong **)(unaff_x26 + 0x1430);
          dVar9 = local_40;
        }
        *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x208);
        *(undefined4 *)(uVar10 + 3) = 0x22;
        if ((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x141b6b4);
          (*pcVar5)();
        }
        *(undefined4 *)(uVar10 + 7) = 0;
        if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x141b6bc);
          (*pcVar5)();
        }
        *(undefined4 *)(uVar10 + 0xb) = 0;
        if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) < 3) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x141b6c4);
          (*pcVar5)();
        }
        *(undefined4 *)(uVar10 + 0xf) = 8;
        if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) < 4) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x141b6cc);
          (*pcVar5)();
        }
        *(undefined4 *)(uVar10 + 0x13) = 2;
        if ((ulong)((long)((ulong)*(uint *)(uVar10 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(0,0x141b6d4);
          (*pcVar5)();
        }
        *(undefined4 *)(uVar10 + 0x17) = 0;
        puVar26 = (undefined4 *)(uVar10 + 0x1b);
        local_40 = dVar9;
        if (puVar26 != (undefined4 *)(uVar10 + 0x4b)) {
          uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
          do {
            *puVar26 = (int)uVar25;
            puVar26 = puVar26 + 1;
          } while (puVar26 != (undefined4 *)(uVar10 + 0x4b));
        }
      }
      dVar9 = (double)((ulong)*(byte *)((long)local_30 + 3) * 4);
      uVar12 = *puVar15 + (long)dVar9;
      if (uVar12 < *puVar24) {
        local_38 = *puVar15 + 1;
        *puVar15 = uVar12;
      }
      else {
        local_60 = uVar10;
        local_58 = dVar9;
        local_38 = FUN_01348560();
        dVar9 = local_58;
        uVar10 = local_60;
      }
      *(int *)(local_38 + -1) = SUB84(local_30,0);
      *(int *)(local_38 + 3) = (int)uVar10;
      lVar11 = (long)dVar9 - 1;
      *(int *)(local_38 + 7) = (int)*(undefined8 *)(unaff_x26 + 0x168);
      uVar23 = *(uint *)((long)local_30 + 0xb);
      if ((uVar23 & 0xe0000000) == 0) {
        if (lVar11 != 0xb) {
          uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
          do {
            lVar11 = lVar11 + -4;
            *(int *)(local_38 + lVar11) = (int)uVar25;
          } while (lVar11 != 0xb);
        }
      }
      else {
        *(uint *)((long)local_30 + 0xb) = uVar23 + 0xe0000000;
        lVar16 = (ulong)*(byte *)((long)local_30 + 5) * 4 + -1;
        if (lVar11 != lVar16) {
          uVar25 = *(undefined8 *)(unaff_x26 + 0x88);
          do {
            lVar11 = lVar11 + -4;
            *(int *)(local_38 + lVar11) = (int)uVar25;
          } while (lVar11 != lVar16);
        }
        if (lVar16 != 0xb) {
          uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
          do {
            lVar16 = lVar16 + -4;
            *(int *)(local_38 + lVar16) = (int)uVar25;
          } while (lVar16 != 0xb);
        }
        if ((uVar23 & 0xe0000000) == 0x20000000) {
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x21d0));
        }
      }
      *(int *)(local_38 + 7) = (int)*(undefined8 *)(unaff_x26 + 0x3c0);
      *(int *)(local_38 + 0xb) = SUB84(local_40,0);
      *(undefined8 *)(local_38 + 0xf) = 0;
      *(double *)(local_38 + 0x17) = local_50;
      *(ulong *)(local_38 + 0x1f) = local_48;
      uVar25 = *(undefined8 *)((long)local_40 + 0x13);
      *(undefined4 *)(local_38 + 0x2f) = 0;
      *(undefined8 *)(local_38 + 0x27) = uVar25;
      *(undefined4 *)(local_38 + 0x33) = 0;
      *(undefined4 *)(local_38 + 0x37) = 0;
      *(undefined4 *)(local_38 + 0x3b) = 0;
      *(undefined4 *)(local_38 + 0x3f) = 0;
      return local_38;
    }
LAB_0141b738:
    local_80 = local_40;
    local_78 = 2.04543177378276e-321;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b0),local_40);
  }
  uVar2 = *(ushort *)(unaff_x26 + (ulong)*(uint *)((long)param_3 - 1) + 7);
  if (uVar2 == 0x424) {
    if (SUB84(param_4,0) == (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
      local_38 = 0;
    }
    else {
      if (((ulong)param_4 & 1) != 0) {
        param_4 = (double)thunk_FUN_0134a630();
      }
      if (((ulong)param_4 & 1) == 0) {
        if (SUB84(param_4,0) < 0) goto LAB_0141bc80;
        local_38 = ((long)param_4 << 0x20) >> 0x21;
      }
      else {
        dVar8 = *(double *)((long)param_4 + 3);
        if ((dVar8 < 0.0) || (9007199254740991.0 < dVar8)) goto LAB_0141bc80;
        local_38 = (ulong)dVar8;
      }
    }
    local_50 = (double)((1L << (local_48 & 0x3f)) - 1);
    if ((local_38 & (ulong)local_50) == 0) {
      bVar7 = SUB84(local_58,0) == (int)*(undefined8 *)(unaff_x26 + 0xa0);
      local_60 = (ulong)bVar7;
      if (bVar7) {
        dVar8 = 0.0;
      }
      else {
        dVar8 = local_58;
        if (((ulong)local_58 & 1) != 0) {
          dVar8 = (double)thunk_FUN_0134a630(local_58);
        }
        if (((ulong)dVar8 & 1) == 0) {
          if (SUB84(dVar8,0) < 0) goto LAB_0141b1f4;
          dVar8 = (double)(((long)dVar8 << 0x20) >> 0x21);
        }
        else {
          dVar8 = *(double *)((long)dVar8 + 3);
          if ((dVar8 < 0.0) || (9007199254740991.0 < dVar8)) goto LAB_0141b1f4;
          dVar8 = (double)(long)dVar8;
        }
      }
      dVar19 = local_30;
      if ((*(uint *)((long)local_40 + 0x1b) >> 2 & 1) != 0) {
        local_80 = (double)(unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x337));
        local_78 = 4.84184332924422e-322;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
      }
      uVar12 = *(ulong *)((long)local_40 + 0xb);
      if ((int)local_60 == 0) {
        if ((((0x7fffffff < (ulong)dVar8) || (0x1fffffffffffffU >> (local_48 & 0x3f) < (ulong)dVar8)
             ) || (uVar10 = (long)dVar8 << (local_48 & 0x3f), uVar12 < uVar10)) ||
           (uVar12 - uVar10 < local_38)) {
LAB_0141b1f4:
          local_78 = 2.04543177378276e-321;
          local_80 = local_58;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b0));
        }
LAB_0141b23c:
        if ((*(uint *)((long)dVar9 + 0xb) >> 0x15 & 1) == 0) {
          puVar24 = *(ulong **)(unaff_x26 + 0x1430);
          dVar19 = *(double *)(unaff_x26 + 0x168);
          puVar15 = *(ulong **)(unaff_x26 + 0x1428);
          local_48 = uVar10;
          local_30 = dVar8;
        }
        else {
          puVar15 = *(ulong **)(unaff_x26 + 0x1428);
          puVar24 = *(ulong **)(unaff_x26 + 0x1430);
          uVar12 = *puVar15 + 0x4c;
          if (uVar12 < *puVar24) {
            dVar19 = (double)(*puVar15 + 1);
            *puVar15 = uVar12;
          }
          else {
            local_48 = uVar10;
            local_30 = dVar8;
            dVar19 = (double)FUN_01348560(dVar19,0x4c);
            puVar15 = *(ulong **)(unaff_x26 + 0x1428);
            puVar24 = *(ulong **)(unaff_x26 + 0x1430);
            uVar10 = local_48;
            dVar8 = local_30;
          }
          *(int *)((long)dVar19 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x208);
          *(undefined4 *)((long)dVar19 + 3) = 0x22;
          if ((long)((ulong)*(uint *)((long)dVar19 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0,0x141bbe0);
            (*pcVar5)();
          }
          *(undefined4 *)((long)dVar19 + 7) = 0;
          if ((ulong)((long)((ulong)*(uint *)((long)dVar19 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0,0x141bbe8);
            (*pcVar5)();
          }
          *(undefined4 *)((long)dVar19 + 0xb) = 0;
          if ((ulong)((long)((ulong)*(uint *)((long)dVar19 + 3) << 0x20) >> 0x21) < 3) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0,0x141bbf0);
            (*pcVar5)();
          }
          *(undefined4 *)((long)dVar19 + 0xf) = 8;
          if ((ulong)((long)((ulong)*(uint *)((long)dVar19 + 3) << 0x20) >> 0x21) < 4) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0,0x141bbf8);
            (*pcVar5)();
          }
          *(undefined4 *)((long)dVar19 + 0x13) = 2;
          if ((ulong)((long)((ulong)*(uint *)((long)dVar19 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(0,0x141bc00);
            (*pcVar5)();
          }
          *(undefined4 *)((long)dVar19 + 0x17) = 0;
          puVar26 = (undefined4 *)((long)dVar19 + 0x1b);
          local_48 = uVar10;
          local_30 = dVar8;
          if (puVar26 != (undefined4 *)((long)dVar19 + 0x4bU)) {
            uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
            do {
              *puVar26 = (int)uVar25;
              puVar26 = puVar26 + 1;
            } while (puVar26 != (undefined4 *)((long)dVar19 + 0x4bU));
          }
        }
        dVar8 = (double)((ulong)*(byte *)((long)dVar9 + 3) * 4);
        uVar12 = *puVar15 + (long)dVar8;
        if (uVar12 < *puVar24) {
          lVar11 = *puVar15 + 1;
          *puVar15 = uVar12;
        }
        else {
          local_58 = dVar19;
          local_50 = dVar8;
          lVar11 = FUN_01348560();
          dVar8 = local_50;
          dVar19 = local_58;
        }
        *(undefined4 *)(lVar11 + -1) = uVar17;
        *(int *)(lVar11 + 3) = SUB84(dVar19,0);
        lVar16 = (long)dVar8 - 1;
        *(int *)(lVar11 + 7) = (int)*(undefined8 *)(unaff_x26 + 0x168);
        uVar23 = *(uint *)((long)dVar9 + 0xb);
        if ((uVar23 & 0xe0000000) == 0) {
          if (lVar16 != 0xb) {
            uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
            do {
              lVar16 = lVar16 + -4;
              *(int *)(lVar11 + lVar16) = (int)uVar25;
            } while (lVar16 != 0xb);
          }
        }
        else {
          *(uint *)((long)dVar9 + 0xb) = uVar23 + 0xe0000000;
          lVar27 = (ulong)*(byte *)((long)dVar9 + 5) * 4 + -1;
          if (lVar16 != lVar27) {
            uVar25 = *(undefined8 *)(unaff_x26 + 0x88);
            do {
              lVar16 = lVar16 + -4;
              *(int *)(lVar11 + lVar16) = (int)uVar25;
            } while (lVar16 != lVar27);
          }
          if (lVar27 != 0xb) {
            uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
            do {
              lVar27 = lVar27 + -4;
              *(int *)(lVar11 + lVar27) = (int)uVar25;
            } while (lVar27 != 0xb);
          }
          if ((uVar23 & 0xe0000000) == 0x20000000) {
            local_78 = 0.0;
            local_80 = dVar9;
                    /* WARNING: Subroutine does not return */
            FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x21d0));
          }
        }
        *(int *)(lVar11 + 7) = (int)*(undefined8 *)(unaff_x26 + 0x3c0);
        *(int *)(lVar11 + 0xb) = SUB84(local_40,0);
        *(ulong *)(lVar11 + 0xf) = local_38;
        *(ulong *)(lVar11 + 0x17) = local_48;
        *(double *)(lVar11 + 0x1f) = local_30;
        lVar16 = *(long *)((long)local_40 + 0x13);
        *(undefined4 *)(lVar11 + 0x2f) = 0;
        *(ulong *)(lVar11 + 0x27) = lVar16 + local_38;
        *(undefined4 *)(lVar11 + 0x33) = 0;
        *(undefined4 *)(lVar11 + 0x37) = 0;
        *(undefined4 *)(lVar11 + 0x3b) = 0;
        *(undefined4 *)(lVar11 + 0x3f) = 0;
        return lVar11;
      }
      if ((uVar12 & (ulong)local_50) == 0) {
        if (local_38 <= uVar12) {
          uVar10 = uVar12 - local_38;
          dVar8 = (double)(uVar10 >> (local_48 & 0x3f));
          if ((ulong)dVar8 < 0x80000000) goto LAB_0141b23c;
        }
LAB_0141bc80:
        local_78 = 1.93673733169769e-321;
        local_80 = local_30;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b0));
      }
      uVar23 = *(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x33b);
    }
    else {
      uVar23 = *(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x33f);
    }
    local_80 = (double)(unaff_x26 + (ulong)uVar23);
    local_78 = dVar9;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x2088));
  }
  if (uVar2 == 0x41b) {
    local_30 = (double)(unaff_x26 + (ulong)*(uint *)((long)param_3 + 0xb));
    local_58 = (double)(unaff_x26 +
                       (ulong)*(uint *)(unaff_x26 +
                                        (ulong)*(uint *)(unaff_x26 +
                                                         (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                                       0x23));
    if ((*(uint *)((long)local_30 + 0x1b) >> 2 & 1) == 0) {
      local_70 = *(double *)((long)param_3 + 0x1f);
    }
    else {
      local_70 = 0.0;
    }
    dVar8 = dVar9;
    dVar19 = local_58;
    if ((*(uint *)((long)local_30 + 0x1b) >> 4 & 1) == 0) {
      uVar12 = FUN_013c0ba0(local_30,*(undefined8 *)(unaff_x26 + 0x5d0));
      dVar19 = local_58;
      if ((int)uVar12 != (int)*(undefined8 *)(unaff_x26 + 0xa0)) {
        if (((uVar12 & 1) == 0) ||
           (*(ushort *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 7) < 0xa9)) {
          local_78 = 0.0;
          local_80 = 3.95252516672997e-322;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x20e8));
        }
        dVar13 = (double)FUN_013c0ba0(uVar12,*(undefined8 *)(unaff_x26 + 0xc48));
        dVar19 = local_58;
        if ((SUB84(dVar13,0) != (int)*(undefined8 *)(unaff_x26 + 0xa0) &&
             SUB84(dVar13,0) != (int)*(undefined8 *)(unaff_x26 + 0xb0)) &&
           ((((ulong)dVar13 & 1) == 0 ||
            (dVar19 = dVar13,
            (*(byte *)(unaff_x26 + (ulong)*(uint *)((long)dVar13 - 1) + 9) >> 6 & 1) == 0)))) {
          local_78 = 0.0;
          local_80 = 2.90510599754653e-321;
                    /* WARNING: Subroutine does not return */
          FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
        }
      }
      local_58 = dVar19;
      dVar19 = local_58;
      if ((*(uint *)((long)local_30 + 0x1b) >> 2 & 1) != 0) {
        local_70 = 0.0;
      }
    }
  }
  else {
    if (uVar2 < 0xa9) goto LAB_0141a1e8;
    uVar12 = FUN_013c0ba0(param_3,*(undefined8 *)(unaff_x26 + 0xc18),param_3,param_4,dVar9);
    if (((int)uVar12 == (int)*(undefined8 *)(unaff_x26 + 0xa0)) ||
       ((int)uVar12 == (int)*(undefined8 *)(unaff_x26 + 0xb0))) {
      uVar12 = FUN_013c0ba0(local_40,*(undefined8 *)(unaff_x26 + 0x7b8));
      if ((uVar12 & 1) == 0) {
        if ((int)uVar12 < 0) {
          uVar12 = 0;
        }
      }
      else {
        uVar12 = thunk_FUN_0134a790();
      }
      if ((uVar12 & 1) == 0) {
        local_70 = (double)((long)(uVar12 << 0x20) >> 0x21);
      }
      else {
        local_70 = (double)(long)*(double *)(uVar12 + 3);
      }
      uVar23 = *(uint *)(unaff_x26 +
                         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                        0x23);
    }
    else {
      if (((uVar12 & 1) == 0) ||
         ((*(byte *)(unaff_x26 + (ulong)*(uint *)(uVar12 - 1) + 9) >> 1 & 1) == 0)) {
        local_78 = 0.0;
        local_80 = 6.8181059126092e-322;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x20e8));
      }
      local_40 = (double)FUN_0138c280(local_40,uVar12);
      uVar12 = unaff_x26 + (ulong)*(uint *)((long)local_40 + 0xb);
      if ((uVar12 & 1) == 0) {
        local_70 = (double)((long)(uVar12 << 0x20) >> 0x21);
      }
      else {
        local_70 = (double)(long)*(double *)(uVar12 + 3);
      }
      uVar23 = *(uint *)(unaff_x26 +
                         (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13) +
                        0x23);
    }
    dVar8 = local_40;
    dVar19 = (double)(unaff_x26 + (ulong)uVar23);
  }
  if ((0x7fffffff < (ulong)local_70) || (0x1fffffffffffffU >> (local_48 & 0x3f) < (ulong)local_70))
  {
    if ((ulong)local_70 < 0x40000000) {
      local_80 = (double)(ulong)(uint)(SUB84(local_70,0) * 2);
    }
    else {
      uVar10 = **(ulong **)(unaff_x26 + 0x1428);
      uVar12 = uVar10 + 0xc;
      if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
        local_80 = (double)(uVar10 + 1);
        **(ulong **)(unaff_x26 + 0x1428) = uVar12;
      }
      else {
        local_80 = (double)FUN_01348560(dVar8,0xc);
      }
      *(int *)((long)local_80 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
      *(double *)((long)local_80 + 3) = (double)(ulong)local_70;
    }
    local_78 = 2.04543177378276e-321;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20b0));
  }
  local_50 = (double)((long)local_70 << (local_48 & 0x3f));
  dVar13 = (double)(ulong)(0x3fffffff < (ulong)local_50);
  if (0x3fffffff < (ulong)local_50) {
    uVar10 = **(ulong **)(unaff_x26 + 0x1428);
    uVar12 = uVar10 + 0xc;
    local_30 = dVar13;
    local_58 = dVar19;
    if (uVar12 < **(ulong **)(unaff_x26 + 0x1430)) {
      dVar8 = (double)(uVar10 + 1);
      **(ulong **)(unaff_x26 + 0x1428) = uVar12;
    }
    else {
      dVar8 = (double)FUN_01348560(dVar8,0xc);
    }
    *(int *)((long)dVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
    *(double *)((long)dVar8 + 3) = (double)(ulong)local_50;
    dVar19 = local_58;
    dVar13 = local_30;
    dVar22 = dVar8;
  }
  else {
    dVar22 = (double)(ulong)(uint)(SUB84(local_50,0) * 2);
  }
  lVar11 = unaff_x26 + (ulong)*(uint *)(unaff_x26 + (ulong)*(uint *)(unaff_x27 + -1) + 0x13);
  lVar16 = unaff_x26 + (ulong)*(uint *)(lVar11 + 0x23);
  if (SUB84(dVar19,0) == (int)lVar16) {
    if (0x40 < (ulong)local_50) {
      local_78 = *(double *)(unaff_x26 + 0xa0);
      local_80 = dVar22;
      dVar9 = (double)FUN_0133fb80(1,unaff_x26 + (ulong)*(uint *)(lVar11 + 0x2b));
      goto LAB_0141ad68;
    }
    puVar15 = *(ulong **)(unaff_x26 + 0x1428);
    uVar23 = *(uint *)(lVar11 + 0x27);
    puVar24 = *(ulong **)(unaff_x26 + 0x1430);
    uVar12 = *puVar15 + 0x30;
    if (uVar12 < *puVar24) {
      dVar8 = (double)(*puVar15 + 1);
      *puVar15 = uVar12;
    }
    else {
      local_48 = (ulong)uVar23;
      local_30 = dVar13;
      dVar8 = (double)FUN_01348560(dVar8,0x30);
      puVar15 = *(ulong **)(unaff_x26 + 0x1428);
      puVar24 = *(ulong **)(unaff_x26 + 0x1430);
      uVar23 = (uint)local_48;
      dVar13 = local_30;
    }
    *(uint *)((long)dVar8 - 1) = uVar23;
    uVar21 = (undefined4)*(undefined8 *)(unaff_x26 + 0x168);
    *(undefined4 *)((long)dVar8 + 3) = uVar21;
    *(undefined4 *)((long)dVar8 + 7) = uVar21;
    *(undefined4 *)((long)dVar8 + 0x1b) = 3;
    *(double *)((long)dVar8 + 0xb) = local_50;
    *(undefined8 *)((long)dVar8 + 0x13) = 0;
    *(undefined4 *)((long)dVar8 + 0x1f) = 0;
    *(undefined4 *)((long)dVar8 + 0x23) = 0;
    *(undefined4 *)((long)dVar8 + 0x27) = 0;
    *(undefined4 *)((long)dVar8 + 0x2b) = 0;
    if (local_50 == 0.0) {
      uVar12 = *(ulong *)(unaff_x26 + 0x3c0);
    }
    else {
      uVar10 = (long)local_50 + 0xbU & 0xfffffffffffffffc;
      if (0x20000 < (long)uVar10) {
        if (SUB84(dVar13,0) == 0) {
          local_80 = (double)(ulong)(uint)(SUB84(local_50,0) * 2);
          local_58 = dVar8;
        }
        else {
          local_30 = (double)(ulong)local_50;
          uVar12 = *puVar15 + 0xc;
          if (uVar12 < *puVar24) {
            local_80 = (double)(*puVar15 + 1);
            *puVar15 = uVar12;
            local_58 = dVar8;
          }
          else {
            local_58 = dVar8;
            local_80 = (double)FUN_01348560(3,0xc);
          }
          *(int *)((long)local_80 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
          *(double *)((long)local_80 + 3) = local_30;
        }
        local_78 = 0.0;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x1f80));
      }
      uVar23 = SUB84(local_50,0) * 2;
      uVar10 = *puVar15 + uVar10;
      if (uVar10 < *puVar24) {
        uVar12 = *puVar15 + 1;
        *puVar15 = uVar10;
      }
      else {
        local_58 = dVar8;
        local_30 = (double)(ulong)uVar23;
        uVar12 = FUN_01348560();
        puVar15 = *(ulong **)(unaff_x26 + 0x1428);
        puVar24 = *(ulong **)(unaff_x26 + 0x1430);
        uVar23 = SUB84(local_30,0);
        dVar8 = local_58;
      }
      *(int *)(uVar12 - 1) = (int)*(undefined8 *)(unaff_x26 + 0xd8);
      *(uint *)(uVar12 + 3) = uVar23;
    }
    if ((*(uint *)((long)dVar9 + 0xb) >> 0x15 & 1) == 0) {
      lVar11 = *(long *)(unaff_x26 + 0x168);
    }
    else {
      uVar10 = *puVar15 + 0x4c;
      if (uVar10 < *puVar24) {
        lVar11 = *puVar15 + 1;
        *puVar15 = uVar10;
      }
      else {
        local_58 = dVar8;
        local_48 = uVar12;
        lVar11 = FUN_01348560(3,0x4c);
        puVar15 = *(ulong **)(unaff_x26 + 0x1428);
        puVar24 = *(ulong **)(unaff_x26 + 0x1430);
        uVar12 = local_48;
        dVar8 = local_58;
      }
      *(int *)(lVar11 + -1) = (int)*(undefined8 *)(unaff_x26 + 0x208);
      *(undefined4 *)(lVar11 + 3) = 0x22;
      if ((long)((ulong)*(uint *)(lVar11 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x141b94c);
        (*pcVar5)();
      }
      *(undefined4 *)(lVar11 + 7) = 0;
      if ((ulong)((long)((ulong)*(uint *)(lVar11 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x141b954);
        (*pcVar5)();
      }
      *(undefined4 *)(lVar11 + 0xb) = 0;
      if ((ulong)((long)((ulong)*(uint *)(lVar11 + 3) << 0x20) >> 0x21) < 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x141b95c);
        (*pcVar5)();
      }
      *(undefined4 *)(lVar11 + 0xf) = 8;
      if ((ulong)((long)((ulong)*(uint *)(lVar11 + 3) << 0x20) >> 0x21) < 4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x141b964);
        (*pcVar5)();
      }
      *(undefined4 *)(lVar11 + 0x13) = 2;
      if ((ulong)((long)((ulong)*(uint *)(lVar11 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x141b96c);
        (*pcVar5)();
      }
      *(undefined4 *)(lVar11 + 0x17) = 0;
      puVar26 = (undefined4 *)(lVar11 + 0x1b);
      if (puVar26 != (undefined4 *)(lVar11 + 0x4b)) {
        uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
        do {
          *puVar26 = (int)uVar25;
          puVar26 = puVar26 + 1;
        } while (puVar26 != (undefined4 *)(lVar11 + 0x4b));
      }
    }
    uVar20 = (ulong)*(byte *)((long)dVar9 + 3) * 4;
    uVar10 = *puVar15 + uVar20;
    if (uVar10 < *puVar24) {
      lVar16 = *puVar15 + 1;
      *puVar15 = uVar10;
    }
    else {
      local_68 = lVar11;
      local_60 = uVar20;
      local_58 = dVar8;
      local_48 = uVar12;
      lVar16 = FUN_01348560();
      uVar20 = local_60;
      uVar12 = local_48;
      dVar8 = local_58;
      lVar11 = local_68;
    }
    *(undefined4 *)(lVar16 + -1) = uVar17;
    lVar27 = uVar20 - 1;
    *(int *)(lVar16 + 3) = (int)lVar11;
    *(int *)(lVar16 + 7) = (int)*(undefined8 *)(unaff_x26 + 0x168);
    uVar23 = *(uint *)((long)dVar9 + 0xb);
    if ((uVar23 & 0xe0000000) == 0) {
      if (lVar27 != 0xb) {
        uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
        do {
          lVar27 = lVar27 + -4;
          *(int *)(lVar16 + lVar27) = (int)uVar25;
        } while (lVar27 != 0xb);
      }
    }
    else {
      *(uint *)((long)dVar9 + 0xb) = uVar23 + 0xe0000000;
      lVar11 = (ulong)*(byte *)((long)dVar9 + 5) * 4 + -1;
      if (lVar27 != lVar11) {
        uVar25 = *(undefined8 *)(unaff_x26 + 0x88);
        do {
          lVar27 = lVar27 + -4;
          *(int *)(lVar16 + lVar27) = (int)uVar25;
        } while (lVar27 != lVar11);
      }
      if (lVar11 != 0xb) {
        uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
        do {
          lVar11 = lVar11 + -4;
          *(int *)(lVar16 + lVar11) = (int)uVar25;
        } while (lVar11 != 0xb);
      }
      if ((uVar23 & 0xe0000000) == 0x20000000) {
        local_78 = 0.0;
        local_80 = dVar9;
        local_58 = dVar8;
        local_48 = uVar12;
        local_30 = (double)lVar16;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x21d0));
      }
    }
    iVar18 = (int)uVar12;
    *(int *)(lVar16 + 7) = iVar18;
    *(int *)(lVar16 + 0xb) = SUB84(dVar8,0);
    *(undefined8 *)(lVar16 + 0xf) = 0;
    *(double *)(lVar16 + 0x17) = local_50;
    *(double *)(lVar16 + 0x1f) = local_70;
    *(int *)(lVar16 + 0x2f) = iVar18;
    *(ulong *)(lVar16 + 0x27) = (uVar12 - (long)iVar18) + 7;
    *(undefined4 *)(lVar16 + 0x33) = 0;
    *(undefined4 *)(lVar16 + 0x37) = 0;
    *(undefined4 *)(lVar16 + 0x3b) = 0;
    *(undefined4 *)(lVar16 + 0x3f) = 0;
    dVar9 = local_40;
    dVar8 = local_70;
  }
  else {
    local_78 = *(double *)(unaff_x26 + 0xa0);
    local_80 = dVar22;
    dVar9 = (double)FUN_01341380(1,lVar16,local_40,dVar19);
LAB_0141ad68:
    pdVar6 = &local_80;
    if ((((ulong)dVar9 & 1) == 0) ||
       (*(short *)(unaff_x26 + (ulong)*(uint *)((long)dVar9 - 1) + 7) != 0x424)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(0,0x141b048);
      (*pcVar5)();
    }
    if ((*(uint *)((long)local_30 + 0xb) >> 0x15 & 1) == 0) {
      puVar24 = *(ulong **)(unaff_x26 + 0x1430);
      dVar8 = *(double *)(unaff_x26 + 0x168);
      puVar15 = *(ulong **)(unaff_x26 + 0x1428);
    }
    else {
      puVar15 = *(ulong **)(unaff_x26 + 0x1428);
      puVar24 = *(ulong **)(unaff_x26 + 0x1430);
      uVar12 = *puVar15 + 0x4c;
      if (uVar12 < *puVar24) {
        dVar8 = (double)(*puVar15 + 1);
        *puVar15 = uVar12;
      }
      else {
        local_58 = dVar9;
        dVar8 = (double)FUN_01348560(dVar9,0x4c);
        puVar15 = *(ulong **)(unaff_x26 + 0x1428);
        puVar24 = *(ulong **)(unaff_x26 + 0x1430);
        dVar9 = local_58;
      }
      *(int *)((long)dVar8 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x208);
      *(undefined4 *)((long)dVar8 + 3) = 0x22;
      if ((long)((ulong)*(uint *)((long)dVar8 + 3) << 0x20) >> 0x21 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x141ba30);
        (*pcVar5)();
      }
      *(undefined4 *)((long)dVar8 + 7) = 0;
      if ((ulong)((long)((ulong)*(uint *)((long)dVar8 + 3) << 0x20) >> 0x21) < 2) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x141ba38);
        (*pcVar5)();
      }
      *(undefined4 *)((long)dVar8 + 0xb) = 0;
      if ((ulong)((long)((ulong)*(uint *)((long)dVar8 + 3) << 0x20) >> 0x21) < 3) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x141ba40);
        (*pcVar5)();
      }
      *(undefined4 *)((long)dVar8 + 0xf) = 8;
      if ((ulong)((long)((ulong)*(uint *)((long)dVar8 + 3) << 0x20) >> 0x21) < 4) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x141ba48);
        (*pcVar5)();
      }
      *(undefined4 *)((long)dVar8 + 0x13) = 2;
      if ((ulong)((long)((ulong)*(uint *)((long)dVar8 + 3) << 0x20) >> 0x21) < 5) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(0,0x141ba50);
        (*pcVar5)();
      }
      *(undefined4 *)((long)dVar8 + 0x17) = 0;
      puVar26 = (undefined4 *)((long)dVar8 + 0x1b);
      if (puVar26 != (undefined4 *)((long)dVar8 + 0x4bU)) {
        uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
        do {
          *puVar26 = (int)uVar25;
          puVar26 = puVar26 + 1;
        } while (puVar26 != (undefined4 *)((long)dVar8 + 0x4bU));
      }
    }
    lVar11 = (ulong)*(byte *)((long)local_30 + 3) * 4;
    uVar12 = *puVar15 + lVar11;
    if (uVar12 < *puVar24) {
      lVar16 = *puVar15 + 1;
      *puVar15 = uVar12;
    }
    else {
      local_70 = dVar8;
      local_68 = lVar11;
      local_58 = dVar9;
      lVar16 = FUN_01348560();
      dVar9 = local_58;
      lVar11 = local_68;
      dVar8 = local_70;
    }
    *(int *)(lVar16 + -1) = SUB84(local_30,0);
    *(int *)(lVar16 + 3) = SUB84(dVar8,0);
    lVar11 = lVar11 + -1;
    *(int *)(lVar16 + 7) = (int)*(undefined8 *)(unaff_x26 + 0x168);
    uVar23 = *(uint *)((long)local_30 + 0xb);
    if ((uVar23 & 0xe0000000) == 0) {
      if (lVar11 != 0xb) {
        uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
        do {
          lVar11 = lVar11 + -4;
          *(int *)(lVar16 + lVar11) = (int)uVar25;
        } while (lVar11 != 0xb);
      }
    }
    else {
      *(uint *)((long)local_30 + 0xb) = uVar23 + 0xe0000000;
      lVar27 = (ulong)*(byte *)((long)local_30 + 5) * 4 + -1;
      if (lVar11 != lVar27) {
        uVar25 = *(undefined8 *)(unaff_x26 + 0x88);
        do {
          lVar11 = lVar11 + -4;
          *(int *)(lVar16 + lVar11) = (int)uVar25;
        } while (lVar11 != lVar27);
      }
      if (lVar27 != 0xb) {
        uVar25 = *(undefined8 *)(unaff_x26 + 0xa0);
        do {
          lVar27 = lVar27 + -4;
          *(int *)(lVar16 + lVar27) = (int)uVar25;
        } while (lVar27 != 0xb);
      }
      if ((uVar23 & 0xe0000000) == 0x20000000) {
        local_58 = dVar9;
        local_40 = (double)lVar16;
                    /* WARNING: Subroutine does not return */
        FUN_013be7e0(1,*(undefined8 *)(unaff_x26 + 0x21d0));
      }
    }
    *(int *)(lVar16 + 7) = (int)*(undefined8 *)(unaff_x26 + 0x3c0);
    *(int *)(lVar16 + 0xb) = SUB84(dVar9,0);
    *(undefined8 *)(lVar16 + 0xf) = 0;
    *(ulong *)(lVar16 + 0x17) = local_60;
    *(double *)(lVar16 + 0x1f) = local_80;
    uVar25 = *(undefined8 *)((long)dVar9 + 0x13);
    *(undefined4 *)(lVar16 + 0x2f) = 0;
    *(undefined8 *)(lVar16 + 0x27) = uVar25;
    *(undefined4 *)(lVar16 + 0x33) = 0;
    *(undefined4 *)(lVar16 + 0x37) = 0;
    *(undefined4 *)(lVar16 + 0x3b) = 0;
    *(undefined4 *)(lVar16 + 0x3f) = 0;
    dVar9 = local_50;
    dVar8 = local_80;
  }
  lVar11 = unaff_x26 + (ulong)*(uint *)((long)dVar9 - 1);
  sVar3 = *(short *)(lVar11 + 7);
  *(long *)((long)pdVar6 + 0x40) = lVar16;
  if (sVar3 == 0x41b) {
    if ((*(uint *)(unaff_x26 + (ulong)*(uint *)((long)dVar9 + 0xb) + 0x1b) >> 2 & 1) != 0) {
      *(ulong *)((long)pdVar6 + -0x10) =
           unaff_x26 + (ulong)*(uint *)(*(long *)(unaff_x26 + 0xf30) + 0x337);
      *(undefined8 *)((long)pdVar6 + -8) = 0x62;
                    /* WARNING: Subroutine does not return */
      FUN_013be7e0(2,*(undefined8 *)(unaff_x26 + 0x20e8));
    }
    if ((uint)*(undefined8 *)((long)pdVar6 + 0x38) == (uint)(*(byte *)(lVar11 + 10) >> 3)) {
      if (dVar8 != 0.0) {
        lVar11 = *(long *)(lVar16 + 0x27);
        uVar23 = *(uint *)(lVar16 + 0x2f);
        lVar27 = *(long *)((long)dVar9 + 0x27);
        uVar1 = *(uint *)((long)dVar9 + 0x2f);
        uVar14 = *(undefined8 *)(lVar16 + 0x17);
        pcVar5 = *(code **)(unaff_x26 + 0x11d0);
        *(ulong *)((long)pdVar6 + -0x10) = (ulong)uVar23;
        *(long *)((long)pdVar6 + -8) = lVar11;
        *(undefined8 *)(unaff_x26 + 0x40) = 0x141afe0;
        *(undefined1 **)(unaff_x26 + 0x38) = &stack0xfffffffffffffff0;
        uVar25 = *(undefined8 *)((long)pdVar6 + -8);
        (*pcVar5)(lVar11 + (ulong)uVar23,lVar27 + (ulong)uVar1,uVar14);
        *(undefined8 *)((long)pdVar6 + -0x10) = 0;
        *(undefined8 *)((long)pdVar6 + -8) = uVar25;
        *(undefined8 *)(unaff_x26 + 0x38) = 0;
      }
      goto LAB_0141b00c;
    }
  }
  if (dVar8 != 0.0) {
    if ((ulong)dVar8 < 0x40000000) {
      uVar10 = (ulong)(uint)(SUB84(dVar8,0) * 2);
    }
    else {
      puVar15 = *(ulong **)(unaff_x26 + 0x1428);
      uVar10 = *puVar15;
      uVar20 = **(ulong **)(unaff_x26 + 0x1430);
      uVar12 = uVar10 + 0xc;
      *(double *)((long)pdVar6 + 0x50) = (double)(ulong)dVar8;
      if (uVar12 < uVar20) {
        uVar10 = uVar10 + 1;
        *puVar15 = uVar12;
      }
      else {
        uVar10 = FUN_01348560(3,0xc);
        lVar16 = *(long *)((long)pdVar6 + 0x40);
        dVar9 = *(double *)((long)pdVar6 + 0x30);
      }
      *(int *)(uVar10 - 1) = (int)*(undefined8 *)(unaff_x26 + 0x140);
      *(undefined8 *)(uVar10 + 3) = *(undefined8 *)((long)pdVar6 + 0x50);
    }
    *(undefined8 *)((long)pdVar6 + -8) = 0;
    *(double *)((long)pdVar6 + -0x18) = dVar9;
    *(long *)((long)pdVar6 + -0x10) = lVar16;
    *(ulong *)((long)pdVar6 + -0x20) = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_013be7e0(3,*(undefined8 *)(unaff_x26 + 0x2938));
  }
LAB_0141b00c:
  return *(long *)((long)pdVar6 + 0x40);
}

