
void FUN_0014a548(long *param_1)

{
  byte bVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  byte *pbVar12;
  long lVar13;
  byte *pbVar14;
  byte **ppbVar15;
  ulong *puVar16;
  long lVar17;
  char *pcVar18;
  byte *pbVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  char *pcVar23;
  byte *pbVar24;
  void *pvVar25;
  undefined8 *puVar26;
  byte *local_58;
  undefined1 local_50 [16];
  ulong local_40;
  long local_38;
  
  auVar3._8_8_ = local_50._8_8_;
  auVar3._0_8_ = local_50._0_8_;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  pbVar14 = (byte *)*param_1;
  pbVar12 = (byte *)param_1[1];
  local_58 = (byte *)0x0;
  uVar22 = (long)pbVar12 - (long)pbVar14;
  if (pbVar12 == pbVar14) {
code_r0x0014abe0:
    pbVar12 = (byte *)FUN_0015c340(param_1);
    auVar4._8_8_ = local_50._8_8_;
    auVar4._0_8_ = local_50._0_8_;
    goto LAB_0014abe8;
  }
  bVar1 = *pbVar14;
  switch(bVar1) {
  case 0x41:
    if (pbVar14 != pbVar12) {
      pbVar19 = pbVar14 + 1;
      *param_1 = (long)pbVar19;
      local_40 = 0;
      if (pbVar12 == pbVar19) {
LAB_0014b1fc:
        uVar22 = FUN_0014e504(param_1);
        auVar4._8_8_ = local_50._8_8_;
        auVar4._0_8_ = local_50._0_8_;
        pbVar12 = (byte *)0x0;
        if (uVar22 == 0) goto LAB_0014abe8;
        pcVar23 = (char *)*param_1;
        if ((pcVar23 == (char *)param_1[1]) || (local_50 = auVar4, *pcVar23 != '_'))
        goto LAB_0014b294;
        *param_1 = (long)(pcVar23 + 1);
        local_40 = uVar22;
      }
      else {
        if (*pbVar19 - 0x30 < 10) {
          local_50 = FUN_0014a40c(param_1,0);
          local_40 = FUN_0015d1e4(param_1,local_50);
          pcVar23 = (char *)*param_1;
          if ((pcVar23 == (char *)param_1[1]) || (*pcVar23 != '_')) goto LAB_0014b294;
          pbVar14 = (byte *)(pcVar23 + 1);
        }
        else {
          if (*pbVar19 != 0x5f) goto LAB_0014b1fc;
          pbVar14 = pbVar14 + 2;
        }
        *param_1 = (long)pbVar14;
        auVar4 = local_50;
      }
      local_50 = auVar4;
      pbVar14 = (byte *)FUN_0014a548(param_1);
      auVar4._8_8_ = local_50._8_8_;
      auVar4._0_8_ = pbVar14;
      pbVar12 = (byte *)0x0;
      if (pbVar14 != (byte *)0x0) {
        local_50._0_8_ = pbVar14;
        pbVar12 = (byte *)FUN_0015d614(param_1,local_50,&local_40);
        auVar4._8_8_ = local_50._8_8_;
        auVar4._0_8_ = local_50._0_8_;
      }
      goto LAB_0014abe8;
    }
    goto LAB_0014b294;
  default:
    goto code_r0x0014abe0;
  case 0x43:
    *param_1 = (long)(pbVar14 + 1);
    local_50._0_8_ = FUN_0014a548(param_1);
    pbVar12 = (byte *)0x0;
    if ((byte *)local_50._0_8_ == (byte *)0x0) goto code_r0x0014b168;
    local_58 = (byte *)FUN_0015c5b8(param_1,local_50);
    goto LAB_0014abf0;
  case 0x44:
    if (uVar22 < 2) {
LAB_0014b334:
      pbVar12 = (byte *)0x0;
      goto code_r0x0014b168;
    }
    pbVar12 = (byte *)0x0;
    switch(pbVar14[1]) {
    case 0x4f:
    case 0x6f:
    case 0x77:
    case 0x78:
      goto code_r0x0014ab14;
    case 0x54:
    case 0x74:
      pbVar12 = (byte *)FUN_0014dad8(param_1);
      auVar4._8_8_ = local_50._8_8_;
      auVar4._0_8_ = local_50._0_8_;
      goto LAB_0014abe8;
    case 0x61:
      *param_1 = (long)(pbVar14 + 2);
      pbVar12 = (byte *)FUN_0014e200(param_1,&DAT_00115fb1);
      break;
    case 99:
      pcVar23 = "decltype(auto)";
      *param_1 = (long)(pbVar14 + 2);
      goto LAB_0014b42c;
    case 100:
      pcVar23 = "decimal64";
      *param_1 = (long)(pbVar14 + 2);
      goto LAB_0014b3f4;
    case 0x65:
      *param_1 = (long)(pbVar14 + 2);
      pbVar12 = (byte *)FUN_001583e0(param_1,"decimal128");
      break;
    case 0x66:
      *param_1 = (long)(pbVar14 + 2);
      pcVar23 = "decimal32";
      goto LAB_0014b3f4;
    case 0x68:
      *param_1 = (long)(pbVar14 + 2);
      pcVar23 = "decimal16";
LAB_0014b3f4:
      pbVar12 = (byte *)FUN_0015847c(param_1,pcVar23);
      break;
    case 0x69:
      pcVar23 = "char32_t";
      *param_1 = (long)(pbVar14 + 2);
      goto LAB_0014b47c;
    case 0x6e:
      *param_1 = (long)(pbVar14 + 2);
      pcVar23 = "std::nullptr_t";
LAB_0014b42c:
      pbVar12 = (byte *)FUN_00158770(param_1,pcVar23);
      break;
    case 0x70:
      *param_1 = (long)(pbVar14 + 2);
      local_50._0_8_ = FUN_0014a548(param_1);
      pbVar12 = (byte *)0x0;
      if ((byte *)local_50._0_8_ == (byte *)0x0) break;
      local_58 = (byte *)FUN_00152d90(param_1,local_50);
      goto LAB_0014abf0;
    case 0x73:
      *param_1 = (long)(pbVar14 + 2);
      pcVar23 = "char16_t";
LAB_0014b47c:
      pbVar12 = (byte *)FUN_0015bfe0(param_1,pcVar23);
      break;
    case 0x75:
      *param_1 = (long)(pbVar14 + 2);
      pbVar12 = (byte *)FUN_00153428(param_1,"char8_t");
      break;
    case 0x76:
      pbVar12 = (byte *)FUN_0015c07c(param_1);
      auVar4._8_8_ = local_50._8_8_;
      auVar4._0_8_ = local_50._0_8_;
      goto LAB_0014abe8;
    }
    goto code_r0x0014b168;
  case 0x46:
    goto code_r0x0014ab14;
  case 0x47:
    *param_1 = (long)(pbVar14 + 1);
    local_50._0_8_ = FUN_0014a548(param_1);
    pbVar12 = (byte *)0x0;
    if ((byte *)local_50._0_8_ == (byte *)0x0) goto code_r0x0014b168;
    local_58 = (byte *)FUN_0015c658(param_1,local_50);
    goto LAB_0014abf0;
  case 0x4b:
  case 0x56:
  case 0x72:
    uVar21 = (ulong)(bVar1 == 0x72);
    if (uVar21 < uVar22) {
      uVar20 = 1;
      if (bVar1 == 0x72) {
        uVar20 = 2;
      }
      if (pbVar14[uVar21] != 0x56) {
        uVar20 = (uint)(bVar1 == 0x72);
      }
      uVar21 = (ulong)uVar20;
    }
    if (uVar21 < uVar22) {
      uVar20 = (uint)uVar21;
      if (pbVar14[uVar21] == 0x4b) {
        uVar20 = uVar20 + 1;
      }
      uVar21 = (ulong)uVar20;
    }
    if ((uVar22 <= uVar21) ||
       ((pbVar14[uVar21] != 0x46 &&
        (((pbVar14[uVar21] != 0x44 || (uVar22 <= uVar21 + 1)) ||
         ((0x29 < pbVar14[uVar21 + 1] - 0x4f ||
          ((1L << ((ulong)(pbVar14[uVar21 + 1] - 0x4f) & 0x3f) & 0x30100000001U) == 0))))))))
    goto code_r0x0014a648;
    goto code_r0x0014ab14;
  case 0x4d:
    local_50 = auVar3;
    if (pbVar14 != pbVar12) {
      *param_1 = (long)(pbVar14 + 1);
      local_50._0_8_ = FUN_0014a548(param_1);
      auVar4._8_8_ = local_50._8_8_;
      auVar4._0_8_ = local_50._0_8_;
      pbVar12 = (byte *)0x0;
      if ((byte *)local_50._0_8_ != (byte *)0x0) {
        local_40 = FUN_0014a548(param_1);
        auVar4._8_8_ = local_50._8_8_;
        auVar4._0_8_ = local_50._0_8_;
        pbVar12 = (byte *)0x0;
        if (local_40 != 0) {
          pbVar12 = (byte *)FUN_0015d86c(param_1,local_50,&local_40);
          auVar4._8_8_ = local_50._8_8_;
          auVar4._0_8_ = local_50._0_8_;
        }
      }
      goto LAB_0014abe8;
    }
LAB_0014b294:
    pbVar12 = (byte *)0x0;
    auVar4 = local_50;
LAB_0014abe8:
    local_58 = pbVar12;
    local_50 = auVar4;
    if (pbVar12 == (byte *)0x0) goto code_r0x0014b168;
    goto LAB_0014abf0;
  case 0x4f:
    *param_1 = (long)(pbVar14 + 1);
    local_50._0_8_ = FUN_0014a548(param_1);
    pbVar12 = (byte *)0x0;
    if ((byte *)local_50._0_8_ == (byte *)0x0) goto code_r0x0014b168;
    local_40 = CONCAT44(local_40._4_4_,1);
    goto LAB_0014b070;
  case 0x50:
    *param_1 = (long)(pbVar14 + 1);
    local_50._0_8_ = FUN_0014a548(param_1);
    pbVar12 = (byte *)0x0;
    if ((byte *)local_50._0_8_ == (byte *)0x0) goto code_r0x0014b168;
    local_58 = (byte *)FUN_0015c470(param_1,local_50);
    goto LAB_0014abf0;
  case 0x52:
    *param_1 = (long)(pbVar14 + 1);
    local_50._0_8_ = FUN_0014a548(param_1);
    pbVar12 = (byte *)0x0;
    if ((byte *)local_50._0_8_ == (byte *)0x0) goto code_r0x0014b168;
    local_40 = local_40 & 0xffffffff00000000;
LAB_0014b070:
    local_58 = (byte *)FUN_0015c50c(param_1,local_50,&local_40);
    goto LAB_0014abf0;
  case 0x53:
    if (((uVar22 < 2) || (pbVar14[1] == 0)) || (pbVar14[1] == 0x74)) goto code_r0x0014abe0;
    pbVar12 = (byte *)FUN_0014ceb0(param_1);
    auVar10._8_8_ = local_50._8_8_;
    auVar10._0_8_ = pbVar12;
    auVar9._8_8_ = local_50._8_8_;
    auVar9._0_8_ = pbVar12;
    auVar8._8_8_ = local_50._8_8_;
    auVar8._0_8_ = pbVar12;
    local_50._0_8_ = pbVar12;
    if ((((pbVar12 == (byte *)0x0) || (local_50 = auVar8, (char)param_1[0x61] == '\0')) ||
        (local_50 = auVar9, (char *)param_1[1] == (char *)*param_1)) ||
       (local_50 = auVar10, *(char *)*param_1 != 'I')) goto code_r0x0014b168;
    local_40 = FUN_0014d248(param_1,0);
    pbVar12 = (byte *)0x0;
    if (local_40 == 0) goto code_r0x0014b168;
    ppbVar15 = (byte **)local_50;
    puVar16 = &local_40;
LAB_0014b2e8:
    local_58 = (byte *)FUN_0014d6d0(param_1,ppbVar15,puVar16);
    goto LAB_0014abf0;
  case 0x54:
    if (((1 < uVar22) && (pbVar14[1] - 0x65 < 0x11)) &&
       ((1 << (ulong)(pbVar14[1] - 0x65 & 0x1f) & 0x14001U) != 0)) goto code_r0x0014abe0;
    pbVar12 = (byte *)FUN_0014d768(param_1);
    auVar7._8_8_ = local_50._8_8_;
    auVar7._0_8_ = local_50._0_8_;
    auVar6._8_8_ = local_50._8_8_;
    auVar6._0_8_ = local_50._0_8_;
    auVar5._8_8_ = local_50._8_8_;
    auVar5._0_8_ = local_50._0_8_;
    local_58 = pbVar12;
    local_50 = auVar7;
    if (pbVar12 == (byte *)0x0) goto code_r0x0014b168;
    local_50 = auVar5;
    if ((((char)param_1[0x61] != '\0') &&
        (local_50 = auVar6, (char *)param_1[1] != (char *)*param_1)) &&
       (local_50 = auVar7, *(char *)*param_1 == 'I')) {
      local_50._0_8_ = FUN_0014d248(param_1,0);
      pbVar12 = (byte *)0x0;
      if ((byte *)local_50._0_8_ == (byte *)0x0) goto code_r0x0014b168;
      ppbVar15 = &local_58;
      puVar16 = (ulong *)local_50;
      goto LAB_0014b2e8;
    }
    goto LAB_0014abf0;
  case 0x55:
code_r0x0014a648:
    pbVar12 = (byte *)FUN_0015bc28(param_1);
    auVar4._8_8_ = local_50._8_8_;
    auVar4._0_8_ = local_50._0_8_;
    goto LAB_0014abe8;
  case 0x61:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (undefined8 *)0x0) {
LAB_0014b4b8:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = (long)puVar11 + lVar17;
    pcVar23 = "signed char";
    goto LAB_0014b0e4;
  case 0x62:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (undefined8 *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = lVar17 + 0x20;
    lVar17 = (long)puVar11 + lVar17;
    pcVar23 = "bool";
    goto LAB_0014b150;
  case 99:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (undefined8 *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = lVar17 + 0x20;
    lVar17 = (long)puVar11 + lVar17;
    pcVar23 = "char";
    goto LAB_0014b150;
  case 100:
    pvVar25 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = *(long *)((long)pvVar25 + 8);
    puVar11 = pvVar25;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = pvVar25;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    pcVar23 = "double";
    *(long *)((long)puVar11 + 8) = lVar17 + 0x20;
    pbVar12 = (byte *)((long)puVar11 + lVar17 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = "";
    break;
  case 0x65:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = (long)puVar11 + lVar17;
    pcVar23 = "long double";
LAB_0014b0e4:
    puVar11[1] = lVar17 + 0x20;
    pbVar12 = (byte *)(lVar13 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = pcVar23 + 0xb;
    break;
  case 0x66:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = (long)puVar11 + lVar17;
    pcVar23 = "float";
    goto LAB_0014af3c;
  case 0x67:
    pvVar25 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = *(long *)((long)pvVar25 + 8);
    puVar11 = pvVar25;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = pvVar25;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    pcVar23 = "__float128";
    *(long *)((long)puVar11 + 8) = lVar17 + 0x20;
    pbVar12 = (byte *)((long)puVar11 + lVar17 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = "";
    break;
  case 0x68:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (undefined8 *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = (long)puVar11 + lVar17;
    pcVar23 = "unsigned char";
    goto LAB_0014ad2c;
  case 0x69:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (undefined8 *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = (long)puVar11 + lVar17;
    pcVar23 = "int";
    goto LAB_0014ad98;
  case 0x6a:
    pvVar25 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = *(long *)((long)pvVar25 + 8);
    puVar11 = pvVar25;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = pvVar25;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    pcVar23 = "unsigned int";
    *(long *)((long)puVar11 + 8) = lVar17 + 0x20;
    pbVar12 = (byte *)((long)puVar11 + lVar17 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = "";
    break;
  case 0x6c:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (undefined8 *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = lVar17 + 0x20;
    lVar17 = (long)puVar11 + lVar17;
    pcVar23 = "long";
    goto LAB_0014b150;
  case 0x6d:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = (long)puVar11 + lVar17;
    pcVar23 = "unsigned long";
LAB_0014ad2c:
    puVar11[1] = lVar17 + 0x20;
    pbVar12 = (byte *)(lVar13 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = pcVar23 + 0xd;
    break;
  case 0x6e:
    pvVar25 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = *(long *)((long)pvVar25 + 8);
    puVar11 = pvVar25;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = pvVar25;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    pcVar23 = "__int128";
    *(long *)((long)puVar11 + 8) = lVar17 + 0x20;
    pbVar12 = (byte *)((long)puVar11 + lVar17 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = "";
    break;
  case 0x6f:
    pvVar25 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = *(long *)((long)pvVar25 + 8);
    puVar11 = pvVar25;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = pvVar25;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    pcVar23 = "unsigned __int128";
    *(long *)((long)puVar11 + 8) = lVar17 + 0x20;
    pbVar12 = (byte *)((long)puVar11 + lVar17 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = "";
    break;
  case 0x73:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (undefined8 *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = (long)puVar11 + lVar17;
    pcVar23 = "short";
LAB_0014af3c:
    puVar11[1] = lVar17 + 0x20;
    pbVar12 = (byte *)(lVar13 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = pcVar23 + 5;
    break;
  case 0x74:
    pvVar25 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = *(long *)((long)pvVar25 + 8);
    puVar11 = pvVar25;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = pvVar25;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    pcVar23 = "unsigned short";
    *(long *)((long)puVar11 + 8) = lVar17 + 0x20;
    pbVar12 = (byte *)((long)puVar11 + lVar17 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = "";
    break;
  case 0x75:
    pbVar19 = pbVar14 + 1;
    *param_1 = (long)pbVar19;
    if ((pbVar12 == pbVar19) || (9 < *pbVar19 - 0x30)) {
LAB_0014b30c:
      local_50._8_8_ = (byte *)0x0;
      local_50._0_8_ = (byte *)0x0;
    }
    else {
      uVar22 = 0;
      pbVar19 = pbVar14 + 1;
      pbVar14 = pbVar14 + 2;
      do {
        *param_1 = (long)pbVar14;
        uVar22 = ((ulong)pbVar14[-1] + uVar22 * 10) - 0x30;
        local_50._0_8_ = pbVar12;
        pbVar24 = pbVar12;
        if (pbVar14 == pbVar12) break;
        bVar1 = *pbVar14;
        local_50._0_8_ = pbVar19 + 1;
        pbVar19 = (byte *)local_50._0_8_;
        pbVar24 = pbVar14;
        pbVar14 = pbVar14 + 1;
      } while (bVar1 - 0x30 < 10);
      if ((ulong)((long)pbVar12 - local_50._0_8_) < uVar22) goto LAB_0014b30c;
      local_50._8_8_ = pbVar24 + uVar22;
      *param_1 = local_50._8_8_;
    }
    if (local_50._0_8_ == local_50._8_8_) goto LAB_0014b334;
    local_58 = (byte *)FUN_00157750(param_1,local_50);
LAB_0014abf0:
    FUN_0014c270(param_1 + 0x25,&local_58);
    pbVar12 = local_58;
    goto code_r0x0014b168;
  case 0x76:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = lVar17 + 0x20;
    lVar17 = (long)puVar11 + lVar17;
    pcVar23 = "void";
LAB_0014b150:
    puVar11[1] = lVar13;
    pbVar12 = (byte *)(lVar17 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = pcVar23 + 4;
    break;
  case 0x77:
    pvVar25 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = *(long *)((long)pvVar25 + 8);
    puVar11 = pvVar25;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = pvVar25;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    pcVar23 = "wchar_t";
    *(long *)((long)puVar11 + 8) = lVar17 + 0x20;
    pbVar12 = (byte *)((long)puVar11 + lVar17 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = "";
    break;
  case 0x78:
    pvVar25 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = *(long *)((long)pvVar25 + 8);
    puVar11 = pvVar25;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = pvVar25;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    pcVar23 = "long long";
    *(long *)((long)puVar11 + 8) = lVar17 + 0x20;
    pbVar12 = (byte *)((long)puVar11 + lVar17 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = "";
    break;
  case 0x79:
    pvVar25 = (void *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = *(long *)((long)pvVar25 + 8);
    puVar11 = pvVar25;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = pvVar25;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    pcVar23 = "unsigned long long";
    *(long *)((long)puVar11 + 8) = lVar17 + 0x20;
    pbVar12 = (byte *)((long)puVar11 + lVar17 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = "";
    break;
  case 0x7a:
    puVar26 = (undefined8 *)param_1[0x266];
    *param_1 = (long)(pbVar14 + 1);
    lVar17 = puVar26[1];
    puVar11 = puVar26;
    if (0xfef < lVar17 + 0x20U) {
      puVar11 = malloc(0x1000);
      if (puVar11 == (void *)0x0) goto LAB_0014b4b8;
      lVar17 = 0;
      *puVar11 = puVar26;
      puVar11[1] = 0;
      param_1[0x266] = (long)puVar11;
    }
    lVar13 = (long)puVar11 + lVar17;
    pcVar23 = "...";
LAB_0014ad98:
    puVar11[1] = lVar17 + 0x20;
    pbVar12 = (byte *)(lVar13 + 0x10);
    *(undefined ***)pbVar12 = &PTR_FUN_001671f0;
    pcVar18 = pcVar23 + 3;
  }
  pbVar12[8] = 7;
  pbVar12[9] = 1;
  pbVar12[10] = 1;
  pbVar12[0xb] = 1;
  *(char **)(pbVar12 + 0x10) = pcVar23;
  *(char **)(pbVar12 + 0x18) = pcVar18;
code_r0x0014b168:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pbVar12);
code_r0x0014ab14:
  pbVar12 = (byte *)FUN_0015b748(param_1);
  auVar4._8_8_ = local_50._8_8_;
  auVar4._0_8_ = local_50._0_8_;
  goto LAB_0014abe8;
}

