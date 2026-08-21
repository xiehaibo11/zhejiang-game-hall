
/* unsigned int
   std::__ndk1::__sort4<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::{lambda(cocos2d::Node*,
   cocos2d::Node*)#1}&, cocos2d::Node**>(cocos2d::Node**, cocos2d::Node**, cocos2d::Node**,
   cocos2d::Node**,
   cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::{lambda(cocos2d::Node*,
   cocos2d::Node*)#1}&) */

uint std::__ndk1::
     __sort4<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
               (Node **param_1,Node **param_2,Node **param_3,Node **param_4,
               _lambda_cocos2d__Node__cocos2d__Node___1_ *param_5)

{
  uint uVar1;
  long lVar2;
  Node *pNVar3;
  Node *pNVar4;
  Node *pNVar5;
  
  pNVar5 = *param_2;
  pNVar4 = *param_1;
  pNVar3 = *param_3;
  lVar2 = *(long *)(pNVar5 + 0x168);
  if (lVar2 < *(long *)(pNVar4 + 0x168)) {
    if (*(long *)(pNVar3 + 0x168) < lVar2) {
      *param_1 = pNVar3;
      *param_3 = pNVar4;
      uVar1 = 1;
    }
    else {
      *param_1 = pNVar5;
      *param_2 = pNVar4;
      pNVar3 = *param_3;
      if (*(long *)(pNVar3 + 0x168) < *(long *)(pNVar4 + 0x168)) {
        uVar1 = 2;
        *param_2 = pNVar3;
        *param_3 = pNVar4;
      }
      else {
        uVar1 = 1;
        pNVar4 = pNVar3;
      }
    }
  }
  else if (*(long *)(pNVar3 + 0x168) < lVar2) {
    *param_2 = pNVar3;
    *param_3 = pNVar5;
    pNVar4 = *param_1;
    if (*(long *)(*param_2 + 0x168) < *(long *)(pNVar4 + 0x168)) {
      *param_1 = *param_2;
      *param_2 = pNVar4;
      uVar1 = 2;
      pNVar4 = *param_3;
    }
    else {
      uVar1 = 1;
      pNVar4 = pNVar5;
    }
  }
  else {
    uVar1 = 0;
    pNVar4 = pNVar3;
  }
  if (*(long *)(*param_4 + 0x168) < *(long *)(pNVar4 + 0x168)) {
    *param_3 = *param_4;
    *param_4 = pNVar4;
    pNVar4 = *param_2;
    if (*(long *)(pNVar4 + 0x168) <= *(long *)(*param_3 + 0x168)) {
      return uVar1 + 1;
    }
    *param_2 = *param_3;
    *param_3 = pNVar4;
    pNVar4 = *param_1;
    if (*(long *)(pNVar4 + 0x168) <= *(long *)(*param_2 + 0x168)) {
      return uVar1 + 2;
    }
    uVar1 = uVar1 + 3;
    *param_1 = *param_2;
    *param_2 = pNVar4;
  }
  return uVar1;
}

