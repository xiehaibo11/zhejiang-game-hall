
/* v8::internal::Isolate::CollectSourcePositionsForAllBytecodeArrays() */

void __thiscall v8::internal::Isolate::CollectSourcePositionsForAllBytecodeArrays(Isolate *this)

{
  Isolate *pIVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong *local_88;
  HeapObjectIterator aHStack_80 [40];
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *puStack_48;
  
  pIVar1 = this + 0x95a0;
  lVar3 = *(long *)pIVar1;
  lVar4 = *(long *)(this + 0x95a8);
  *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
  local_50 = (undefined8 *)0x0;
  puStack_48 = (undefined8 *)0x0;
  local_58 = (undefined8 *)0x0;
  HeapObjectIterator::HeapObjectIterator(aHStack_80,this + 0x8850,0);
  while (uVar6 = HeapObjectIterator::Next(aHStack_80), (int)uVar6 != 0) {
    uVar9 = uVar6 & 0xffffffff00000000;
    uVar8 = uVar9 | 7;
    if (*(short *)(uVar8 + *(uint *)(uVar6 - 1)) == 0xa6) {
      uVar2 = *(uint *)(uVar6 + 3);
      if ((((uVar2 & 1) != 0) && (*(short *)(uVar8 + *(uint *)((uVar9 | uVar2) - 1)) == 0x86)) ||
         ((uVar2 = *(uint *)(uVar6 + 3), (uVar2 & 1) != 0 &&
          (*(short *)(uVar8 + *(uint *)((uVar9 | uVar2) - 1)) == 0x61)))) {
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar7 = *(ulong **)pIVar1;
          if (puVar7 == *(ulong **)(this + 0x95a8)) {
            puVar7 = (ulong *)HandleScope::Extend(this);
          }
          *(ulong **)pIVar1 = puVar7 + 1;
          *puVar7 = uVar6;
        }
        else {
          puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(this + 0x95b8),uVar6);
        }
        local_88 = puVar7;
        if (local_50 < puStack_48) {
          *local_50 = puVar7;
          local_50 = local_50 + 1;
        }
        else {
          std::__ndk1::
          vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
          ::__push_back_slow_path<v8::internal::Handle<v8::internal::SharedFunctionInfo>>
                    ((vector<v8::internal::Handle<v8::internal::SharedFunctionInfo>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::SharedFunctionInfo>>>
                      *)&local_58,(Handle *)&local_88);
        }
      }
    }
  }
  HeapObjectIterator::~HeapObjectIterator(aHStack_80);
  puVar5 = local_50;
  for (puVar10 = local_58; puVar10 != puVar5; puVar10 = puVar10 + 1) {
    SharedFunctionInfo::EnsureSourcePositionsAvailable(this,*puVar10);
  }
  if (local_58 != (undefined8 *)0x0) {
    local_50 = local_58;
    operator_delete(local_58);
  }
  if (this != (Isolate *)0x0) {
    *(long *)pIVar1 = lVar3;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar4) {
      *(long *)(this + 0x95a8) = lVar4;
      HandleScope::DeleteExtensions(this);
    }
  }
  return;
}

