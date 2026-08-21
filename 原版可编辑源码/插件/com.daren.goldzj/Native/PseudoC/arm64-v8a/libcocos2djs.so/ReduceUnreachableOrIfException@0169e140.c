
/* v8::internal::compiler::DeadCodeElimination::ReduceUnreachableOrIfException(v8::internal::compiler::Node*)
    */

long * __thiscall
v8::internal::compiler::DeadCodeElimination::ReduceUnreachableOrIfException
          (DeadCodeElimination *this,Node *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)NodeProperties::GetControlInput(param_1,0);
  if ((plVar1 == (long *)0x0) || (*(short *)(*plVar1 + 0x10) != 0x3d)) {
    plVar1 = (long *)NodeProperties::GetEffectInput(param_1,0);
    if ((*(short *)(*plVar1 + 0x10) != 0x3b) && (*(short *)(*plVar1 + 0x10) != 0x3d)) {
      plVar1 = (long *)0x0;
    }
  }
  return plVar1;
}

