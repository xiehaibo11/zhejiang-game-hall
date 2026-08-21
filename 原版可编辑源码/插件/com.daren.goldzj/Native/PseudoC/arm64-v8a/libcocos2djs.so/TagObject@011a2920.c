
/* v8::internal::V8HeapExplorer::TagObject(v8::internal::Object, char const*) */

void __thiscall
v8::internal::V8HeapExplorer::TagObject(V8HeapExplorer *this,void *param_2,undefined8 param_3)

{
  long extraout_x0;
  int iVar1;
  long lVar2;
  
  iVar1 = (int)param_2;
  if (((((((ulong)param_2 & 1) != 0) &&
        (lVar2 = *(long *)(this + 8),
        *(short *)(((ulong)param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)((long)param_2 + -1))
        != 0x43)) && (iVar1 != *(int *)(lVar2 + -0x8490))) &&
      (((iVar1 != *(int *)(lVar2 + -0x86e8) && (iVar1 != *(int *)(lVar2 + -0x8430))) &&
       ((iVar1 != *(int *)(lVar2 + -0x86e0) &&
        ((iVar1 != *(int *)(lVar2 + -0x8770) && (iVar1 != *(int *)(lVar2 + -0x8728))))))))) &&
     ((iVar1 != *(int *)(lVar2 + -0x8720) &&
      ((((iVar1 != *(int *)(lVar2 + -0x8738) && (iVar1 != *(int *)(lVar2 + -0x87d0))) &&
        (iVar1 != *(int *)(lVar2 + -0x87c8))) && (iVar1 != *(int *)(lVar2 + -0x87c0))))))) {
    HeapSnapshotGenerator::FindOrAddEntry
              (*(HeapSnapshotGenerator **)(this + 0x30),param_2,(HeapEntriesAllocator *)this);
    if (**(char **)(extraout_x0 + 0x18) == '\0') {
      *(undefined8 *)(extraout_x0 + 0x18) = param_3;
    }
  }
  return;
}

