
/* v8::internal::RegExpCapture::ToNode(v8::internal::RegExpTree*, int,
   v8::internal::RegExpCompiler*, v8::internal::RegExpNode*) */

void v8::internal::RegExpCapture::ToNode
               (RegExpTree *param_1,int param_2,RegExpCompiler *param_3,RegExpNode *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  RegExpNode *pRVar5;
  
  uVar1 = param_2 << 1 | 1;
  uVar2 = uVar1;
  uVar3 = param_2 << 1;
  if (param_3[0x34] == (RegExpCompiler)0x0) {
    uVar2 = param_2 << 1;
    uVar3 = uVar1;
  }
  uVar4 = ActionNode::StorePosition(uVar3,true,param_4);
  pRVar5 = (RegExpNode *)(**(code **)(*(long *)param_1 + 0x18))(param_1,param_3,uVar4);
  ActionNode::StorePosition(uVar2,true,pRVar5);
  return;
}

