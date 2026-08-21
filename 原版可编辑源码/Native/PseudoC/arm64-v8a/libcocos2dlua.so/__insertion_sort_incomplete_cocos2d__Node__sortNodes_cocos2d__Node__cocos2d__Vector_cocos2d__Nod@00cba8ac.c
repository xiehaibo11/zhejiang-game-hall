
/* bool 
   std::__ndk1::__insertion_sort_incomplete<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::{lambda(cocos2d::Node*,
   cocos2d::Node*)#1}&, cocos2d::Node**>(cocos2d::Node**, cocos2d::Node**,
   cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::{lambda(cocos2d::Node*,
   cocos2d::Node*)#1}&) */

bool std::__ndk1::
     __insertion_sort_incomplete<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
               (Node **param_1,Node **param_2,_lambda_cocos2d__Node__cocos2d__Node___1_ *param_3)

{
  long lVar1;
  Node **ppNVar2;
  Node *pNVar3;
  long lVar4;
  Node **ppNVar5;
  Node *pNVar6;
  Node *pNVar7;
  int iVar8;
  long lVar9;
  Node *pNVar10;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    pNVar10 = *param_1;
    if (*(long *)(param_2[-1] + 0x168) < *(long *)(pNVar10 + 0x168)) {
      *param_1 = param_2[-1];
      param_2[-1] = pNVar10;
    }
    break;
  case 3:
    pNVar10 = *param_1;
    pNVar3 = param_1[1];
    pNVar6 = param_2[-1];
    lVar9 = *(long *)(pNVar3 + 0x168);
    if (lVar9 < *(long *)(pNVar10 + 0x168)) {
      if (*(long *)(pNVar6 + 0x168) < lVar9) {
        *param_1 = pNVar6;
      }
      else {
        *param_1 = pNVar3;
        param_1[1] = pNVar10;
        if (*(long *)(pNVar10 + 0x168) <= *(long *)(param_2[-1] + 0x168)) {
          return true;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = pNVar10;
    }
    else if (*(long *)(pNVar6 + 0x168) < lVar9) {
      param_1[1] = pNVar6;
      param_2[-1] = pNVar3;
      pNVar10 = *param_1;
      if (*(long *)(param_1[1] + 0x168) < *(long *)(pNVar10 + 0x168)) {
        *param_1 = param_1[1];
        param_1[1] = pNVar10;
      }
    }
    break;
  case 4:
    __sort4<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
              (param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    ppNVar2 = param_1 + 2;
    ppNVar5 = param_1 + 3;
    __sort4<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
              (param_1,param_1 + 1,ppNVar2,ppNVar5,param_3);
    pNVar10 = param_1[3];
    if (*(long *)(param_2[-1] + 0x168) < *(long *)(pNVar10 + 0x168)) {
      *ppNVar5 = param_2[-1];
      param_2[-1] = pNVar10;
      pNVar10 = *ppNVar5;
      pNVar3 = *ppNVar2;
      if (*(long *)(pNVar10 + 0x168) < *(long *)(pNVar3 + 0x168)) {
        *ppNVar2 = pNVar10;
        *ppNVar5 = pNVar3;
        pNVar3 = param_1[1];
        if (*(long *)(pNVar10 + 0x168) < *(long *)(pNVar3 + 0x168)) {
          pNVar6 = *param_1;
          param_1[1] = pNVar10;
          param_1[2] = pNVar3;
          if (*(long *)(pNVar10 + 0x168) < *(long *)(pNVar6 + 0x168)) {
            *param_1 = pNVar10;
            param_1[1] = pNVar6;
          }
        }
      }
    }
    break;
  default:
    pNVar10 = *param_1;
    pNVar3 = param_1[1];
    pNVar7 = param_1[2];
    lVar9 = *(long *)(pNVar3 + 0x168);
    pNVar6 = pNVar7;
    if (lVar9 < *(long *)(pNVar10 + 0x168)) {
      if (*(long *)(pNVar7 + 0x168) < lVar9) {
        *param_1 = pNVar7;
      }
      else {
        *param_1 = pNVar3;
        param_1[1] = pNVar10;
        if (*(long *)(pNVar10 + 0x168) <= *(long *)(pNVar7 + 0x168)) goto LAB_00cbaabc;
        param_1[1] = pNVar7;
      }
      param_1[2] = pNVar10;
      pNVar6 = pNVar10;
    }
    else if (*(long *)(pNVar7 + 0x168) < lVar9) {
      param_1[1] = pNVar7;
      param_1[2] = pNVar3;
      pNVar6 = pNVar3;
      if (*(long *)(pNVar7 + 0x168) < *(long *)(pNVar10 + 0x168)) {
        *param_1 = pNVar7;
        param_1[1] = pNVar10;
      }
    }
LAB_00cbaabc:
    if (param_1 + 3 != param_2) {
      lVar9 = 0;
      iVar8 = 0;
      ppNVar2 = param_1 + 3;
      do {
        pNVar10 = *ppNVar2;
        lVar1 = lVar9;
        if (*(long *)(pNVar10 + 0x168) < *(long *)(pNVar6 + 0x168)) {
          do {
            lVar4 = lVar1;
            *(undefined8 *)((long)param_1 + lVar4 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar4 + 0x10);
            ppNVar5 = param_1;
            if (lVar4 == -0x10) goto LAB_00cbab24;
            lVar1 = lVar4 + -8;
          } while (*(long *)(pNVar10 + 0x168) <
                   *(long *)(*(long *)((long)param_1 + lVar4 + 8) + 0x168));
          ppNVar5 = (Node **)((long)param_1 + lVar4 + 0x10);
LAB_00cbab24:
          iVar8 = iVar8 + 1;
          *ppNVar5 = pNVar10;
          if (iVar8 == 8) {
            return ppNVar2 + 1 == param_2;
          }
        }
        if (ppNVar2 + 1 == param_2) {
          return true;
        }
        pNVar6 = *ppNVar2;
        lVar9 = lVar9 + 8;
        ppNVar2 = ppNVar2 + 1;
      } while( true );
    }
  }
  return true;
}

