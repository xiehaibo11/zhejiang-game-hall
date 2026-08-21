
/* v8::internal::HeapSnapshotJSONSerializer::Serialize(v8::OutputStream*) */

void __thiscall
v8::internal::HeapSnapshotJSONSerializer::Serialize
          (HeapSnapshotJSONSerializer *this,OutputStream *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  
  if (*(AllocationTracker **)(**(long **)this + 0x30) != (AllocationTracker *)0x0) {
    AllocationTracker::PrepareForSerialization(*(AllocationTracker **)(**(long **)this + 0x30));
  }
  puVar2 = operator_new(0x28);
  *puVar2 = param_1;
  iVar1 = (**(code **)(*(long *)param_1 + 0x18))(param_1);
  *(int *)(puVar2 + 1) = iVar1;
  uVar5 = (ulong)iVar1;
  pvVar3 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
  if (pvVar3 == (void *)0x0) {
    plVar4 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar4 + 0x18))();
    pvVar3 = operator_new__(uVar5,(nothrow_t *)&std::nothrow);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  puVar2[2] = pvVar3;
  puVar2[3] = uVar5;
  *(undefined4 *)(puVar2 + 4) = 0;
  *(undefined1 *)((long)puVar2 + 0x24) = 0;
  *(undefined8 **)(this + 0x28) = puVar2;
  SerializeImpl(this);
  pvVar3 = *(void **)(this + 0x28);
  if (pvVar3 != (void *)0x0) {
    if (*(void **)((long)pvVar3 + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar3 + 0x10));
    }
    operator_delete(pvVar3);
  }
  *(undefined8 *)(this + 0x28) = 0;
  return;
}

