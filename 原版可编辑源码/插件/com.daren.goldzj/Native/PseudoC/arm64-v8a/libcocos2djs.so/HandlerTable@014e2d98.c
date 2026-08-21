
/* v8::internal::HandlerTable::HandlerTable(v8::internal::BytecodeArray) */

void __thiscall v8::internal::HandlerTable::HandlerTable(HandlerTable *this,ulong param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xb);
  iVar2 = *(int *)(uVar3 + 3);
  *(ulong *)(this + 8) = uVar3 + 7;
  iVar2 = iVar2 >> 1;
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *(int *)this = iVar1 >> 4;
  return;
}

