
/* v8::internal::RegExpParser::ParseClassEscape(v8::internal::ZoneList<v8::internal::CharacterRange>*,
   v8::internal::Zone*, bool, int*, bool*) */

void __thiscall
v8::internal::RegExpParser::ParseClassEscape
          (RegExpParser *this,ZoneList *param_1,Zone *param_2,bool param_3,int *param_4,
          bool *param_5)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ushort uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  char *local_40;
  long lStack_38;
  
  iVar5 = *(int *)(this + 0x38);
  if (iVar5 == 0x5c) {
    lVar7 = *(long *)(this + 0x30);
    lVar9 = (long)*(int *)(this + 0x40);
    iVar5 = *(int *)(lVar7 + 0x24);
    if (iVar5 <= *(int *)(this + 0x40)) {
      iVar5 = __strlen_chk("\\ at end of pattern",0x14);
      if (this[0x51] != (RegExpParser)0x0) {
        return;
      }
      lStack_38 = (long)iVar5;
      this[0x51] = (RegExpParser)0x1;
      local_40 = "\\ at end of pattern";
      lVar7 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_40,0);
      if (lVar7 != 0) {
        **(long **)(this + 0x10) = lVar7;
        *(undefined4 *)(this + 0x38) = 0x200000;
        *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
        return;
      }
LAB_0154d05c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","(location_) != nullptr");
    }
    cVar3 = *(char *)(lVar7 + 0x20);
    if (cVar3 == '\0') {
      lVar7 = *(long *)(lVar7 + 0x28);
      uVar10 = (uint)*(ushort *)(lVar7 + lVar9 * 2);
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x28);
      uVar10 = (uint)*(byte *)(lVar7 + lVar9);
    }
    uVar2 = *(uint *)(this + 0x3c);
    lVar1 = lVar9 + 1;
    iVar8 = (int)lVar1;
    if ((((uVar2 >> 4 & 1) != 0) && (iVar8 < iVar5)) && ((uVar10 & 0xfc00) == 0xd800)) {
      if (cVar3 == '\0') {
        uVar11 = (uint)*(ushort *)(lVar7 + lVar1 * 2);
      }
      else {
        uVar11 = (uint)*(byte *)(lVar7 + lVar1);
      }
      if ((uVar11 & 0xfc00) == 0xdc00) {
        uVar10 = (uVar11 & 0x3ff | (uVar10 & 0x3ff) << 10) + 0x10000;
      }
    }
    uVar10 = uVar10 - 0x44;
    if (uVar10 < 0x34) {
      if ((1L << ((ulong)uVar10 & 0x3f) & 0x8800100088001U) != 0) {
        if (cVar3 == '\0') {
          uVar4 = *(ushort *)(lVar7 + lVar9 * 2);
        }
        else {
          uVar4 = (ushort)*(byte *)(lVar7 + lVar9);
        }
        if ((((uVar2 >> 4 & 1) != 0) && (iVar8 < iVar5)) && ((uVar4 & 0xfc00) == 0xd800)) {
          if (cVar3 == '\0') {
            uVar6 = *(ushort *)(lVar7 + lVar1 * 2);
          }
          else {
            uVar6 = (ushort)*(byte *)(lVar7 + lVar1);
          }
          if ((uVar6 & 0xfc00) == 0xdc00) {
            uVar4 = uVar6 & 0x3ff;
          }
        }
        CharacterRange::AddClassEscape((char)uVar4,param_1,param_3,param_2);
        *(int *)(this + 0x40) = *(int *)(this + 0x40) + 1;
        Advance(this);
LAB_0154d040:
        *param_5 = true;
        return;
      }
      if (((1L << ((ulong)uVar10 & 0x3f) & 0x100000001000U) != 0) && ((uVar2 >> 4 & 1) != 0)) {
        *(int *)(this + 0x40) = iVar8;
        Advance(this);
        iVar5 = __strlen_chk("Invalid property name in character class",0x29);
        if (this[0x51] == (RegExpParser)0x0) {
          lStack_38 = (long)iVar5;
          this[0x51] = (RegExpParser)0x1;
          local_40 = "Invalid property name in character class";
          lVar7 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_40,0);
          if (lVar7 == 0) goto LAB_0154d05c;
          **(long **)(this + 0x10) = lVar7;
          *(undefined4 *)(this + 0x38) = 0x200000;
          *(undefined4 *)(this + 0x40) = *(undefined4 *)(*(long *)(this + 0x30) + 0x24);
        }
        goto LAB_0154d040;
      }
    }
    iVar5 = ParseClassCharacterEscape(this);
  }
  else {
    Advance(this);
  }
  *param_4 = iVar5;
  *param_5 = false;
  return;
}

