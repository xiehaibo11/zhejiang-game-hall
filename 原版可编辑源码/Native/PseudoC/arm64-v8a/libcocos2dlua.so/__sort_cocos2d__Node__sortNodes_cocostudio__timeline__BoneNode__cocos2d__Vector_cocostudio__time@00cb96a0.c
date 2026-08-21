
/* void 
   std::__ndk1::__sort<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::{lambda(cocostudio::timeline::BoneNode*,
   cocostudio::timeline::BoneNode*)#1}&,
   cocostudio::timeline::BoneNode**>(cocostudio::timeline::BoneNode**,
   cocostudio::timeline::BoneNode**,
   cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::{lambda(cocostudio::timeline::BoneNode*,
   cocostudio::timeline::BoneNode*)#1}&) */

void std::__ndk1::
     __sort<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
               (BoneNode **param_1,BoneNode **param_2,
               _lambda_cocostudio__timeline__BoneNode__cocostudio__timeline__BoneNode___1_ *param_3)

{
  ulong uVar1;
  long lVar2;
  BoneNode **ppBVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  BoneNode **ppBVar8;
  long lVar9;
  BoneNode **ppBVar10;
  long lVar11;
  BoneNode *pBVar12;
  BoneNode *pBVar13;
  BoneNode **ppBVar14;
  BoneNode **ppBVar15;
  BoneNode *pBVar16;
  BoneNode *pBVar17;
  BoneNode **ppBVar18;
  
LAB_00cb96cc:
  ppBVar10 = param_2 + -1;
  ppBVar15 = param_1;
LAB_00cb96d8:
  param_1 = ppBVar15;
  lVar11 = (long)param_2 - (long)param_1;
  uVar7 = lVar11 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_00cb9a84_caseD_0;
  case 2:
    pBVar12 = *param_1;
    if (*(long *)(param_2[-1] + 0x168) < *(long *)(pBVar12 + 0x168)) {
      *param_1 = param_2[-1];
      param_2[-1] = pBVar12;
      return;
    }
    return;
  case 3:
    pBVar12 = *param_1;
    pBVar13 = param_1[1];
    pBVar16 = param_2[-1];
    lVar11 = *(long *)(pBVar13 + 0x168);
    if (lVar11 < *(long *)(pBVar12 + 0x168)) {
      if (*(long *)(pBVar16 + 0x168) < lVar11) {
        *param_1 = pBVar16;
      }
      else {
        *param_1 = pBVar13;
        param_1[1] = pBVar12;
        if (*(long *)(pBVar12 + 0x168) <= *(long *)(param_2[-1] + 0x168)) {
          return;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = pBVar12;
      return;
    }
    if (*(long *)(pBVar16 + 0x168) < lVar11) {
      param_1[1] = pBVar16;
      param_2[-1] = pBVar13;
      pBVar12 = *param_1;
      if (*(long *)(param_1[1] + 0x168) < *(long *)(pBVar12 + 0x168)) {
        *param_1 = param_1[1];
        param_1[1] = pBVar12;
        return;
      }
      return;
    }
    return;
  case 4:
    __sort4<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
              (param_1,param_1 + 1,param_1 + 2,ppBVar10,param_3);
    return;
  case 5:
    ppBVar15 = param_1 + 2;
    ppBVar10 = param_1 + 3;
    __sort4<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
              (param_1,param_1 + 1,ppBVar15,ppBVar10,param_3);
    pBVar12 = param_1[3];
    if (*(long *)(pBVar12 + 0x168) <= *(long *)(param_2[-1] + 0x168)) {
      return;
    }
    *ppBVar10 = param_2[-1];
    param_2[-1] = pBVar12;
    pBVar12 = *ppBVar10;
    pBVar13 = *ppBVar15;
    if (*(long *)(pBVar13 + 0x168) <= *(long *)(pBVar12 + 0x168)) {
      return;
    }
    *ppBVar15 = pBVar12;
    *ppBVar10 = pBVar13;
    pBVar13 = param_1[1];
    if (*(long *)(pBVar13 + 0x168) <= *(long *)(pBVar12 + 0x168)) {
      return;
    }
    pBVar16 = *param_1;
    param_1[1] = pBVar12;
    param_1[2] = pBVar13;
    if (*(long *)(pBVar16 + 0x168) <= *(long *)(pBVar12 + 0x168)) {
      return;
    }
    *param_1 = pBVar12;
    param_1[1] = pBVar16;
    return;
  default:
    if (0xf7 < lVar11) {
      uVar1 = uVar7;
      if ((long)uVar7 < 0) {
        uVar1 = uVar7 + 1;
      }
      ppBVar15 = (BoneNode **)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
      if (lVar11 < 0x1f39) {
        pBVar13 = *ppBVar15;
        pBVar12 = *param_1;
        pBVar16 = *ppBVar10;
        lVar11 = *(long *)(pBVar13 + 0x168);
        if (lVar11 < *(long *)(pBVar12 + 0x168)) {
          if (*(long *)(pBVar16 + 0x168) < lVar11) {
            *param_1 = pBVar16;
            *ppBVar10 = pBVar12;
            uVar6 = 1;
          }
          else {
            *param_1 = pBVar13;
            *ppBVar15 = pBVar12;
            if (*(long *)(pBVar12 + 0x168) <= *(long *)(*ppBVar10 + 0x168)) goto LAB_00cb9874;
            *ppBVar15 = *ppBVar10;
            *ppBVar10 = pBVar12;
LAB_00cb9864:
            uVar6 = 2;
          }
        }
        else if (*(long *)(pBVar16 + 0x168) < lVar11) {
          *ppBVar15 = pBVar16;
          *ppBVar10 = pBVar13;
          pBVar12 = *param_1;
          if (*(long *)(*ppBVar15 + 0x168) < *(long *)(pBVar12 + 0x168)) {
            *param_1 = *ppBVar15;
            *ppBVar15 = pBVar12;
            goto LAB_00cb9864;
          }
LAB_00cb9874:
          uVar6 = 1;
        }
        else {
          uVar6 = 0;
        }
      }
      else {
        uVar1 = uVar7 + 3;
        if (-1 < (long)uVar7) {
          uVar1 = uVar7;
        }
        lVar11 = (uVar1 & 0x7ffffffffffffffc) * 2;
        ppBVar8 = (BoneNode **)((long)param_1 + lVar11);
        ppBVar14 = (BoneNode **)((long)ppBVar15 + lVar11);
        uVar6 = __sort4<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
                          (param_1,ppBVar8,ppBVar15,ppBVar14,param_3);
        pBVar12 = *ppBVar14;
        if (*(long *)(*ppBVar10 + 0x168) < *(long *)(pBVar12 + 0x168)) {
          *ppBVar14 = *ppBVar10;
          *ppBVar10 = pBVar12;
          pBVar12 = *ppBVar15;
          if (*(long *)(*ppBVar14 + 0x168) < *(long *)(pBVar12 + 0x168)) {
            *ppBVar15 = *ppBVar14;
            *ppBVar14 = pBVar12;
            pBVar12 = *ppBVar8;
            if (*(long *)(*ppBVar15 + 0x168) < *(long *)(pBVar12 + 0x168)) {
              *ppBVar8 = *ppBVar15;
              *ppBVar15 = pBVar12;
              pBVar12 = *param_1;
              if (*(long *)(*ppBVar8 + 0x168) < *(long *)(pBVar12 + 0x168)) {
                *param_1 = *ppBVar8;
                *ppBVar8 = pBVar12;
                uVar6 = uVar6 + 4;
              }
              else {
                uVar6 = uVar6 + 3;
              }
            }
            else {
              uVar6 = uVar6 + 2;
            }
          }
          else {
            uVar6 = uVar6 + 1;
          }
        }
      }
      pBVar12 = *param_1;
      lVar11 = *(long *)(pBVar12 + 0x168);
      ppBVar8 = ppBVar10;
      ppBVar14 = param_2 + -2;
      if (*(long *)(*ppBVar15 + 0x168) <= lVar11) break;
      goto LAB_00cb98d0;
    }
    pBVar12 = *param_1;
    pBVar13 = param_1[1];
    pBVar17 = param_1[2];
    lVar11 = *(long *)(pBVar13 + 0x168);
    pBVar16 = pBVar17;
    if (lVar11 < *(long *)(pBVar12 + 0x168)) {
      if (*(long *)(pBVar17 + 0x168) < lVar11) {
        *param_1 = pBVar17;
      }
      else {
        *param_1 = pBVar13;
        param_1[1] = pBVar12;
        if (*(long *)(pBVar12 + 0x168) <= *(long *)(pBVar17 + 0x168)) goto LAB_00cb9b24;
        param_1[1] = pBVar17;
      }
      param_1[2] = pBVar12;
      pBVar16 = pBVar12;
    }
    else if (*(long *)(pBVar17 + 0x168) < lVar11) {
      param_1[1] = pBVar17;
      param_1[2] = pBVar13;
      pBVar16 = pBVar13;
      if (*(long *)(pBVar17 + 0x168) < *(long *)(pBVar12 + 0x168)) {
        *param_1 = pBVar17;
        param_1[1] = pBVar12;
      }
    }
LAB_00cb9b24:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar11 = 0;
    ppBVar15 = param_1 + 3;
    goto LAB_00cb9b34;
  }
  while (ppBVar8 = ppBVar14, param_1 != ppBVar8) {
    ppBVar14 = ppBVar8 + -1;
    if (*(long *)(*ppBVar8 + 0x168) < *(long *)(*ppBVar15 + 0x168)) goto code_r0x00cb98c4;
  }
  ppBVar8 = param_1 + 1;
  if (*(long *)(*ppBVar10 + 0x168) <= lVar11) {
    if (ppBVar8 == ppBVar10) {
      return;
    }
    ppBVar8 = param_1 + 2;
    while (pBVar12 = ppBVar8[-1], *(long *)(pBVar12 + 0x168) <= lVar11) {
      ppBVar8 = ppBVar8 + 1;
      if (param_2 == ppBVar8) {
        return;
      }
    }
    ppBVar8[-1] = *ppBVar10;
    *ppBVar10 = pBVar12;
  }
  ppBVar14 = ppBVar10;
  if (ppBVar8 == ppBVar10) {
    return;
  }
  while( true ) {
    do {
      ppBVar15 = ppBVar8;
      ppBVar8 = ppBVar15 + 1;
      pBVar12 = *ppBVar15;
    } while (*(long *)(pBVar12 + 0x168) <= *(long *)(*param_1 + 0x168));
    do {
      ppBVar14 = ppBVar14 + -1;
    } while (*(long *)(*param_1 + 0x168) < *(long *)(*ppBVar14 + 0x168));
    if (ppBVar14 <= ppBVar15) break;
    *ppBVar15 = *ppBVar14;
    *ppBVar14 = pBVar12;
  }
  goto LAB_00cb96d8;
code_r0x00cb98c4:
  *param_1 = *ppBVar8;
  *ppBVar8 = pBVar12;
  uVar6 = uVar6 + 1;
LAB_00cb98d0:
  ppBVar14 = param_1 + 1;
  ppBVar3 = ppBVar15;
  ppBVar18 = ppBVar14;
  if (ppBVar14 < ppBVar8) {
    while( true ) {
      ppBVar15 = ppBVar3;
      ppBVar14 = ppBVar18 + -1;
      do {
        ppBVar18 = ppBVar14;
        ppBVar14 = ppBVar18 + 1;
        pBVar12 = *ppBVar14;
      } while (*(long *)(pBVar12 + 0x168) < *(long *)(*ppBVar15 + 0x168));
      ppBVar18 = ppBVar18 + 2;
      do {
        ppBVar8 = ppBVar8 + -1;
      } while (*(long *)(*ppBVar15 + 0x168) <= *(long *)(*ppBVar8 + 0x168));
      if (ppBVar8 < ppBVar14) break;
      *ppBVar14 = *ppBVar8;
      *ppBVar8 = pBVar12;
      uVar6 = uVar6 + 1;
      ppBVar3 = ppBVar8;
      if (ppBVar15 != ppBVar14) {
        ppBVar3 = ppBVar15;
      }
    }
  }
  if (ppBVar14 != ppBVar15) {
    pBVar12 = *ppBVar14;
    if (*(long *)(*ppBVar15 + 0x168) < *(long *)(pBVar12 + 0x168)) {
      uVar6 = uVar6 + 1;
      *ppBVar14 = *ppBVar15;
      *ppBVar15 = pBVar12;
    }
  }
  if (uVar6 == 0) {
    bVar4 = __insertion_sort_incomplete<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
                      (param_1,ppBVar14,param_3);
    bVar5 = __insertion_sort_incomplete<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
                      (ppBVar14 + 1,param_2,param_3);
    if (bVar5) goto LAB_00cb9a64;
    ppBVar15 = ppBVar14 + 1;
    if (bVar4) goto LAB_00cb96d8;
  }
  if ((long)param_2 - (long)ppBVar14 <= (long)ppBVar14 - (long)param_1) {
    __sort<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
              (ppBVar14 + 1,param_2,param_3);
    param_2 = ppBVar14;
    goto LAB_00cb96cc;
  }
  __sort<cocos2d::Node::sortNodes<cocostudio::timeline::BoneNode>(cocos2d::Vector<cocostudio::timeline::BoneNode*>&)::_lambda(cocostudio::timeline::BoneNode*,cocostudio::timeline::BoneNode*)_1_&,cocostudio::timeline::BoneNode**>
            (param_1,ppBVar14,param_3);
  ppBVar15 = ppBVar14 + 1;
  goto LAB_00cb96d8;
LAB_00cb9a64:
  param_2 = ppBVar14;
  if (bVar4) {
    return;
  }
  goto LAB_00cb96cc;
LAB_00cb9b34:
  pBVar12 = *ppBVar15;
  lVar2 = lVar11;
  if (*(long *)(pBVar12 + 0x168) < *(long *)(pBVar16 + 0x168)) {
    do {
      lVar9 = lVar2;
      *(undefined8 *)((long)param_1 + lVar9 + 0x18) = *(undefined8 *)((long)param_1 + lVar9 + 0x10);
      ppBVar10 = param_1;
      if (lVar9 == -0x10) goto LAB_00cb9b88;
      lVar2 = lVar9 + -8;
    } while (*(long *)(pBVar12 + 0x168) < *(long *)(*(long *)((long)param_1 + lVar9 + 8) + 0x168));
    ppBVar10 = (BoneNode **)((long)param_1 + lVar9 + 0x10);
LAB_00cb9b88:
    *ppBVar10 = pBVar12;
  }
  if (ppBVar15 + 1 == param_2) {
switchD_00cb9a84_caseD_0:
    return;
  }
  pBVar16 = *ppBVar15;
  lVar11 = lVar11 + 8;
  ppBVar15 = ppBVar15 + 1;
  goto LAB_00cb9b34;
}

