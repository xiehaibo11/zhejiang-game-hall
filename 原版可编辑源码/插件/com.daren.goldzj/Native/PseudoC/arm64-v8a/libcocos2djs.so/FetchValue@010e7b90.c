
/* v8::internal::LookupIterator::FetchValue() const */

void __thiscall v8::internal::LookupIterator::FetchValue(LookupIterator *this)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  long *plVar5;
  Isolate *pIVar6;
  uint uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  ulong uVar10;
  uint *puVar11;
  int iVar12;
  Representation local_28 [8];
  
  puVar4 = *(ulong **)(this + 0x38);
  uVar8 = *puVar4;
  if ((*(ulong *)(this + 0x48) < 0xffffffff) ||
     ((*(ulong *)(this + 0x48) != 0xffffffffffffffff &&
      ((byte)((*(byte *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 - 1)) + 10) >> 3) -
             0x11) < 0xb)))) {
    plVar5 = *(long **)(ElementsAccessor::elements_accessors_ +
                       ((ulong)*(byte *)((*(ulong *)(this + 0x18) | 10) +
                                        (ulong)*(uint *)(uVar8 - 1)) & 0xf8));
                    /* WARNING: Could not recover jumptable at 0x010e7c34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x28))(plVar5,puVar4,*(undefined8 *)(this + 0x50));
    return;
  }
  puVar11 = (uint *)(uVar8 - 1);
  pIVar6 = *(Isolate **)(this + 0x18);
  uVar10 = (ulong)pIVar6 | 7;
  if (*(short *)(uVar10 + *puVar11) == 0xaa) {
    uVar7 = *(uint *)(((ulong)pIVar6 | 0xb) +
                     (ulong)*(uint *)(uVar10 + *(uint *)(uVar8 + 3) +
                                     (long)(*(int *)(this + 0x50) * 4 + 0x14)));
  }
  else if ((*(uint *)(((ulong)pIVar6 | 0xb) + (ulong)*puVar11) >> 0x15 & 1) == 0) {
    if ((*(uint *)(this + 0x10) >> 1 & 1) == 0) {
      pIVar6 = pIVar6 + *puVar11;
      uVar7 = *(int *)(((ulong)pIVar6 & 0xffffffff00000000 | (ulong)*(uint *)(pIVar6 + 0x17)) +
                      (*(long *)(this + 0x50) * 0xc00000000 + 0x1000000000 >> 0x20 | 3U)) >> 1;
      uVar2 = uVar7 >> 0x13 & 0x3ff;
      iVar1 = (uint)(byte)pIVar6[3] - (uint)(byte)pIVar6[4];
      if ((int)uVar2 < iVar1) {
        uVar8 = (ulong)(byte)pIVar6[4] << 0x1c;
        iVar12 = (uVar2 + (byte)pIVar6[4]) * 4;
      }
      else {
        iVar12 = (uVar2 - iVar1) * 4 + 8;
        uVar8 = 0x20000000;
      }
      uVar7 = uVar7 >> 6 & 7;
      local_28[0] = SUB41(uVar7,0);
      if (4 < uVar7) {
        uVar3 = Representation::Mnemonic(local_28);
        PrintF("%s\n",uVar3);
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      JSObject::FastPropertyAt
                (puVar4,*(uint *)(this + 0x10) >> 6 & 7,
                 (ulong)((int)uVar2 < iVar1) << 0xd | (long)iVar1 << 0x10 | (long)iVar12 | uVar8 |
                 *(ulong *)(&DAT_019d78d8 + (ulong)uVar7 * 8));
      return;
    }
    uVar7 = *(uint *)(uVar10 + *(uint *)(((ulong)pIVar6 | 0x17) + (ulong)*puVar11) +
                     (*(long *)(this + 0x50) * 0xc00000000 + 0x1000000000 >> 0x20));
  }
  else {
    pIVar9 = pIVar6 + *(uint *)(uVar8 + 3);
    if (((ulong)pIVar9 & 1) == 0) {
      pIVar9 = *(Isolate **)(pIVar6 + 0x410);
    }
    uVar7 = *(uint *)(pIVar9 + (*(long *)(this + 0x50) * 0xc00000000 + 0x1800000000 >> 0x20) + 7);
  }
  if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar4 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar4 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar4 = (ulong *)HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar4 + 1;
    *puVar4 = (ulong)(pIVar6 + uVar7);
  }
  else {
    CanonicalHandleScope::Lookup
              (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),(ulong)(pIVar6 + uVar7));
  }
  return;
}

