
/* v8::internal::compiler::RegisterAllocationData::ExistsUseWithoutDefinition() */

undefined8 __thiscall
v8::internal::compiler::RegisterAllocationData::ExistsUseWithoutDefinition
          (RegisterAllocationData *this)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  lVar10 = **(long **)(this + 0x48);
  iVar3 = *(int *)(lVar10 + 4);
  puVar5 = (ulong *)(lVar10 + 8);
  if (iVar3 != 1) {
    puVar5 = (ulong *)*puVar5;
  }
  uVar6 = *puVar5;
  if (uVar6 == 0) {
    if (iVar3 < 2) {
      uVar6 = 0;
      uVar9 = 0;
      iVar4 = 1;
      if (iVar3 < 2) {
        return 0;
      }
      goto LAB_01659374;
    }
    uVar6 = *(ulong *)(*(long *)(lVar10 + 8) + 8);
    if (uVar6 == 0) {
      lVar2 = 2;
      do {
        if (iVar3 == lVar2) {
          return 0;
        }
        uVar6 = *(ulong *)(*(long *)(lVar10 + 8) + lVar2 * 8);
        lVar2 = lVar2 + 1;
      } while (uVar6 == 0);
      iVar4 = (int)lVar2 + -1;
    }
    else {
      iVar4 = 1;
    }
    iVar7 = iVar4 << 6;
  }
  else {
    iVar4 = 0;
    iVar7 = 0;
  }
  uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
  uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
  uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
  uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
  uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
  uVar9 = iVar7 + (int)uVar8;
  uVar6 = (uVar6 >> (uVar8 & 0x3f)) >> 1;
  if (iVar3 <= iVar4) {
    return 0;
  }
LAB_01659374:
  do {
    while( true ) {
      PrintF("Register allocator error: live v%d reached first block.\n",(ulong)uVar9);
      lVar2 = GetOrCreateLiveRangeFor(this,uVar9);
      PrintF("  (first use is at %d)\n",(ulong)*(uint *)(*(long *)(lVar2 + 0x18) + 0x18));
      if (*(long *)(this + 0x18) == 0) break;
      PrintF("  (function: %s)\n");
      if (uVar6 == 0) goto LAB_016593e8;
LAB_016593b4:
      iVar7 = uVar9 + 1;
      iVar3 = *(int *)(lVar10 + 4);
LAB_016593b8:
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20);
      uVar9 = iVar7 + (int)uVar8;
      uVar6 = (uVar6 >> (uVar8 & 0x3f)) >> 1;
      if (iVar3 <= iVar4) {
        return 1;
      }
    }
    PrintF("\n");
    if (uVar6 != 0) goto LAB_016593b4;
LAB_016593e8:
    uVar9 = uVar9 + 1;
    iVar3 = *(int *)(lVar10 + 4);
    uVar1 = iVar4 + 1;
    uVar8 = (ulong)uVar1;
    if ((int)uVar1 < iVar3) {
      uVar8 = (ulong)(int)uVar1;
      uVar9 = iVar4 << 6;
      do {
        uVar6 = *(ulong *)(*(long *)(lVar10 + 8) + uVar8 * 8);
        if (uVar6 != 0) {
          iVar7 = uVar9 + 0x40;
          iVar4 = (int)uVar8;
          goto LAB_016593b8;
        }
        uVar8 = uVar8 + 1;
        uVar9 = uVar9 + 0x40;
      } while ((long)uVar8 < (long)iVar3);
    }
    uVar6 = 0;
    iVar4 = (int)uVar8;
    if (iVar3 <= iVar4) {
      return 1;
    }
  } while( true );
}

