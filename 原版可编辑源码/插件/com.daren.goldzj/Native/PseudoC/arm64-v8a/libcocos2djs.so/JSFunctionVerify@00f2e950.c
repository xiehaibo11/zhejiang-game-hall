
/* v8::internal::JSFunction::JSFunctionVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::JSFunction::JSFunctionVerify(JSFunction *this,Isolate *param_1)

{
  ulong *puVar1;
  Isolate *pIVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 local_98;
  int local_94;
  undefined8 local_8c;
  Isolate *local_80;
  Isolate *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  ulong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  TorqueGeneratedClassVerifiers::JSFunctionVerify(*(undefined8 *)this);
  uVar4 = *(ulong *)this;
  uVar3 = uVar4 & 0xffffffff00000000;
  if (*(short *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(uVar4 + 0x17)) - 1)) != 0x9a) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","code().IsCode()");
  }
  if ((*(byte *)((uVar3 | *(uint *)(uVar4 - 1)) + 9) >> 1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","map().is_callable()");
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar1 = *(ulong **)(param_1 + 0x95a0);
    if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
      puVar1 = (ulong *)HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
    *puVar1 = uVar4;
  }
  else {
    puVar1 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
    uVar4 = *puVar1;
  }
  if (((uVar4 & 1) == 0) ||
     (local_58 = puVar1, *(ushort *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar4 - 1)) < 0xa9)) {
    local_58 = (ulong *)LookupIterator::GetRootForNonJSReceiver(param_1,puVar1,0xffffffffffffffff);
  }
  pIVar2 = param_1 + 0x908;
  local_98 = 0;
  local_8c = 0xc000000000;
  local_80 = param_1;
  if ((*(ushort *)
        ((*(ulong *)(param_1 + 0x908) & 0xffffffff00000000 | 7) +
        (ulong)*(uint *)(*(ulong *)(param_1 + 0x908) - 1)) & 0xffe0) == 0x20) {
    pIVar2 = (Isolate *)StringTable::LookupString(param_1,pIVar2);
  }
  uStack_70 = 0;
  uStack_60 = 0;
  local_48 = 0xffffffffffffffff;
  uStack_50 = 0xffffffffffffffff;
  local_78 = pIVar2;
  local_68 = puVar1;
  LookupIterator::Start<false>((LookupIterator *)&local_98);
  uVar4 = *(ulong *)this;
  if ((((*(char *)((uVar4 & 0xffffffff00000000 | 9) + (ulong)*(uint *)(uVar4 - 1)) < '\0') &&
       (pIVar2 = param_1 + *(uint *)(uVar4 + 0x1b), ((ulong)pIVar2 & 1) != 0)) &&
      (uVar4 = ReadOnlyHeap::Contains(pIVar2), (uVar4 & 1) == 0)) &&
     (uVar4 = Heap::Contains((Heap *)(param_1 + 0x8850),pIVar2), (uVar4 & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","IsValidHeapObject(isolate->heap(), HeapObject::cast(p))");
  }
  uVar4 = *(ulong *)this;
  uVar3 = uVar4 & 0xffffffff00000000 | 9;
  if (((*(char *)(uVar3 + *(uint *)(uVar4 - 1)) < '\0') &&
      ((*(byte *)(uVar3 + *(uint *)(uVar4 - 1)) >> 6 & 1) != 0)) ||
     (((*(uint *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb)) + 0x1b) & 0x1f) - 0xd
      & 0xff) < 4)) {
    if (local_94 == 4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","it.IsFound()");
    }
    if (local_94 != 5) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","LookupIterator::ACCESSOR == it.state()");
    }
    puVar1 = (ulong *)LookupIterator::GetAccessors();
    uVar4 = *puVar1;
    if (((uVar4 & 1) == 0) ||
       (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x51)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","it.GetAccessors()->IsAccessorInfo()");
    }
  }
  else if (local_94 == 5) {
    puVar1 = (ulong *)LookupIterator::GetAccessors();
    uVar4 = *puVar1;
    if (((uVar4 & 1) != 0) &&
       (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x51)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "!it.IsFound() || it.state() != LookupIterator::ACCESSOR || !it.GetAccessors()->IsAccessorInfo()"
              );
    }
  }
  return;
}

