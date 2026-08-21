
/* v8::internal::NegativeLookaroundChoiceNode::NegativeLookaroundChoiceNode(v8::internal::GuardedAlternative,
   v8::internal::GuardedAlternative, v8::internal::Zone*) */

void __thiscall
v8::internal::NegativeLookaroundChoiceNode::NegativeLookaroundChoiceNode
          (NegativeLookaroundChoiceNode *this,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined8 param_5,Zone *param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(Zone **)(this + 0x30) = param_6;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)this = &PTR__RegExpNode_01cc8800;
  *(undefined8 *)(this + 8) = 0;
  plVar1 = *(long **)(param_6 + 0x10);
  lVar3 = *(long *)(param_6 + 0x18);
  if ((ulong)(lVar3 - (long)plVar1) < 0x10) {
    plVar1 = (long *)Zone::NewExpand(param_6,0x10);
    plVar2 = *(long **)(param_6 + 0x10);
    lVar3 = *(long *)(param_6 + 0x18);
  }
  else {
    plVar2 = plVar1 + 2;
    *(long **)(param_6 + 0x10) = plVar2;
  }
  if ((ulong)(lVar3 - (long)plVar2) < 0x20) {
    plVar2 = (long *)Zone::NewExpand(param_6,0x20);
  }
  else {
    *(long **)(param_6 + 0x10) = plVar2 + 4;
  }
  *plVar1 = (long)plVar2;
  plVar1[1] = 2;
  *(long **)(this + 0x38) = plVar1;
  *(undefined2 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__RegExpNode_01cc8878;
  ChoiceNode::AddAlternative(this,param_2,param_3);
  ChoiceNode::AddAlternative(this,param_4,param_5);
  return;
}

