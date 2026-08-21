
/* v8::internal::compiler::CodeAssembler::BreakOnNode(int) */

void __thiscall v8::internal::compiler::CodeAssembler::BreakOnNode(CodeAssembler *this,int param_1)

{
  Zone *this_00;
  GraphDecorator *pGVar1;
  Graph *this_01;
  
  this_01 = *(Graph **)(**(long **)this + 8);
  this_00 = *(Zone **)this_01;
  pGVar1 = *(GraphDecorator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pGVar1) < 0x10) {
    pGVar1 = (GraphDecorator *)Zone::NewExpand(this_00,0x10);
  }
  else {
    *(GraphDecorator **)(this_00 + 0x10) = pGVar1 + 0x10;
  }
  *(int *)(pGVar1 + 8) = param_1;
  *(undefined ***)pGVar1 = &PTR__GraphDecorator_01cca7e0;
  Graph::AddDecorator(this_01,pGVar1);
  return;
}

