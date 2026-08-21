
/* v8::internal::Genesis::CreateEmptyFunction() */

ulong * __thiscall v8::internal::Genesis::CreateEmptyFunction(Genesis *this)

{
  long lVar1;
  long *plVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  Isolate *pIVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *local_a8;
  undefined8 uStack_a0;
  NewFunctionArgs aNStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)Factory::CreateSloppyFunctionMap(*(Factory **)this,0,0);
  *(uint *)(*plVar2 + 0xb) = *(uint *)(*plVar2 + 0xb) | 0x100000;
  NewFunctionArgs::ForBuiltin(aNStack_98,*(long *)this + 200,plVar2,0x96);
  puVar3 = (ulong *)Factory::NewFunction(*(Factory **)this,aNStack_98);
  uVar10 = *puVar3;
  uVar11 = **(ulong **)(this + 0x10);
  *(int *)(uVar11 + 0xaf) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar7 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,uVar11 + 0xaf,uVar10);
      uVar7 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0xaf,uVar10);
    }
  }
  local_a8 = &DAT_019c72e0;
  uStack_a0 = 5;
  lVar4 = Factory::NewStringFromOneByte(*(undefined8 *)this,&local_a8,0);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","(location_) != nullptr");
  }
  puVar5 = (ulong *)Factory::NewScript(*(undefined8 *)this,lVar4);
  *(undefined4 *)(*puVar5 + 0x17) = 0;
  puVar6 = (ulong *)Factory::NewWeakFixedArray(*(undefined8 *)this,2,0);
  uVar11 = *puVar5;
  uVar10 = *puVar6;
  *(int *)(uVar11 + 0x2b) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar7 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar7 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar11,uVar11 + 0x2b,uVar10);
      uVar7 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar7 & 0x18) != 0) && ((*(byte *)((uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar11,uVar11 + 0x2b,uVar10);
    }
  }
  uVar11 = (ulong)*(uint *)(*puVar3 + 0xb);
  uVar10 = *puVar3 & 0xffffffff00000000;
  uVar12 = uVar10 | uVar11;
  uVar7 = *(ulong *)(*(long *)this + 0x480);
  *(int *)(uVar12 + 7) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar8 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar8 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar12,uVar12 + 7,uVar7);
      uVar8 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar8 & 0x18) != 0) &&
       ((*(byte *)((uVar10 | uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar12,uVar12 + 7,uVar7);
    }
  }
  *(undefined2 *)((*puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + 0xb)) + 0x15) = 0xffff;
  pIVar9 = *(Isolate **)this;
  uVar10 = *puVar3 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar3 + 0xb);
  if (*(CanonicalHandleScope **)(pIVar9 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(pIVar9 + 0x95a0);
    if (puVar6 == *(ulong **)(pIVar9 + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend(pIVar9);
    }
    *(ulong **)(pIVar9 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar10;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar9 + 0x95b8),uVar10);
  }
  SharedFunctionInfo::SetScript(puVar6,puVar5,1,1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

