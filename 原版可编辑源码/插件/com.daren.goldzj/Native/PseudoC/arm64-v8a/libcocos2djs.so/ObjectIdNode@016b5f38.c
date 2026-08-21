
/* v8::internal::compiler::EscapeAnalysisReducer::ObjectIdNode(v8::internal::compiler::VirtualObject
   const*) */

undefined8 __thiscall
v8::internal::compiler::EscapeAnalysisReducer::ObjectIdNode
          (EscapeAnalysisReducer *this,VirtualObject *param_1)

{
  Graph *this_00;
  uint uVar1;
  Operator *pOVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
  *this_01;
  Node *local_38;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  uVar6 = (ulong)uVar1;
  this_01 = (vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
             *)(this + 0x20);
  lVar3 = *(long *)this_01;
  uVar5 = *(long *)(this + 0x28) - lVar3 >> 3;
  if (uVar5 <= uVar6) {
    uVar4 = (ulong)(uVar1 + 1);
    if (uVar5 < uVar4) {
      std::__ndk1::
      vector<v8::internal::compiler::Node*,v8::internal::ZoneAllocator<v8::internal::compiler::Node*>>
      ::__append(this_01,uVar4 - uVar5);
      lVar3 = *(long *)(*(long *)this_01 + uVar6 * 8);
      goto joined_r0x016b5fa8;
    }
    if (uVar5 != uVar4) {
      *(ulong *)(this + 0x28) = lVar3 + uVar4 * 8;
    }
  }
  lVar3 = *(long *)(lVar3 + uVar6 * 8);
joined_r0x016b5fa8:
  if (lVar3 == 0) {
    this_00 = (Graph *)**(undefined8 **)(this + 0x10);
    pOVar2 = (Operator *)
             CommonOperatorBuilder::ObjectId
                       ((CommonOperatorBuilder *)(*(undefined8 **)(this + 0x10))[1],uVar1);
    local_38 = (Node *)0x0;
    lVar3 = Graph::NewNode(this_00,pOVar2,0,&local_38,false);
    *(undefined8 *)(lVar3 + 8) = 0x4670001;
    *(long *)(*(long *)(this + 0x20) + uVar6 * 8) = lVar3;
  }
  return *(undefined8 *)(*(long *)this_01 + uVar6 * 8);
}

