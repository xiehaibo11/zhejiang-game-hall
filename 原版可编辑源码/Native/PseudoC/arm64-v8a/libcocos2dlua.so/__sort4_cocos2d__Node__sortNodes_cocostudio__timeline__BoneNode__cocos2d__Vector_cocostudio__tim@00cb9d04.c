
/* unsigned int
   std::__ndk1::__sort4<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::{lambda(cocostudio::timeline::BoneNode*,
   cocostudio::timeline::BoneNode*)#1}&,
   cocostudio::timeline::BoneNode**>(cocostudio::timeline::BoneNode**,
   cocostudio::timeline::BoneNode**, cocostudio::timeline::BoneNode**,
   cocostudio::timeline::BoneNode**,
   cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::{lambda(cocostudio::timeline::BoneNode*,
   cocostudio::timeline::BoneNode*)#1}&) */

uint std::__ndk1::
     __sort4<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
               (BoneNode **param_1,BoneNode **param_2,BoneNode **param_3,BoneNode **param_4,
               _lambda_cocostudio__timeline__BoneNode__cocostudio__timeline__BoneNode___1_ *param_5)

{
  uint uVar1;
  long lVar2;
  BoneNode *pBVar3;
  BoneNode *pBVar4;
  BoneNode *pBVar5;
  
  pBVar5 = *param_2;
  pBVar4 = *param_1;
  pBVar3 = *param_3;
  lVar2 = *(long *)(pBVar5 + 0x168);
  if (lVar2 < *(long *)(pBVar4 + 0x168)) {
    if (*(long *)(pBVar3 + 0x168) < lVar2) {
      *param_1 = pBVar3;
      *param_3 = pBVar4;
      uVar1 = 1;
    }
    else {
      *param_1 = pBVar5;
      *param_2 = pBVar4;
      pBVar3 = *param_3;
      if (*(long *)(pBVar3 + 0x168) < *(long *)(pBVar4 + 0x168)) {
        uVar1 = 2;
        *param_2 = pBVar3;
        *param_3 = pBVar4;
      }
      else {
        uVar1 = 1;
        pBVar4 = pBVar3;
      }
    }
  }
  else if (*(long *)(pBVar3 + 0x168) < lVar2) {
    *param_2 = pBVar3;
    *param_3 = pBVar5;
    pBVar4 = *param_1;
    if (*(long *)(*param_2 + 0x168) < *(long *)(pBVar4 + 0x168)) {
      *param_1 = *param_2;
      *param_2 = pBVar4;
      uVar1 = 2;
      pBVar4 = *param_3;
    }
    else {
      uVar1 = 1;
      pBVar4 = pBVar5;
    }
  }
  else {
    uVar1 = 0;
    pBVar4 = pBVar3;
  }
  if (*(long *)(*param_4 + 0x168) < *(long *)(pBVar4 + 0x168)) {
    *param_3 = *param_4;
    *param_4 = pBVar4;
    pBVar4 = *param_2;
    if (*(long *)(pBVar4 + 0x168) <= *(long *)(*param_3 + 0x168)) {
      return uVar1 + 1;
    }
    *param_2 = *param_3;
    *param_3 = pBVar4;
    pBVar4 = *param_1;
    if (*(long *)(pBVar4 + 0x168) <= *(long *)(*param_2 + 0x168)) {
      return uVar1 + 2;
    }
    uVar1 = uVar1 + 3;
    *param_1 = *param_2;
    *param_2 = pBVar4;
  }
  return uVar1;
}

