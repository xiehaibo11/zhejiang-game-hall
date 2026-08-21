
/* v8::internal::compiler::WasmGraphBuilder::BuildI32RemU(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::BuildI32RemU
          (WasmGraphBuilder *this,Node *param_1,Node *param_2,int param_3)

{
  Graph *this_00;
  Operator *pOVar1;
  Operator *pOVar2;
  undefined4 uVar3;
  Graph *this_01;
  undefined8 uVar4;
  Node *local_68;
  Node *pNStack_60;
  undefined8 local_58;
  
  this_01 = (Graph *)**(undefined8 **)(this + 8);
  pOVar1 = (Operator *)
           MachineOperatorBuilder::Uint32Mod
                     ((MachineOperatorBuilder *)(*(undefined8 **)(this + 8))[2]);
  if ((*(short *)(*(long *)param_2 + 0x10) == 0x17) && (*(int *)(*(long *)param_2 + 0x2c) != 0)) {
    uVar4 = *(undefined8 *)(**(long **)(this + 8) + 8);
  }
  else {
    uVar3 = 0xc;
    if ((*(long *)(this + 0x10) != 0) &&
       (uVar3 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0')) {
      uVar3 = 5;
    }
    this_00 = (Graph *)**(undefined8 **)(this + 8);
    pOVar2 = (Operator *)
             CommonOperatorBuilder::TrapUnless
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar3);
    local_58 = **(undefined8 **)(this + 0x18);
    pNStack_60 = (Node *)**(undefined8 **)(this + 0x20);
    local_68 = param_2;
    uVar4 = Graph::NewNode(this_00,pOVar2,3,&local_68,false);
    **(undefined8 **)(this + 0x18) = uVar4;
    if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
      SourcePositionTable::SetSourcePosition
                (*(SourcePositionTable **)(this + 0x78),uVar4,
                 (-(ulong)(param_3 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_3 + 1U) << 1)
                 & 0xffff80007fffffff);
    }
  }
  local_68 = param_1;
  pNStack_60 = param_2;
  local_58 = uVar4;
  Graph::NewNode(this_01,pOVar1,3,&local_68,false);
  return;
}

