
/* v8::internal::V8HeapExplorer::IsEssentialObject(v8::internal::Object) */

bool __thiscall v8::internal::V8HeapExplorer::IsEssentialObject(V8HeapExplorer *this,ulong param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = (int)param_2;
  if ((param_2 & 1) == 0) {
    return false;
  }
  lVar2 = *(long *)(this + 8);
  if (*(short *)((param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_2 - 1)) == 0x43) {
    return false;
  }
  if (iVar1 == *(int *)(lVar2 + -0x8490)) {
    return false;
  }
  if (iVar1 == *(int *)(lVar2 + -0x86e8)) {
    return false;
  }
  if (iVar1 == *(int *)(lVar2 + -0x8430)) {
    return false;
  }
  if (iVar1 == *(int *)(lVar2 + -0x86e0)) {
    return false;
  }
  if (iVar1 == *(int *)(lVar2 + -0x8770)) {
    return false;
  }
  if (iVar1 == *(int *)(lVar2 + -0x8728)) {
    return false;
  }
  if (iVar1 == *(int *)(lVar2 + -0x8720)) {
    return false;
  }
  if (iVar1 == *(int *)(lVar2 + -0x8738)) {
    return false;
  }
  if (iVar1 == *(int *)(lVar2 + -0x87d0)) {
    return false;
  }
  if (iVar1 == *(int *)(lVar2 + -0x87c8)) {
    return false;
  }
  return iVar1 != *(int *)(lVar2 + -0x87c0);
}

