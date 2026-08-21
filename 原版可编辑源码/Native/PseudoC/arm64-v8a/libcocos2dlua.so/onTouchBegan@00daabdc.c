
/* cocos2d::ui::Widget::onTouchBegan(cocos2d::Touch*, cocos2d::Event*) */

void cocos2d::ui::Widget::onTouchBegan(Touch *param_1,Event *param_2)

{
  Touch TVar1;
  long lVar2;
  ulong uVar3;
  Touch *pTVar4;
  Touch *pTVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 in_s1;
  undefined4 local_74;
  Touch *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  param_1[0x3b4] = (Touch)0x0;
  uVar3 = (**(code **)(*(long *)param_1 + 0x178))();
  if ((uVar3 & 1) != 0) {
    TVar1 = param_1[0x382];
    pTVar4 = param_1;
    while (TVar1 != (Touch)0x0) {
      do {
        if ((pTVar4 == (Touch *)0x0) ||
           (pTVar4 = (Touch *)(**(code **)(*(long *)pTVar4 + 0x260))(pTVar4), pTVar4 == (Touch *)0x0
           )) {
          pTVar4 = param_1;
          if (param_1 == (Touch *)0x0) goto LAB_00daacb4;
          goto LAB_00daac88;
        }
        pTVar5 = (Touch *)__dynamic_cast(pTVar4,&Node::typeinfo,&typeinfo,0);
      } while (pTVar5 == (Touch *)0x0);
      pTVar4 = pTVar5;
      TVar1 = pTVar5[0x382];
    }
  }
  goto LAB_00daada0;
LAB_00daacb4:
  uVar10 = Touch::getLocation((Touch *)param_2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00daaac4 with catch @ 00daacc0
                        */
  *(undefined4 *)(param_1 + 0x3c8) = uVar10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00daab60 with catch @ 00daacc4
                        */
  *(undefined4 *)(param_1 + 0x3cc) = in_s1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00daab04 with catch @ 00daacc8
                        */
  uVar8 = Camera::getVisitingCamera();
                    /* try { // try from 00daacdc to 00eaacdf has its CatchHandler @ 00daad0c */
                    /* try { // try from 00daace0 to 00eaad1f has its CatchHandler @ 00daaa30 */
  uVar3 = (**(code **)(*(long *)param_1 + 0x5d0))(param_1,param_1 + 0x3c8,uVar8,0);
  pTVar4 = param_1;
  while ((uVar3 & 1) != 0) {
    pTVar4[0x386] = (Touch)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00daacdc with catch @ 00daad0c
                        */
    plVar7 = (long *)(**(code **)(*(long *)pTVar4 + 0x260))(pTVar4);
    while( true ) {
      if (plVar7 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x3b8) = uVar8;
        param_1[0x3b4] = (Touch)0x1;
        goto LAB_00daada8;
      }
      pTVar5 = (Touch *)__dynamic_cast(plVar7,&Node::typeinfo,&Layout::typeinfo,0);
      if ((pTVar5 != (Touch *)0x0) &&
         (uVar3 = (**(code **)(*(long *)pTVar5 + 0x688))(), (uVar3 & 1) != 0)) break;
      plVar7 = (long *)(**(code **)(*plVar7 + 0x260))(plVar7);
    }
    pTVar4[0x386] = (Touch)0x1;
    lVar6 = Camera::getVisitingCamera();
    if (lVar6 == 0) {
      lVar6 = *(long *)(pTVar4 + 0x3b8);
    }
    uVar3 = (**(code **)(*(long *)pTVar5 + 0x5d0))(pTVar5,param_1 + 0x3c8,lVar6,0);
    pTVar4 = pTVar5;
  }
  goto LAB_00daada0;
  while (uVar3 = (**(code **)(*(long *)pTVar4 + 0x178))(), (uVar3 & 1) != 0) {
LAB_00daac88:
    pTVar4 = (Touch *)(**(code **)(*(long *)pTVar4 + 0x260))(pTVar4);
    if (pTVar4 == (Touch *)0x0) goto LAB_00daacb4;
  }
LAB_00daada0:
  if (param_1[0x3b4] == (Touch)0x0) {
    uVar8 = 0;
    goto LAB_00daaecc;
  }
LAB_00daada8:
  if (param_1[0x385] != (Touch)0x1) {
    param_1[0x385] = (Touch)0x1;
    if (param_1[899] == (Touch)0x0) {
      pcVar9 = *(code **)(*(long *)param_1 + 0x648);
    }
    else {
      if (*(int *)(param_1 + 0x38c) == 1) goto LAB_00daadfc;
      *(undefined4 *)(param_1 + 0x38c) = 1;
      pcVar9 = *(code **)(*(long *)param_1 + 0x640);
    }
    (*pcVar9)(param_1);
  }
LAB_00daadfc:
  if (((param_1[0x388] != (Touch)0x0) &&
      (lVar6 = (**(code **)(*(long *)param_1 + 0x260))(param_1), lVar6 != 0)) &&
     (plVar7 = (long *)__dynamic_cast(lVar6,&Node::typeinfo,&typeinfo,0), plVar7 != (long *)0x0)) {
    plVar7[0x77] = *(long *)(param_1 + 0x3b8);
    (**(code **)(*plVar7 + 0x620))(plVar7,0,param_1,param_2);
    plVar7[0x77] = 0;
  }
  Ref::retain((Ref *)param_1);
  plVar7 = *(long **)(param_1 + 0x450);
  if (plVar7 != (long *)0x0) {
    local_74 = 0;
    local_70 = param_1;
    (**(code **)(*plVar7 + 0x30))(plVar7,&local_70,&local_74);
  }
  if (*(long *)(param_1 + 0x418) != 0) {
    pcVar9 = *(code **)(param_1 + 0x420);
    uVar3 = *(ulong *)(param_1 + 0x428) & 1;
    if (uVar3 != 0 || pcVar9 != (code *)0x0) {
      plVar7 = (long *)(*(long *)(param_1 + 0x418) + ((long)*(ulong *)(param_1 + 0x428) >> 1));
      if (uVar3 != 0) {
        pcVar9 = *(code **)(pcVar9 + *plVar7);
      }
      (*pcVar9)(plVar7,param_1,0);
    }
  }
  Ref::release((Ref *)param_1);
  uVar8 = 1;
LAB_00daaecc:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar8);
}

