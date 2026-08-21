
/* v8::internal::ValueDeserializer::ReadJSMap() */

void __thiscall v8::internal::ValueDeserializer::ReadJSMap(ValueDeserializer *this)

{
  Isolate *pIVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined8 uVar8;
  Isolate *pIVar9;
  long lVar10;
  ulong *puVar11;
  ulong *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  Isolate *this_00;
  uint uVar19;
  long local_88;
  long local_80;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> aPStack_78 [16];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar18 = *(long *)this;
  uVar6 = GetCurrentStackPosition();
  this_00 = *(Isolate **)this;
  if (*(ulong *)(lVar18 + 0x58) <= uVar6) {
    pIVar1 = this_00 + 0x95a0;
    lVar18 = *(long *)pIVar1;
    lVar2 = *(long *)(this_00 + 0x95a8);
    *(int *)(this_00 + 0x95b0) = *(int *)(this_00 + 0x95b0) + 1;
    iVar3 = *(int *)(this + 0x24);
    *(int *)(this + 0x24) = iVar3 + 1;
    puVar11 = (ulong *)Factory::NewJSMap(*(Factory **)this);
    puVar7 = (ulong *)FixedArray::SetAndGrow
                                (*(undefined8 *)this,*(undefined8 *)(this + 0x30),iVar3,puVar11);
    puVar12 = *(ulong **)(this + 0x30);
    if ((puVar7 != puVar12) &&
       (((puVar7 == (ulong *)0x0 || (puVar12 == (ulong *)0x0)) || (*puVar7 != *puVar12)))) {
      GlobalHandles::Destroy(puVar12);
      uVar8 = GlobalHandles::Create(*(GlobalHandles **)(*(long *)this + 0x95e0),*puVar7);
      *(undefined8 *)(this + 0x30) = uVar8;
    }
    pIVar9 = *(Isolate **)this;
    uVar6 = *(ulong *)(pIVar9 + 0x2bc8) & 0xffffffff00000000;
    uVar6 = uVar6 | *(uint *)((uVar6 | *(uint *)((uVar6 | *(uint *)(*(ulong *)(pIVar9 + 0x2bc8) - 1)
                                                 ) + 0x13)) + 0x37f);
    if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar7 = *(ulong **)(pIVar9 + 0x95a0);
      if (puVar7 == *(ulong **)(pIVar9 + 0x95a8)) {
        puVar7 = (ulong *)HandleScope::Extend(pIVar9);
      }
      *(ulong **)(pIVar9 + 0x95a0) = puVar7 + 1;
      *puVar7 = uVar6;
    }
    else {
      puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar6);
    }
    uVar19 = 0;
    while( true ) {
      pbVar15 = *(byte **)(this + 0x18);
      pbVar13 = *(byte **)(this + 0x10);
      do {
        if (pbVar15 <= pbVar13) goto joined_r0x011460e4;
        bVar4 = *pbVar13;
        pbVar13 = pbVar13 + 1;
      } while (bVar4 == 0);
      pbVar13 = *(byte **)(this + 0x10);
      if (bVar4 == 0x3a) goto LAB_01146018;
      local_88 = 0;
      local_80 = 0;
      local_88 = ReadObject(this);
      if (local_88 == 0) {
        local_88 = 0;
        goto joined_r0x011460e4;
      }
      local_80 = ReadObject(this);
      if (local_80 == 0) {
        local_80 = 0;
        goto joined_r0x011460e4;
      }
      PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::PerIsolateAssertScope
                (aPStack_78,*(Isolate **)this);
      lVar10 = Execution::Call(*(undefined8 *)this,puVar7,puVar11,2,&local_88);
      if (lVar10 == 0) break;
      uVar19 = uVar19 + 2;
      PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::~PerIsolateAssertScope
                (aPStack_78);
    }
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::~PerIsolateAssertScope
              (aPStack_78);
    goto joined_r0x011460e4;
  }
  Isolate::StackOverflow(this_00);
  goto LAB_0114612c;
  while( true ) {
    pbVar14 = pbVar13 + 1;
    bVar4 = *pbVar13;
    *(byte **)(this + 0x10) = pbVar14;
    pbVar13 = pbVar14;
    if (bVar4 != 0) break;
LAB_01146018:
    if (pbVar15 <= pbVar13) {
      v8::V8::FromJustIsNothing();
      pbVar14 = *(byte **)(this + 0x10);
      pbVar15 = *(byte **)(this + 0x18);
      break;
    }
  }
  uVar16 = 0;
  uVar17 = 0;
  do {
    if (pbVar15 <= pbVar14) goto joined_r0x011460e4;
    bVar4 = *pbVar14;
    if (uVar17 < 0x20) {
      uVar16 = (bVar4 & 0x7f) << (ulong)(uVar17 & 0x1f) | uVar16;
      uVar17 = uVar17 + 7;
    }
    pbVar14 = pbVar14 + 1;
    *(byte **)(this + 0x10) = pbVar14;
  } while ((char)bVar4 < '\0');
  if (uVar19 == uVar16) {
    uVar6 = *puVar11;
    *(long *)pIVar1 = lVar18;
    *(int *)(this_00 + 0x95b0) = *(int *)(this_00 + 0x95b0) + -1;
    if (*(long *)(this_00 + 0x95a8) != lVar2) {
      *(long *)(this_00 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(this_00);
    }
    if (*(CanonicalHandleScope **)(this_00 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar11 = *(ulong **)pIVar1;
      if (puVar11 == *(ulong **)(this_00 + 0x95a8)) {
        puVar11 = (ulong *)HandleScope::Extend(this_00);
      }
      *(ulong **)pIVar1 = puVar11 + 1;
      *puVar11 = uVar6;
    }
    else {
      puVar11 = (ulong *)CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this_00 + 0x95b8),uVar6);
    }
    goto LAB_01146130;
  }
joined_r0x011460e4:
  if (this_00 != (Isolate *)0x0) {
    *(long *)pIVar1 = lVar18;
    *(int *)(this_00 + 0x95b0) = *(int *)(this_00 + 0x95b0) + -1;
    if (*(long *)(this_00 + 0x95a8) != lVar2) {
      *(long *)(this_00 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(this_00);
    }
  }
LAB_0114612c:
  puVar11 = (ulong *)0x0;
LAB_01146130:
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(puVar11);
}

