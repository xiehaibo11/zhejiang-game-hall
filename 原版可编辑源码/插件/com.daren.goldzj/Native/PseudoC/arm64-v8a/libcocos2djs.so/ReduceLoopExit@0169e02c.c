
/* v8::internal::compiler::DeadCodeElimination::ReduceLoopExit(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::DeadCodeElimination::ReduceLoopExit(DeadCodeElimination *this,Node *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  
  plVar1 = (long *)NodeProperties::GetControlInput(param_1,0);
  plVar2 = (long *)NodeProperties::GetControlInput(param_1,1);
  if ((*(short *)(*plVar1 + 0x10) == 0x3d) || (*(short *)(*plVar2 + 0x10) == 0x3d)) {
    for (plVar1 = *(long **)(param_1 + 0x18); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      plVar2 = plVar1 + (ulong)(*(uint *)(plVar1 + 2) >> 1) * 3 + 3;
      if ((*(uint *)(plVar1 + 2) & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
      if (*(ushort *)(*plVar2 + 0x10) - 0x35 < 2) {
        plVar4 = plVar2 + 4;
        if ((~*(uint *)((long)plVar2 + 0x14) & 0xf000000) == 0) {
          plVar4 = (long *)(*plVar4 + 0x10);
        }
        (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),plVar2,*plVar4);
      }
    }
    uVar3 = NodeProperties::GetControlInput(param_1,0);
    (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),param_1,uVar3);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

