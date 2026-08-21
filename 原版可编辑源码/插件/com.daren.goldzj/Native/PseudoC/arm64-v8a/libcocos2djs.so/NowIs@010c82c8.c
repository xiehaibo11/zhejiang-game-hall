
/* v8::internal::FieldType::NowIs(v8::internal::FieldType) const */

bool __thiscall v8::internal::FieldType::NowIs(FieldType *this,int param_2)

{
  int iVar1;
  
  if ((param_2 != 2) && (iVar1 = *(int *)this, iVar1 != 4)) {
    return iVar1 == param_2 && (iVar1 != 2 && param_2 != 4);
  }
  return true;
}

