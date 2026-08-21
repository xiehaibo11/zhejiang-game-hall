
/* v8::internal::compiler::GraphAssembler::ConnectUnreachableToEnd() */

void __thiscall
v8::internal::compiler::GraphAssembler::ConnectUnreachableToEnd(GraphAssembler *this)

{
  Graph *pGVar1;
  Operator *pOVar2;
  Node *pNVar3;
  long lVar4;
  undefined8 *puVar5;
  Node *local_40;
  undefined8 uStack_38;
  
  pGVar1 = (Graph *)**(undefined8 **)(this + 0x18);
  pOVar2 = (Operator *)
           CommonOperatorBuilder::Throw((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1])
  ;
  local_40 = *(Node **)(this + 0x20);
  uStack_38 = *(undefined8 *)(this + 0x28);
  pNVar3 = (Node *)Graph::NewNode(pGVar1,pOVar2,2,&local_40,false);
  NodeProperties::MergeControlToEnd
            ((Graph *)**(undefined8 **)(this + 0x18),
             (CommonOperatorBuilder *)(*(undefined8 **)(this + 0x18))[1],pNVar3);
  puVar5 = *(undefined8 **)(this + 0x18);
  lVar4 = puVar5[0x2c];
  if (lVar4 == 0) {
    pGVar1 = (Graph *)*puVar5;
    pOVar2 = (Operator *)CommonOperatorBuilder::Dead((CommonOperatorBuilder *)puVar5[1]);
    local_40 = (Node *)0x0;
    lVar4 = Graph::NewNode(pGVar1,pOVar2,0,&local_40,false);
    puVar5[0x2c] = lVar4;
  }
  *(long *)(this + 0x20) = lVar4;
  *(long *)(this + 0x28) = lVar4;
  if (*(BasicBlockUpdater **)(this + 0x30) != (BasicBlockUpdater *)0x0) {
    BasicBlockUpdater::AddThrow(*(BasicBlockUpdater **)(this + 0x30),pNVar3);
  }
  return;
}

