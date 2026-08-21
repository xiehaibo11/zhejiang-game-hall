
/* v8::internal::HeapSnapshotGenerator::ProgressReport(bool) */

bool __thiscall
v8::internal::HeapSnapshotGenerator::ProgressReport(HeapSnapshotGenerator *this,bool param_1)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x10);
  if (plVar2 != (long *)0x0) {
    iVar1 = *(int *)(this + 0x140);
    if (((iVar1 * 0x3afb7e91 + 0x346dc0U >> 4 | iVar1 * 0x10000000) < 0x68db9) || (param_1)) {
      iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,iVar1,*(undefined4 *)(this + 0x144));
      return iVar1 == 0;
    }
  }
  return true;
}

