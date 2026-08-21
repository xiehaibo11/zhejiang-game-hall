
/* v8::internal::RegExpCapture::ToNode(v8::internal::RegExpCompiler*, v8::internal::RegExpNode*) */

void __thiscall
v8::internal::RegExpCapture::ToNode(RegExpCapture *this,RegExpCompiler *param_1,RegExpNode *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  RegExpNode *pRVar5;
  long *plVar6;
  
  plVar6 = *(long **)(this + 8);
  uVar3 = *(int *)(this + 0x10) << 1;
  uVar1 = *(int *)(this + 0x10) << 1 | 1;
  uVar2 = uVar1;
  if (param_1[0x34] == (RegExpCompiler)0x0) {
    uVar2 = uVar3;
    uVar3 = uVar1;
  }
  uVar4 = ActionNode::StorePosition(uVar3,true,param_2);
  pRVar5 = (RegExpNode *)(**(code **)(*plVar6 + 0x18))(plVar6,param_1,uVar4);
  ActionNode::StorePosition(uVar2,true,pRVar5);
  return;
}

