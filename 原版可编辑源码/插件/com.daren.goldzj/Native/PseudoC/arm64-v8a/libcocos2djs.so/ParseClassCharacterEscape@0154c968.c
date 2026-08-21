
/* v8::internal::RegExpParser::ParseClassCharacterEscape() */

uint __thiscall v8::internal::RegExpParser::ParseClassCharacterEscape(RegExpParser *this)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char *local_40;
  long lStack_38;
  uint local_14;
  
  Advance(this);
  uVar9 = *(uint *)(this + 0x38);
  uVar11 = uVar9 - 0x30;
  switch(uVar11) {
  case 0:
    if (((byte)this[0x3c] >> 4 & 1) == 0) goto switchD_0154c9a8_caseD_1;
    lVar4 = *(long *)(this + 0x30);
    lVar6 = (long)*(int *)(this + 0x40);
    iVar2 = *(int *)(lVar4 + 0x24);
    if (*(int *)(this + 0x40) < iVar2) {
      cVar1 = *(char *)(lVar4 + 0x20);
      if (cVar1 == '\0') {
        lVar4 = *(long *)(lVar4 + 0x28);
        uVar9 = (uint)*(ushort *)(lVar4 + lVar6 * 2);
      }
      else {
        lVar4 = *(long *)(lVar4 + 0x28);
        uVar9 = (uint)*(byte *)(lVar4 + lVar6);
      }
      lVar8 = lVar6 + 1;
      if (((int)lVar8 < iVar2) && ((uVar9 & 0xfc00) == 0xd800)) {
        if (cVar1 == '\0') {
          uVar7 = (uint)*(ushort *)(lVar4 + lVar8 * 2);
        }
        else {
          uVar7 = (uint)*(byte *)(lVar4 + lVar8);
        }
        if ((uVar7 & 0xfc00) == 0xdc00) {
          uVar9 = (uVar7 & 0x3ff | (uVar9 & 0x3ff) << 10) + 0x10000;
        }
      }
      if (0x2f < uVar9) {
        if (cVar1 == '\0') {
          uVar9 = (uint)*(ushort *)(lVar4 + lVar6 * 2);
        }
        else {
          uVar9 = (uint)*(byte *)(lVar4 + lVar6);
        }
        if (((int)lVar8 < iVar2) && ((uVar9 & 0xfc00) == 0xd800)) {
          if (cVar1 == '\0') {
            uVar7 = (uint)*(ushort *)(lVar4 + lVar8 * 2);
          }
          else {
            uVar7 = (uint)*(byte *)(lVar4 + lVar8);
          }
          if ((uVar7 & 0xfc00) == 0xdc00) {
            uVar9 = (uVar7 & 0x3ff | (uVar9 & 0x3ff) << 10) + 0x10000;
          }
        }
        if (uVar9 < 0x3a) goto switchD_0154c9a8_caseD_1;
      }
    }
    Advance(this);
    goto LAB_0154cc48;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
switchD_0154c9a8_caseD_1:
    if (((byte)this[0x3c] >> 4 & 1) != 0) goto LAB_0154cc2c;
    Advance(this);
    if ((*(uint *)(this + 0x38) & 0xfffffff8) != 0x30) {
      return uVar11;
    }
    uVar9 = (*(uint *)(this + 0x38) + uVar11 * 8) - 0x30;
    Advance(this);
    if (0x1f < (int)uVar9) {
      return uVar9;
    }
    if ((*(uint *)(this + 0x38) & 0xfffffff8) != 0x30) {
      return uVar9;
    }
    uVar9 = (*(uint *)(this + 0x38) + uVar9 * 8) - 0x30;
    goto LAB_0154cb24;
  default:
    if (((((byte)this[0x3c] >> 4 & 1) != 0) &&
        (uVar3 = IsSyntaxCharacterOrSlash(uVar9), uVar9 != 0x2d)) && ((uVar3 & 1) == 0))
    goto LAB_0154cbc0;
LAB_0154cb24:
    Advance(this);
    break;
  case 0x32:
    Advance(this);
    uVar9 = 8;
    break;
  case 0x33:
    lVar6 = *(long *)(this + 0x30);
    iVar2 = *(int *)(this + 0x40);
    lVar4 = (long)iVar2;
    if (iVar2 < *(int *)(lVar6 + 0x24)) {
      if (*(char *)(lVar6 + 0x20) == '\0') {
        lVar8 = *(long *)(lVar6 + 0x28);
        uVar9 = (uint)*(ushort *)(lVar8 + lVar4 * 2);
      }
      else {
        lVar8 = *(long *)(lVar6 + 0x28);
        uVar9 = (uint)*(byte *)(lVar8 + lVar4);
      }
      uVar11 = *(uint *)(this + 0x3c);
      lVar4 = lVar4 + 1;
      if ((((uVar11 >> 4 & 1) != 0) && ((int)lVar4 < *(int *)(lVar6 + 0x24))) &&
         ((uVar9 & 0xfc00) == 0xd800)) {
        if (*(char *)(lVar6 + 0x20) == '\0') {
          uVar7 = (uint)*(ushort *)(lVar8 + lVar4 * 2);
        }
        else {
          uVar7 = (uint)*(byte *)(lVar8 + lVar4);
        }
        if ((uVar7 & 0xfc00) == 0xdc00) {
          uVar9 = (uVar7 & 0x3ff | (uVar9 & 0x3ff) << 10) + 0x10000;
        }
      }
      if ((uVar9 & 0xffffffdf) - 0x41 < 0x1a) {
        *(int *)(this + 0x40) = (int)lVar4;
        goto LAB_0154ccd8;
      }
    }
    else {
      uVar11 = *(uint *)(this + 0x3c);
      uVar9 = 0x200000;
    }
    if ((uVar11 >> 4 & 1) == 0) {
      if ((uVar9 != 0x5f) && (9 < uVar9 - 0x30)) {
        return 0x5c;
      }
      *(int *)(this + 0x40) = iVar2 + 1;
LAB_0154ccd8:
      Advance(this);
      return uVar9 & 0x1f;
    }
LAB_0154cc2c:
    pcVar10 = "Invalid class escape";
    uVar5 = 0x15;
    goto LAB_0154cc38;
  case 0x36:
    Advance(this);
    uVar9 = 0xc;
    break;
  case 0x3e:
    Advance(this);
    uVar9 = 10;
    break;
  case 0x42:
    Advance(this);
    uVar9 = 0xd;
    break;
  case 0x44:
    Advance(this);
    uVar9 = 9;
    break;
  case 0x45:
    Advance(this);
    uVar3 = ParseUnicodeEscape(this,(int *)&local_14);
    if ((uVar3 & 1) != 0) {
      return local_14;
    }
    if (((byte)this[0x3c] >> 4 & 1) == 0) {
      return 0x75;
    }
    pcVar10 = "Invalid unicode escape";
    uVar5 = 0x17;
    goto LAB_0154cc38;
  case 0x46:
    Advance(this);
    uVar9 = 0xb;
    break;
  case 0x48:
    Advance(this);
    iVar2 = *(int *)(this + 0x40);
    uVar11 = *(int *)(this + 0x38) - 0x30;
    if ((uVar11 < 10) ||
       (((uVar11 | 0x20) - 0x31 < 6 && (uVar11 = (uVar11 | 0x20) - 0x27, -1 < (int)uVar11)))) {
      Advance(this);
      uVar9 = *(int *)(this + 0x38) - 0x30;
      if ((uVar9 < 10) ||
         (((uVar9 | 0x20) - 0x31 < 6 && (uVar9 = (uVar9 | 0x20) - 0x27, -1 < (int)uVar9)))) {
        uVar9 = uVar9 + uVar11 * 0x10;
        goto LAB_0154cb24;
      }
    }
    *(int *)(this + 0x40) = iVar2 + -1;
    this[0x4c] = (RegExpParser)(iVar2 <= *(int *)(*(long *)(this + 0x30) + 0x24));
    Advance(this);
    if (((byte)this[0x3c] >> 4 & 1) == 0) {
      return 0x78;
    }
LAB_0154cbc0:
    pcVar10 = "Invalid escape";
    uVar5 = 0xf;
LAB_0154cc38:
    iVar2 = __strlen_chk(pcVar10,uVar5);
    if (this[0x51] == (RegExpParser)0x0) {
      lStack_38 = (long)iVar2;
      this[0x51] = (RegExpParser)0x1;
      local_40 = pcVar10;
      lVar4 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_40,0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","(location_) != nullptr");
      }
      uVar9 = 0;
      **(long **)(this + 0x10) = lVar4;
      *(undefined4 *)(this + 0x38) = 0x200000;
      *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
    }
    else {
LAB_0154cc48:
      uVar9 = 0;
    }
  }
  return uVar9;
}

