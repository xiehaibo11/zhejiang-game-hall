
/* v8::internal::compiler::DeadCodeElimination::ReduceBranchOrSwitch(v8::internal::compiler::Node*)
    */

long * __thiscall
v8::internal::compiler::DeadCodeElimination::ReduceBranchOrSwitch
          (DeadCodeElimination *this,Node *param_1)

{
  long *plVar1;
  Zone *this_00;
  undefined8 uVar2;
  Node **ppNVar3;
  ulong uVar4;
  ulong uVar5;
  Node *pNVar6;
  
  plVar1 = (long *)NodeProperties::GetControlInput(param_1,0);
  if ((plVar1 == (long *)0x0) || (*(short *)(*plVar1 + 0x10) != 0x3d)) {
    plVar1 = (long *)NodeProperties::GetValueInput(param_1,0);
    if (*(short *)(*plVar1 + 0x10) == 0x3c) {
      this_00 = *(Zone **)(this + 0x28);
      uVar5 = (ulong)*(int *)(*(long *)param_1 + 0x28);
      ppNVar3 = *(Node ***)(this_00 + 0x10);
      uVar4 = uVar5 * 8;
      if (uVar4 < (ulong)(*(long *)(this_00 + 0x18) - (long)ppNVar3) ||
          uVar4 - (*(long *)(this_00 + 0x18) - (long)ppNVar3) == 0) {
        *(Node ***)(this_00 + 0x10) = ppNVar3 + uVar5;
      }
      else {
        ppNVar3 = (Node **)Zone::NewExpand(this_00,uVar4);
      }
      NodeProperties::CollectControlProjections(param_1,ppNVar3,uVar5);
      pNVar6 = *ppNVar3;
      uVar2 = NodeProperties::GetControlInput(param_1,0);
      (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),pNVar6,uVar2);
      plVar1 = *(long **)(this + 0x20);
    }
    else {
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}

