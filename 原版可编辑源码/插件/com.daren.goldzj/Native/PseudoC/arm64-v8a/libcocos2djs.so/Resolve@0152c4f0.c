
/* v8::internal::AllocationTracker::UnresolvedLocation::Resolve() */

void __thiscall
v8::internal::AllocationTracker::UnresolvedLocation::Resolve(UnresolvedLocation *this)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  if (*(long *)this != 0) {
    uVar4 = *(uint *)(*(long *)this + 4);
    piVar1 = (int *)((ulong)uVar4 << 0x20 | 0x95b0);
    puVar2 = (undefined8 *)((ulong)uVar4 << 0x20 | 0x95a0);
    plVar3 = (long *)((ulong)uVar4 << 0x20 | 0x95a8);
    uVar7 = *puVar2;
    lVar6 = *plVar3;
    *piVar1 = *piVar1 + 1;
    uVar5 = Script::GetLineNumber(*(undefined8 *)this,*(undefined4 *)(this + 8));
    *(undefined4 *)(*(long *)(this + 0x10) + 0x1c) = uVar5;
    uVar5 = Script::GetColumnNumber(*(undefined8 *)this,*(undefined4 *)(this + 8));
    *(undefined4 *)(*(long *)(this + 0x10) + 0x20) = uVar5;
    if (uVar4 != 0) {
      *puVar2 = uVar7;
      *piVar1 = *piVar1 + -1;
      if (*plVar3 != lVar6) {
        *plVar3 = lVar6;
        HandleScope::DeleteExtensions((Isolate *)((ulong)uVar4 << 0x20));
        return;
      }
    }
  }
  return;
}

