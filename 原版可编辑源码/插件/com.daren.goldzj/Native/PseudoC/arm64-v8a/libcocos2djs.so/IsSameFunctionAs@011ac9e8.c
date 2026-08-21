
/* v8::internal::CodeEntry::IsSameFunctionAs(v8::internal::CodeEntry const*) const */

bool __thiscall v8::internal::CodeEntry::IsSameFunctionAs(CodeEntry *this,CodeEntry *param_1)

{
  int iVar1;
  int iVar2;
  
  if (this == param_1) {
    return true;
  }
  if (*(int *)(this + 0x20) == 0) {
    if (*(long *)(this + 8) != *(long *)(param_1 + 8)) {
      return false;
    }
    if (*(long *)(this + 0x10) != *(long *)(param_1 + 0x10)) {
      return false;
    }
    iVar1 = *(int *)(this + 0x18);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    if (*(int *)(this + 0x20) != *(int *)(param_1 + 0x20)) {
      return false;
    }
    iVar1 = *(int *)(this + 0x24);
    iVar2 = *(int *)(param_1 + 0x24);
  }
  return iVar1 == iVar2;
}

