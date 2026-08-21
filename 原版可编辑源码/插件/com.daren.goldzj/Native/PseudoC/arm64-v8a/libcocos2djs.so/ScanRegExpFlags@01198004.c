
/* v8::internal::Scanner::ScanRegExpFlags() */

ulong __thiscall v8::internal::Scanner::ScanRegExpFlags(Scanner *this)

{
  uint uVar1;
  ulong uVar2;
  ushort *puVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = *(uint *)(this + 0x20);
  uVar7 = 0;
  if (uVar5 < 0x80) goto LAB_01198068;
LAB_01198044:
  if ((0xffff < (int)uVar5) ||
     ((uVar2 = unibrow::ID_Start::Is(uVar5), (uVar2 & 1) == 0 &&
      (uVar2 = unibrow::ID_Continue::Is(uVar5), (uVar2 & 1) == 0)))) {
LAB_01198120:
    lVar4 = *(long *)(this + 0x18);
    *(int *)(*(long *)(this + 8) + 4) =
         (int)((ulong)(*(long *)(lVar4 + 0x10) - *(long *)(lVar4 + 8)) >> 1) +
         *(int *)(lVar4 + 0x20) + -1;
    return (ulong)uVar7 << 0x20 | 1;
  }
  do {
    uVar5 = *(uint *)(this + 0x20) - 0x67;
    uVar1 = uVar5 * 0x80;
    uVar5 = uVar5 >> 1;
    uVar8 = uVar5 & 0x7f;
    if (((uVar1 & 0xff | uVar8) < 10) && ((0x28bU >> (ulong)(uVar5 & 0x1f) & 1) != 0)) {
      uVar8 = *(uint *)(&DAT_019dc230 + (long)(char)((byte)uVar1 | (byte)uVar8) * 4);
      uVar5 = uVar8 & uVar7;
    }
    else {
      if ((*(uint *)(this + 0x20) & 0xff) != 0x73) {
        return 0;
      }
      uVar8 = 0x20;
      uVar5 = uVar7 & 0x20;
    }
    if (uVar5 != 0) {
      return 0;
    }
    plVar6 = *(long **)(this + 0x18);
    puVar3 = (ushort *)plVar6[2];
    if (puVar3 < (ushort *)plVar6[3]) {
LAB_011980d0:
      uVar5 = (uint)*puVar3;
    }
    else {
      if ((char)plVar6[6] == '\0') {
        uVar2 = (**(code **)(*plVar6 + 0x28))(plVar6);
        puVar3 = (ushort *)plVar6[2];
        if ((uVar2 & 1) != 0) goto LAB_011980d0;
      }
      uVar5 = 0xffffffff;
    }
    plVar6[2] = (long)(puVar3 + 1);
    *(uint *)(this + 0x20) = uVar5;
    uVar7 = uVar8 | uVar7;
    if (0x7f < uVar5) goto LAB_01198044;
LAB_01198068:
    if (((byte)(&DAT_019dc06d)[uVar5] >> 1 & 1) == 0) goto LAB_01198120;
  } while( true );
}

