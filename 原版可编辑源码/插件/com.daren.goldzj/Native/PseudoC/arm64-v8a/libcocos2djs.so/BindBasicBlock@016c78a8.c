
/* v8::internal::compiler::GraphAssembler::BindBasicBlock(v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::GraphAssembler::BindBasicBlock(GraphAssembler *this,BasicBlock *param_1)

{
  BasicBlock BVar1;
  long *plVar2;
  long lVar3;
  
  if ((*(long *)(this + 0x30) == 0) ||
     (*(BasicBlock **)(*(long *)(this + 0x30) + 8) = param_1, param_1[8] != (BasicBlock)0x0)) {
    return;
  }
  if (*(long **)(param_1 + 0x80) == *(long **)(param_1 + 0x88)) {
    param_1[8] = (BasicBlock)0x1;
    return;
  }
  BVar1 = (BasicBlock)0x1;
  plVar2 = *(long **)(param_1 + 0x80);
  do {
    lVar3 = *plVar2;
    BVar1 = (BasicBlock)((byte)BVar1 & *(char *)(lVar3 + 8) != '\0');
    if (*(long **)(param_1 + 0x88) + -1 == plVar2) break;
    plVar2 = plVar2 + 1;
  } while (*(char *)(lVar3 + 8) != '\0');
  param_1[8] = BVar1;
  return;
}

