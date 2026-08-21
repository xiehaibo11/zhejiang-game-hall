
/* v8::internal::Genesis::InitializeCallSiteBuiltins() */

void __thiscall v8::internal::Genesis::InitializeCallSiteBuiltins(Genesis *this)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  Isolate *pIVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  Isolate *pIVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 local_198;
  undefined4 local_190 [74];
  undefined8 uStack_68;
  
  pIVar8 = *(Isolate **)this;
  uVar1 = *(undefined8 *)(pIVar8 + 0x95a0);
  lVar2 = *(long *)(pIVar8 + 0x95a8);
  *(int *)(pIVar8 + 0x95b0) = *(int *)(pIVar8 + 0x95b0) + 1;
  puVar3 = (ulong *)FUN_01036d60(*(undefined8 *)this,"CallSite",0x421,0xc,pIVar8 + 0xa8,0x99);
  *(undefined2 *)((*puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + 0xb)) + 0x15) = 0xffff;
  pIVar4 = *(Isolate **)this;
  uVar7 = *(ulong *)(pIVar4 + 0x2bc8) & 0xffffffff00000000;
  uVar7 = uVar7 | *(uint *)((uVar7 | *(uint *)(*(ulong *)(pIVar4 + 0x2bc8) - 1)) + 0x13);
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar5 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar5 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar5 + 1;
    *puVar5 = uVar7;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar7);
    uVar7 = *puVar5;
  }
  uVar10 = *puVar3;
  *(int *)(uVar7 + 0x97) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar6 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x97,uVar10);
      uVar6 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x97,uVar10);
    }
  }
  uVar7 = *puVar3 & 0xffffffff00000000;
  uVar10 = uVar7 | *(uint *)(*puVar3 + 0x1b);
  if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(uVar10 - 1)) == 0xa2) {
    uVar10 = uVar7 | *(uint *)(uVar10 + 0xf);
  }
  pIVar4 = *(Isolate **)this;
  if (*(CanonicalHandleScope **)(pIVar4 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar4 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar4 + 0x95a8)) {
      puVar3 = (ulong *)HandleScope::Extend(pIVar4);
    }
    *(ulong **)(pIVar4 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar10;
  }
  else {
    puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar4 + 0x95b8),uVar10);
  }
  puVar9 = &local_198;
  memcpy(&local_198,&PTR_s_getColumnNumber_01caa488,0x130);
  do {
    FUN_01029064(*(undefined8 *)this,puVar3,*puVar9,*(undefined4 *)(puVar9 + 1),0,1,7);
    puVar9 = puVar9 + 2;
  } while (puVar9 != &uStack_68);
  if (pIVar8 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar8 + 0x95a0) = uVar1;
    *(int *)(pIVar8 + 0x95b0) = *(int *)(pIVar8 + 0x95b0) + -1;
    if (*(long *)(pIVar8 + 0x95a8) != lVar2) {
      *(long *)(pIVar8 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar8);
    }
  }
  return;
}

