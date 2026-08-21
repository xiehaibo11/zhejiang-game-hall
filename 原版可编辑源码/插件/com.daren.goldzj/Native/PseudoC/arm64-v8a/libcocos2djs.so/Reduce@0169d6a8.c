
/* v8::internal::compiler::DeadCodeElimination::Reduce(v8::internal::compiler::Node*) */

long * __thiscall
v8::internal::compiler::DeadCodeElimination::Reduce(DeadCodeElimination *this,Node *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)param_1;
  switch(*(undefined2 *)(lVar4 + 0x10)) {
  case 1:
  case 10:
    plVar3 = (long *)ReduceLoopOrMerge(this,param_1);
    return plVar3;
  case 2:
  case 3:
    plVar3 = (long *)ReduceBranchOrSwitch(this,param_1);
    return plVar3;
  default:
    iVar1 = *(int *)(lVar4 + 0x18);
    iVar2 = *(int *)(lVar4 + 0x1c);
    if (((iVar2 == 1) &&
        (plVar3 = (long *)NodeProperties::GetControlInput(param_1,0), plVar3 != (long *)0x0)) &&
       (*(short *)(*plVar3 + 0x10) == 0x3d)) {
      return plVar3;
    }
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
    break;
  case 7:
  case 0x3b:
    plVar3 = (long *)NodeProperties::GetControlInput(param_1,0);
    if ((plVar3 != (long *)0x0) && (*(short *)(*plVar3 + 0x10) == 0x3d)) {
      return plVar3;
    }
    plVar3 = (long *)NodeProperties::GetEffectInput(param_1,0);
    if (*(short *)(*plVar3 + 0x10) == 0x3b) {
      return plVar3;
    }
    if (*(short *)(*plVar3 + 0x10) == 0x3d) {
      return plVar3;
    }
    break;
  case 0xb:
  case 0x10:
  case 0x11:
  case 0x12:
    plVar3 = (long *)ReduceDeoptimizeOrReturnOrTerminateOrTailCall(this,param_1);
    return plVar3;
  case 0x15:
    plVar3 = (long *)NodeProperties::GetControlInput(param_1,0);
    if (*(short *)(*plVar3 + 0x10) == 0x3d) {
      return plVar3;
    }
    return (long *)0x0;
  case 0x16:
    plVar3 = (long *)ReduceEnd(this,param_1);
    return plVar3;
  case 0x23:
    plVar3 = (long *)ReducePhi(this,param_1);
    return plVar3;
  case 0x24:
    plVar3 = (long *)ReduceEffectPhi(this,param_1);
    return plVar3;
  case 0x34:
    plVar3 = (long *)ReduceLoopExit(this,param_1);
    return plVar3;
  }
  return (long *)0x0;
}

