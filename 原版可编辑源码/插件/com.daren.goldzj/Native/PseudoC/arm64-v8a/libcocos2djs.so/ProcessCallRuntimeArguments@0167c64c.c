
/* v8::internal::compiler::BytecodeGraphBuilder::ProcessCallRuntimeArguments(v8::internal::compiler::Operator
   const*, v8::internal::interpreter::Register, unsigned long) */

void __thiscall
v8::internal::compiler::BytecodeGraphBuilder::ProcessCallRuntimeArguments
          (BytecodeGraphBuilder *this,Operator *param_1,int param_3,ulong param_4)

{
  Zone *this_00;
  Node *pNVar1;
  Node **ppNVar2;
  ulong uVar3;
  Node **ppNVar4;
  
  this_00 = *(Zone **)(this + 8);
  uVar3 = -(param_4 >> 0x1f & 1) & 0xfffffff800000000 | (param_4 & 0xffffffff) << 3;
  ppNVar2 = *(Node ***)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)ppNVar2) < uVar3) {
    ppNVar2 = (Node **)Zone::NewExpand(this_00,uVar3);
  }
  else {
    *(ulong *)(this_00 + 0x10) = (long)ppNVar2 + uVar3;
  }
  if (0 < (int)param_4) {
    uVar3 = param_4 & 0xffffffff;
    ppNVar4 = ppNVar2;
    do {
      pNVar1 = (Node *)Environment::LookupRegister(*(Environment **)(this + 0xa8),param_3);
      *ppNVar4 = pNVar1;
      uVar3 = uVar3 - 1;
      param_3 = param_3 + 1;
      ppNVar4 = ppNVar4 + 1;
    } while (uVar3 != 0);
  }
  MakeNode(this,param_1,(int)param_4,ppNVar2,false);
  return;
}

