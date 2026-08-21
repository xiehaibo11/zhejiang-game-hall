
/* v8::internal::compiler::WasmGraphBuilder::MemoryFill(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*, v8::internal::compiler::Node*, int) */

void __thiscall
v8::internal::compiler::WasmGraphBuilder::MemoryFill
          (WasmGraphBuilder *this,Node *param_1,Node *param_2,Node *param_3,int param_4)

{
  Graph *pGVar1;
  CommonOperatorBuilder *this_00;
  Operator *pOVar2;
  undefined8 uVar3;
  CallDescriptor *pCVar4;
  undefined4 uVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 *local_90;
  undefined4 local_80;
  undefined2 local_7c;
  Node *local_78;
  Node *local_70;
  Node *pNStack_68;
  Node *local_60;
  Node *pNStack_58;
  undefined8 local_50;
  undefined8 local_48;
  Node *local_28;
  
  local_78 = param_3;
  local_28 = param_1;
  local_70 = (Node *)BoundsCheckMemRange(this,&local_28,&local_78,param_4);
  uVar5 = 0xc;
  if ((*(long *)(this + 0x10) != 0) && (uVar5 = 0xc, *(char *)(*(long *)(this + 0x10) + 9) != '\0'))
  {
    uVar5 = 1;
  }
  pGVar1 = (Graph *)**(undefined8 **)(this + 8);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::TrapIf
                     ((CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1],uVar5);
  local_60 = (Node *)**(undefined8 **)(this + 0x18);
  pNStack_68 = (Node *)**(undefined8 **)(this + 0x20);
  uVar3 = Graph::NewNode(pGVar1,pOVar2,3,&local_70,false);
  **(undefined8 **)(this + 0x18) = uVar3;
  if (*(SourcePositionTable **)(this + 0x78) != (SourcePositionTable *)0x0) {
    SourcePositionTable::SetSourcePosition
              (*(SourcePositionTable **)(this + 0x78),uVar3,
               (-(ulong)(param_4 + 1U >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_4 + 1U) << 1) &
               0xffff80007fffffff);
  }
  pGVar1 = (Graph *)**(undefined8 **)(this + 8);
  this_00 = (CommonOperatorBuilder *)(*(undefined8 **)(this + 8))[1];
  local_a0 = ExternalReference::wasm_memory_fill();
  pOVar2 = (Operator *)
           CommonOperatorBuilder::ExternalConstant(this_00,(ExternalReference *)&local_a0);
  local_70 = (Node *)0x0;
  local_70 = (Node *)Graph::NewNode(pGVar1,pOVar2,0,&local_70,false);
  local_80 = 0x3040005;
  local_90 = &local_80;
  local_7c = 0x304;
  uStack_98 = 3;
  local_a0 = 0;
  pNStack_68 = local_28;
  pNStack_58 = local_78;
  local_50 = **(undefined8 **)(this + 0x20);
  local_48 = **(undefined8 **)(this + 0x18);
  local_60 = param_2;
  pCVar4 = (CallDescriptor *)
           Linkage::GetSimplifiedCDescriptor(*(undefined8 *)**(undefined8 **)(this + 8),&local_a0,0)
  ;
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Call(*(CommonOperatorBuilder **)(*(long *)(this + 8) + 8),pCVar4);
  uVar3 = Graph::NewNode((Graph *)**(undefined8 **)(this + 8),pOVar2,6,&local_70,false);
  **(undefined8 **)(this + 0x20) = uVar3;
  **(undefined8 **)(this + 0x20) = uVar3;
  return;
}

