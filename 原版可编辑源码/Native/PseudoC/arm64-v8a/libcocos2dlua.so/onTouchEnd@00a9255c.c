
/* fairygui::ScrollPane::onTouchEnd(fairygui::EventContext*) */

void fairygui::ScrollPane::onTouchEnd(EventContext *param_1)

{
  EventContext *pEVar1;
  EventContext *pEVar2;
  int iVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  clock_t cVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 local_88;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  if (_draggingPane == param_1) {
    _draggingPane = (EventContext *)0x0;
  }
  _gestureFlag = 0;
  if ((param_1[0xb8] == (EventContext)0x0) || (param_1[0x41] == (EventContext)0x0)) {
    param_1[0xb8] = (EventContext)0x0;
    goto LAB_00a9288c;
  }
  lVar10 = *(long *)(param_1 + 0x108);
  param_1[0xb8] = (EventContext)0x0;
  uVar14 = *(undefined4 *)(lVar10 + 0x50);
  lVar6 = (**(code **)(**(long **)(lVar10 + 400) + 0x168))();
  fVar12 = *(float *)(lVar6 + 4);
  fVar17 = *(float *)(lVar10 + 0x54);
  *(undefined4 *)(param_1 + 0xd4) = uVar14;
  *(float *)(param_1 + 0xd8) = fVar12 - fVar17;
  uVar11 = *(undefined8 *)(param_1 + 0xd4);
  local_88 = uVar11;
  fVar17 = (float)(**(code **)(**(long **)(param_1 + 0x108) + 0xe0))();
  fVar12 = 0.0;
  if (0.0 < fVar17) {
LAB_00a92638:
    bVar5 = true;
    local_88 = CONCAT44(local_88._4_4_,fVar12);
  }
  else {
    fVar17 = (float)(**(code **)(**(long **)(param_1 + 0x108) + 0xe0))();
    fVar12 = -*(float *)(param_1 + 0x74);
    if (fVar17 < fVar12) goto LAB_00a92638;
    bVar5 = false;
    fVar12 = (float)uVar11;
  }
  lVar10 = *(long *)(param_1 + 0x108);
  lVar6 = (**(code **)(**(long **)(lVar10 + 400) + 0x168))();
  fVar17 = 0.0;
  if (0.0 < *(float *)(lVar6 + 4) - *(float *)(lVar10 + 0x54)) {
LAB_00a926b0:
    local_88 = CONCAT44(fVar17,(float)local_88);
LAB_00a926b4:
    iVar9 = 0x2a;
    fVar18 = fVar12 - *(float *)(param_1 + 0xd4);
    fVar13 = fVar17 - *(float *)(param_1 + 0xd8);
    *(float *)(param_1 + 0xdc) = fVar18;
    *(float *)(param_1 + 0xe0) = fVar13;
                    /* try { // try from 00a926e0 to 00b927f7 has its CatchHandler @ 00a926e0
                       catch() { ... } // from try @ 00a926e0 with catch @ 00a926e0
                       catch() { ... } // from try @ 00a92850 with catch @ 00a926e0
                       catch() { ... } // from try @ 00a929d0 with catch @ 00a926e0 */
    if ((fVar18 < (float)-UIConfig::touchDragSensitivity) ||
       (fVar13 < (float)-UIConfig::touchDragSensitivity)) {
LAB_00a92704:
      UIEventDispatcher::dispatchEvent
                (*(UIEventDispatcher **)(param_1 + 0xf8),iVar9,(void *)0x0,
                 (Value *)&cocos2d::Value::Null);
    }
    else {
      iVar9 = 0x2b;
      if (((float)UIConfig::touchDragSensitivity < fVar18) ||
         ((float)UIConfig::touchDragSensitivity < fVar13)) goto LAB_00a92704;
    }
    if (*(int *)(param_1 + 200) < 1) {
LAB_00a92750:
      iVar3 = *(int *)(param_1 + 0xcc);
      if (0 < iVar3) {
        iVar9 = *(int *)(param_1 + 0x48);
        pEVar1 = param_1 + 0x74;
        if (iVar9 != 0) {
          pEVar1 = param_1 + 0x78;
        }
        fVar18 = *(float *)pEVar1;
        fVar13 = fVar12;
        if (iVar9 != 0) {
          fVar13 = fVar17;
        }
        if (fVar13 == -fVar18) {
          if (fVar18 == 0.0) {
            pEVar1 = param_1 + 0x6c;
            if (iVar9 != 0) {
              pEVar1 = param_1 + 0x70;
            }
            pEVar2 = param_1 + 100;
            if (iVar9 != 0) {
              pEVar2 = param_1 + 0x68;
            }
            fVar13 = (*(float *)pEVar1 + (float)iVar3) - *(float *)pEVar2;
            fVar18 = 0.0;
            if (0.0 < fVar13) {
              fVar13 = -fVar13;
              goto joined_r0x00a927d0;
            }
          }
          else {
            fVar18 = fVar18 + (float)iVar3;
          }
          fVar13 = -fVar18;
          goto joined_r0x00a927d0;
        }
      }
    }
    else {
      iVar9 = *(int *)(param_1 + 0x48);
      fVar13 = fVar12;
      if (iVar9 != 0) {
        fVar13 = fVar17;
      }
      if (fVar13 != 0.0) goto LAB_00a92750;
      fVar13 = (float)*(int *)(param_1 + 200);
joined_r0x00a927d0:
      if (iVar9 == 0) {
        local_88 = CONCAT44(local_88._4_4_,fVar13);
        fVar12 = fVar13;
      }
      else {
        local_88 = CONCAT44(fVar13,(float)local_88);
        fVar17 = fVar13;
      }
                    /* try { // try from 00a92814 to 00b9282b has its CatchHandler @ 00a92a74 */
      *(float *)(param_1 + 0xdc) = fVar12 - *(float *)(param_1 + 0xd4);
      *(float *)(param_1 + 0xe0) = fVar17 - *(float *)(param_1 + 0xd8);
    }
    *(undefined8 *)(param_1 + 0xec) = 0x3e99999a3e99999a;
LAB_00a92834:
                    /* try { // try from 00a92834 to 00b9284f has its CatchHandler @ 00a92a70 */
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(undefined4 *)(param_1 + 0xe8) = 0;
    *(undefined4 *)(param_1 + 0xd0) = 2;
    lVar6 = cocos2d::Director::getInstance();
                    /* try { // try from 00a92850 to 00b92993 has its CatchHandler @ 00a926e0 */
    uVar7 = cocos2d::Scheduler::isScheduled(*(_func_void_float **)(lVar6 + 0xa0),(Ref *)tweenUpdate)
    ;
    if ((uVar7 & 1) == 0) {
      lVar6 = cocos2d::Director::getInstance();
      cocos2d::Scheduler::schedule
                (*(Scheduler **)(lVar6 + 0xa0),tweenUpdate,(Ref *)0x0,0.0,SUB81(param_1,0));
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x108);
    lVar6 = (**(code **)(**(long **)(lVar10 + 400) + 0x168))();
    fVar17 = -*(float *)(param_1 + 0x78);
    if (*(float *)(lVar6 + 4) - *(float *)(lVar10 + 0x54) < fVar17) goto LAB_00a926b0;
    fVar17 = (float)((ulong)uVar11 >> 0x20);
    if (bVar5) goto LAB_00a926b4;
    if (param_1[0x50] == (EventContext)0x0) {
      cVar8 = clock();
      fVar12 = (float)((double)(cVar8 - *(long *)(param_1 + 0xb0)) / 1000000.0) * 60.0 + -1.0;
      if (1.0 < fVar12) {
        fVar12 = powf(0.833,fVar12);
        *(ulong *)(param_1 + 0xa4) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0xa4) >> 0x20) * fVar12,
                      (float)*(undefined8 *)(param_1 + 0xa4) * fVar12);
      }
      fVar12 = (float)updateTargetAndDuration((ScrollPane *)param_1,*(float *)(param_1 + 0xd4),0);
      fVar17 = (float)updateTargetAndDuration((ScrollPane *)param_1,*(float *)(param_1 + 0xd8),1);
      local_88 = CONCAT44(fVar17,fVar12);
    }
    else {
                    /* try { // try from 00a927f8 to 00b9280f has its CatchHandler @ 00a92a80 */
      *(undefined8 *)(param_1 + 0xec) = 0x3e99999a3e99999a;
    }
    fVar20 = *(float *)(param_1 + 0xd4);
    fVar18 = *(float *)(param_1 + 0xd8);
    loopCheckingTarget((ScrollPane *)param_1,(Vec2 *)&local_88);
    fVar13 = (float)local_88;
    if (param_1[0x58] == (EventContext)0x0) {
      if (param_1[0x4d] != (EventContext)0x0) {
        fVar19 = local_88._4_4_;
        local_80 = -(float)local_88;
        fStack_7c = -local_88._4_4_;
                    /* catch() { ... } // from try @ 00a92834 with catch @ 00a92a70 */
                    /* catch() { ... } // from try @ 00a92814 with catch @ 00a92a74 */
                    /* catch() { ... } // from try @ 00a929b0 with catch @ 00a92a78 */
        fVar15 = fStack_7c;
                    /* catch() { ... } // from try @ 00a92994 with catch @ 00a92a7c */
        fVar16 = (float)(**(code **)(**(long **)(param_1 + 0xf8) + 0xd0))
                                  (*(long **)(param_1 + 0xf8),&local_80);
                    /* catch() { ... } // from try @ 00a927f8 with catch @ 00a92a80 */
        if ((fVar13 < 0.0) && (-*(float *)(param_1 + 0x74) < fVar13)) {
          local_88 = CONCAT44(local_88._4_4_,-fVar16);
        }
        if ((fVar19 < 0.0) && (-*(float *)(param_1 + 0x78) < fVar19)) {
          fVar15 = -fVar15;
          goto LAB_00a92998;
        }
      }
    }
    else {
      uVar14 = alignByPage((ScrollPane *)param_1,(float)local_88,0,true);
      local_88 = CONCAT44(local_88._4_4_,uVar14);
                    /* try { // try from 00a92994 to 00b929ab has its CatchHandler @ 00a92a7c */
      fVar15 = (float)alignByPage((ScrollPane *)param_1,local_88._4_4_,1,true);
LAB_00a92998:
      local_88 = CONCAT44(fVar15,(float)local_88);
    }
    fVar19 = (float)local_88 - *(float *)(param_1 + 0xd4);
    fVar13 = local_88._4_4_ - *(float *)(param_1 + 0xd8);
                    /* try { // try from 00a929b0 to 00b929cf has its CatchHandler @ 00a92a78 */
    *(float *)(param_1 + 0xdc) = fVar19;
    *(float *)(param_1 + 0xe0) = fVar13;
    if ((fVar19 != 0.0) || (fVar13 != 0.0)) {
      if ((param_1[0x58] != (EventContext)0x0) || (param_1[0x4d] != (EventContext)0x0)) {
                    /* try { // try from 00a929d0 to 00b92a9b has its CatchHandler @ 00a926e0 */
        if ((fVar19 != 0.0) && (ABS(fVar19) < ABS(fVar12 - fVar20))) {
          fVar12 = ABS(fVar19 / (fVar12 - fVar20)) * *(float *)(param_1 + 0xec);
          if (fVar12 <= 0.3) {
            fVar12 = 0.3;
          }
          *(float *)(param_1 + 0xec) = fVar12;
        }
        if ((fVar13 != 0.0) && (ABS(fVar13) < ABS(fVar17 - fVar18))) {
          fVar12 = ABS(fVar13 / (fVar17 - fVar18)) * *(float *)(param_1 + 0xf0);
          if (fVar12 <= 0.3) {
            fVar12 = 0.3;
          }
          *(float *)(param_1 + 0xf0) = fVar12;
        }
      }
      goto LAB_00a92834;
    }
  }
  updateScrollBarVisible((ScrollPane *)param_1);
LAB_00a9288c:
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

