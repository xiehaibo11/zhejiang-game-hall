
/* v8::internal::RegExpParser::Next() */

uint __thiscall v8::internal::RegExpParser::Next(RegExpParser *this)

{
  RegExpParser RVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)(this + 0x30);
  lVar6 = (long)*(int *)(this + 0x40);
  if (*(int *)(this + 0x40) < *(int *)(lVar4 + 0x24)) {
    if (*(char *)(lVar4 + 0x20) == '\0') {
      lVar5 = *(long *)(lVar4 + 0x28);
      uVar2 = (uint)*(ushort *)(lVar5 + lVar6 * 2);
      RVar1 = this[0x3c];
    }
    else {
      lVar5 = *(long *)(lVar4 + 0x28);
      uVar2 = (uint)*(byte *)(lVar5 + lVar6);
      RVar1 = this[0x3c];
    }
    if (((((byte)RVar1 >> 4 & 1) != 0) && (lVar6 = lVar6 + 1, (int)lVar6 < *(int *)(lVar4 + 0x24)))
       && ((uVar2 & 0xfc00) == 0xd800)) {
      if (*(char *)(lVar4 + 0x20) == '\0') {
        uVar3 = (uint)*(ushort *)(lVar5 + lVar6 * 2);
      }
      else {
        uVar3 = (uint)*(byte *)(lVar5 + lVar6);
      }
      if ((uVar3 & 0xfc00) == 0xdc00) {
        uVar2 = (uVar3 & 0x3ff | (uVar2 & 0x3ff) << 10) + 0x10000;
      }
    }
    return uVar2;
  }
  return 0x200000;
}

