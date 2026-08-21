
/* v8::internal::RegExpParser::ParseOpenParenthesis(v8::internal::RegExpParser::RegExpParserState*)
    */

RegExpParserState * __thiscall
v8::internal::RegExpParser::ParseOpenParenthesis(RegExpParser *this,RegExpParserState *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  RegExpParserState *pRVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  Zone *pZVar14;
  long lVar15;
  long lVar16;
  ushort uVar17;
  char *pcVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  char *local_60;
  long lStack_58;
  
  uVar19 = *(undefined4 *)(param_1 + 0x14);
  Advance(this);
  if (*(int *)(this + 0x38) != 0x3f) {
    bVar6 = false;
LAB_0154a4dc:
    if (*(int *)(this + 0x44) < 0x10000) {
      *(int *)(this + 0x44) = *(int *)(this + 0x44) + 1;
      if (bVar6) {
        uVar10 = ParseCaptureGroupName(this);
        if (this[0x51] != (RegExpParser)0x0) {
          return (RegExpParserState *)0x0;
        }
      }
      else {
        uVar10 = 0;
      }
      uVar20 = 0;
      uVar21 = 0;
      uVar22 = 1;
      goto LAB_0154a534;
    }
    pcVar18 = "Too many captures";
    uVar10 = 0x12;
    goto LAB_0154a6e8;
  }
  lVar13 = *(long *)(this + 0x30);
  lVar15 = (long)*(int *)(this + 0x40);
  if (*(int *)(lVar13 + 0x24) <= *(int *)(this + 0x40)) goto switchD_0154a5f0_caseD_3b;
  if (*(char *)(lVar13 + 0x20) == '\0') {
    lVar16 = *(long *)(lVar13 + 0x28);
    uVar21 = (uint)*(ushort *)(lVar16 + lVar15 * 2);
  }
  else {
    lVar16 = *(long *)(lVar13 + 0x28);
    uVar21 = (uint)*(byte *)(lVar16 + lVar15);
  }
  lVar15 = lVar15 + 1;
  iVar7 = (int)lVar15;
  if (((((byte)this[0x3c] >> 4 & 1) != 0) && (iVar7 < *(int *)(lVar13 + 0x24))) &&
     ((uVar21 & 0xfc00) == 0xd800)) {
    if (*(char *)(lVar13 + 0x20) == '\0') {
      uVar20 = (uint)*(ushort *)(lVar16 + lVar15 * 2);
    }
    else {
      uVar20 = (uint)*(byte *)(lVar16 + lVar15);
    }
    if ((uVar20 & 0xfc00) == 0xdc00) {
      uVar21 = (uVar20 & 0x3ff | (uVar21 & 0x3ff) << 10) + 0x10000;
    }
  }
  switch(uVar21) {
  case 0x3a:
    *(int *)(this + 0x40) = iVar7;
    Advance(this);
    uVar21 = 0;
    uVar20 = 0;
LAB_0154a828:
    uVar10 = 0;
    uVar22 = 4;
    goto LAB_0154a534;
  case 0x3b:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
    break;
  case 0x3c:
    Advance(this);
    lVar15 = *(long *)(this + 0x30);
    lVar13 = (long)*(int *)(this + 0x40);
    iVar7 = *(int *)(lVar15 + 0x24);
    if (iVar7 <= *(int *)(this + 0x40)) goto LAB_0154a900;
    cVar3 = *(char *)(lVar15 + 0x20);
    if (cVar3 == '\0') {
      lVar15 = *(long *)(lVar15 + 0x28);
      uVar17 = *(ushort *)(lVar15 + lVar13 * 2);
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x28);
      uVar17 = (ushort)*(byte *)(lVar15 + lVar13);
    }
    uVar21 = *(uint *)(this + 0x3c);
    iVar12 = (int)(lVar13 + 1);
    if ((((uVar21 >> 4 & 1) == 0) || (iVar7 <= iVar12)) || ((uVar17 & 0xfc00) != 0xd800)) {
      if (uVar17 == 0x3d) goto LAB_0154a930;
    }
    else {
      if (cVar3 == '\0') {
        bVar6 = *(ushort *)(lVar15 + (long)iVar12 * 2) >> 10 != 0x37;
      }
      else {
        bVar6 = true;
      }
      if ((uVar17 == 0x3d) && (bVar6)) {
LAB_0154a930:
        *(int *)(this + 0x40) = iVar12;
        Advance(this);
        uVar21 = 0;
        uVar20 = 0;
        uVar10 = 0;
        uVar22 = 2;
        uVar19 = 1;
        goto LAB_0154a534;
      }
    }
    if (cVar3 == '\0') {
      uVar17 = *(ushort *)(lVar15 + lVar13 * 2);
      if ((uVar21 >> 4 & 1) != 0) goto LAB_0154a8cc;
LAB_0154a8f8:
      if (uVar17 == 0x21) {
LAB_0154a980:
        *(int *)(this + 0x40) = iVar12;
        Advance(this);
        uVar21 = 0;
        uVar20 = 0;
        uVar10 = 0;
        uVar22 = 3;
        uVar19 = 1;
        goto LAB_0154a534;
      }
    }
    else {
      uVar17 = (ushort)*(byte *)(lVar15 + lVar13);
      if ((uVar21 >> 4 & 1) == 0) goto LAB_0154a8f8;
LAB_0154a8cc:
      if ((iVar7 <= iVar12) || ((uVar17 & 0xfc00) != 0xd800)) goto LAB_0154a8f8;
      if (cVar3 == '\0') {
        bVar6 = *(ushort *)(lVar15 + (lVar13 + 1) * 2) >> 10 != 0x37;
        if (uVar17 != 0x21) goto LAB_0154a900;
LAB_0154a97c:
        if (!bVar6) goto LAB_0154a900;
        goto LAB_0154a980;
      }
      bVar6 = true;
      if (uVar17 == 0x21) goto LAB_0154a97c;
    }
LAB_0154a900:
    bVar6 = true;
    this[0x50] = (RegExpParser)0x1;
    Advance(this);
    goto LAB_0154a4dc;
  case 0x3d:
    *(int *)(this + 0x40) = iVar7;
    Advance(this);
    uVar19 = 0;
    uVar21 = 0;
    uVar20 = 0;
    uVar10 = 0;
    uVar22 = 2;
LAB_0154a534:
    pZVar14 = *(Zone **)(this + 8);
    pRVar8 = *(RegExpParserState **)(pZVar14 + 0x10);
    uVar11 = *(uint *)(*(long *)(param_1 + 8) + 0xc);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)pRVar8) < 0x28) {
      pRVar8 = (RegExpParserState *)Zone::NewExpand(pZVar14,0x28);
    }
    else {
      *(RegExpParserState **)(pZVar14 + 0x10) = pRVar8 + 0x28;
    }
    pZVar14 = *(Zone **)(this + 8);
    uVar2 = *(undefined4 *)(this + 0x44);
    *(RegExpParserState **)pRVar8 = param_1;
    puVar9 = *(undefined8 **)(pZVar14 + 0x10);
    if ((ulong)(*(long *)(pZVar14 + 0x18) - (long)puVar9) < 0x50) {
      puVar9 = (undefined8 *)Zone::NewExpand(pZVar14,0x50);
    }
    else {
      *(undefined8 **)(pZVar14 + 0x10) = puVar9 + 10;
    }
    *(uint *)((long)puVar9 + 0xc) = (uVar11 | uVar21) & (uVar20 ^ 0xffffffff);
    *puVar9 = pZVar14;
    *(undefined1 *)(puVar9 + 1) = 0;
    puVar9[2] = 0;
    *(undefined2 *)(puVar9 + 3) = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[7] = 0;
    puVar9[6] = 0;
    puVar9[9] = 0;
    puVar9[8] = 0;
    *(undefined8 **)(pRVar8 + 8) = puVar9;
    *(undefined4 *)(pRVar8 + 0x10) = uVar22;
    *(undefined4 *)(pRVar8 + 0x14) = uVar19;
    *(undefined4 *)(pRVar8 + 0x18) = uVar2;
    *(undefined8 *)(pRVar8 + 0x20) = uVar10;
    return pRVar8;
  case 0x69:
  case 0x6d:
  case 0x73:
switchD_0154a5f0_caseD_69:
    if (FLAG_regexp_mode_modifiers != '\0') {
      uVar21 = 0;
      uVar20 = 0;
      bVar6 = true;
      do {
        while( true ) {
          bVar5 = bVar6;
          Advance(this);
          iVar7 = *(int *)(this + 0x38);
          if (iVar7 == 0x2d) break;
          if (iVar7 < 0x69) {
            if (iVar7 == 0x29) {
              Advance(this);
              RegExpBuilder::FlushText(*(RegExpBuilder **)(param_1 + 8));
              *(uint *)(*(long *)(param_1 + 8) + 0xc) =
                   (*(uint *)(*(long *)(param_1 + 8) + 0xc) | uVar21) & (uVar20 ^ 0xffffffff);
              return param_1;
            }
            if (iVar7 != 0x3a) {
LAB_0154a834:
              pcVar18 = "Invalid flag group";
              uVar10 = 0x13;
              goto LAB_0154a6e8;
            }
            Advance(this);
            goto LAB_0154a828;
          }
          if (iVar7 == 0x69) {
            uVar11 = 2;
          }
          else if (iVar7 == 0x6d) {
            uVar11 = 4;
          }
          else {
            if (iVar7 != 0x73) goto LAB_0154a834;
            uVar11 = 0x20;
          }
          if ((uVar11 & (uVar21 | uVar20)) != 0) {
            pcVar18 = "Repeated flag in flag group";
            uVar10 = 0x1c;
            goto LAB_0154a6e8;
          }
          uVar1 = uVar11;
          uVar4 = 0;
          if (!bVar5) {
            uVar1 = 0;
            uVar4 = uVar11;
          }
          uVar20 = uVar4 | uVar20;
          uVar21 = uVar1 | uVar21;
          bVar6 = bVar5;
        }
        bVar6 = false;
      } while (bVar5);
      pcVar18 = "Multiple dashes in flag group";
      uVar10 = 0x1e;
      goto LAB_0154a6e8;
    }
    break;
  default:
    if (uVar21 == 0x21) {
      *(int *)(this + 0x40) = iVar7;
      Advance(this);
      uVar19 = 0;
      uVar21 = 0;
      uVar20 = 0;
      uVar10 = 0;
      uVar22 = 3;
      goto LAB_0154a534;
    }
    if (uVar21 == 0x2d) goto switchD_0154a5f0_caseD_69;
  }
switchD_0154a5f0_caseD_3b:
  pcVar18 = "Invalid group";
  uVar10 = 0xe;
LAB_0154a6e8:
  iVar7 = __strlen_chk(pcVar18,uVar10);
  if (this[0x51] != (RegExpParser)0x0) {
    return (RegExpParserState *)0x0;
  }
  lStack_58 = (long)iVar7;
  this[0x51] = (RegExpParser)0x1;
  local_60 = pcVar18;
  lVar15 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_60,0);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  **(long **)(this + 0x10) = lVar15;
  *(undefined4 *)(this + 0x38) = 0x200000;
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
  return (RegExpParserState *)0x0;
}

