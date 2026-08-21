
/* void 
   std::__ndk1::__sort<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::{lambda(cocos2d::Node*,
   cocos2d::Node*)#1}&, cocos2d::Node**>(cocos2d::Node**, cocos2d::Node**,
   cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::{lambda(cocos2d::Node*,
   cocos2d::Node*)#1}&) */

void std::__ndk1::
     __sort<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
               (Node **param_1,Node **param_2,_lambda_cocos2d__Node__cocos2d__Node___1_ *param_3)

{
  ulong uVar1;
  long lVar2;
  Node **ppNVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  Node **ppNVar8;
  long lVar9;
  Node **ppNVar10;
  long lVar11;
  Node *pNVar12;
  Node *pNVar13;
  Node **ppNVar14;
  Node **ppNVar15;
  Node *pNVar16;
  Node *pNVar17;
  Node **ppNVar18;
  
LAB_00cba138:
  ppNVar10 = param_2 + -1;
  ppNVar15 = param_1;
LAB_00cba144:
  param_1 = ppNVar15;
  lVar11 = (long)param_2 - (long)param_1;
  uVar7 = lVar11 >> 3;
  switch(uVar7) {
  case 0:
  case 1:
    goto switchD_00cba4f0_caseD_0;
  case 2:
    pNVar12 = *param_1;
    if (*(long *)(param_2[-1] + 0x168) < *(long *)(pNVar12 + 0x168)) {
      *param_1 = param_2[-1];
      param_2[-1] = pNVar12;
      return;
    }
    return;
  case 3:
    pNVar12 = *param_1;
    pNVar13 = param_1[1];
    pNVar16 = param_2[-1];
    lVar11 = *(long *)(pNVar13 + 0x168);
    if (lVar11 < *(long *)(pNVar12 + 0x168)) {
      if (*(long *)(pNVar16 + 0x168) < lVar11) {
        *param_1 = pNVar16;
      }
      else {
        *param_1 = pNVar13;
        param_1[1] = pNVar12;
        if (*(long *)(pNVar12 + 0x168) <= *(long *)(param_2[-1] + 0x168)) {
          return;
        }
        param_1[1] = param_2[-1];
      }
      param_2[-1] = pNVar12;
      return;
    }
    if (*(long *)(pNVar16 + 0x168) < lVar11) {
      param_1[1] = pNVar16;
      param_2[-1] = pNVar13;
      pNVar12 = *param_1;
      if (*(long *)(param_1[1] + 0x168) < *(long *)(pNVar12 + 0x168)) {
        *param_1 = param_1[1];
        param_1[1] = pNVar12;
        return;
      }
      return;
    }
    return;
  case 4:
    __sort4<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
              (param_1,param_1 + 1,param_1 + 2,ppNVar10,param_3);
    return;
  case 5:
    ppNVar15 = param_1 + 2;
    ppNVar10 = param_1 + 3;
    __sort4<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
              (param_1,param_1 + 1,ppNVar15,ppNVar10,param_3);
    pNVar12 = param_1[3];
    if (*(long *)(pNVar12 + 0x168) <= *(long *)(param_2[-1] + 0x168)) {
      return;
    }
    *ppNVar10 = param_2[-1];
    param_2[-1] = pNVar12;
    pNVar12 = *ppNVar10;
    pNVar13 = *ppNVar15;
    if (*(long *)(pNVar13 + 0x168) <= *(long *)(pNVar12 + 0x168)) {
      return;
    }
    *ppNVar15 = pNVar12;
    *ppNVar10 = pNVar13;
    pNVar13 = param_1[1];
    if (*(long *)(pNVar13 + 0x168) <= *(long *)(pNVar12 + 0x168)) {
      return;
    }
    pNVar16 = *param_1;
    param_1[1] = pNVar12;
    param_1[2] = pNVar13;
    if (*(long *)(pNVar16 + 0x168) <= *(long *)(pNVar12 + 0x168)) {
      return;
    }
    *param_1 = pNVar12;
    param_1[1] = pNVar16;
    return;
  default:
    if (0xf7 < lVar11) {
      uVar1 = uVar7;
      if ((long)uVar7 < 0) {
        uVar1 = uVar7 + 1;
      }
      ppNVar15 = (Node **)((long)param_1 + (uVar1 & 0x3ffffffffffffffe) * 4);
      if (lVar11 < 0x1f39) {
        pNVar13 = *ppNVar15;
        pNVar12 = *param_1;
        pNVar16 = *ppNVar10;
        lVar11 = *(long *)(pNVar13 + 0x168);
        if (lVar11 < *(long *)(pNVar12 + 0x168)) {
          if (*(long *)(pNVar16 + 0x168) < lVar11) {
            *param_1 = pNVar16;
            *ppNVar10 = pNVar12;
            uVar6 = 1;
          }
          else {
            *param_1 = pNVar13;
            *ppNVar15 = pNVar12;
            if (*(long *)(pNVar12 + 0x168) <= *(long *)(*ppNVar10 + 0x168)) goto LAB_00cba2e0;
            *ppNVar15 = *ppNVar10;
            *ppNVar10 = pNVar12;
LAB_00cba2d0:
            uVar6 = 2;
          }
        }
        else if (*(long *)(pNVar16 + 0x168) < lVar11) {
          *ppNVar15 = pNVar16;
          *ppNVar10 = pNVar13;
          pNVar12 = *param_1;
          if (*(long *)(*ppNVar15 + 0x168) < *(long *)(pNVar12 + 0x168)) {
            *param_1 = *ppNVar15;
            *ppNVar15 = pNVar12;
            goto LAB_00cba2d0;
          }
LAB_00cba2e0:
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
        ppNVar8 = (Node **)((long)param_1 + lVar11);
        ppNVar14 = (Node **)((long)ppNVar15 + lVar11);
        uVar6 = __sort4<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
                          (param_1,ppNVar8,ppNVar15,ppNVar14,param_3);
        pNVar12 = *ppNVar14;
        if (*(long *)(*ppNVar10 + 0x168) < *(long *)(pNVar12 + 0x168)) {
          *ppNVar14 = *ppNVar10;
          *ppNVar10 = pNVar12;
          pNVar12 = *ppNVar15;
          if (*(long *)(*ppNVar14 + 0x168) < *(long *)(pNVar12 + 0x168)) {
            *ppNVar15 = *ppNVar14;
            *ppNVar14 = pNVar12;
            pNVar12 = *ppNVar8;
            if (*(long *)(*ppNVar15 + 0x168) < *(long *)(pNVar12 + 0x168)) {
              *ppNVar8 = *ppNVar15;
              *ppNVar15 = pNVar12;
              pNVar12 = *param_1;
              if (*(long *)(*ppNVar8 + 0x168) < *(long *)(pNVar12 + 0x168)) {
                *param_1 = *ppNVar8;
                *ppNVar8 = pNVar12;
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
      pNVar12 = *param_1;
      lVar11 = *(long *)(pNVar12 + 0x168);
      ppNVar8 = ppNVar10;
      ppNVar14 = param_2 + -2;
      if (*(long *)(*ppNVar15 + 0x168) <= lVar11) break;
      goto LAB_00cba33c;
    }
    pNVar12 = *param_1;
    pNVar13 = param_1[1];
    pNVar17 = param_1[2];
    lVar11 = *(long *)(pNVar13 + 0x168);
    pNVar16 = pNVar17;
    if (lVar11 < *(long *)(pNVar12 + 0x168)) {
      if (*(long *)(pNVar17 + 0x168) < lVar11) {
        *param_1 = pNVar17;
      }
      else {
        *param_1 = pNVar13;
        param_1[1] = pNVar12;
        if (*(long *)(pNVar12 + 0x168) <= *(long *)(pNVar17 + 0x168)) goto LAB_00cba590;
        param_1[1] = pNVar17;
      }
      param_1[2] = pNVar12;
      pNVar16 = pNVar12;
    }
    else if (*(long *)(pNVar17 + 0x168) < lVar11) {
      param_1[1] = pNVar17;
      param_1[2] = pNVar13;
      pNVar16 = pNVar13;
      if (*(long *)(pNVar17 + 0x168) < *(long *)(pNVar12 + 0x168)) {
        *param_1 = pNVar17;
        param_1[1] = pNVar12;
      }
    }
LAB_00cba590:
    if (param_1 + 3 == param_2) {
      return;
    }
    lVar11 = 0;
    ppNVar15 = param_1 + 3;
    goto LAB_00cba5a0;
  }
  while (ppNVar8 = ppNVar14, param_1 != ppNVar8) {
    ppNVar14 = ppNVar8 + -1;
    if (*(long *)(*ppNVar8 + 0x168) < *(long *)(*ppNVar15 + 0x168)) goto code_r0x00cba330;
  }
  ppNVar8 = param_1 + 1;
  if (*(long *)(*ppNVar10 + 0x168) <= lVar11) {
    if (ppNVar8 == ppNVar10) {
      return;
    }
    ppNVar8 = param_1 + 2;
    while (pNVar12 = ppNVar8[-1], *(long *)(pNVar12 + 0x168) <= lVar11) {
      ppNVar8 = ppNVar8 + 1;
      if (param_2 == ppNVar8) {
        return;
      }
    }
    ppNVar8[-1] = *ppNVar10;
    *ppNVar10 = pNVar12;
  }
  ppNVar14 = ppNVar10;
  if (ppNVar8 == ppNVar10) {
    return;
  }
  while( true ) {
    do {
      ppNVar15 = ppNVar8;
      ppNVar8 = ppNVar15 + 1;
      pNVar12 = *ppNVar15;
    } while (*(long *)(pNVar12 + 0x168) <= *(long *)(*param_1 + 0x168));
    do {
      ppNVar14 = ppNVar14 + -1;
    } while (*(long *)(*param_1 + 0x168) < *(long *)(*ppNVar14 + 0x168));
    if (ppNVar14 <= ppNVar15) break;
    *ppNVar15 = *ppNVar14;
    *ppNVar14 = pNVar12;
  }
  goto LAB_00cba144;
code_r0x00cba330:
  *param_1 = *ppNVar8;
  *ppNVar8 = pNVar12;
  uVar6 = uVar6 + 1;
LAB_00cba33c:
  ppNVar14 = param_1 + 1;
  ppNVar3 = ppNVar15;
  ppNVar18 = ppNVar14;
  if (ppNVar14 < ppNVar8) {
    while( true ) {
      ppNVar15 = ppNVar3;
      ppNVar14 = ppNVar18 + -1;
      do {
        ppNVar18 = ppNVar14;
        ppNVar14 = ppNVar18 + 1;
        pNVar12 = *ppNVar14;
      } while (*(long *)(pNVar12 + 0x168) < *(long *)(*ppNVar15 + 0x168));
      ppNVar18 = ppNVar18 + 2;
      do {
        ppNVar8 = ppNVar8 + -1;
      } while (*(long *)(*ppNVar15 + 0x168) <= *(long *)(*ppNVar8 + 0x168));
      if (ppNVar8 < ppNVar14) break;
      *ppNVar14 = *ppNVar8;
      *ppNVar8 = pNVar12;
      uVar6 = uVar6 + 1;
      ppNVar3 = ppNVar8;
      if (ppNVar15 != ppNVar14) {
        ppNVar3 = ppNVar15;
      }
    }
  }
  if (ppNVar14 != ppNVar15) {
    pNVar12 = *ppNVar14;
    if (*(long *)(*ppNVar15 + 0x168) < *(long *)(pNVar12 + 0x168)) {
      uVar6 = uVar6 + 1;
      *ppNVar14 = *ppNVar15;
      *ppNVar15 = pNVar12;
    }
  }
  if (uVar6 == 0) {
    bVar4 = __insertion_sort_incomplete<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
                      (param_1,ppNVar14,param_3);
    bVar5 = __insertion_sort_incomplete<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
                      (ppNVar14 + 1,param_2,param_3);
    if (bVar5) goto LAB_00cba4d0;
    ppNVar15 = ppNVar14 + 1;
    if (bVar4) goto LAB_00cba144;
  }
  if ((long)param_2 - (long)ppNVar14 <= (long)ppNVar14 - (long)param_1) {
    __sort<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
              (ppNVar14 + 1,param_2,param_3);
    param_2 = ppNVar14;
    goto LAB_00cba138;
  }
  __sort<cocos2d::Node::sortNodes<cocos2d::Node>(cocos2d::Vector<cocos2d::Node*>&)::_lambda(cocos2d::Node*,cocos2d::Node*)_1_&,cocos2d::Node**>
            (param_1,ppNVar14,param_3);
  ppNVar15 = ppNVar14 + 1;
  goto LAB_00cba144;
LAB_00cba4d0:
  param_2 = ppNVar14;
  if (bVar4) {
    return;
  }
  goto LAB_00cba138;
LAB_00cba5a0:
  pNVar12 = *ppNVar15;
  lVar2 = lVar11;
  if (*(long *)(pNVar12 + 0x168) < *(long *)(pNVar16 + 0x168)) {
    do {
      lVar9 = lVar2;
      *(undefined8 *)((long)param_1 + lVar9 + 0x18) = *(undefined8 *)((long)param_1 + lVar9 + 0x10);
      ppNVar10 = param_1;
      if (lVar9 == -0x10) goto LAB_00cba5f4;
      lVar2 = lVar9 + -8;
    } while (*(long *)(pNVar12 + 0x168) < *(long *)(*(long *)((long)param_1 + lVar9 + 8) + 0x168));
    ppNVar10 = (Node **)((long)param_1 + lVar9 + 0x10);
LAB_00cba5f4:
    *ppNVar10 = pNVar12;
  }
  if (ppNVar15 + 1 == param_2) {
switchD_00cba4f0_caseD_0:
    return;
  }
  pNVar16 = *ppNVar15;
  lVar11 = lVar11 + 8;
  ppNVar15 = ppNVar15 + 1;
  goto LAB_00cba5a0;
}

