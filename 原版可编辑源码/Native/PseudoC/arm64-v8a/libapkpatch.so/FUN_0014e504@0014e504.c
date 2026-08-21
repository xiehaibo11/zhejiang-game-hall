
void FUN_0014e504(long *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined8 uVar19;
  undefined *puVar20;
  char *pcVar21;
  undefined *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long local_60;
  undefined1 local_58 [16];
  ulong local_48;
  undefined1 local_3c [4];
  long local_38;
  
  auVar18._8_8_ = local_58._8_8_;
  auVar18._0_8_ = local_58._0_8_;
  auVar17._8_8_ = local_58._8_8_;
  auVar17._0_8_ = local_58._0_8_;
  auVar16._8_8_ = local_58._8_8_;
  auVar16._0_8_ = local_58._0_8_;
  auVar15._8_8_ = local_58._8_8_;
  auVar15._0_8_ = local_58._0_8_;
  auVar14._8_8_ = local_58._8_8_;
  auVar14._0_8_ = local_58._0_8_;
  auVar13._8_8_ = local_58._8_8_;
  auVar13._0_8_ = local_58._0_8_;
  auVar12._8_8_ = local_58._8_8_;
  auVar12._0_8_ = local_58._0_8_;
  auVar11._8_8_ = local_58._8_8_;
  auVar11._0_8_ = local_58._0_8_;
  auVar10._8_8_ = local_58._8_8_;
  auVar10._0_8_ = local_58._0_8_;
  auVar9._8_8_ = local_58._8_8_;
  auVar9._0_8_ = local_58._0_8_;
  auVar8._8_8_ = local_58._8_8_;
  auVar8._0_8_ = local_58._0_8_;
  auVar7._8_8_ = local_58._8_8_;
  auVar7._0_8_ = local_58._0_8_;
  auVar6._8_8_ = local_58._8_8_;
  auVar6._0_8_ = local_58._0_8_;
  auVar5._8_8_ = local_58._8_8_;
  auVar5._0_8_ = local_58._0_8_;
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  pcVar21 = (char *)*param_1;
  pcVar2 = (char *)param_1[1];
  uVar23 = (long)pcVar2 - (long)pcVar21;
  if (uVar23 < 2) goto LAB_0014e538;
  cVar3 = *pcVar21;
  if ((cVar3 == 'g') && (pcVar21[1] == 's')) {
    pcVar21 = pcVar21 + 2;
    uVar23 = (long)pcVar2 - (long)pcVar21;
    *param_1 = (long)pcVar21;
    local_3c[0] = 1;
    if (uVar23 < 2) goto LAB_0014e538;
    cVar3 = *pcVar21;
  }
  else {
    local_3c[0] = 0;
  }
  switch(cVar3) {
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9':
code_r0x0014e5d4:
    uVar19 = FUN_00151bc0(param_1);
    auVar8._8_8_ = local_58._8_8_;
    auVar8._0_8_ = local_58._0_8_;
    break;
  default:
    uVar19 = 0;
    auVar8 = auVar6;
    if ((uVar23 < 0xb) || (auVar8 = auVar7, cVar3 != 'u')) break;
    if ((pcVar21[1] == '8') && (((pcVar21[2] == '_' && (pcVar21[3] == '_')) && (pcVar21[4] == 'u')))
       ) {
      if (((((pcVar21[5] == 'u') && (pcVar21[6] == 'i')) && (pcVar21[7] == 'd')) &&
          ((pcVar21[8] == 'o' && (pcVar21[9] == 'f')))) && (pcVar21[10] == 't')) {
        *param_1 = (long)(pcVar21 + 0xb);
        local_58._0_8_ = FUN_0014a548(param_1);
      }
      else {
        if (((((pcVar21[5] != 'u') || (pcVar21[6] != 'i')) || (pcVar21[7] != 'd')) ||
            ((pcVar21[8] != 'o' || (pcVar21[9] != 'f')))) || (pcVar21[10] != 'z'))
        goto LAB_0014e538;
        *param_1 = (long)(pcVar21 + 0xb);
        local_58._0_8_ = FUN_0014e504(param_1);
      }
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        uVar19 = FUN_00153270(param_1,local_58);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
      }
      break;
    }
    goto LAB_0014e538;
  case 'L':
    uVar19 = FUN_0014f5b8(param_1);
    auVar8._8_8_ = local_58._8_8_;
    auVar8._0_8_ = local_58._0_8_;
    break;
  case 'T':
    uVar19 = FUN_0014d768(param_1);
    auVar8._8_8_ = local_58._8_8_;
    auVar8._0_8_ = local_58._0_8_;
    break;
  case 'a':
    uVar19 = 0;
    auVar8 = auVar18;
    switch(pcVar21[1]) {
    case 'N':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_001171c8;
      break;
    default:
      goto code_r0x0014e540;
    case 'S':
      puVar20 = &DAT_00118345;
      goto LAB_0014f370;
    case 'a':
      puVar20 = &DAT_0011a235;
      *param_1 = (long)(pcVar21 + 2);
      break;
    case 'd':
      puVar20 = &DAT_0011a495;
      *param_1 = (long)(pcVar21 + 2);
      goto LAB_0014f290;
    case 'n':
      puVar20 = &DAT_0011a495;
LAB_0014f370:
      *param_1 = (long)(pcVar21 + 2);
      puVar22 = puVar20 + 1;
      goto LAB_0014f378;
    case 't':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014a548(param_1);
      goto LAB_0014f0d8;
    case 'z':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
LAB_0014f0d8:
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        uVar19 = FUN_0014f500(param_1,"alignof (",local_58);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
      }
      goto code_r0x0014e540;
    }
    goto LAB_0014f078;
  case 'c':
    uVar19 = 0;
    auVar8 = auVar17;
    switch(pcVar21[1]) {
    case 'c':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014a548(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        local_48 = FUN_0014e504(param_1);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
        uVar19 = 0;
        if (local_48 != 0) {
          uVar19 = FUN_001516b0(param_1,local_58,&local_48);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
        }
      }
      break;
    case 'l':
      *param_1 = (long)(pcVar21 + 2);
      local_48 = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_48 != 0) {
        lVar24 = param_1[2];
        lVar25 = param_1[3];
        while ((pcVar21 = (char *)*param_1, pcVar21 == (char *)param_1[1] || (*pcVar21 != 'E'))) {
          local_58._0_8_ = FUN_0014e504(param_1);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
          uVar19 = 0;
          if (local_58._0_8_ == 0) goto code_r0x0014e540;
          FUN_0014c270(param_1 + 2,local_58);
        }
        lVar24 = (lVar25 - lVar24 >> 3) * 8;
        *param_1 = (long)(pcVar21 + 1);
        local_58 = FUN_00156e64(param_1,param_1[2] + lVar24,param_1[3]);
        param_1[3] = param_1[2] + lVar24;
        uVar19 = FUN_00151758(param_1,&local_48,local_58);
        auVar8 = local_58;
      }
      break;
    case 'm':
      puVar20 = &DAT_00116e2b;
      goto LAB_0014f370;
    case 'o':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &DAT_0011a497;
      goto LAB_0014f290;
    case 'v':
      uVar19 = FUN_001517f4(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
    }
    break;
  case 'd':
    uVar19 = 0;
    auVar8 = auVar16;
    switch(pcVar21[1]) {
    case 'V':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00115bff;
      goto LAB_0014f078;
    case 'a':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ == 0) break;
      local_48 = CONCAT71(local_48._1_7_,1);
      goto LAB_0014f2c0;
    case 'c':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014a548(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        local_48 = FUN_0014e504(param_1);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
        uVar19 = 0;
        if (local_48 != 0) {
          uVar19 = FUN_00151b18(param_1,local_58,&local_48);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
        }
      }
      break;
    case 'e':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &DAT_0011693c;
      goto LAB_0014f290;
    case 'l':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ == 0) break;
      local_48 = local_48 & 0xffffffffffffff00;
LAB_0014f2c0:
      uVar19 = FUN_00151a68(param_1,local_58,local_3c,&local_48);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      break;
    case 'n':
      goto code_r0x0014e5d4;
    case 's':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ == 0) break;
      local_48 = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_48 == 0) break;
      puVar20 = &DAT_00117e2d;
LAB_0014f30c:
      uVar19 = FUN_00152260(param_1,local_58,puVar20,&local_48);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      break;
    case 't':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        local_48 = FUN_0014e504(param_1);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
        uVar19 = 0;
        if (local_48 != 0) {
          uVar19 = FUN_00152318(param_1,local_58,&local_48);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
        }
      }
      break;
    case 'v':
      puVar20 = &DAT_00115092;
      goto LAB_0014f370;
    }
    break;
  case 'e':
    cVar3 = pcVar21[1];
    if (cVar3 == 'O') {
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00117b5a;
    }
    else {
      if (cVar3 != 'q') {
        if (cVar3 == 'o') {
          puVar20 = &DAT_001187dc;
          goto LAB_0014f370;
        }
        goto LAB_0014e538;
      }
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00117b5d;
    }
    goto LAB_0014f078;
  case 'f':
    if ((pcVar21[1] == 'p') ||
       (((pcVar21[1] == 'L' && (2 < uVar23)) && ((byte)pcVar21[2] - 0x30 < 10)))) {
      uVar19 = FUN_00150d88(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
    }
    else {
      uVar19 = FUN_0015106c(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
    }
    break;
  case 'g':
    if (pcVar21[1] == 't') {
      puVar20 = &DAT_00117b60;
      goto LAB_0014f370;
    }
    if (pcVar21[1] == 'e') {
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00114c6b;
      goto LAB_0014f078;
    }
    goto LAB_0014e538;
  case 'i':
    if (pcVar21[1] == 'l') {
      lVar24 = param_1[2];
      lVar25 = param_1[3];
      pcVar21 = pcVar21 + 2;
      *param_1 = (long)pcVar21;
      if (pcVar21 == pcVar2) goto LAB_0014ebb8;
      while (*pcVar21 != 'E') {
LAB_0014ebb8:
        do {
          local_58._0_8_ = FUN_00152458(param_1);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
          uVar19 = 0;
          if (local_58._0_8_ == 0) goto code_r0x0014e540;
          FUN_0014c270(param_1 + 2,local_58);
          pcVar21 = (char *)*param_1;
        } while (pcVar21 == (char *)param_1[1]);
      }
      lVar24 = (lVar25 - lVar24 >> 3) * 8;
      *param_1 = (long)(pcVar21 + 1);
      local_58 = FUN_00156e64(param_1,param_1[2] + lVar24,param_1[3]);
      param_1[3] = param_1[2] + lVar24;
      uVar19 = FUN_00152690(param_1,&local_48,local_58);
      auVar8 = local_58;
      break;
    }
    if (pcVar21[1] == 'x') {
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        local_48 = FUN_0014e504(param_1);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
        uVar19 = 0;
        if (local_48 != 0) {
          uVar19 = FUN_001523c0(param_1,local_58,&local_48);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
        }
      }
      break;
    }
    goto LAB_0014e538;
  case 'l':
    uVar19 = 0;
    auVar8 = auVar15;
    switch(pcVar21[1]) {
    case 'S':
      puVar20 = &UNK_00118a45;
LAB_0014ef7c:
      *param_1 = (long)(pcVar21 + 2);
      puVar22 = puVar20 + 3;
      goto LAB_0014f378;
    default:
      goto code_r0x0014e540;
    case 'e':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00119c2a;
      break;
    case 's':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00119311;
      break;
    case 't':
      puVar20 = &DAT_00114889;
      goto LAB_0014f370;
    }
    goto LAB_0014f078;
  case 'm':
    uVar19 = 0;
    auVar8 = auVar14;
    switch(pcVar21[1]) {
    case 'I':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00115c02;
      break;
    default:
      goto code_r0x0014e540;
    case 'L':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00116e2d;
      break;
    case 'i':
      puVar20 = &DAT_00115fb6;
      goto LAB_0014f370;
    case 'l':
      puVar20 = &DAT_0011693c;
      goto LAB_0014f370;
    case 'm':
      pcVar1 = pcVar21 + 2;
      *param_1 = (long)pcVar1;
      if ((pcVar1 == pcVar2) || (*pcVar1 != '_')) {
        local_58._0_8_ = FUN_0014e504(param_1);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
        uVar19 = 0;
        if (local_58._0_8_ == 0) goto code_r0x0014e540;
        puVar20 = &DAT_0011aa2c;
LAB_0014f39c:
        uVar19 = FUN_00152724(param_1,local_58,puVar20);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
        goto code_r0x0014e540;
      }
      puVar20 = &DAT_0011aa2c;
LAB_0014efb4:
      *param_1 = (long)(pcVar21 + 3);
      puVar22 = puVar20 + 2;
      goto LAB_0014f294;
    }
    goto LAB_0014f078;
  case 'n':
    uVar19 = 0;
    auVar8 = auVar13;
    switch(pcVar21[1]) {
    case 'a':
    case 'w':
      uVar19 = FUN_001527cc(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      break;
    case 'e':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00119a08;
      goto LAB_0014f078;
    case 'g':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &DAT_00115fb6;
      goto LAB_0014f290;
    case 't':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &DAT_001178e6;
LAB_0014f290:
      puVar22 = puVar20 + 1;
LAB_0014f294:
      uVar19 = FUN_00151608(param_1,puVar20,puVar22);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      break;
    case 'x':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        uVar19 = FUN_00152ae4(param_1,local_58);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
      }
    }
    break;
  case 'o':
    uVar19 = 0;
    auVar8 = auVar12;
    switch(pcVar21[1]) {
    case 'R':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_001187de;
      break;
    default:
      goto code_r0x0014e540;
    case 'n':
      goto code_r0x0014e5d4;
    case 'o':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00118347;
      break;
    case 'r':
      puVar20 = &DAT_0011a238;
      goto LAB_0014f370;
    }
    goto LAB_0014f078;
  case 'p':
    uVar19 = 0;
    auVar8 = auVar11;
    switch(pcVar21[1]) {
    case 'L':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00117fa4;
      break;
    default:
      goto code_r0x0014e540;
    case 'l':
      puVar20 = &DAT_001187e1;
      goto LAB_0014f370;
    case 'm':
      puVar20 = &UNK_001171cb;
      goto LAB_0014ef7c;
    case 'p':
      pcVar1 = pcVar21 + 2;
      *param_1 = (long)pcVar1;
      if ((pcVar1 == pcVar2) || (*pcVar1 != '_')) {
        local_58._0_8_ = FUN_0014e504(param_1);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
        uVar19 = 0;
        if (local_58._0_8_ == 0) goto code_r0x0014e540;
        puVar20 = &DAT_0011488b;
        goto LAB_0014f39c;
      }
      puVar20 = &DAT_0011488b;
      goto LAB_0014efb4;
    case 's':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &DAT_001187e1;
      goto LAB_0014f290;
    case 't':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ == 0) goto code_r0x0014e540;
      local_48 = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_48 == 0) goto code_r0x0014e540;
      puVar20 = &DAT_0011904c;
      goto LAB_0014f30c;
    }
    goto LAB_0014f078;
  case 'q':
    if (pcVar21[1] == 'u') {
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        local_48 = FUN_0014e504(param_1);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
        uVar19 = 0;
        if (local_48 != 0) {
          local_60 = FUN_0014e504(param_1);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
          uVar19 = 0;
          if (local_60 != 0) {
            uVar19 = FUN_00152b94(param_1,local_58,&local_48,&local_60);
            auVar8._8_8_ = local_58._8_8_;
            auVar8._0_8_ = local_58._0_8_;
          }
        }
      }
      break;
    }
LAB_0014e538:
    uVar19 = 0;
    auVar8 = auVar5;
    break;
  case 'r':
    uVar19 = 0;
    auVar8 = auVar10;
    switch(pcVar21[1]) {
    case 'M':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &UNK_00119c2d;
      break;
    default:
      goto code_r0x0014e540;
    case 'S':
      puVar20 = &DAT_00117fa7;
      goto LAB_0014ef7c;
    case 'c':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014a548(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        local_48 = FUN_0014e504(param_1);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
        uVar19 = 0;
        if (local_48 != 0) {
          uVar19 = FUN_00152c40(param_1,local_58,&local_48);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
        }
      }
      goto code_r0x0014e540;
    case 'm':
      puVar20 = &DAT_0011b710;
      goto LAB_0014f370;
    case 's':
      *param_1 = (long)(pcVar21 + 2);
      puVar20 = &DAT_00115335;
    }
LAB_0014f078:
    puVar22 = puVar20 + 2;
LAB_0014f378:
    uVar19 = FUN_00151550(param_1,puVar20,puVar22);
    auVar8._8_8_ = local_58._8_8_;
    auVar8._0_8_ = local_58._0_8_;
    break;
  case 's':
    uVar19 = 0;
    auVar8 = auVar9;
    switch(pcVar21[1]) {
    case 'P':
      lVar24 = param_1[2];
      lVar25 = param_1[3];
      pcVar21 = pcVar21 + 2;
      *param_1 = (long)pcVar21;
      if (pcVar21 == pcVar2) goto LAB_0014e964;
      while (*pcVar21 != 'E') {
LAB_0014e964:
        do {
          local_58._0_8_ = FUN_0014c080(param_1);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
          uVar19 = 0;
          if (local_58._0_8_ == 0) goto code_r0x0014e540;
          FUN_0014c270(param_1 + 2,local_58);
          pcVar21 = (char *)*param_1;
        } while (pcVar21 == (char *)param_1[1]);
      }
      lVar24 = (lVar25 - lVar24 >> 3) * 8;
      *param_1 = (long)(pcVar21 + 1);
      local_58 = FUN_00156e64(param_1,param_1[2] + lVar24,param_1[3]);
      param_1[3] = param_1[2] + lVar24;
      lVar24 = FUN_00153018(param_1,local_58);
      local_58._0_8_ = lVar24;
LAB_0014f4ec:
      uVar19 = FUN_00152f68(param_1,local_58);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      break;
    case 'Z':
      pcVar21 = pcVar21 + 2;
      *param_1 = (long)pcVar21;
      if (pcVar2 != pcVar21) {
        if (*pcVar21 == 'f') {
          local_58._0_8_ = FUN_00150d88(param_1);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
          uVar19 = 0;
          if (local_58._0_8_ == 0) break;
          goto LAB_0014f4ec;
        }
        if (*pcVar21 == 'T') {
          local_58._0_8_ = FUN_0014d768(param_1);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
          uVar19 = 0;
          if (local_58._0_8_ != 0) {
            uVar19 = FUN_00152ed8(param_1,local_58);
            auVar8._8_8_ = local_58._8_8_;
            auVar8._0_8_ = local_58._0_8_;
          }
          break;
        }
      }
      goto LAB_0014e538;
    case 'c':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014a548(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        local_48 = FUN_0014e504(param_1);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
        uVar19 = 0;
        if (local_48 != 0) {
          uVar19 = FUN_00152ce8(param_1,local_58,&local_48);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
        }
      }
      break;
    case 'p':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        uVar19 = FUN_00152d90(param_1,local_58);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
      }
      break;
    case 'r':
      goto code_r0x0014e5d4;
    case 't':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014a548(param_1);
      goto LAB_0014f1d8;
    case 'z':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
LAB_0014f1d8:
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        pcVar21 = "sizeof (";
LAB_0014f1e8:
        uVar19 = FUN_00152e20(param_1,pcVar21,local_58);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
      }
    }
    break;
  case 't':
    uVar19 = 0;
    switch(pcVar21[1]) {
    case 'e':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
      goto LAB_0014ec90;
    case 'i':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014a548(param_1);
LAB_0014ec90:
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ == 0) break;
      pcVar21 = "typeid (";
      goto LAB_0014f1e8;
    case 'l':
      *param_1 = (long)(pcVar21 + 2);
      local_48 = FUN_0014a548(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_48 != 0) {
        lVar24 = param_1[2];
        lVar25 = param_1[3];
        while ((pcVar21 = (char *)*param_1, pcVar21 == (char *)param_1[1] || (*pcVar21 != 'E'))) {
          local_58._0_8_ = FUN_00152458(param_1);
          auVar8._8_8_ = local_58._8_8_;
          auVar8._0_8_ = local_58._0_8_;
          uVar19 = 0;
          if (local_58._0_8_ == 0) goto code_r0x0014e540;
          FUN_0014c270(param_1 + 2,local_58);
        }
        lVar24 = (lVar25 - lVar24 >> 3) * 8;
        *param_1 = (long)(pcVar21 + 1);
        local_58 = FUN_00156e64(param_1,param_1[2] + lVar24,param_1[3]);
        param_1[3] = param_1[2] + lVar24;
        uVar19 = FUN_001530a8(param_1,&local_48,local_58);
        auVar8 = local_58;
      }
      break;
    case 'r':
      *param_1 = (long)(pcVar21 + 2);
      uVar19 = FUN_00153144(param_1,"throw");
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      break;
    case 'w':
      *param_1 = (long)(pcVar21 + 2);
      local_58._0_8_ = FUN_0014e504(param_1);
      auVar8._8_8_ = local_58._8_8_;
      auVar8._0_8_ = local_58._0_8_;
      uVar19 = 0;
      if (local_58._0_8_ != 0) {
        uVar19 = FUN_001531e0(param_1,local_58);
        auVar8._8_8_ = local_58._8_8_;
        auVar8._0_8_ = local_58._0_8_;
      }
    }
  }
code_r0x0014e540:
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return;
  }
  local_58 = auVar8;
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar19);
}

