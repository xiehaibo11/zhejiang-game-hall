
/* v8::internal::FieldType::NowIs(v8::internal::Handle<v8::internal::FieldType>) const */

bool __thiscall v8::internal::FieldType::NowIs(FieldType *this,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (iVar1 == 2) {
    return true;
  }
  iVar2 = *(int *)this;
  if (iVar2 == 4) {
    return true;
  }
  return iVar2 == iVar1 && (iVar1 != 4 && iVar2 != 2);
}

