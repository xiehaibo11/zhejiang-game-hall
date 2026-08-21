
/* v8::internal::compiler::JSGraph::SingleDeadTypedStateValues() */

void __thiscall v8::internal::compiler::JSGraph::SingleDeadTypedStateValues(JSGraph *this)

{
  Graph *this_00;
  CommonOperatorBuilder *pCVar1;
  Zone *this_01;
  Operator *pOVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  Node *local_18;
  
  if (*(long *)(this + 0x250) == 0) {
    this_00 = *(Graph **)this;
    pCVar1 = *(CommonOperatorBuilder **)(this + 8);
    this_01 = *(Zone **)this_00;
    puVar3 = *(undefined8 **)(this_01 + 0x10);
    if ((ulong)(*(long *)(this_01 + 0x18) - (long)puVar3) < 0x20) {
      puVar3 = (undefined8 *)Zone::NewExpand(this_01,0x20);
    }
    else {
      *(undefined8 **)(this_01 + 0x10) = puVar3 + 4;
    }
    uVar4 = **(undefined8 **)this;
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = uVar4;
    pOVar2 = (Operator *)CommonOperatorBuilder::TypedStateValues(pCVar1,puVar3,2);
    local_18 = (Node *)0x0;
    uVar4 = Graph::NewNode(this_00,pOVar2,0,&local_18,false);
    *(undefined8 *)(this + 0x250) = uVar4;
  }
  return;
}

