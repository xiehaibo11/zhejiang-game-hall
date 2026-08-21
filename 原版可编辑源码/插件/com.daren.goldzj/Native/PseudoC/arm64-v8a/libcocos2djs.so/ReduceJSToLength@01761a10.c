
/* v8::internal::compiler::JSTypedLowering::ReduceJSToLength(v8::internal::compiler::Node*) */

long __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSToLength(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  ulong uVar2;
  Operator *pOVar3;
  Graph *pGVar4;
  double dVar5;
  Node *local_50;
  long lStack_48;
  long local_28;
  
  lVar1 = NodeProperties::GetValueInput(param_1,0);
  local_28 = *(long *)(lVar1 + 8);
  if ((local_28 == *(long *)(*(long *)(this + 0x30) + 0x158)) ||
     (uVar2 = Type::SlowIs((Type *)&local_28), (uVar2 & 1) != 0)) {
    if ((local_28 == 1) || (dVar5 = (double)Type::Max((Type *)&local_28), dVar5 <= 0.0)) {
      lVar1 = JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
    }
    else {
      dVar5 = (double)Type::Min((Type *)&local_28);
      if (9007199254740991.0 <= dVar5) {
        lVar1 = JSGraph::Constant(*(JSGraph **)(this + 0x10),9007199254740991.0);
      }
      else {
        dVar5 = (double)Type::Min((Type *)&local_28);
        if (dVar5 <= 0.0) {
          pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar3 = (Operator *)
                   SimplifiedOperatorBuilder::NumberMax
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
          local_50 = (Node *)JSGraph::ZeroConstant(*(JSGraph **)(this + 0x10));
          lStack_48 = lVar1;
          lVar1 = Graph::NewNode(pGVar4,pOVar3,2,&local_50,false);
        }
        dVar5 = (double)Type::Max((Type *)&local_28);
        if (9007199254740991.0 < dVar5) {
          pGVar4 = (Graph *)**(undefined8 **)(this + 0x10);
          pOVar3 = (Operator *)
                   SimplifiedOperatorBuilder::NumberMin
                             ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
          local_50 = (Node *)JSGraph::Constant(*(JSGraph **)(this + 0x10),9007199254740991.0);
          lStack_48 = lVar1;
          lVar1 = Graph::NewNode(pGVar4,pOVar3,2,&local_50,false);
        }
      }
    }
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,lVar1,0,0);
  }
  else {
    lVar1 = 0;
  }
  return lVar1;
}

