
/* v8::internal::HandlerTable::HandlerTable(v8::internal::ByteArray) */

void __thiscall v8::internal::HandlerTable::HandlerTable(HandlerTable *this,long param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 3);
  *(long *)(this + 8) = param_2 + 7;
  iVar2 = iVar2 >> 1;
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)this = iVar1 >> 4;
  return;
}

