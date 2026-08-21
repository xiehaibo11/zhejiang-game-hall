
/* v8::internal::Factory::NewJSModuleNamespace() */

ulong * __thiscall v8::internal::Factory::NewJSModuleNamespace(Factory *this)

{
  Factory *pFVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  ulong local_48;
  Representation local_28 [8];
  
  uVar10 = *(ulong *)(this + 0x2bc8) & 0xffffffff00000000;
  pFVar1 = this + 0x95a0;
  uVar10 = uVar10 | *(uint *)((uVar10 | *(uint *)((uVar10 | *(uint *)(*(ulong *)(this + 0x2bc8) - 1)
                                                  ) + 0x13)) + 0x17f);
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)pFVar1;
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar6 + 1;
    *puVar6 = uVar10;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar10)
    ;
  }
  lVar11 = *(long *)(this + 0x8938);
  lVar3 = *(long *)(lVar11 + 0x68);
  uVar10 = (ulong)*(byte *)(*puVar6 + 3) * 4;
  if ((((ulong)(*(long *)(lVar11 + 0x70) - lVar3) < uVar10) || (FLAG_inline_new == '\0')) ||
     (FLAG_gc_interval != 0)) {
    uVar7 = Heap::AllocateRawWithRetryOrFailSlowPath((Heap *)(this + 0x8850),uVar10,0,1,0);
  }
  else {
    uVar7 = lVar3 + 1;
    *(ulong *)(lVar11 + 0x68) = lVar3 + uVar10;
    Heap::CreateFillerObjectAt((Heap *)(this + 0x8850),lVar3,uVar10,1,1);
  }
  *(int *)(uVar7 - 1) = (int)*puVar6;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar8 = *(ulong **)pFVar1;
    if (puVar8 == *(ulong **)(this + 0x95a8)) {
      puVar8 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)pFVar1 = puVar8 + 1;
    *puVar8 = uVar7;
  }
  else {
    puVar8 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar7);
  }
  InitializeJSObjectFromMap(this,puVar8,this + 0x168,puVar6);
  uVar10 = *puVar6;
  uVar2 = *(int *)((uVar10 & 0xffffffff00000000 | 0x13) + (ulong)*(uint *)(uVar10 + 0x17)) >> 1;
  uVar5 = uVar2 >> 0x13 & 0x3ff;
  iVar4 = (uint)*(byte *)(uVar10 + 3) - (uint)*(byte *)(uVar10 + 4);
  if ((int)uVar5 < iVar4) {
    uVar7 = (ulong)*(byte *)(uVar10 + 4) << 0x1c;
    iVar12 = (uVar5 + *(byte *)(uVar10 + 4)) * 4;
  }
  else {
    iVar12 = (uVar5 - iVar4) * 4 + 8;
    uVar7 = 0x20000000;
  }
  uVar2 = uVar2 >> 6 & 7;
  local_28[0] = SUB41(uVar2,0);
  if (uVar2 < 5) {
    local_48 = *puVar8;
    JSObject::RawFastPropertyAtPut
              ((JSObject *)&local_48,
               (ulong)((int)uVar5 < iVar4) << 0xd | (long)iVar4 << 0x10 | (long)iVar12 | uVar7 |
               *(ulong *)(&DAT_019be508 + (ulong)uVar2 * 8),*(undefined8 *)(this + 0x810),4);
    return puVar8;
  }
  uVar9 = Representation::Mnemonic(local_28);
  PrintF("%s\n",uVar9);
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

