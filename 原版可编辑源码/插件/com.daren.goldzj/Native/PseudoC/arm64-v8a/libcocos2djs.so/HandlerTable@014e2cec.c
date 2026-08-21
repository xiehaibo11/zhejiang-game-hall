
/* v8::internal::HandlerTable::HandlerTable(v8::internal::Code) */

void __thiscall v8::internal::HandlerTable::HandlerTable(HandlerTable *this,long param_2)

{
  int iVar1;
  int iVar2;
  long local_28;
  
  local_28 = param_2;
  if (*(int *)(param_2 + 0x17) < 0) {
    param_2 = Code::OffHeapInstructionStart((Code *)&local_28);
  }
  else {
    param_2 = param_2 + 0x3f;
  }
  iVar1 = *(int *)(local_28 + 0x1f);
  iVar2 = Code::handler_table_size((Code *)&local_28);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  *(int *)this = iVar2 >> 3;
  *(long *)(this + 8) = param_2 + iVar1;
  return;
}

