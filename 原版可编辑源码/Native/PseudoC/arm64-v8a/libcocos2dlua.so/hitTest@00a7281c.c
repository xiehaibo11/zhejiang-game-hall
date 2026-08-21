
/* fairygui::GComponent::hitTest(cocos2d::Vec2 const&, cocos2d::Camera const*) */

void fairygui::GComponent::hitTest(Vec2 *param_1,Camera *param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  Size *pSVar6;
  Rect *this;
  Vec2 *pVVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined4 local_80 [2];
  undefined4 local_78 [2];
  Size aSStack_70 [8];
  Rect aRStack_68 [8];
  Size aSStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a72898 to 00b728b3 has its CatchHandler @ 00a72930 */
  if (((param_1[0xbc] != '\0') || (param_1[0xf5] == '\0')) ||
     (uVar3 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x178))(), (uVar3 & 1) == 0))
  goto LAB_00a7284c;
  lVar4 = (**(code **)(**(long **)(param_1 + 0xa8) + 0x260))();
                    /* try { // try from 00a728b4 to 00b72967 has its CatchHandler @ 00a7284c */
  pVVar7 = (Vec2 *)0x0;
  if (lVar4 == 0) goto LAB_00a72850;
  plVar5 = *(long **)(param_1 + 0x260);
  if (plVar5 == (long *)0x0) {
LAB_00a728f4:
    cocos2d::Rect::Rect(aRStack_68);
    if (*(long *)(param_1 + 0x268) == 0) {
      uVar3 = FUIContainer::isClippingEnabled(*(FUIContainer **)(param_1 + 0xa8));
      if ((uVar3 & 1) != 0) {
        cocos2d::Rect::Rect((Rect *)local_78);
        pSVar6 = (Size *)(**(code **)(**(long **)(param_1 + 0xa8) + 0x168))();
        cocos2d::Size::operator=(aSStack_70,pSVar6);
        local_80[0] = cocos2d::Node::convertToNodeSpace(*(Node **)(param_1 + 0xa8),param_2);
        uVar3 = cocos2d::Rect::containsPoint((Rect *)local_78,(Vec2 *)local_80);
        iVar8 = 1;
        if ((uVar3 & 1) == 0) {
          iVar8 = 2;
        }
        this = (Rect *)FUIContainer::getClippingRegion(*(FUIContainer **)(param_1 + 0xa8));
        uVar3 = cocos2d::Rect::containsPoint(this,(Vec2 *)local_80);
        goto joined_r0x00a729e8;
      }
      iVar8 = 0;
    }
    else {
      cocos2d::Rect::Rect((Rect *)local_78);
      pSVar6 = (Size *)(**(code **)(**(long **)(param_1 + 0xa8) + 0x168))();
      cocos2d::Size::operator=(aSStack_70,pSVar6);
                    /* catch() { ... } // from try @ 00a72898 with catch @ 00a72930 */
      local_80[0] = cocos2d::Node::convertToNodeSpace(*(Node **)(param_1 + 0xa8),param_2);
      uVar3 = cocos2d::Rect::containsPoint((Rect *)local_78,(Vec2 *)local_80);
      iVar8 = 1;
      if ((uVar3 & 1) == 0) {
        iVar8 = 2;
      }
      uVar3 = (**(code **)**(undefined8 **)(param_1 + 0x268))
                        (*(undefined8 **)(param_1 + 0x268),param_1,local_80);
joined_r0x00a729e8:
      if ((uVar3 & 1) == 0) goto LAB_00a7284c;
    }
    if ((*(Vec2 **)(param_1 + 0x230) != (Vec2 *)0x0) &&
       ((pVVar7 = (Vec2 *)ScrollPane::hitTest(*(Vec2 **)(param_1 + 0x230),param_2),
        pVVar7 == (Vec2 *)0x0 || (pVVar7 != param_1)))) goto LAB_00a72850;
    lVar4 = *(long *)(param_1 + 0x1e0);
    iVar1 = *(int *)(param_1 + 0x250);
    uVar3 = *(long *)(param_1 + 0x1e8) - lVar4;
    iVar9 = (int)(uVar3 >> 3);
    if (iVar1 == 0) {
      if (0 < iVar9) {
        lVar10 = (long)(uVar3 * 0x20000000) >> 0x20;
        while( true ) {
          lVar10 = lVar10 + -1;
          plVar5 = *(long **)(lVar4 + lVar10 * 8);
          if (((plVar5[0x15] != 0) && (plVar5 != *(long **)(param_1 + 0x260))) &&
             (pVVar7 = (Vec2 *)(**(code **)(*plVar5 + 0x48))(plVar5,param_2), pVVar7 != (Vec2 *)0x0)
             ) goto LAB_00a72850;
          if (lVar10 < 1) break;
          lVar4 = *(long *)(param_1 + 0x1e0);
        }
      }
    }
    else if (iVar1 == 2) {
      iVar1 = *(int *)(param_1 + 0x254);
      if (iVar1 < iVar9) {
        lVar10 = (long)iVar1;
        while( true ) {
          plVar5 = *(long **)(lVar4 + lVar10 * 8);
          if (((plVar5[0x15] != 0) && (plVar5 != *(long **)(param_1 + 0x260))) &&
             (pVVar7 = (Vec2 *)(**(code **)(*plVar5 + 0x48))(plVar5,param_2), pVVar7 != (Vec2 *)0x0)
             ) goto LAB_00a72850;
          lVar10 = lVar10 + 1;
          iVar9 = iVar1;
          if ((long)(uVar3 * 0x20000000) >> 0x20 <= lVar10) break;
          lVar4 = *(long *)(param_1 + 0x1e0);
        }
      }
      if (0 < iVar9) {
        lVar4 = (long)iVar9;
        do {
          lVar4 = lVar4 + -1;
          plVar5 = *(long **)(*(long *)(param_1 + 0x1e0) + lVar4 * 8);
          if (((plVar5[0x15] != 0) && (plVar5 != *(long **)(param_1 + 0x260))) &&
             (pVVar7 = (Vec2 *)(**(code **)(*plVar5 + 0x48))(plVar5,param_2), pVVar7 != (Vec2 *)0x0)
             ) goto LAB_00a72850;
        } while (0 < lVar4);
      }
    }
    else if ((iVar1 == 1) && (0 < iVar9)) {
      lVar10 = 0;
      while( true ) {
        plVar5 = *(long **)(lVar4 + lVar10 * 8);
        if (((plVar5[0x15] != 0) && (plVar5 != *(long **)(param_1 + 0x260))) &&
           (pVVar7 = (Vec2 *)(**(code **)(*plVar5 + 0x48))(plVar5,param_2), pVVar7 != (Vec2 *)0x0))
        goto LAB_00a72850;
        if ((uVar3 >> 3 & 0xffffffff) - 1 == lVar10) break;
        lVar4 = *(long *)(param_1 + 0x1e0);
        lVar10 = lVar10 + 1;
      }
    }
    if (param_1[0x270] != '\0') {
      if (iVar8 == 0) {
        pSVar6 = (Size *)(**(code **)(**(long **)(param_1 + 0xa8) + 0x168))();
        cocos2d::Size::operator=(aSStack_60,pSVar6);
        local_78[0] = cocos2d::Node::convertToNodeSpace(*(Node **)(param_1 + 0xa8),param_2);
        uVar3 = cocos2d::Rect::containsPoint(aRStack_68,(Vec2 *)local_78);
        iVar8 = 1;
        if ((uVar3 & 1) == 0) {
          iVar8 = 2;
        }
      }
      pVVar7 = param_1;
      if (iVar8 != 1) {
        pVVar7 = (Vec2 *)0x0;
      }
      goto LAB_00a72850;
    }
  }
  else {
    lVar4 = (**(code **)(*plVar5 + 0x48))(plVar5,param_2);
    uVar3 = FUIContainer::isInverted(*(FUIContainer **)(param_1 + 0xa8));
    if (lVar4 == 0) {
      if ((uVar3 & 1) != 0) goto LAB_00a728f4;
    }
    else if ((uVar3 & 1) == 0) goto LAB_00a728f4;
  }
LAB_00a7284c:
                    /* try { // try from 00a7284c to 00b72897 has its CatchHandler @ 00a7284c
                       catch() { ... } // from try @ 00a7284c with catch @ 00a7284c
                       catch() { ... } // from try @ 00a728b4 with catch @ 00a7284c */
  pVVar7 = (Vec2 *)0x0;
LAB_00a72850:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pVVar7);
  }
  return;
}

