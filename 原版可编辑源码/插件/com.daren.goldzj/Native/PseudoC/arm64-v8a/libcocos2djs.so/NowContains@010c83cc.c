
/* v8::internal::FieldType::NowContains(v8::internal::Object) const */

bool __thiscall v8::internal::FieldType::NowContains(FieldType *this,ulong param_2)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 == 2) {
    return true;
  }
  if ((iVar1 != 4) && ((param_2 & 1) != 0)) {
    return *(int *)(param_2 - 1) == iVar1;
  }
  return false;
}

