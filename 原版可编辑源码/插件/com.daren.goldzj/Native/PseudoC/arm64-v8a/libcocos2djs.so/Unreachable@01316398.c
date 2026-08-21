
/* v8::internal::compiler::WasmGraphBuilder::Unreachable(int) */

undefined8 __thiscall
v8::internal::compiler::WasmGraphBuilder::Unreachable(WasmGraphBuilder *this,int param_1)

{
  Graph *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  Node *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = (Node *)MachineGraph::Int32Constant(*(MachineGraph **)(this + 8),0);
  uVar3 = 0xc;
  if ((*(long *)(this + 0x10) != 0) && (uVar3 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0'))
  {
    uVar3 = 0;
  }
  this_00 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           CommonOperatorBuilder::TrapUnless
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar3);
  local_38 = **(undefined8 **)(this + 0x18);
  uStack_40 = **(undefined8 **)(this + 0x20);
  uVar2 = Graph::NewNode(this_00,pOVar1,3,&local_48,false);
  **(undefined8 **)(this + 0x18) = uVar2;
  if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar2,
               (-(ulong)(param_1 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_1 + 1U) << 1) &
               0xffff80007fffffff);
  }
  Return(this,0,0);
  return 0;
}

