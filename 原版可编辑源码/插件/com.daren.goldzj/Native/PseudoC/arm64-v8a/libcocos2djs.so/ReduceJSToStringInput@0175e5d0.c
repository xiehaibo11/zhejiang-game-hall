
/* v8::internal::compiler::JSTypedLowering::ReduceJSToStringInput(v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSToStringInput(JSTypedLowering *this,Node *param_1)

{
  Node *pNVar1;
  ulong uVar2;
  Operator *pOVar3;
  undefined8 uVar4;
  int iVar5;
  Graph *this_00;
  Node *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_28;
  
  if (*(short *)(*(long *)param_1 + 0x10) == 0x2cc) {
    pNVar1 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar1 = (Node *)(*(long *)pNVar1 + 0x10);
    }
    pNVar1 = (Node *)ReduceJSToStringInput(this,*(Node **)pNVar1);
    if (pNVar1 != (Node *)0x0) {
      (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,pNVar1,0,0);
      param_1 = pNVar1;
    }
  }
  else {
    local_28 = *(long *)(param_1 + 8);
    if ((local_28 != 0x4021) && (uVar2 = Type::SlowIs((Type *)&local_28,0x4021), (uVar2 & 1) == 0))
    {
      if ((local_28 == 0x201) || (uVar2 = Type::SlowIs((Type *)&local_28,0x201), (uVar2 & 1) != 0))
      {
        this_00 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar3 = (Operator *)
                 CommonOperatorBuilder::Select
                           ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],8,0);
        uVar4 = JSGraph::HeapConstant
                          (*(JSGraph **)(this + 0x10),
                           *(long *)(*(JSGraph **)(this + 0x10) + 0x168) + 0xa70);
        local_48 = JSGraph::HeapConstant
                             (*(JSGraph **)(this + 0x10),
                              *(long *)(*(JSGraph **)(this + 0x10) + 0x168) + 0x6a8);
        iVar5 = 3;
        uStack_50 = uVar4;
      }
      else {
        if ((local_28 == 0x101) || (uVar2 = Type::SlowIs((Type *)&local_28,0x101), (uVar2 & 1) != 0)
           ) {
          pNVar1 = (Node *)JSGraph::HeapConstant
                                     (*(JSGraph **)(this + 0x10),
                                      *(long *)(*(JSGraph **)(this + 0x10) + 0x168) + 0xaa8);
          return pNVar1;
        }
        if ((local_28 == 0x81) || (uVar2 = Type::SlowIs((Type *)&local_28,0x81), (uVar2 & 1) != 0))
        {
          pNVar1 = (Node *)JSGraph::HeapConstant
                                     (*(JSGraph **)(this + 0x10),
                                      *(long *)(*(JSGraph **)(this + 0x10) + 0x168) + 0x878);
          return pNVar1;
        }
        if ((local_28 == 0x1001) ||
           (uVar2 = Type::SlowIs((Type *)&local_28,0x1001), (uVar2 & 1) != 0)) {
          pNVar1 = (Node *)JSGraph::HeapConstant
                                     (*(JSGraph **)(this + 0x10),
                                      *(long *)(*(JSGraph **)(this + 0x10) + 0x168) + 0x828);
          return pNVar1;
        }
        if ((local_28 != 0x1c5f) &&
           (uVar2 = Type::SlowIs((Type *)&local_28,0x1c5f), (uVar2 & 1) == 0)) {
          return (Node *)0x0;
        }
        this_00 = (Graph *)**(undefined8 **)(this + 0x10);
        pOVar3 = (Operator *)
                 SimplifiedOperatorBuilder::NumberToString
                           ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f]);
        iVar5 = 1;
      }
      local_58 = param_1;
      param_1 = (Node *)Graph::NewNode(this_00,pOVar3,iVar5,&local_58,false);
    }
  }
  return param_1;
}

