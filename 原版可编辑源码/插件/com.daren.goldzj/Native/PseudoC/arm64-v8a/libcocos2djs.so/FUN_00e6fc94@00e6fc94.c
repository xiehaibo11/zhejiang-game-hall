
int FUN_00e6fc94(long param_1,long *param_2,int param_3,long *param_4,int param_5)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  char cVar12;
  long lVar13;
  undefined1 *__src;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 *puVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  size_t __n;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  long *local_d0;
  long *plStack_c8;
  undefined4 local_c0;
  int local_6c [3];
  
  local_6c[0] = 0;
  uVar22 = *(undefined8 *)(param_1 + 0x10);
  plVar2 = param_2 + 0x19;
  if ((int)param_2[0x12] == *(int *)(param_1 + 0x20)) {
    if (param_3 != param_5) {
      local_6c[0] = 0x13;
      goto LAB_00e6fd58;
    }
    if ((*(byte *)(param_2[0x25] + 8) & 1) != 0) {
      FUN_00e139fc(uVar22,param_2[0x15]);
      param_2[0x15] = 0;
      *(uint *)(param_2[0x25] + 8) = *(uint *)(param_2[0x25] + 8) & 0xfffffffe;
    }
    cVar12 = FUN_00e14d30(param_2,param_3,param_4);
    if (cVar12 != '\0') {
      local_6c[0] = 0x62;
      goto LAB_00e6fd58;
    }
    lVar13 = FUN_00e13bcc(uVar22,(long)(int)param_2[0x14],0,(int)param_2[0x13],0,local_6c);
    param_2[0x15] = lVar13;
    lVar23 = 0;
    lVar13 = 0;
    if (local_6c[0] == 0) {
      plVar3 = param_2 + 0x13;
      *(uint *)(param_2[0x25] + 8) = *(uint *)(param_2[0x25] + 8) | 1;
      iVar9 = (int)param_2[0x13] << 6;
      lVar23 = (long)((int)param_2[0x18] * -0x40);
      iVar5 = iVar9 / 3;
      if (*(char *)((long)param_2 + 0xb2) != '\x06') {
        iVar5 = iVar9;
      }
      lVar13 = (long)iVar5 + (long)(*(int *)((long)param_2 + 0xc4) * -0x40);
      if (param_4 != (long *)0x0) {
        lVar23 = *param_4 + lVar23;
        lVar13 = param_4[1] + lVar13;
      }
      if (lVar23 != 0 || lVar13 != 0) {
        FT_Outline_Translate(plVar2,lVar23,lVar13);
      }
      local_c0 = 1;
      local_d0 = plVar3;
      plStack_c8 = plVar2;
      if (param_3 == 4) {
        iVar5 = (int)param_2[0x14];
        lVar25 = *param_2;
        *(int *)(param_2 + 0x14) = iVar5 * 3;
        *(uint *)(param_2 + 0x13) = *(uint *)(param_2 + 0x13) / 3;
        FT_Outline_Translate(plVar2,-*(long *)(lVar25 + 0x160),*(undefined8 *)(lVar25 + 0x158));
        local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_d0);
        if (local_6c[0] == 0) {
          param_2[0x15] = param_2[0x15] + (long)iVar5;
          FT_Outline_Translate
                    (plVar2,*(long *)(lVar25 + 0x160) - *(long *)(lVar25 + 0x170),
                     *(long *)(lVar25 + 0x168) - *(long *)(lVar25 + 0x158));
          local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_d0);
          lVar15 = param_2[0x15] - (long)iVar5;
          param_2[0x15] = lVar15;
          if (local_6c[0] == 0) {
            param_2[0x15] = lVar15 + (iVar5 << 1);
            FT_Outline_Translate
                      (plVar2,*(long *)(lVar25 + 0x170) - *(long *)(lVar25 + 0x180),
                       *(long *)(lVar25 + 0x178) - *(long *)(lVar25 + 0x168));
            local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_d0);
            param_2[0x15] = param_2[0x15] - (long)(iVar5 << 1);
            if (local_6c[0] == 0) {
              lVar13 = *(long *)(lVar25 + 0x178) + lVar13;
              lVar23 = lVar23 - *(long *)(lVar25 + 0x180);
              *(int *)(param_2 + 0x14) = (int)param_2[0x14] / 3;
              *(int *)(param_2 + 0x13) = (int)param_2[0x13] * 3;
              goto LAB_00e70278;
            }
          }
        }
      }
      else if (param_3 == 3) {
        lVar25 = *param_2;
        uVar7 = *(uint *)(param_2 + 0x13);
        uVar24 = (ulong)uVar7;
        uVar8 = *(uint *)((long)param_2 + 0x9c);
        __n = (size_t)(int)param_2[0x14];
        FT_Outline_Translate(plVar2,-*(long *)(lVar25 + 0x158),-*(long *)(lVar25 + 0x160));
        local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_d0);
        if (local_6c[0] == 0) {
          uVar26 = (ulong)uVar8 / 3;
          param_2[0x15] = param_2[0x15] + uVar26;
          FT_Outline_Translate
                    (plVar2,*(long *)(lVar25 + 0x158) - *(long *)(lVar25 + 0x168),
                     *(long *)(lVar25 + 0x160) - *(long *)(lVar25 + 0x170));
          local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_d0);
          lVar15 = param_2[0x15];
          param_2[0x15] = lVar15 - uVar26;
          if (local_6c[0] == 0) {
            uVar27 = (ulong)((uint)((ulong)uVar8 * 0xaaaaaaab >> 0x20) & 0xfffffffe);
            param_2[0x15] = (lVar15 - uVar26) + uVar27;
            FT_Outline_Translate
                      (plVar2,*(long *)(lVar25 + 0x168) - *(long *)(lVar25 + 0x178),
                       *(long *)(lVar25 + 0x170) - *(long *)(lVar25 + 0x180));
            local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_d0);
            param_2[0x15] = param_2[0x15] - uVar27;
            if (local_6c[0] == 0) {
              lVar23 = lVar23 - *(long *)(lVar25 + 0x178);
              lVar13 = lVar13 - *(long *)(lVar25 + 0x180);
              __src = (undefined1 *)FUN_00e1388c(uVar22,__n,local_6c);
              if (local_6c[0] == 0) {
                if (uVar7 != 0) {
                  if (uVar8 < 3) {
                    lVar25 = 0;
                    do {
                      memcpy((void *)(param_2[0x15] + lVar25),__src,__n);
                      uVar24 = uVar24 - 1;
                      lVar25 = lVar25 + __n;
                    } while (uVar24 != 0);
                  }
                  else {
                    uVar6 = uVar26;
                    if (uVar26 < 2) {
                      uVar6 = 1;
                    }
                    uVar17 = uVar6 & 0x7ffffff0;
                    lVar25 = 0;
                    puVar4 = __src + uVar6 * 3;
                    uVar21 = 0;
                    uVar14 = uVar26;
                    lVar15 = uVar26 * 2;
                    do {
                      lVar16 = param_2[0x15];
                      lVar20 = uVar21 * __n;
                      uVar18 = 0;
                      if (uVar6 < 0x10) {
LAB_00e700d0:
                        puVar11 = __src + uVar18 * 3 + 1;
                        do {
                          puVar11[-1] = *(undefined1 *)(lVar16 + lVar25 + uVar18);
                          *puVar11 = *(undefined1 *)(lVar16 + uVar14 + uVar18);
                          puVar1 = (undefined1 *)(lVar16 + lVar15 + uVar18);
                          uVar18 = uVar18 + 1;
                          puVar11[1] = *puVar1;
                          puVar11 = puVar11 + 3;
                        } while (uVar18 < uVar26);
                      }
                      else {
                        if (((__src < (undefined1 *)(lVar16 + uVar6 + uVar27 + lVar20) &&
                              (undefined1 *)(lVar16 + lVar20 + uVar27) < puVar4) ||
                            (__src < (undefined1 *)(lVar16 + uVar6 + uVar26 + lVar20) &&
                             (undefined1 *)(lVar16 + lVar20 + uVar26) < puVar4)) ||
                           (__src < (undefined1 *)(lVar16 + uVar6 + lVar20) &&
                            (undefined1 *)(lVar16 + lVar20) < puVar4)) goto LAB_00e700d0;
                        puVar19 = (undefined8 *)(lVar16 + lVar25);
                        uVar18 = uVar17;
                        puVar11 = __src;
                        do {
                          uVar29 = puVar19[1];
                          uVar28 = *puVar19;
                          uVar31 = ((undefined8 *)((long)puVar19 + uVar26))[1];
                          uVar30 = *(undefined8 *)((long)puVar19 + uVar26);
                          puVar10 = (undefined8 *)((long)puVar19 + uVar26 * 2);
                          uVar33 = puVar10[1];
                          uVar32 = *puVar10;
                          uVar18 = uVar18 - 0x10;
                          puVar19 = puVar19 + 2;
                          *puVar11 = (char)uVar28;
                          puVar11[1] = (char)uVar30;
                          puVar11[2] = (char)uVar32;
                          puVar11[3] = (char)((ulong)uVar28 >> 8);
                          puVar11[4] = (char)((ulong)uVar30 >> 8);
                          puVar11[5] = (char)((ulong)uVar32 >> 8);
                          puVar11[6] = (char)((ulong)uVar28 >> 0x10);
                          puVar11[7] = (char)((ulong)uVar30 >> 0x10);
                          puVar11[8] = (char)((ulong)uVar32 >> 0x10);
                          puVar11[9] = (char)((ulong)uVar28 >> 0x18);
                          puVar11[10] = (char)((ulong)uVar30 >> 0x18);
                          puVar11[0xb] = (char)((ulong)uVar32 >> 0x18);
                          puVar11[0xc] = (char)((ulong)uVar28 >> 0x20);
                          puVar11[0xd] = (char)((ulong)uVar30 >> 0x20);
                          puVar11[0xe] = (char)((ulong)uVar32 >> 0x20);
                          puVar11[0xf] = (char)((ulong)uVar28 >> 0x28);
                          puVar11[0x10] = (char)((ulong)uVar30 >> 0x28);
                          puVar11[0x11] = (char)((ulong)uVar32 >> 0x28);
                          puVar11[0x12] = (char)((ulong)uVar28 >> 0x30);
                          puVar11[0x13] = (char)((ulong)uVar30 >> 0x30);
                          puVar11[0x14] = (char)((ulong)uVar32 >> 0x30);
                          puVar11[0x15] = (char)((ulong)uVar28 >> 0x38);
                          puVar11[0x16] = (char)((ulong)uVar30 >> 0x38);
                          puVar11[0x17] = (char)((ulong)uVar32 >> 0x38);
                          puVar11[0x18] = (char)uVar29;
                          puVar11[0x19] = (char)uVar31;
                          puVar11[0x1a] = (char)uVar33;
                          puVar11[0x1b] = (char)((ulong)uVar29 >> 8);
                          puVar11[0x1c] = (char)((ulong)uVar31 >> 8);
                          puVar11[0x1d] = (char)((ulong)uVar33 >> 8);
                          puVar11[0x1e] = (char)((ulong)uVar29 >> 0x10);
                          puVar11[0x1f] = (char)((ulong)uVar31 >> 0x10);
                          puVar11[0x20] = (char)((ulong)uVar33 >> 0x10);
                          puVar11[0x21] = (char)((ulong)uVar29 >> 0x18);
                          puVar11[0x22] = (char)((ulong)uVar31 >> 0x18);
                          puVar11[0x23] = (char)((ulong)uVar33 >> 0x18);
                          puVar11[0x24] = (char)((ulong)uVar29 >> 0x20);
                          puVar11[0x25] = (char)((ulong)uVar31 >> 0x20);
                          puVar11[0x26] = (char)((ulong)uVar33 >> 0x20);
                          puVar11[0x27] = (char)((ulong)uVar29 >> 0x28);
                          puVar11[0x28] = (char)((ulong)uVar31 >> 0x28);
                          puVar11[0x29] = (char)((ulong)uVar33 >> 0x28);
                          puVar11[0x2a] = (char)((ulong)uVar29 >> 0x30);
                          puVar11[0x2b] = (char)((ulong)uVar31 >> 0x30);
                          puVar11[0x2c] = (char)((ulong)uVar33 >> 0x30);
                          puVar11[0x2d] = (char)((ulong)uVar29 >> 0x38);
                          puVar11[0x2e] = (char)((ulong)uVar31 >> 0x38);
                          puVar11[0x2f] = (char)((ulong)uVar33 >> 0x38);
                          puVar11 = puVar11 + 0x30;
                        } while (uVar18 != 0);
                        uVar18 = uVar17;
                        if (uVar6 != uVar17) goto LAB_00e700d0;
                      }
                      memcpy((undefined1 *)(lVar16 + lVar20),__src,__n);
                      lVar25 = lVar25 + __n;
                      lVar15 = lVar15 + __n;
                      uVar21 = uVar21 + 1;
                      uVar14 = uVar14 + __n;
                    } while (uVar21 != uVar24);
                  }
                }
                FUN_00e139fc(uVar22,__src);
                goto joined_r0x00e702cc;
              }
            }
          }
        }
      }
      else {
        local_6c[0] = (**(code **)(param_1 + 0x70))(*(undefined8 *)(param_1 + 0x68),&local_d0);
joined_r0x00e702cc:
        if (local_6c[0] == 0) {
LAB_00e70278:
          *(undefined4 *)(param_2 + 0x12) = 0x62697473;
          if (lVar13 == 0 && lVar23 == 0) {
            return local_6c[0];
          }
          goto LAB_00e6fd90;
        }
      }
    }
  }
  else {
    local_6c[0] = 6;
LAB_00e6fd58:
    lVar13 = 0;
    lVar23 = 0;
  }
  if ((*(byte *)(param_2[0x25] + 8) & 1) != 0) {
    FUN_00e139fc(uVar22,param_2[0x15]);
    param_2[0x15] = 0;
    *(uint *)(param_2[0x25] + 8) = *(uint *)(param_2[0x25] + 8) & 0xfffffffe;
  }
  if (lVar13 == 0 && lVar23 == 0) {
    return local_6c[0];
  }
LAB_00e6fd90:
  FT_Outline_Translate(plVar2,-lVar23,-lVar13);
  return local_6c[0];
}

