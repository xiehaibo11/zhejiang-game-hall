
/* v8::internal::ExternalReferenceTable::Add(unsigned long, int*) */

void __thiscall
v8::internal::ExternalReferenceTable::Add(ExternalReferenceTable *this,ulong param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(ulong *)(this + (long)iVar1 * 8) = param_1;
  return;
}

