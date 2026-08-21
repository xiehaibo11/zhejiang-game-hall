
/* v8::internal::compiler::BytecodeGraphBuilder::ProcessCallArguments(v8::internal::compiler::Operator
   const*, v8::internal::compiler::Node*, v8::internal::interpreter::Register, unsigned long) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::ProcessCallArguments
          (BytecodeGraphBuilder *this,Operator *param_1,Node *param_2,int param_4,uint param_5)

{
  Node *pNVar1;
  Zone *this_00;
  Node **ppNVar2;
  ulong uVar3;
  Node **ppNVar4;
  
  pNVar1 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),param_4);
  this_00 = *(Zone **)(this + 8);
  uVar3 = (long)(((ulong)param_5 << 0x20) + 0x100000000) >> 0x1d;
  ppNVar2 = *(Node ***)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)ppNVar2) < uVar3) {
    ppNVar2 = (Node **)Zone::NewExpand(this_00,uVar3);
  }
  else {
    *(ulong *)(this_00 + 0x10) = (long)ppNVar2 + uVar3;
  }
  *ppNVar2 = param_2;
  ppNVar2[1] = pNVar1;
  if (0 < (int)(param_5 - 1)) {
    uVar3 = (ulong)(param_5 - 1);
    ppNVar4 = ppNVar2 + 2;
    do {
      param_4 = param_4 + 1;
      pNVar1 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),param_4);
      *ppNVar4 = pNVar1;
      uVar3 = uVar3 - 1;
      ppNVar4 = ppNVar4 + 1;
    } while (uVar3 != 0);
  }
  MakeNode(this,param_1,param_5 + 1,ppNVar2,false);
  return;
}

