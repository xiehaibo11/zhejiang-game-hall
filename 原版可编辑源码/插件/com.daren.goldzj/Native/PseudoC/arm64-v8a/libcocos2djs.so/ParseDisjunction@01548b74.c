
/* v8::internal::RegExpParser::ParseDisjunction() */

undefined8 __thiscall v8::internal::RegExpParser::ParseDisjunction(RegExpParser *this)

{
  int iVar1;
  RegExpParserState *pRVar2;
  int iVar3;
  RegExpTree *pRVar4;
  long *plVar5;
  RegExpCharacterClass *pRVar6;
  ulong uVar7;
  ZoneList *pZVar8;
  void *pvVar9;
  long lVar10;
  RegExpBuilder *this_00;
  undefined8 uVar11;
  bool bVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 *puVar15;
  char cVar16;
  ushort uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  Zone *pZVar21;
  char *pcVar22;
  uint uVar23;
  uint uVar24;
  ushort uVar25;
  undefined4 uVar26;
  RegExpParserState *local_b0;
  undefined8 local_a8;
  RegExpBuilder *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  char *local_80;
  long lStack_78;
  int local_68;
  int local_64;
  
  pZVar21 = *(Zone **)(this + 8);
  uVar13 = *(undefined4 *)(this + 0x3c);
  local_a8 = 0;
  this_00 = *(RegExpBuilder **)(pZVar21 + 0x10);
  if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)this_00) < 0x50) {
    this_00 = (RegExpBuilder *)Zone::NewExpand(pZVar21,0x50);
  }
  else {
    *(RegExpBuilder **)(pZVar21 + 0x10) = this_00 + 0x50;
  }
  local_b0 = (RegExpParserState *)&local_a8;
  *(Zone **)this_00 = pZVar21;
  this_00[8] = (RegExpBuilder)0x0;
  *(undefined4 *)(this_00 + 0xc) = uVar13;
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined2 *)(this_00 + 0x18) = 0;
  *(undefined8 *)(this_00 + 0x28) = 0;
  *(undefined8 *)(this_00 + 0x20) = 0;
  *(undefined8 *)(this_00 + 0x38) = 0;
  *(undefined8 *)(this_00 + 0x30) = 0;
  *(undefined8 *)(this_00 + 0x48) = 0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_a0 = this_00;
LAB_01548c58:
LAB_01548c80:
  iVar3 = *(int *)(this + 0x38);
  switch(iVar3) {
  case 0x24:
    Advance(this);
    pZVar21 = *(Zone **)(this + 8);
    pRVar4 = *(RegExpTree **)(pZVar21 + 0x10);
    uVar26 = 2;
    if (((byte)this_00[0xc] & 4) == 0) {
      uVar26 = 3;
    }
    if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pRVar4) < 0x10) {
      pRVar4 = (RegExpTree *)Zone::NewExpand(pZVar21,0x10);
    }
    else {
      *(RegExpTree **)(pZVar21 + 0x10) = pRVar4 + 0x10;
    }
    uVar13 = *(undefined4 *)(this_00 + 0xc);
    *(undefined ***)pRVar4 = &PTR__RegExpTree_01cc7428;
    *(undefined4 *)(pRVar4 + 8) = uVar26;
    goto LAB_01548c64;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x2c:
  case 0x2d:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
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
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
    goto switchD_01548c9c_caseD_25;
  case 0x28:
    local_b0 = (RegExpParserState *)ParseOpenParenthesis(this,local_b0);
    if (this[0x51] != (RegExpParser)0x0) {
      return 0;
    }
    this_00 = *(RegExpBuilder **)(local_b0 + 8);
    goto LAB_01548c58;
  case 0x29:
    if (*(long *)local_b0 != 0) {
      Advance(this);
      uVar11 = RegExpBuilder::ToRegExp(this_00);
      iVar3 = *(int *)(local_b0 + 0x10);
      if (iVar3 == 4) {
        pZVar21 = *(Zone **)(this + 8);
        pRVar4 = *(RegExpTree **)(pZVar21 + 0x10);
        if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pRVar4) < 0x10) {
          pRVar4 = (RegExpTree *)Zone::NewExpand(pZVar21,0x10);
        }
        else {
          *(RegExpTree **)(pZVar21 + 0x10) = pRVar4 + 0x10;
        }
        *(undefined ***)pRVar4 = &PTR__RegExpTree_01cc7b18;
        *(undefined8 *)(pRVar4 + 8) = uVar11;
      }
      else {
        iVar14 = *(int *)(local_b0 + 0x18);
        if (iVar3 == 1) {
          if ((*(ZoneVector **)(local_b0 + 0x20) != (ZoneVector *)0x0) &&
             (CreateNamedCaptureAtIndex(this,*(ZoneVector **)(local_b0 + 0x20),iVar14),
             this[0x51] != (RegExpParser)0x0)) {
            return 0;
          }
          pRVar4 = (RegExpTree *)GetCapture(this,iVar14);
          *(undefined8 *)(pRVar4 + 8) = uVar11;
        }
        else {
          pZVar21 = *(Zone **)(this + 8);
          iVar1 = *(int *)(this + 0x44);
          pRVar4 = *(RegExpTree **)(pZVar21 + 0x10);
          if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pRVar4) < 0x20) {
            pRVar4 = (RegExpTree *)Zone::NewExpand(pZVar21,0x20);
          }
          else {
            *(RegExpTree **)(pZVar21 + 0x10) = pRVar4 + 0x20;
          }
          *(undefined4 *)(pRVar4 + 0x1c) = *(undefined4 *)(local_b0 + 0x14);
          *(undefined ***)pRVar4 = &PTR__RegExpTree_01cc7c40;
          *(undefined8 *)(pRVar4 + 8) = uVar11;
          pRVar4[0x10] = (RegExpTree)(iVar3 == 2);
          *(int *)(pRVar4 + 0x14) = iVar1 - iVar14;
          *(int *)(pRVar4 + 0x18) = iVar14;
        }
      }
      local_b0 = *(RegExpParserState **)local_b0;
      this_00 = *(RegExpBuilder **)(local_b0 + 8);
      goto LAB_015491ac;
    }
    pcVar22 = "Unmatched \')\'";
    uVar11 = 0xe;
    break;
  case 0x2a:
  case 0x2b:
  case 0x3f:
    pcVar22 = "Nothing to repeat";
    uVar11 = 0x12;
    break;
  case 0x2e:
    Advance(this);
    pZVar21 = *(Zone **)(this + 8);
    pZVar8 = *(ZoneList **)(pZVar21 + 0x10);
    if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pZVar8) < 0x10) {
      pZVar8 = (ZoneList *)Zone::NewExpand(pZVar21,0x10);
    }
    else {
      *(ZoneList **)(pZVar21 + 0x10) = pZVar8 + 0x10;
    }
    pZVar21 = *(Zone **)(this + 8);
    lVar10 = *(long *)(pZVar21 + 0x10);
    if ((ulong)(*(long *)(pZVar21 + 0x18) - lVar10) < 0x10) {
      lVar10 = Zone::NewExpand(pZVar21,0x10);
    }
    else {
      *(long *)(pZVar21 + 0x10) = lVar10 + 0x10;
    }
    *(long *)pZVar8 = lVar10;
    *(undefined8 *)(pZVar8 + 8) = 2;
    cVar16 = '.';
    if ((*(uint *)(this_00 + 0xc) & 0x20) != 0) {
      cVar16 = '*';
    }
    CharacterRange::AddClassEscape(cVar16,pZVar8,false,*(Zone **)(this + 8));
    pZVar21 = *(Zone **)(this + 8);
    pRVar6 = *(RegExpCharacterClass **)(pZVar21 + 0x10);
    if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pRVar6) < 0x20) {
      pRVar6 = (RegExpCharacterClass *)Zone::NewExpand(pZVar21,0x20);
    }
    else {
      *(RegExpCharacterClass **)(pZVar21 + 0x10) = pRVar6 + 0x20;
    }
    pZVar21 = *(Zone **)(this + 8);
    uVar13 = *(undefined4 *)(this_00 + 0xc);
    *(undefined2 *)(pRVar6 + 0x10) = 0;
LAB_015494e0:
    *(undefined ***)pRVar6 = &PTR__RegExpTree_01cc7550;
    *(ZoneList **)(pRVar6 + 8) = pZVar8;
    *(undefined4 *)(pRVar6 + 0x18) = uVar13;
    *(undefined4 *)(pRVar6 + 0x1c) = 0;
    if (*(int *)(pZVar8 + 0xc) == 0) {
      uVar19 = *(uint *)(pZVar8 + 8);
      if ((int)uVar19 < 1) {
        pvVar9 = *(void **)(pZVar21 + 0x10);
        uVar24 = uVar19 << 1 | 1;
        uVar7 = -(ulong)((uVar19 & 0x7fffffff) >> 0x1e) & 0xfffffff800000000 | (ulong)uVar24 << 3;
        if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pvVar9) < uVar7) {
          pvVar9 = (void *)Zone::NewExpand(pZVar21,uVar7);
        }
        else {
          *(ulong *)(pZVar21 + 0x10) = (long)pvVar9 + uVar7;
        }
        uVar19 = *(uint *)(pZVar8 + 0xc);
        if (0 < (int)uVar19) {
          MemCopy(pvVar9,*(void **)pZVar8,(ulong)uVar19 << 3);
          uVar19 = *(uint *)(pZVar8 + 0xc);
        }
        puVar15 = (undefined8 *)((long)pvVar9 + (long)(int)uVar19 * 8);
        *(void **)pZVar8 = pvVar9;
        *(uint *)(pZVar8 + 8) = uVar24;
        *(uint *)(pZVar8 + 0xc) = uVar19 + 1;
      }
      else {
        puVar15 = *(undefined8 **)pZVar8;
        *(undefined4 *)(pZVar8 + 0xc) = 1;
      }
      *puVar15 = 0x10ffff00000000;
      *(uint *)(pRVar6 + 0x1c) = *(uint *)(pRVar6 + 0x1c) ^ 1;
    }
    RegExpBuilder::AddCharacterClass(this_00,pRVar6);
    goto LAB_01549814;
  case 0x5b:
    plVar5 = (long *)ParseCharacterClass(this,this_00);
    if (this[0x51] != (RegExpParser)0x0) {
      return 0;
    }
    pRVar6 = (RegExpCharacterClass *)(**(code **)(*plVar5 + 0x88))();
    RegExpBuilder::AddCharacterClass(this_00,pRVar6);
    goto LAB_01549814;
  case 0x5c:
    lVar10 = *(long *)(this + 0x30);
    lVar20 = (long)*(int *)(this + 0x40);
    iVar3 = *(int *)(lVar10 + 0x24);
    if (iVar3 <= *(int *)(this + 0x40)) {
      pcVar22 = "\\ at end of pattern";
      uVar11 = 0x14;
      break;
    }
    cVar16 = *(char *)(lVar10 + 0x20);
    if (cVar16 == '\0') {
      lVar10 = *(long *)(lVar10 + 0x28);
      uVar19 = (uint)*(ushort *)(lVar10 + lVar20 * 2);
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x28);
      uVar19 = (uint)*(byte *)(lVar10 + lVar20);
    }
    uVar24 = *(uint *)(this + 0x3c);
    uVar7 = lVar20 + 1;
    iVar14 = (int)uVar7;
    if ((((uVar24 >> 4 & 1) != 0) && (iVar14 < iVar3)) && ((uVar19 & 0xfc00) == 0xd800)) {
      if (cVar16 == '\0') {
        uVar23 = (uint)*(ushort *)(lVar10 + uVar7 * 2);
      }
      else {
        uVar23 = (uint)*(byte *)(lVar10 + uVar7);
      }
      if ((uVar23 & 0xfc00) == 0xdc00) {
        uVar19 = (uVar23 & 0x3ff | (uVar19 & 0x3ff) << 10) + 0x10000;
      }
    }
    switch(uVar19) {
    case 0x30:
      goto switchD_01548dac_caseD_30;
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
      local_64 = 0;
      uVar7 = ParseBackReferenceIndex(this,&local_64);
      if (this[0x51] != (RegExpParser)0x0) {
        return 0;
      }
      pRVar2 = local_b0;
      if ((uVar7 & 1) != 0) goto joined_r0x01549084;
      if (((byte)this[0x3c] >> 4 & 1) != 0) {
        pcVar22 = "Invalid escape";
        uVar11 = 0xf;
        goto LAB_01549a5c;
      }
      lVar10 = *(long *)(this + 0x30);
      iVar3 = *(int *)(this + 0x40);
      if (iVar3 < *(int *)(lVar10 + 0x24)) {
        if (*(char *)(lVar10 + 0x20) == '\0') {
          uVar25 = *(ushort *)(*(long *)(lVar10 + 0x28) + (long)iVar3 * 2);
        }
        else {
          uVar25 = (ushort)*(byte *)(*(long *)(lVar10 + 0x28) + (long)iVar3);
        }
        if ((uVar25 | 1) == 0x39) {
          RegExpBuilder::AddCharacter(this_00,uVar25);
          *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
          goto LAB_01548ef4;
        }
      }
switchD_01548dac_caseD_30:
      Advance(this);
      if (((byte)this[0x3c] >> 4 & 1) != 0) {
        lVar10 = *(long *)(this + 0x30);
        lVar20 = (long)*(int *)(this + 0x40);
        iVar3 = *(int *)(lVar10 + 0x24);
        if (*(int *)(this + 0x40) < iVar3) {
          cVar16 = *(char *)(lVar10 + 0x20);
          if (cVar16 == '\0') {
            lVar10 = *(long *)(lVar10 + 0x28);
            uVar19 = (uint)*(ushort *)(lVar10 + lVar20 * 2);
          }
          else {
            lVar10 = *(long *)(lVar10 + 0x28);
            uVar19 = (uint)*(byte *)(lVar10 + lVar20);
          }
          lVar18 = lVar20 + 1;
          if (((int)lVar18 < iVar3) && ((uVar19 & 0xfc00) == 0xd800)) {
            if (cVar16 == '\0') {
              uVar24 = (uint)*(ushort *)(lVar10 + lVar18 * 2);
            }
            else {
              uVar24 = (uint)*(byte *)(lVar10 + lVar18);
            }
            if ((uVar24 & 0xfc00) == 0xdc00) {
              uVar19 = (uVar24 & 0x3ff | (uVar19 & 0x3ff) << 10) + 0x10000;
            }
          }
          if (0x2f < uVar19) {
            if (cVar16 == '\0') {
              uVar19 = (uint)*(ushort *)(lVar10 + lVar20 * 2);
            }
            else {
              uVar19 = (uint)*(byte *)(lVar10 + lVar20);
            }
            if (((int)lVar18 < iVar3) && ((uVar19 & 0xfc00) == 0xd800)) {
              if (cVar16 == '\0') {
                uVar24 = (uint)*(ushort *)(lVar10 + lVar18 * 2);
              }
              else {
                uVar24 = (uint)*(byte *)(lVar10 + lVar18);
              }
              if ((uVar24 & 0xfc00) == 0xdc00) {
                uVar19 = (uVar24 & 0x3ff | (uVar19 & 0x3ff) << 10) + 0x10000;
              }
            }
            if (uVar19 < 0x3a) {
              pcVar22 = "Invalid decimal escape";
              uVar11 = 0x17;
              goto LAB_015499a4;
            }
          }
        }
      }
      uVar23 = *(int *)(this + 0x38) - 0x30;
      Advance(this);
      if ((*(uint *)(this + 0x38) & 0xfffffff8) == 0x30) {
        uVar23 = (*(uint *)(this + 0x38) + uVar23 * 8) - 0x30;
        Advance(this);
        if (((int)uVar23 < 0x20) && ((*(uint *)(this + 0x38) & 0xfffffff8) == 0x30)) {
          uVar23 = (*(uint *)(this + 0x38) + uVar23 * 8) - 0x30;
LAB_01549790:
          Advance(this);
        }
      }
LAB_01549798:
      uVar25 = (ushort)uVar23;
      break;
    default:
switchD_01548dac_caseD_3a:
      Advance(this);
      iVar3 = *(int *)(this + 0x38);
      if ((((byte)this[0x3c] >> 4 & 1) != 0) &&
         (uVar7 = IsSyntaxCharacterOrSlash(iVar3), (uVar7 & 1) == 0)) {
LAB_01549b74:
        pcVar22 = "Invalid escape";
        uVar11 = 0xf;
        goto LAB_015499a4;
      }
      RegExpBuilder::AddCharacter(this_00,(ushort)iVar3);
      goto LAB_01548ef4;
    case 0x42:
      *(int *)(this + 0x40) = iVar14;
      Advance(this);
      pZVar21 = *(Zone **)(this + 8);
      pRVar4 = *(RegExpTree **)(pZVar21 + 0x10);
      if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pRVar4) < 0x10) {
        pRVar4 = (RegExpTree *)Zone::NewExpand(pZVar21,0x10);
      }
      else {
        *(RegExpTree **)(pZVar21 + 0x10) = pRVar4 + 0x10;
      }
      uVar13 = *(undefined4 *)(this_00 + 0xc);
      *(undefined ***)pRVar4 = &PTR__RegExpTree_01cc7428;
      *(undefined4 *)(pRVar4 + 8) = 5;
      goto LAB_01548c64;
    case 0x44:
    case 0x53:
    case 0x57:
    case 100:
    case 0x73:
    case 0x77:
      if (cVar16 == '\0') {
        uVar25 = *(ushort *)(lVar10 + lVar20 * 2);
      }
      else {
        uVar25 = (ushort)*(byte *)(lVar10 + lVar20);
      }
      if ((((uVar24 >> 4 & 1) != 0) && (iVar14 < iVar3)) && ((uVar25 & 0xfc00) == 0xd800)) {
        if (cVar16 == '\0') {
          uVar17 = *(ushort *)(lVar10 + uVar7 * 2);
        }
        else {
          uVar17 = (ushort)*(byte *)(lVar10 + uVar7);
        }
        if ((uVar17 & 0xfc00) == 0xdc00) {
          uVar25 = uVar17 & 0x3ff;
        }
      }
      *(int *)(this + 0x40) = iVar14;
      Advance(this);
      pZVar21 = *(Zone **)(this + 8);
      pZVar8 = *(ZoneList **)(pZVar21 + 0x10);
      if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pZVar8) < 0x10) {
        pZVar8 = (ZoneList *)Zone::NewExpand(pZVar21,0x10);
      }
      else {
        *(ZoneList **)(pZVar21 + 0x10) = pZVar8 + 0x10;
      }
      pZVar21 = *(Zone **)(this + 8);
      lVar10 = *(long *)(pZVar21 + 0x10);
      if ((ulong)(*(long *)(pZVar21 + 0x18) - lVar10) < 0x10) {
        lVar10 = Zone::NewExpand(pZVar21,0x10);
      }
      else {
        *(long *)(pZVar21 + 0x10) = lVar10 + 0x10;
      }
      *(long *)pZVar8 = lVar10;
      *(undefined8 *)(pZVar8 + 8) = 2;
      if (((byte)this[0x3c] >> 4 & 1) == 0) {
        bVar12 = false;
      }
      else {
        bVar12 = (bool)((byte)this_00[0xc] >> 1 & 1);
      }
      CharacterRange::AddClassEscape((char)uVar25,pZVar8,bVar12,*(Zone **)(this + 8));
      pZVar21 = *(Zone **)(this + 8);
      pRVar6 = *(RegExpCharacterClass **)(pZVar21 + 0x10);
      if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pRVar6) < 0x20) {
        pRVar6 = (RegExpCharacterClass *)Zone::NewExpand(pZVar21,0x20);
      }
      else {
        *(RegExpCharacterClass **)(pZVar21 + 0x10) = pRVar6 + 0x20;
      }
      pZVar21 = *(Zone **)(this + 8);
      uVar13 = *(undefined4 *)(this_00 + 0xc);
      *(undefined2 *)(pRVar6 + 0x10) = 0;
      goto LAB_015494e0;
    case 0x50:
    case 0x70:
      if (cVar16 == '\0') {
        uVar23 = (uint)*(ushort *)(lVar10 + lVar20 * 2);
      }
      else {
        uVar23 = (uint)*(byte *)(lVar10 + lVar20);
      }
      if ((((uVar24 >> 4 & 1) != 0) && (iVar14 < iVar3)) && ((uVar23 & 0xfc00) == 0xd800)) {
        if (cVar16 == '\0') {
          uVar19 = (uint)*(ushort *)(lVar10 + uVar7 * 2);
        }
        else {
          uVar19 = (uint)*(byte *)(lVar10 + uVar7);
        }
        if ((uVar19 & 0xfc00) == 0xdc00) {
          uVar23 = (uVar19 & 0x3ff | (uVar23 & 0x3ff) << 10) + 0x10000;
        }
      }
      *(int *)(this + 0x40) = iVar14;
      Advance(this);
      if (((byte)this[0x3c] >> 4 & 1) != 0) {
        pZVar21 = *(Zone **)(this + 8);
        plVar5 = *(long **)(pZVar21 + 0x10);
        if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)plVar5) < 0x10) {
          plVar5 = (long *)Zone::NewExpand(pZVar21,0x10);
        }
        else {
          *(long **)(pZVar21 + 0x10) = plVar5 + 2;
        }
        pZVar21 = *(Zone **)(this + 8);
        lVar10 = *(long *)(pZVar21 + 0x10);
        if ((ulong)(*(long *)(pZVar21 + 0x18) - lVar10) < 0x10) {
          lVar10 = Zone::NewExpand(pZVar21,0x10);
        }
        else {
          *(long *)(pZVar21 + 0x10) = lVar10 + 0x10;
        }
        *plVar5 = lVar10;
        plVar5[1] = 2;
        pcVar22 = "Invalid property name";
        uVar11 = 0x16;
        goto LAB_015499a4;
      }
      goto LAB_01549798;
    case 0x62:
      *(int *)(this + 0x40) = iVar14;
      Advance(this);
      pZVar21 = *(Zone **)(this + 8);
      pRVar4 = *(RegExpTree **)(pZVar21 + 0x10);
      if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pRVar4) < 0x10) {
        pRVar4 = (RegExpTree *)Zone::NewExpand(pZVar21,0x10);
      }
      else {
        *(RegExpTree **)(pZVar21 + 0x10) = pRVar4 + 0x10;
      }
      uVar13 = *(undefined4 *)(this_00 + 0xc);
      *(undefined ***)pRVar4 = &PTR__RegExpTree_01cc7428;
      *(undefined4 *)(pRVar4 + 8) = 4;
      goto LAB_01548c64;
    case 99:
      Advance(this);
      lVar20 = *(long *)(this + 0x30);
      lVar10 = (long)*(int *)(this + 0x40);
      if (*(int *)(this + 0x40) < *(int *)(lVar20 + 0x24)) {
        if (*(char *)(lVar20 + 0x20) == '\0') {
          lVar18 = *(long *)(lVar20 + 0x28);
          uVar24 = (uint)*(ushort *)(lVar18 + lVar10 * 2);
        }
        else {
          lVar18 = *(long *)(lVar20 + 0x28);
          uVar24 = (uint)*(byte *)(lVar18 + lVar10);
        }
        uVar19 = *(uint *)(this + 0x3c);
        lVar10 = lVar10 + 1;
        if ((((uVar19 >> 4 & 1) != 0) && ((int)lVar10 < *(int *)(lVar20 + 0x24))) &&
           ((uVar24 & 0xfc00) == 0xd800)) {
          if (*(char *)(lVar20 + 0x20) == '\0') {
            uVar23 = (uint)*(ushort *)(lVar18 + lVar10 * 2);
          }
          else {
            uVar23 = (uint)*(byte *)(lVar18 + lVar10);
          }
          if ((uVar23 & 0xfc00) == 0xdc00) {
            uVar24 = (uVar23 & 0x3ff | (uVar24 & 0x3ff) << 10) + 0x10000;
          }
        }
        if ((uVar24 & 0xffffffdf) - 0x41 < 0x1a) {
          *(int *)(this + 0x40) = (int)lVar10;
          Advance(this);
          uVar25 = (ushort)uVar24 & 0x1f;
          break;
        }
      }
      else {
        uVar19 = *(uint *)(this + 0x3c);
      }
      if ((uVar19 >> 4 & 1) != 0) {
        pcVar22 = "Invalid unicode escape";
        uVar11 = 0x17;
        goto LAB_015499a4;
      }
      uVar25 = 0x5c;
      break;
    case 0x66:
      *(int *)(this + 0x40) = iVar14;
      Advance(this);
      uVar25 = 0xc;
      break;
    case 0x6b:
      if (((uVar24 >> 4 & 1) == 0) && (this[0x50] == (RegExpParser)0x0)) {
        if ((this[0x4f] != (RegExpParser)0x0) ||
           (ScanForCaptures(this), this[0x50] == (RegExpParser)0x0)) goto switchD_01548dac_caseD_3a;
        uVar7 = (ulong)(*(int *)(this + 0x40) + 1);
      }
      *(int *)(this + 0x40) = (int)uVar7;
      Advance(this);
      ParseNamedBackReference(this,this_00,local_b0);
      if (this[0x51] != (RegExpParser)0x0) {
        return 0;
      }
      goto LAB_01549814;
    case 0x6e:
      *(int *)(this + 0x40) = iVar14;
      Advance(this);
      uVar25 = 10;
      break;
    case 0x72:
      *(int *)(this + 0x40) = iVar14;
      Advance(this);
      uVar25 = 0xd;
      break;
    case 0x74:
      *(int *)(this + 0x40) = iVar14;
      Advance(this);
      uVar25 = 9;
      break;
    case 0x75:
      *(int *)(this + 0x40) = iVar14;
      Advance(this);
      uVar7 = ParseUnicodeEscape(this,&local_64);
      iVar3 = local_64;
      if ((uVar7 & 1) != 0) {
        uVar25 = *(ushort *)(this_00 + 0x18);
        if (uVar25 != 0) {
          *(undefined2 *)(this_00 + 0x18) = 0;
          RegExpBuilder::AddCharacterClassForDesugaring(this_00,(uint)uVar25);
        }
        RegExpBuilder::AddUnicodeCharacter(this_00,iVar3);
        uVar25 = *(ushort *)(this_00 + 0x18);
        if (uVar25 != 0) {
          *(undefined2 *)(this_00 + 0x18) = 0;
          RegExpBuilder::AddCharacterClassForDesugaring(this_00,(uint)uVar25);
        }
        goto LAB_01549814;
      }
      if (((byte)this[0x3c] >> 4 & 1) != 0) {
        pcVar22 = "Invalid Unicode escape";
        uVar11 = 0x17;
        goto LAB_01549a5c;
      }
      uVar25 = 0x75;
      break;
    case 0x76:
      *(int *)(this + 0x40) = iVar14;
      Advance(this);
      uVar25 = 0xb;
      break;
    case 0x78:
      *(int *)(this + 0x40) = iVar14;
      Advance(this);
      iVar3 = *(int *)(this + 0x40);
      uVar19 = *(int *)(this + 0x38) - 0x30;
      if ((9 < uVar19) &&
         ((5 < (uVar19 | 0x20) - 0x31 || (uVar19 = (uVar19 | 0x20) - 0x27, (int)uVar19 < 0)))) {
LAB_015495a8:
        *(int *)(this + 0x40) = iVar3 + -1;
        this[0x4c] = (RegExpParser)(iVar3 <= *(int *)(*(long *)(this + 0x30) + 0x24));
        Advance(this);
        if (((byte)this[0x3c] >> 4 & 1) != 0) goto LAB_01549b74;
        uVar25 = 0x78;
        break;
      }
      Advance(this);
      uVar23 = *(int *)(this + 0x38) - 0x30;
      if ((9 < uVar23) &&
         ((5 < (uVar23 | 0x20) - 0x31 || (uVar23 = (uVar23 | 0x20) - 0x27, (int)uVar23 < 0))))
      goto LAB_015495a8;
      uVar23 = uVar23 + uVar19 * 0x10;
      goto LAB_01549790;
    }
    RegExpBuilder::AddCharacter(this_00,uVar25);
    goto LAB_01549814;
  case 0x5d:
  case 0x7d:
    goto switchD_01548c9c_caseD_5d;
  case 0x5e:
    Advance(this);
    pZVar21 = *(Zone **)(this + 8);
    uVar19 = *(uint *)(this_00 + 0xc);
    pRVar4 = *(RegExpTree **)(pZVar21 + 0x10);
    if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pRVar4) < 0x10) {
      pRVar4 = (RegExpTree *)Zone::NewExpand(pZVar21,0x10);
    }
    else {
      *(RegExpTree **)(pZVar21 + 0x10) = pRVar4 + 0x10;
    }
    uVar13 = *(undefined4 *)(this_00 + 0xc);
    *(undefined ***)pRVar4 = &PTR__RegExpTree_01cc7428;
    if ((uVar19 >> 2 & 1) == 0) {
      *(undefined4 *)(pRVar4 + 8) = 1;
      *(undefined4 *)(pRVar4 + 0xc) = uVar13;
      RegExpBuilder::FlushText(this_00);
      BufferedZoneList<v8::internal::RegExpTree,2>::Add
                ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this_00 + 0x20),pRVar4,
                 *(Zone **)this_00);
      this[0x4e] = (RegExpParser)0x1;
    }
    else {
      *(undefined4 *)(pRVar4 + 8) = 0;
LAB_01548c64:
      *(undefined4 *)(pRVar4 + 0xc) = uVar13;
      RegExpBuilder::FlushText(this_00);
      BufferedZoneList<v8::internal::RegExpTree,2>::Add
                ((BufferedZoneList<v8::internal::RegExpTree,2> *)(this_00 + 0x20),pRVar4,
                 *(Zone **)this_00);
    }
    goto LAB_01548c80;
  case 0x7b:
    uVar7 = ParseIntervalQuantifier(this,&local_64,&local_64);
    if (this[0x51] != (RegExpParser)0x0) {
      return 0;
    }
    if ((uVar7 & 1) != 0) {
      pcVar22 = "Nothing to repeat";
      uVar11 = 0x12;
      goto LAB_01549a5c;
    }
switchD_01548c9c_caseD_5d:
    if (((byte)this[0x3c] >> 4 & 1) == 0) {
      iVar3 = *(int *)(this + 0x38);
      goto switchD_01548c9c_caseD_25;
    }
    pcVar22 = "Lone quantifier brackets";
    uVar11 = 0x19;
    break;
  case 0x7c:
    goto switchD_01548c9c_caseD_7c;
  default:
    if (iVar3 != 0x200000) goto switchD_01548c9c_caseD_25;
    if (*(long *)local_b0 == 0) {
      uVar11 = RegExpBuilder::ToRegExp(this_00);
      return uVar11;
    }
    pcVar22 = "Unterminated group";
    uVar11 = 0x13;
  }
LAB_015499a4:
  iVar3 = __strlen_chk(pcVar22,uVar11);
  if (this[0x51] != (RegExpParser)0x0) {
    return 0;
  }
  lStack_78 = (long)iVar3;
  this[0x51] = (RegExpParser)0x1;
  local_80 = pcVar22;
  lVar10 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_80,0);
  if (lVar10 != 0) {
    **(long **)(this + 0x10) = lVar10;
    *(undefined4 *)(this + 0x38) = 0x200000;
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
    return 0;
  }
  goto LAB_01549bd4;
switchD_01548c9c_caseD_7c:
  Advance(this);
  RegExpBuilder::FlushTerms(this_00);
  goto LAB_01548c80;
joined_r0x01549084:
  if (pRVar2 == (RegExpParserState *)0x0) goto LAB_015490b0;
  if (*(int *)(pRVar2 + 0x10) == 1) {
    if (*(int *)(pRVar2 + 0x18) == local_64) {
      this_00[8] = (RegExpBuilder)0x1;
      goto LAB_01549814;
    }
    if (*(int *)(pRVar2 + 0x18) < local_64) goto LAB_015490b0;
  }
  pRVar2 = *(RegExpParserState **)pRVar2;
  goto joined_r0x01549084;
LAB_015490b0:
  uVar11 = GetCapture(this,local_64);
  pZVar21 = *(Zone **)(this + 8);
  pRVar4 = *(RegExpTree **)(pZVar21 + 0x10);
  if ((ulong)(*(long *)(pZVar21 + 0x18) - (long)pRVar4) < 0x20) {
    pRVar4 = (RegExpTree *)Zone::NewExpand(pZVar21,0x20);
  }
  else {
    *(RegExpTree **)(pZVar21 + 0x10) = pRVar4 + 0x20;
  }
  uVar13 = *(undefined4 *)(this_00 + 0xc);
  *(undefined8 *)(pRVar4 + 0x10) = 0;
  *(undefined4 *)(pRVar4 + 0x18) = uVar13;
  *(undefined ***)pRVar4 = &PTR__RegExpTree_01cc7d68;
  *(undefined8 *)(pRVar4 + 8) = uVar11;
LAB_015491ac:
  RegExpBuilder::AddAtom(this_00,pRVar4);
  goto LAB_01549814;
switchD_01548c9c_caseD_25:
  RegExpBuilder::AddUnicodeCharacter(this_00,iVar3);
LAB_01548ef4:
  Advance(this);
LAB_01549814:
  iVar3 = *(int *)(this + 0x38);
  if (iVar3 < 0x3f) {
    if (iVar3 == 0x2a) {
      iVar14 = 0;
      iVar3 = 0x7fffffff;
      local_64 = 0;
    }
    else {
      if (iVar3 != 0x2b) goto LAB_01548c58;
      iVar14 = 1;
      iVar3 = 0x7fffffff;
      local_64 = 1;
    }
  }
  else {
    if (iVar3 != 0x3f) {
      if (iVar3 != 0x7b) goto LAB_01548c58;
      uVar7 = ParseIntervalQuantifier(this,&local_64,&local_68);
      if ((uVar7 & 1) == 0) {
        if (((byte)this[0x3c] >> 4 & 1) != 0) {
          pcVar22 = "Incomplete quantifier";
          uVar11 = 0x16;
LAB_01549a5c:
          iVar3 = __strlen_chk(pcVar22,uVar11);
          if (this[0x51] == (RegExpParser)0x0) {
            lStack_78 = (long)iVar3;
            this[0x51] = (RegExpParser)0x1;
            local_80 = pcVar22;
            lVar10 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_80,0);
            if (lVar10 == 0) {
LAB_01549bd4:
                    /* WARNING: Subroutine does not return */
              V8_Fatal("Check failed: %s.","(location_) != nullptr");
            }
            **(long **)(this + 0x10) = lVar10;
            *(undefined4 *)(this + 0x38) = 0x200000;
            *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
          }
          return 0;
        }
        goto LAB_01548c58;
      }
      iVar3 = local_68;
      iVar14 = local_64;
      if (local_68 < local_64) {
        pcVar22 = "numbers out of order in {} quantifier";
        uVar11 = 0x26;
        goto LAB_01549a5c;
      }
      goto LAB_0154989c;
    }
    iVar14 = 0;
    local_64 = 0;
    iVar3 = 1;
  }
  local_68 = iVar3;
  Advance(this);
LAB_0154989c:
  iVar1 = *(int *)(this + 0x38);
  if (iVar1 == 0x3f) {
    Advance(this);
  }
  uVar7 = RegExpBuilder::AddQuantifierToAtom(this_00,iVar14,iVar3,iVar1 == 0x3f);
  if ((uVar7 & 1) == 0) {
    pcVar22 = "Invalid quantifier";
    uVar11 = 0x13;
    goto LAB_01549a5c;
  }
  goto LAB_01548c58;
}

