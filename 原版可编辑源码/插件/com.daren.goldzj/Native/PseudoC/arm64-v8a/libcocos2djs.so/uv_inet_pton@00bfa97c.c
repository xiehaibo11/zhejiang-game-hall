
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void uv_inet_pton(int param_1,byte *param_2,undefined8 *param_3)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  undefined8 *puVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  byte local_38 [48];
  long local_8;
  byte *pbVar13;
  
  local_8 = ___stack_chk_guard;
  if ((param_2 == (byte *)0x0) || (param_3 == (undefined8 *)0x0)) {
LAB_00bfaad0:
    uVar7 = 0xffffffea;
  }
  else if (param_1 == 2) {
    uVar7 = FUN_00bf9bc0(param_2,param_3);
  }
  else if (param_1 == 10) {
    pcVar8 = strchr((char *)param_2,0x25);
    pbVar13 = param_2;
    if (pcVar8 != (char *)0x0) {
      iVar10 = (int)pcVar8 - (int)param_2;
      uVar7 = 0xffffffea;
      if (0x2d < iVar10) goto LAB_00bfa9dc;
      pbVar13 = local_38;
      memcpy(pbVar13,param_2,(long)iVar10);
      local_38[iVar10] = 0;
    }
    local_50 = 0;
    auStack_48 = (undefined1  [8])0x0;
    if ((*pbVar13 == 0x3a) && (pbVar19 = pbVar13 + 1, pbVar13 = pbVar13 + 1, *pbVar19 != 0x3a)) {
      uVar7 = 0xffffffea;
    }
    else {
      uVar6 = 0;
      puVar16 = (undefined8 *)0x0;
      puVar18 = &local_50;
      pbVar19 = pbVar13;
      uVar15 = 0;
LAB_00bfaaa0:
      pbVar12 = pbVar13 + 1;
      bVar3 = *pbVar13;
      uVar5 = (undefined1)(uVar15 >> 8);
      if (bVar3 != 0) {
        pcVar8 = strchr("0123456789abcdef",(uint)bVar3);
        iVar10 = 0x18e1830;
        pbVar13 = pbVar12;
        if ((pcVar8 != (char *)0x0) ||
           (pcVar8 = strchr("0123456789ABCDEF",(uint)bVar3), iVar10 = 0x18e1810,
           pcVar8 != (char *)0x0)) {
          uVar6 = uVar6 + 1;
          uVar15 = (int)pcVar8 - iVar10 | uVar15 << 4;
          if (4 < (int)uVar6) goto LAB_00bfaad0;
          goto LAB_00bfaaa0;
        }
        if (bVar3 != 0x3a) {
          if ((bVar3 == 0x2e) && ((undefined8 *)((long)puVar18 + 4U) <= &uStack_40)) {
            iVar10 = FUN_00bf9bc0(pbVar19,puVar18);
            puVar14 = (undefined8 *)((long)puVar18 + 4U);
            if (iVar10 == 0) goto LAB_00bfab90;
            uVar7 = 0xffffffea;
            goto LAB_00bfa9dc;
          }
          goto LAB_00bfaad0;
        }
        pbVar19 = pbVar12;
        if (uVar6 != 0) {
          if ((*pbVar12 == 0) || (&uStack_40 < (undefined8 *)((long)puVar18 + 2U)))
          goto LAB_00bfaad0;
          *(char *)((long)puVar18 + 1) = (char)uVar15;
          *(undefined1 *)puVar18 = uVar5;
          uVar6 = 0;
          puVar18 = (undefined8 *)((long)puVar18 + 2U);
          uVar15 = uVar6;
          goto LAB_00bfaaa0;
        }
        bVar2 = puVar16 != (undefined8 *)0x0;
        puVar16 = puVar18;
        if (bVar2) goto LAB_00bfaad0;
        goto LAB_00bfaaa0;
      }
      puVar14 = puVar18;
      if (uVar6 != 0) {
        puVar14 = (undefined8 *)((long)puVar18 + 2);
        if (&uStack_40 < puVar14) goto LAB_00bfaad0;
        *(undefined1 *)puVar18 = uVar5;
        *(char *)((long)puVar18 + 1) = (char)uVar15;
      }
LAB_00bfab90:
      if (puVar16 == (undefined8 *)0x0) {
        if (puVar14 == &uStack_40) goto LAB_00bfaeb8;
        uVar7 = 0xffffffea;
        goto LAB_00bfa9dc;
      }
      uVar6 = (int)puVar14 - (int)puVar16;
      if (puVar14 == &uStack_40) goto LAB_00bfaad0;
      if (0 < (int)uVar6) {
        lVar9 = (long)(int)uVar6;
        puVar18 = (undefined8 *)((long)puVar16 + lVar9 + -0x10);
        if ((puVar18 < &uStack_40 && &local_50 < (undefined8 *)((long)puVar16 + lVar9)) ||
           (uVar6 < 0x10)) {
          puVar18 = &uStack_40;
          puVar17 = (undefined1 *)((long)puVar16 + lVar9 + -1);
          do {
            puVar18 = (undefined8 *)((long)puVar18 + -1);
            *(undefined1 *)puVar18 = *puVar17;
            *puVar17 = 0;
            puVar17 = puVar17 + -1;
          } while (puVar18 != (undefined8 *)(auStack_48 + (7 - (ulong)(uVar6 - 1))));
        }
        else {
          uVar15 = (uVar6 - 0x10 >> 4) + 1;
          uVar11 = 0;
          uVar4 = uVar15 * 0x10;
          lVar9 = 0;
          do {
            puVar14 = (undefined8 *)((long)puVar18 + lVar9);
            uVar11 = uVar11 + 1;
            uVar7 = *puVar14;
            *(undefined8 *)(auStack_48 + lVar9) = puVar14[1];
            *(undefined8 *)((long)&local_50 + lVar9) = uVar7;
            puVar14[1] = 0;
            *puVar14 = 0;
            lVar9 = lVar9 + -0x10;
          } while (uVar11 < uVar15);
          if (uVar6 != uVar4) {
            lVar9 = (long)(int)(uVar6 - (uVar4 + 1));
            iVar10 = uVar4 + 2;
            *(undefined1 *)((long)&uStack_40 + (long)(int)-(uVar4 + 1)) =
                 *(undefined1 *)((long)puVar16 + lVar9);
            *(undefined1 *)((long)puVar16 + lVar9) = 0;
            if (iVar10 <= (int)uVar6) {
              iVar1 = uVar4 + 3;
              *(undefined1 *)((long)&uStack_40 + (long)-iVar10) =
                   *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10));
              *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10)) = 0;
              if (iVar1 <= (int)uVar6) {
                iVar10 = uVar4 + 4;
                *(undefined1 *)((long)&uStack_40 + (long)-iVar1) =
                     *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1));
                *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1)) = 0;
                if (iVar10 <= (int)uVar6) {
                  iVar1 = uVar4 + 5;
                  *(undefined1 *)((long)&uStack_40 + (long)-iVar10) =
                       *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10));
                  *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10)) = 0;
                  if (iVar1 <= (int)uVar6) {
                    iVar10 = uVar4 + 6;
                    *(undefined1 *)((long)&uStack_40 + (long)-iVar1) =
                         *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1));
                    *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1)) = 0;
                    if (iVar10 <= (int)uVar6) {
                      iVar1 = uVar4 + 7;
                      *(undefined1 *)((long)&uStack_40 + (long)-iVar10) =
                           *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10));
                      *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10)) = 0;
                      if (iVar1 <= (int)uVar6) {
                        iVar10 = uVar4 + 8;
                        *(undefined1 *)((long)&uStack_40 + (long)-iVar1) =
                             *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1));
                        *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1)) = 0;
                        if (iVar10 <= (int)uVar6) {
                          iVar1 = uVar4 + 9;
                          *(undefined1 *)((long)&uStack_40 + (long)-iVar10) =
                               *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10));
                          *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10)) = 0;
                          if (iVar1 <= (int)uVar6) {
                            iVar10 = uVar4 + 10;
                            *(undefined1 *)((long)&uStack_40 + (long)-iVar1) =
                                 *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1));
                            *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1)) = 0;
                            if (iVar10 <= (int)uVar6) {
                              iVar1 = uVar4 + 0xb;
                              *(undefined1 *)((long)&uStack_40 + (long)-iVar10) =
                                   *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10));
                              *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10)) = 0;
                              if (iVar1 <= (int)uVar6) {
                                iVar10 = uVar4 + 0xc;
                                *(undefined1 *)((long)&uStack_40 + (long)-iVar1) =
                                     *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1));
                                *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1)) = 0;
                                if (iVar10 <= (int)uVar6) {
                                  iVar1 = uVar4 + 0xd;
                                  *(undefined1 *)((long)&uStack_40 + (long)-iVar10) =
                                       *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10));
                                  *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10)) = 0;
                                  if (iVar1 <= (int)uVar6) {
                                    iVar10 = uVar4 + 0xe;
                                    *(undefined1 *)((long)&uStack_40 + (long)-iVar1) =
                                         *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1))
                                    ;
                                    *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1)) = 0;
                                    if (iVar10 <= (int)uVar6) {
                                      iVar1 = uVar4 + 0xf;
                                      *(undefined1 *)((long)&uStack_40 + (long)-iVar10) =
                                           *(undefined1 *)
                                            ((long)puVar16 + (long)(int)(uVar6 - iVar10));
                                      *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar10)) =
                                           0;
                                      if (iVar1 <= (int)uVar6) {
                                        *(undefined1 *)((long)&uStack_40 + (long)-iVar1) =
                                             *(undefined1 *)
                                              ((long)puVar16 + (long)(int)(uVar6 - iVar1));
                                        *(undefined1 *)((long)puVar16 + (long)(int)(uVar6 - iVar1))
                                             = 0;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_00bfaeb8:
      uVar7 = 0;
      *param_3 = local_50;
      param_3[1] = auStack_48;
    }
  }
  else {
    uVar7 = 0xffffff9f;
  }
LAB_00bfa9dc:
  if (local_8 != ___stack_chk_guard) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}

