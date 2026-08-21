
/* bool 
   std::__ndk1::__insertion_sort_incomplete<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::{lambda(cocostudio::timeline::BoneNode*,
   cocostudio::timeline::BoneNode*)#1}&,
   cocostudio::timeline::BoneNode**>(cocostudio::timeline::BoneNode**,
   cocostudio::timeline::BoneNode**,
   cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::{lambda(cocostudio::timeline::BoneNode*,
   cocostudio::timeline::BoneNode*)#1}&) */

bool std::__ndk1::
     __insertion_sort_incomplete<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
               (BoneNode **param_1,BoneNode **param_2,
               _lambda_cocostudio__timeline__BoneNode__cocostudio__timeline__BoneNode___1_ *param_3)

{
  long lVar1;
  BoneNode **ppBVar2;
  BoneNode *pBVar3;
  long lVar4;
  BoneNode **ppBVar5;
  BoneNode *pBVar6;
  BoneNode *pBVar7;
  int iVar8;
  long lVar9;
  BoneNode *pBVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    pBVar10 = *param_1;
    if (*(long *)(param_2[-1] + 0x168) < *(long *)(pBVar10 + 0x168)) {
      *param_1 = param_2[-1];
      param_2[-1] = pBVar10;
    }
    break;
  case 3:
    pBVar10 = *param_1;
    pBVar3 = param_1[1];
    pBVar6 = param_2[-1];
    lVar9 = *(long *)(pBVar3 + 0x168);
    if (lVar9 < *(long *)(pBVar10 + 0x168)) {
      if (*(long *)(pBVar6 + 0x168) < lVar9) {
        *param_1 = pBVar6;
      }
      else {
        *param_1 = pBVar3;
        param_1[1] = pBVar10;
        if (*(long *)(pBVar10 + 0x168) <= *(long *)(param_2[-1] + 0x168)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = pBVar10;
    }
    else if (*(long *)(pBVar6 + 0x168) < lVar9) {
      param_1[1] = pBVar6;
      param_2[-1] = pBVar3;
      pBVar10 = *param_1;
      if (*(long *)(param_1[1] + 0x168) < *(long *)(pBVar10 + 0x168)) {
        *param_1 = param_1[1];
        param_1[1] = pBVar10;
      }
    }
    break;
  case 4:
    __sort4<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    ppBVar2 = param_1 + 2;
    ppBVar5 = param_1 + 3;
    __sort4<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
              (param_1,param_1 + 1,ppBVar2,ppBVar5,param_3);
    pBVar10 = param_1[3];
    if (*(long *)(param_2[-1] + 0x168) < *(long *)(pBVar10 + 0x168)) {
      *ppBVar5 = param_2[-1];
      param_2[-1] = pBVar10;
      pBVar10 = *ppBVar5;
      pBVar3 = *ppBVar2;
      if (*(long *)(pBVar10 + 0x168) < *(long *)(pBVar3 + 0x168)) {
        *ppBVar2 = pBVar10;
        *ppBVar5 = pBVar3;
        pBVar3 = param_1[1];
        if (*(long *)(pBVar10 + 0x168) < *(long *)(pBVar3 + 0x168)) {
          pBVar6 = *param_1;
          param_1[1] = pBVar10;
          param_1[2] = pBVar3;
          if (*(long *)(pBVar10 + 0x168) < *(long *)(pBVar6 + 0x168)) {
            *param_1 = pBVar10;
            param_1[1] = pBVar6;
          }
        }
      }
    }
    break;
  default:
    pBVar10 = *param_1;
    pBVar3 = param_1[1];
    pBVar7 = param_1[2];
    lVar9 = *(long *)(pBVar3 + 0x168);
    pBVar6 = pBVar7;
    if (lVar9 < *(long *)(pBVar10 + 0x168)) {
      if (*(long *)(pBVar7 + 0x168) < lVar9) {
        *param_1 = pBVar7;
      }
      else {
        *param_1 = pBVar3;
        param_1[1] = pBVar10;
        if (*(long *)(pBVar10 + 0x168) <= *(long *)(pBVar7 + 0x168)) goto LAB_00cba050;
        param_1[1] = pBVar7;
      }
      param_1[2] = pBVar10;
      pBVar6 = pBVar10;
    }
    else if (*(long *)(pBVar7 + 0x168) < lVar9) {
      param_1[1] = pBVar7;
      param_1[2] = pBVar3;
      pBVar6 = pBVar3;
      if (*(long *)(pBVar7 + 0x168) < *(long *)(pBVar10 + 0x168)) {
        *param_1 = pBVar7;
        param_1[1] = pBVar10;
      }
    }
LAB_00cba050:
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar8 = 0;
      ppBVar2 = param_1 + 3;
      do {
        pBVar10 = *ppBVar2;
        lVar1 = lVar9;
        if (*(long *)(pBVar10 + 0x168) < *(long *)(pBVar6 + 0x168)) {
          do {
            lVar4 = lVar1;
            *(undefined8 *)((long)param_1 + lVar4 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar4 + 0x10);
            ppBVar5 = param_1;
            if (lVar4 == -0x10) goto LAB_00cba0b8;
            lVar1 = lVar4 + -8;
          } while (*(long *)(pBVar10 + 0x168) <
                   *(long *)(*(long *)((long)param_1 + lVar4 + 8) + 0x168));
          ppBVar5 = (BoneNode **)((long)param_1 + lVar4 + 0x10);
LAB_00cba0b8:
          iVar8 = iVar8 + 1;
          *ppBVar5 = pBVar10;
          if (iVar8 == 8) {
            return ppBVar2 + 1 == param_2;
          }
        }
        if (ppBVar2 + 1 == param_2) {
          return true;
        }
        pBVar6 = *ppBVar2;
        lVar9 = lVar9 + 8;
        ppBVar2 = ppBVar2 + 1;
      } while( true );
    }
  }
  return true;
}

