
/* v8::internal::Call::GetCallType() const */

undefined4 __thiscall v8::internal::Call::GetCallType(Call *this)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  short sVar6;
  ulong uVar7;
  undefined4 uVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  uint uStack_24;
  
  lVar14 = *(long *)(this + 8);
  uVar10 = *(uint *)(lVar14 + 4) & 0x3f;
  if ((lVar14 == 0) || (uVar10 != 0x35)) {
    if (uVar10 == 0x2f) {
      return 9;
    }
    if ((lVar14 == 0) || (uVar10 != 0x2c)) {
      if (uVar10 != 0x2b) goto LAB_0149863c;
      lVar14 = *(long *)(lVar14 + 8);
      if (lVar14 == 0) {
        return 10;
      }
      if ((*(uint *)(lVar14 + 4) & 0x3f) != 0x2c) {
        return 10;
      }
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    lVar9 = *(long *)(lVar14 + 0x10);
    uVar10 = *(uint *)(lVar9 + 4);
    if ((uVar10 & 0x3f) == 0x35) {
      plVar12 = (long *)(lVar9 + 8);
      plVar13 = plVar12;
      if ((uVar10 >> 8 & 1) != 0) {
        plVar13 = (long *)(*plVar12 + 8);
      }
      iVar2 = *(int *)(*plVar13 + 0x10);
      iVar1 = iVar2;
      if (iVar2 < 0) {
        iVar1 = iVar2 + 1;
      }
      iVar1 = iVar1 >> 1;
      if (*(char *)(*plVar13 + 0x1c) != '\0') {
        iVar1 = iVar2;
      }
      if (0 < iVar1) {
        if ((uVar10 >> 8 & 1) != 0) {
          plVar12 = (long *)(*plVar12 + 8);
        }
        sVar6 = AstRawString::FirstCharacter((AstRawString *)*plVar12);
        if (sVar6 == 0x23) {
          return 8;
        }
        lVar9 = *(long *)(lVar14 + 0x10);
        uVar10 = *(uint *)(lVar9 + 4);
      }
    }
    uVar3 = *(uint *)(*(long *)(lVar14 + 8) + 4);
    if (((uVar10 & 0x7bf) == 0x1a9) &&
       (uVar7 = AstRawString::AsArrayIndex(*(AstRawString **)(lVar9 + 8),&uStack_24),
       (uVar7 & 1) == 0)) {
      uVar8 = 4;
      if (!bVar5) {
        uVar8 = 2;
      }
      uVar11 = 6;
    }
    else {
      uVar8 = 5;
      if (!bVar5) {
        uVar8 = 3;
      }
      uVar11 = 7;
    }
    if ((uVar3 & 0x3f) != 0x30) {
      uVar11 = uVar8;
    }
  }
  else {
    uVar4 = *(ushort *)(*(long *)(lVar14 + 8) + 0x28);
    if ((uVar4 & 0x380) == 0) {
      return 0;
    }
    if ((uVar4 & 0x380) == 0x200) {
      if ((uVar4 & 0xf) != 4) {
        return 10;
      }
      return 1;
    }
LAB_0149863c:
    uVar11 = 10;
  }
  return uVar11;
}

