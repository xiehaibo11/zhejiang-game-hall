
/* v8::internal::compiler::StateValuesCache::GetNodeForValues(v8::internal::compiler::Node**,
   unsigned long, v8::internal::BitVector const*, int) */

void __thiscall
v8::internal::compiler::StateValuesCache::GetNodeForValues
          (StateValuesCache *this,Node **param_1,ulong param_2,BitVector *param_3,int param_4)

{
  Graph *this_00;
  Operator *pOVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  Node *local_28;
  
  if (param_2 == 0) {
    if (*(long *)(this + 0x40) == 0) {
      this_00 = (Graph *)**(undefined8 **)this;
      pOVar1 = (Operator *)
               CommonOperatorBuilder::StateValues
                         ((CommonOperatorBuilder *)(*(undefined8 **)this)[1],0,0);
      local_28 = (Node *)0x0;
      uVar2 = Graph::NewNode(this_00,pOVar1,0,&local_28,false);
      *(undefined8 *)(this + 0x40) = uVar2;
    }
  }
  else {
    if (param_2 < 9) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      uVar4 = 8;
      do {
        uVar4 = uVar4 << 3;
        uVar3 = uVar3 + 1;
      } while (uVar4 < param_2);
    }
    local_28 = (Node *)0x0;
    BuildTree(this,(ulong *)&local_28,param_1,param_2,param_3,param_4,uVar3);
  }
  return;
}

