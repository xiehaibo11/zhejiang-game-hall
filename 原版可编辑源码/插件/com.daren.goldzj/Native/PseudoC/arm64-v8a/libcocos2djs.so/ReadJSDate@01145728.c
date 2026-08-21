
/* v8::internal::ValueDeserializer::ReadJSDate() */

long __thiscall v8::internal::ValueDeserializer::ReadJSDate(ValueDeserializer *this)

{
  double *pdVar1;
  int iVar2;
  Isolate *pIVar3;
  ulong *puVar4;
  ulong *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  
  pdVar1 = *(double **)(this + 0x10);
  if ((double *)(*(long *)(this + 0x18) - 8U) < pdVar1) {
    lVar8 = 0;
  }
  else {
    dVar10 = *pdVar1;
    iVar2 = *(int *)(this + 0x24);
    pIVar3 = *(Isolate **)this;
    *(double **)(this + 0x10) = pdVar1 + 1;
    *(int *)(this + 0x24) = iVar2 + 1;
    uVar7 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
    uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0xa7);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar4 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar4 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar4 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar4 + 1;
      *puVar4 = uVar7;
    }
    else {
      puVar4 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
    }
    pIVar3 = *(Isolate **)this;
    uVar7 = *(ulong *)(pIVar3 + 0x2bc8) & 0xffffffff00000000;
    uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(pIVar3 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0xa7);
    if (*(CanonicalHandleScope **)(pIVar3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar3 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar3 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar3);
      }
      *(ulong **)(pIVar3 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar7;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar3 + 0x95b8),uVar7);
    }
    dVar9 = NAN;
    if (!NAN(dVar10)) {
      dVar9 = dVar10;
    }
    lVar8 = JSDate::New(dVar9,puVar4,puVar5);
    if (lVar8 != 0) {
      puVar4 = (ulong *)FixedArray::SetAndGrow
                                  (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar2,lVar8);
      puVar5 = *(ulong **)(this + 0x30);
      if ((puVar4 != puVar5) &&
         (((puVar4 == (ulong *)0x0 || (puVar5 == (ulong *)0x0)) || (*puVar4 != *puVar5)))) {
        GlobalHandles::Destroy(puVar5);
        uVar6 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar4);
        *(undefined8 *)(this + 0x30) = uVar6;
      }
    }
  }
  return lVar8;
}

