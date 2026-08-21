
/* v8::internal::compiler::DeadCodeElimination::RemoveLoopExit(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::DeadCodeElimination::RemoveLoopExit(DeadCodeElimination *this,Node *param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  for (plVar4 = *(long **)(param_1 + 0x18); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    plVar2 = plVar4 + (ulong)(*(uint *)(plVar4 + 2) >> 1) * 3 + 3;
    if ((*(uint *)(plVar4 + 2) & 1) == 0) {
      plVar2 = (long *)*plVar2;
    }
    if (*(ushort *)(*plVar2 + 0x10) - 0x35 < 2) {
      plVar3 = plVar2 + 4;
      if ((~*(uint *)((long)plVar2 + 0x14) & 0xf000000) == 0) {
        plVar3 = (long *)(*plVar3 + 0x10);
      }
      (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),plVar2,*plVar3);
    }
  }
  uVar1 = NodeProperties::GetControlInput(param_1,0);
  (**(code **)(**(long **)(this + 8) + 0x10))(*(long **)(this + 8),param_1,uVar1);
  return uVar1;
}

