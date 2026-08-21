
/* v8::internal::compiler::DeadCodeElimination::ReduceNode(v8::internal::compiler::Node*) */

long * __thiscall
v8::internal::compiler::DeadCodeElimination::ReduceNode(DeadCodeElimination *this,Node *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  
  iVar1 = *(int *)(*(long *)param_1 + 0x18);
  iVar2 = *(int *)(*(long *)param_1 + 0x1c);
  if (((iVar2 != 1) ||
      (plVar3 = (long *)NodeProperties::GetControlInput(param_1,0), plVar3 == (long *)0x0)) ||
     (*(short *)(*plVar3 + 0x10) != 0x3d)) {
    if (iVar1 == 0) {
      if ((iVar2 == 0) || (*(int *)(*(long *)param_1 + 0x28) == 0)) {
        plVar3 = (long *)ReducePureNode(this,param_1);
        return plVar3;
      }
    }
    else if (0 < iVar1) {
      plVar3 = (long *)ReduceEffectNode(this,param_1);
      return plVar3;
    }
    plVar3 = (long *)0x0;
  }
  return plVar3;
}

