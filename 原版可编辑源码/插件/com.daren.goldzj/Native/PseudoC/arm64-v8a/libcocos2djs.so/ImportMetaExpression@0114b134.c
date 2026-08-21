
/* v8::internal::Parser::ImportMetaExpression(int) */

int * __thiscall v8::internal::Parser::ImportMetaExpression(Parser *this,int param_1)

{
  Zone *pZVar1;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  Parser *local_48;
  ulong local_40;
  ulong uStack_38;
  
  local_48 = this + 200;
  local_40 = *(long *)(this + 0xd0) - *(long *)(this + 200) >> 3;
  pZVar1 = *(Zone **)(this + 0x68);
  piVar3 = *(int **)(pZVar1 + 0x10);
  uStack_38 = local_40;
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)piVar3) < 0x28) {
    piVar3 = (int *)Zone::NewExpand(pZVar1,0x28);
  }
  else {
    *(int **)(pZVar1 + 0x10) = piVar3 + 10;
  }
  pZVar1 = *(Zone **)(this + 0x68);
  uVar2 = Runtime::FunctionForId(0x1ec);
  *(undefined8 *)(piVar3 + 4) = uVar2;
  *piVar3 = param_1;
  piVar3[1] = 0x1e;
  *(undefined8 *)(piVar3 + 6) = 0;
  piVar3[8] = 0;
  piVar3[9] = 0;
  ScopedList<v8::internal::Expression*,void*>::CopyTo
            ((ScopedList<v8::internal::Expression*,void*> *)&local_48,(ZoneList *)(piVar3 + 6),
             pZVar1);
  uVar4 = *(long *)(local_48 + 8) - *(long *)local_48 >> 3;
  if (local_40 < uVar4 || local_40 - uVar4 == 0) {
    if (local_40 < uVar4) {
      *(ulong *)(local_48 + 8) = *(long *)local_48 + local_40 * 8;
    }
  }
  else {
    std::__ndk1::vector<void*,std::__ndk1::allocator<void*>>::__append
              ((vector<void*,std::__ndk1::allocator<void*>> *)local_48,local_40 - uVar4);
  }
  return piVar3;
}

