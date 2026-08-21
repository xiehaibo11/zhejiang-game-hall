
/* v8::internal::compiler::CallDescriptor::GetTaggedParameterSlots() const */

int __thiscall v8::internal::compiler::CallDescriptor::GetTaggedParameterSlots(CallDescriptor *this)

{
  long lVar1;
  ulong uVar2;
  CallDescriptor *pCVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  CallDescriptor *pCVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar7 = *(ulong **)(this + 0x10);
  uVar8 = puVar7[1];
  if (uVar8 == 0xffffffffffffffff) {
    return 0;
  }
  uVar2 = uVar8 + 1;
  pCVar3 = this + 8;
  if (uVar2 < 2) {
    iVar12 = 0;
    uVar9 = 0;
  }
  else {
    uVar14 = *puVar7;
    uVar13 = 0;
    iVar11 = 0;
    iVar12 = 0;
    uVar9 = uVar2 & 0xfffffffffffffffe;
    lVar1 = uVar14 * 8;
    while( true ) {
      if (uVar13 != 0) {
        this = (CallDescriptor *)*puVar7;
      }
      pCVar10 = pCVar3;
      if (uVar13 != 0) {
        pCVar10 = (CallDescriptor *)(uVar14 + (long)(this + uVar13) * 8 + -8);
      }
      puVar4 = (uint *)(puVar7[2] + lVar1 + uVar13 * 8);
      uVar13 = uVar13 + 2;
      uVar5 = *(uint *)pCVar10 & (uint)((*(uint *)(pCVar10 + 4) - 6 & 0xff) < 3);
      uVar14 = (ulong)uVar5;
      uVar6 = *puVar4 & (uint)((puVar4[1] - 6 & 0xff) < 3);
      this = (CallDescriptor *)(ulong)uVar6;
      iVar11 = iVar11 + uVar5;
      iVar12 = iVar12 + uVar6;
      if (uVar9 == uVar13) break;
      if (uVar13 != 0) {
        uVar14 = puVar7[2];
      }
    }
    iVar12 = iVar12 + iVar11;
    if (uVar2 == uVar9) {
      return iVar12;
    }
  }
  uVar9 = uVar9 - 1;
  do {
    pCVar10 = pCVar3;
    if (uVar9 != 0xffffffffffffffff) {
      pCVar10 = (CallDescriptor *)(puVar7[2] + (uVar9 + *puVar7) * 8);
    }
    if (((*(ulong *)pCVar10 & 1) != 0) && (((int)(*(ulong *)pCVar10 >> 0x20) - 6U & 0xff) < 3)) {
      iVar12 = iVar12 + 1;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < uVar8);
  return iVar12;
}

