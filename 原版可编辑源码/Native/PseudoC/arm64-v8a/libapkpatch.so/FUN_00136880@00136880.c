
/* WARNING: Removing unreachable block (ram,0x00136afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_00136880(byte *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte **ppbVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte bVar21;
  byte *pbVar22;
  byte *extraout_x11;
  byte *pbVar23;
  byte *extraout_x12;
  byte *pbVar24;
  long *plVar25;
  undefined8 *puVar26;
  byte *pbVar27;
  byte *__n;
  byte *pbVar28;
  byte *unaff_x24;
  byte *pbVar29;
  byte extraout_b0;
  byte bVar30;
  byte extraout_var;
  byte bVar31;
  byte extraout_var_00;
  byte bVar32;
  byte extraout_var_01;
  byte bVar33;
  byte extraout_var_02;
  byte bVar34;
  byte extraout_var_03;
  byte bVar35;
  byte extraout_var_04;
  byte bVar36;
  byte extraout_var_05;
  byte bVar37;
  undefined8 uVar38;
  undefined1 auVar39 [16];
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  byte *local_60;
  long local_58;
  long lStack_50;
  byte *local_48;
  
  ppbVar12 = &local_60;
  puVar26 = (undefined8 *)tpidr_el0;
  local_48 = (byte *)puVar26[5];
  local_58 = param_3;
  lStack_50 = param_2;
  pbVar16 = (byte *)FUN_00136a04(param_1,&local_58,&lStack_50);
  if ((int)pbVar16 == 0) {
switchD_00136940_caseD_1c:
    pbVar19 = (byte *)puVar26[5];
    pbVar20 = local_48;
switchD_00136940_caseD_49:
    if (pbVar19 != pbVar20) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pbVar16);
    }
    return pbVar16;
  }
  pbVar27 = &switchD_00136940::switchdataD_0011ebfc;
  auVar11._8_8_ = &switchD_00136940::switchdataD_0011ebfc;
  auVar11._0_8_ = puVar26;
  auVar10._8_8_ = &switchD_00136940::switchdataD_0011ebfc;
  auVar10._0_8_ = puVar26;
  auVar9._8_8_ = &switchD_00136940::switchdataD_0011ebfc;
  auVar9._0_8_ = puVar26;
  auVar8._8_8_ = &switchD_00136940::switchdataD_0011ebfc;
  auVar8._0_8_ = puVar26;
  auVar7._8_8_ = &switchD_00136940::switchdataD_0011ebfc;
  auVar7._0_8_ = puVar26;
  auVar6._8_8_ = &switchD_00136940::switchdataD_0011ebfc;
  auVar6._0_8_ = puVar26;
  auVar5._8_8_ = &switchD_00136940::switchdataD_0011ebfc;
  auVar5._0_8_ = puVar26;
  auVar4._8_8_ = &switchD_00136940::switchdataD_0011ebfc;
  auVar4._0_8_ = puVar26;
  __n = (byte *)0xff;
LAB_001368c8:
  if (local_58 == 0) {
LAB_001369bc:
    pbVar16 = (byte *)(ulong)(local_58 == 0);
    goto switchD_00136940_caseD_1c;
  }
  uVar18 = *(ulong *)(param_1 + 0x38);
  uVar2 = *(ulong *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18) == uVar18 - uVar2) goto LAB_001369bc;
  uVar13 = uVar2 <= uVar18;
  uVar14 = false;
  if (uVar18 == uVar2) {
    iVar15 = FUN_00135af4(param_1 + 0x18);
    if (iVar15 != 0) {
      uVar18 = *(ulong *)(param_1 + 0x38);
      uVar13 = uVar18 <= *(ulong *)(param_1 + 0x40);
      uVar14 = *(ulong *)(param_1 + 0x40) == uVar18;
      if (!(bool)uVar14) goto LAB_00136908;
    }
    goto LAB_001369d4;
  }
LAB_00136908:
  if (*(long *)(param_1 + 0x30) == 0) goto LAB_001369d4;
  bVar3 = *(byte *)(*(long *)(param_1 + 0x30) + uVar18);
  pbVar17 = (byte *)0x2;
  auVar39 = FUN_00135b90(param_1 + 0x18,&local_60);
  pbVar16 = auVar39._0_8_;
  if (auVar39._0_4_ == 0) goto switchD_00136940_caseD_1c;
  bVar3 = bVar3 >> 6;
  pbVar19 = (byte *)(ulong)bVar3;
  pbVar28 = local_60 + 1;
  bVar21 = pbVar19[0x11ebfc];
  pbVar22 = (byte *)(ulong)bVar21;
  pbVar20 = (byte *)((long)pbVar22 * 4 + 0x136944);
  pbVar23 = extraout_x11;
  pbVar24 = extraout_x12;
  pbVar29 = unaff_x24;
  bVar30 = extraout_b0;
  bVar31 = extraout_var;
  bVar32 = extraout_var_00;
  bVar33 = extraout_var_01;
  bVar34 = extraout_var_02;
  bVar35 = extraout_var_03;
  bVar36 = extraout_var_04;
  bVar37 = extraout_var_05;
  switch(bVar3) {
  default:
    *(byte **)(param_1 + 8) = pbVar28;
  case 0x4e:
  case 0x8e:
  case 0xf3:
    param_1[0x10] = 0;
switchD_00136940_caseD_b8:
    break;
  case 1:
    *(byte **)(param_1 + 8) = pbVar28;
  case 0xc0:
    param_1[0x10] = 0xff;
    break;
  case 2:
  case 0x45:
  case 0x7d:
  case 0xe2:
    pbVar19 = *(byte **)(param_1 + 0x68);
    uVar14 = *(byte **)(param_1 + 0x70) == pbVar19;
  case 0x5b:
  case 0xa7:
    if ((bool)uVar14) {
      iVar15 = FUN_00135af4(param_1 + 0x48);
      if (iVar15 == 0) {
        pbVar20 = *(byte **)(param_1 + 0x68);
      }
      else {
switchD_00136940_caseD_d1:
        pbVar19 = *(byte **)(param_1 + 0x68);
        pbVar20 = *(byte **)(param_1 + 0x70);
switchD_00136940_caseD_3c:
        uVar14 = pbVar20 == pbVar19;
switchD_00136940_caseD_b6:
        if (!(bool)uVar14) goto LAB_00136974;
      }
      pbVar19 = pbVar20 + 1;
switchD_00136940_caseD_ea:
      *(byte **)(param_1 + 0x68) = pbVar19;
    }
    else {
LAB_00136974:
      pbVar20 = *(byte **)(param_1 + 0x60);
switchD_00136940_caseD_fb:
      *(byte **)(param_1 + 0x68) = pbVar19 + 1;
switchD_00136940_caseD_52:
      if (pbVar20 != (byte *)0x0) {
switchD_00136940_caseD_48:
        bVar3 = pbVar20[(long)pbVar19];
        *(byte **)(param_1 + 8) = pbVar28;
        param_1[0x10] = bVar3;
        break;
      }
    }
LAB_001369d4:
    pbVar16 = (byte *)0x0;
    goto switchD_00136940_caseD_1c;
  case 3:
    *(byte **)param_1 = pbVar28;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
    goto switchD_00136940_caseD_c;
  case 0x1c:
  case 0x28:
    goto switchD_00136940_caseD_1c;
  case 0x20:
  case 0x30:
    goto switchD_00136940_caseD_20;
  case 0x2c:
    goto switchD_00136940_caseD_2c;
  case 0x3c:
  case 0x6c:
    goto switchD_00136940_caseD_3c;
  case 0x40:
  case 0x74:
  case 0xf6:
    goto switchD_00136940_caseD_40;
  case 0x44:
  case 0x7c:
  case 0xbd:
  case 200:
  case 0xfe:
    goto switchD_00136940_caseD_44;
  case 0x48:
  case 0x84:
  case 0xc5:
  case 0xd7:
    goto switchD_00136940_caseD_48;
  case 0x49:
  case 0x85:
    goto switchD_00136940_caseD_49;
  case 0x4c:
  case 0x8c:
  case 0xcd:
    goto switchD_00136940_caseD_4c;
  case 0x4d:
  case 0x8d:
  case 0xe9:
    goto switchD_00136940_caseD_4d;
  case 0x50:
  case 0x94:
  case 0xd5:
    goto switchD_00136940_caseD_50;
  case 0x51:
  case 0x95:
    goto switchD_00136940_caseD_51;
  case 0x52:
  case 0x96:
    goto switchD_00136940_caseD_52;
  case 0x54:
  case 0x9c:
  case 0xdd:
    goto switchD_00136940_caseD_54;
  case 0x55:
  case 0x9d:
    goto switchD_00136940_caseD_55;
  case 0x56:
  case 0x9e:
    goto switchD_00136940_caseD_56;
  case 0x59:
  case 0xa5:
    goto switchD_00136940_caseD_59;
  case 0x5a:
  case 0xa6:
    goto switchD_00136940_caseD_5a;
  case 0x5d:
  case 0xad:
    goto switchD_00136940_caseD_5d;
  case 0x5e:
  case 0xae:
    goto switchD_00136940_caseD_5e;
  case 0x5f:
  case 0xaf:
    if (bVar3 != 0) {
      pbVar20 = unaff_x24;
      if (pbVar19 <= unaff_x24) {
        pbVar20 = pbVar19;
      }
      pbVar22 = (byte *)0xff;
switchD_00136940_caseD_50:
      if ((int)pbVar22 != 0) {
        pbVar23 = (byte *)0x0;
switchD_00136940_caseD_51:
        bVar30 = (byte)pbVar22;
        pbVar24 = (byte *)((ulong)pbVar20 & 0xfffffffffffffff8);
        bVar31 = bVar30;
        bVar32 = bVar30;
        bVar33 = bVar30;
        bVar34 = bVar30;
        bVar35 = bVar30;
        bVar36 = bVar30;
        bVar37 = bVar30;
        bVar21 = bVar30;
        if (pbVar24 != (byte *)0x0) {
switchD_00136940_caseD_f1:
          do {
            uVar38 = *(undefined8 *)(pbVar23 + 0xff);
            *(ulong *)(pbVar23 + 0xff) =
                 CONCAT17((char)((ulong)uVar38 >> 0x38) + bVar37,
                          CONCAT16((char)((ulong)uVar38 >> 0x30) + bVar36,
                                   CONCAT15((char)((ulong)uVar38 >> 0x28) + bVar35,
                                            CONCAT14((char)((ulong)uVar38 >> 0x20) + bVar34,
                                                     CONCAT13((char)((ulong)uVar38 >> 0x18) + bVar33
                                                              ,CONCAT12((char)((ulong)uVar38 >> 0x10
                                                                              ) + bVar32,
                                                                        CONCAT11((char)((ulong)
                                                  uVar38 >> 8) + bVar31,(char)uVar38 + bVar30)))))))
            ;
switchD_00136940_caseD_bf:
            pbVar23 = pbVar23 + 8;
            bVar21 = (byte)pbVar22;
          } while (pbVar23 < pbVar24);
        }
        uVar13 = pbVar20 <= pbVar23;
switchD_00136940_caseD_2c:
        if (!(bool)uVar13) {
          pbVar24 = pbVar20 + -(long)pbVar23;
switchD_00136940_caseD_cf:
          pbVar16 = pbVar23 + 0xff;
          do {
            pbVar24 = pbVar24 + -1;
            *pbVar16 = *pbVar16 + bVar21;
            pbVar16 = pbVar16 + 1;
          } while (pbVar24 != (byte *)0x0);
        }
      }
switchD_00136940_caseD_b7:
      __n = pbVar20 + 0xff;
      unaff_x24 = unaff_x24 + -(long)pbVar20;
      _BYTE_0011ec04 = (long)pbVar19 - (long)pbVar20;
                    /* WARNING: Read-only address (ram,0x0011ec04) is written */
    }
    pbVar19 = (byte *)0x14031600;
switchD_00136940_caseD_d9:
    pbVar29 = unaff_x24;
    unaff_x24 = (byte *)0x0;
joined_r0x00136b28:
    if (pbVar29 == (byte *)0x0) {
switchD_00136940_caseD_d6:
      pbVar16 = (byte *)0x1;
      *puVar26 = unaff_x24;
      *(byte **)param_1 = __n;
      goto switchD_00136940_caseD_e0;
    }
    pbVar20 = (byte *)0xa00000000;
    pbVar22 = (byte *)0x6400000000;
    uVar13 = pbVar19 < (byte *)0x6400000001;
    uVar14 = pbVar19 == (byte *)0x6400000000;
switchD_00136940_caseD_ef:
    if (!(bool)uVar13 || (bool)uVar14) {
      pbVar19 = pbVar22;
    }
    pbVar28 = pbVar29;
    if (pbVar19 <= pbVar29) {
      pbVar28 = pbVar19;
    }
    if (pbVar22 + -(long)pbVar20 < pbVar28) {
switchD_00136940_caseD_f2:
      pbVar16 = &BYTE_0011ec44;
switchD_00136940_caseD_40:
      iVar15 = FUN_00135af4(pbVar16);
      if (iVar15 != 0) {
switchD_00136940_caseD_20:
        pbVar20 = (byte *)0xa00000000;
        if (pbVar28 < (byte *)0x5a00000001) goto LAB_00136aec;
      }
      pbVar19 = pbVar28 + 0xa00000000;
switchD_00136940_caseD_4d:
      pbVar16 = (byte *)0x0;
      _BYTE_0011ec64 = pbVar19;
                    /* WARNING: Read-only address (ram,0x0011ec64) is written */
    }
    else {
LAB_00136aec:
      pbVar16 = (byte *)0x0;
      _BYTE_0011ec64 = pbVar20 + (long)pbVar28;
                    /* WARNING: Read-only address (ram,0x0011ec64) is written */
    }
switchD_00136940_caseD_e0:
switchD_00136940_caseD_54:
    return pbVar16;
  case 0xb5:
    goto switchD_00136940_caseD_b5;
  case 0xb6:
    goto switchD_00136940_caseD_b6;
  case 0xb7:
    goto switchD_00136940_caseD_b7;
  case 0xb8:
    goto switchD_00136940_caseD_b8;
  case 0xbe:
    goto switchD_00136940_caseD_be;
  case 0xbf:
    goto switchD_00136940_caseD_bf;
  case 0xc6:
    goto switchD_00136940_caseD_c6;
  case 199:
    goto switchD_00136940_caseD_c7;
  case 0xce:
    goto switchD_00136940_caseD_ce;
  case 0xcf:
    goto switchD_00136940_caseD_cf;
  case 0xd0:
    break;
  case 0xd1:
    goto switchD_00136940_caseD_d1;
  case 0xd6:
    goto switchD_00136940_caseD_d6;
  case 0xd8:
    goto switchD_00136940_caseD_d8;
  case 0xd9:
    goto switchD_00136940_caseD_d9;
  case 0xde:
switchD_00136940_caseD_5d:
    __n = (byte *)tpidr_el0;
    local_48 = *(byte **)(__n + 0x28);
    if (*(long *)(pbVar16 + 0x20) != 0) {
      unaff_x24 = *(byte **)(pbVar16 + 0x30);
      pbVar27 = *(byte **)(pbVar16 + 0x38);
      *(long *)(pbVar16 + 0x20) = *(long *)(pbVar16 + 0x20) + -1;
      pbVar28 = *(byte **)(pbVar16 + 0x28);
switchD_00136940_caseD_c7:
      pbVar19 = *(byte **)(pbVar27 + 0x20);
      if ((*(byte **)(pbVar27 + 0x28) != pbVar19) ||
         ((iVar15 = FUN_00135af4(pbVar27), iVar15 != 0 &&
          (pbVar19 = *(byte **)(pbVar27 + 0x20), *(byte **)(pbVar27 + 0x28) != pbVar19)))) {
        pbVar20 = *(byte **)(pbVar27 + 0x18);
        param_1 = pbVar16;
        puVar26 = auVar39._8_8_;
switchD_00136940_caseD_fa:
        if (pbVar20 != (byte *)0x0) {
switchD_00136940_caseD_59:
          auVar39._8_8_ = &local_60;
          auVar39._0_8_ = *(undefined8 *)(param_1 + 0x38);
          pbVar27 = (byte *)(long)(char)pbVar20[(long)pbVar19];
switchD_00136940_caseD_b5:
          iVar15 = FUN_00135b90(auVar39._0_8_,auVar39._8_8_,1);
          pbVar19 = local_60;
          if (iVar15 != 0) {
switchD_00136940_caseD_44:
            iVar15 = (int)pbVar27;
            pbVar27 = (byte *)-(long)pbVar19;
            if (-1 < iVar15) {
              pbVar27 = pbVar19;
            }
            iVar15 = FUN_00135b90(*(undefined8 *)(param_1 + 0x40),&lStack_50,0);
            if (iVar15 != 0) {
              auVar39._8_8_ = &local_58;
              auVar39._0_8_ = *(undefined8 *)(param_1 + 0x48);
switchD_00136940_caseD_e8:
              pbVar16 = (byte *)FUN_00135b90(auVar39._0_8_,auVar39._8_8_);
switchD_00136940_caseD_d8:
              if ((int)pbVar16 != 0) {
                pbVar20 = (byte *)(ulong)*(uint *)(param_1 + 0x50);
switchD_00136940_caseD_5a:
                pbVar16 = (byte *)0x1;
                lVar1 = 0;
                if ((int)pbVar20 != 0) {
                  lVar1 = local_58;
                }
                puVar26[1] = unaff_x24 + lStack_50;
                puVar26[2] = local_58;
                pbVar19 = unaff_x24 + lStack_50 + local_58;
                pbVar20 = pbVar27 + (long)pbVar28 + lVar1;
                *puVar26 = pbVar27 + (long)pbVar28;
switchD_00136940_caseD_c:
                *(byte **)(param_1 + 0x28) = pbVar20;
                *(byte **)(param_1 + 0x30) = pbVar19;
                goto LAB_00136d4c;
              }
            }
          }
        }
      }
    }
    pbVar16 = (byte *)0x0;
LAB_00136d4c:
    if (*(byte **)(__n + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(pbVar16);
    }
    return pbVar16;
  case 0xdf:
    goto switchD_00136940_caseD_df;
  case 0xe0:
    goto switchD_00136940_caseD_e0;
  case 0xe1:
    goto switchD_00136940_caseD_e1;
  case 0xe6:
    goto switchD_00136940_caseD_e6;
  case 0xe7:
                    /* WARNING: Read-only address (ram,0x0011ebfc) is written */
                    /* WARNING: Read-only address (ram,0x0011ec04) is written */
                    /* WARNING: Read-only address (ram,0x0011ec64) is written */
    auVar39._8_8_ = pbVar19 + (long)pbVar20;
    auVar39._0_8_ = 0xff;
switchD_00136940_caseD_ce:
    FUN_00135904(auVar39._0_8_,auVar39._8_8_);
    __n = local_60 + 0x100;
                    /* WARNING: Read-only address (ram,0x0011ec04) is written */
                    /* WARNING: Read-only address (ram,0x0011ec64) is written */
    pbVar19 = (byte *)0x14031600;
    unaff_x24 = unaff_x24 + -(long)pbVar28;
switchD_00136940_caseD_be:
    pbVar19 = pbVar19 + -(long)pbVar28;
    uVar14 = pbVar19 == (byte *)0x0;
                    /* WARNING: Read-only address (ram,0x0011ebfc) is written */
    _switchdataD_0011ebfc = pbVar19;
switchD_00136940_caseD_f0:
    pbVar29 = unaff_x24;
    if ((bool)uVar14) goto switchD_00136940_caseD_d6;
    goto joined_r0x00136b28;
  case 0xe8:
    goto switchD_00136940_caseD_e8;
  case 0xea:
    goto switchD_00136940_caseD_ea;
  case 0xee:
    goto switchD_00136940_caseD_ee;
  case 0xef:
    goto switchD_00136940_caseD_ef;
  case 0xf0:
    goto switchD_00136940_caseD_f0;
  case 0xf1:
    goto switchD_00136940_caseD_f1;
  case 0xf2:
    goto switchD_00136940_caseD_f2;
  case 0xf7:
    goto switchD_00136940_caseD_f7;
  case 0xf8:
    goto switchD_00136940_caseD_f8;
  case 0xf9:
    goto switchD_00136940_caseD_f9;
  case 0xfa:
    goto switchD_00136940_caseD_fa;
  case 0xfb:
    goto switchD_00136940_caseD_fb;
  case 0xff:
    ppbVar12 = &puStack_a0;
    uStack_98 = 0x136924;
    puStack_a0 = &stack0xffffffffffffffc0;
switchD_00136940_caseD_ee:
    *(byte **)((long)ppbVar12 + 0x10) = pbVar28;
    *(undefined8 *)((long)ppbVar12 + 0x20) = 0xff;
    *(byte **)((long)ppbVar12 + 0x28) = &switchD_00136940::switchdataD_0011ebfc;
    *(undefined8 **)((long)ppbVar12 + 0x30) = puVar26;
    *(byte **)((long)ppbVar12 + 0x38) = param_1;
switchD_00136940_caseD_e1:
    if (pbVar17 != (byte *)0x0) {
      pbVar28 = *(byte **)(pbVar16 + 0x18);
      goto LAB_00136b90;
    }
    goto LAB_00136c38;
  }
  pbVar16 = (byte *)FUN_00136a04(param_1,&local_58,&lStack_50);
  if ((int)pbVar16 == 0) goto switchD_00136940_caseD_1c;
  goto LAB_001368c8;
switchD_00136940_caseD_4c:
  *(byte **)(auVar7._0_8_ + 0x18) = pbVar28;
  if (pbVar28 != (byte *)0x0) {
    uVar14 = pbVar28 == *(byte **)(auVar7._0_8_ + 0x20);
    auVar9 = auVar7;
switchD_00136940_caseD_df:
    auVar7 = auVar9;
    auVar10 = auVar7;
    if ((bool)uVar14) {
switchD_00136940_caseD_c6:
      auVar39._8_8_ = *auVar10._0_8_;
      auVar39._0_8_ = auVar10._0_8_[1];
      auVar11 = auVar10;
switchD_00136940_caseD_f7:
      auVar7 = auVar11;
      plVar25 = auVar7._0_8_;
      pbVar16 = (byte *)(**(code **)(auVar39._0_8_ + 0x18))(auVar39._0_8_,auVar39._8_8_);
      if ((int)pbVar16 == 0) {
        return pbVar16;
      }
      plVar25[3] = 0;
      pbVar16 = pbVar28 + *plVar25;
      pbVar28 = (byte *)0x0;
      *plVar25 = (long)pbVar16;
    }
  }
  pbVar17 = param_1 + -(long)__n;
  auVar39._8_8_ = __n + auVar7._8_8_;
  auVar39._0_8_ = auVar7._0_8_;
  if (pbVar17 == (byte *)0x0) goto switchD_00136940_caseD_f8;
LAB_00136b90:
  pbVar19 = *(byte **)(auVar39._0_8_ + 0x20);
  param_1 = pbVar17;
  auVar4 = auVar39;
  if (pbVar19 <= pbVar17) {
switchD_00136940_caseD_55:
    if (pbVar28 == (byte *)0x0) goto LAB_00136c14;
  }
  pbVar20 = *(byte **)(auVar4._0_8_ + 0x10);
  auVar5 = auVar4;
switchD_00136940_caseD_56:
  pbVar19 = pbVar19 + -(long)pbVar28;
  uVar13 = param_1 <= pbVar19;
  uVar14 = pbVar19 == param_1;
  auVar6 = auVar5;
switchD_00136940_caseD_5e:
  __n = param_1;
  if (!(bool)uVar13 || (bool)uVar14) {
    __n = pbVar19;
  }
  memcpy(pbVar20 + (long)pbVar28,auVar6._8_8_,(size_t)__n);
  pbVar28 = __n + (long)pbVar28;
  auVar7 = auVar6;
  goto switchD_00136940_caseD_4c;
switchD_00136940_caseD_f8:
  goto LAB_00136c38;
LAB_00136c14:
  auVar39._8_8_ = *auVar4._0_8_;
  auVar39._0_8_ = auVar4._0_8_[1];
  auVar8 = auVar4;
switchD_00136940_caseD_f9:
  pbVar16 = (byte *)(**(code **)(auVar39._0_8_ + 0x18))(auVar39._0_8_,auVar39._8_8_,auVar8._8_8_);
  if ((int)pbVar16 == 0) {
    return pbVar16;
  }
  *auVar8._0_8_ = (long)(param_1 + *auVar8._0_8_);
LAB_00136c38:
  pbVar16 = (byte *)0x1;
switchD_00136940_caseD_e6:
                    /* WARNING: Read-only address (ram,0x0011ebfc) is written */
                    /* WARNING: Read-only address (ram,0x0011ec04) is written */
                    /* WARNING: Read-only address (ram,0x0011ec64) is written */
  return pbVar16;
}

