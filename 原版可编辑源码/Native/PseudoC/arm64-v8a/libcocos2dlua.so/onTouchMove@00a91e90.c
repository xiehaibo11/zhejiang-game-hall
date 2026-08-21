
/* fairygui::ScrollPane::onTouchMove(fairygui::EventContext*) */

void fairygui::ScrollPane::onTouchMove(EventContext *param_1)

{
  float *pfVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  Director *this;
  clock_t cVar8;
  ulong uVar9;
  long in_x1;
  int iVar10;
  code *pcVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float in_s1;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (((param_1[0x41] == (EventContext)0x0) ||
      (_draggingPane != param_1 && _draggingPane != (EventContext *)0x0)) ||
     (GObject::_draggingObject != 0)) {
    return;
  }
  lVar13 = *(long *)(in_x1 + 8);
  pfVar1 = (float *)(lVar13 + 0x10);
  fVar14 = (float)GObject::globalToLocal(*(Vec2 **)(param_1 + 0xf8));
  fVar15 = (float)UIConfig::touchScrollSensitivity;
  if (*(int *)(param_1 + 0x24) == 0) {
    if (param_1[0xb9] == (EventContext)0x0) {
      uVar3 = _gestureFlag | 2;
      if (ABS(*(float *)(param_1 + 0x8c) - fVar14) < fVar15) {
        _gestureFlag = uVar3;
        return;
      }
      uVar2 = _gestureFlag & 1;
      _gestureFlag = uVar3;
      if ((uVar2 != 0) &&
         (ABS(*(float *)(param_1 + 0x8c) - fVar14) < ABS(*(float *)(param_1 + 0x90) - in_s1))) {
        return;
      }
    }
    bVar4 = false;
    bVar5 = true;
  }
  else {
    if (*(int *)(param_1 + 0x24) == 1) {
      if (param_1[0xb9] == (EventContext)0x0) {
        uVar3 = _gestureFlag | 1;
        if (ABS(*(float *)(param_1 + 0x90) - in_s1) < fVar15) {
          _gestureFlag = uVar3;
          return;
        }
        uVar2 = _gestureFlag >> 1;
        _gestureFlag = uVar3;
        if (((uVar2 & 1) != 0) &&
           (ABS(*(float *)(param_1 + 0x90) - in_s1) < ABS(*(float *)(param_1 + 0x8c) - fVar14))) {
          return;
        }
      }
      bVar5 = false;
    }
    else {
      _gestureFlag = 3;
      if (((param_1[0xb9] == (EventContext)0x0) &&
          (ABS(*(float *)(param_1 + 0x90) - in_s1) < fVar15)) &&
         (ABS(*(float *)(param_1 + 0x8c) - fVar14) < fVar15)) {
        _gestureFlag = 3;
        return;
      }
      bVar5 = true;
    }
    bVar4 = true;
  }
  fVar15 = *(float *)(param_1 + 0x84);
  fVar19 = *(float *)(param_1 + 0x8c);
  if (bVar4) {
    iVar10 = (int)((in_s1 + *(float *)(param_1 + 0x88)) - *(float *)(param_1 + 0x90));
    fVar20 = (float)iVar10;
    if (iVar10 < 1) {
      fVar16 = *(float *)(param_1 + 0x78);
      if (-fVar16 <= fVar20) {
        plVar12 = *(long **)(param_1 + 0x108);
        lVar7 = (**(code **)(*(long *)plVar12[0x32] + 0x168))();
        pcVar11 = *(code **)(*plVar12 + 0xe8);
        fVar16 = *(float *)(lVar7 + 4) - fVar20;
      }
      else {
        if (param_1[0x40] != (EventContext)0x0) {
          if ((*(long *)(param_1 + 0x128) == 0) ||
             (fVar17 = *(float *)(*(long *)(param_1 + 0x128) + 0x94), fVar17 <= 0.0)) {
            plVar12 = *(long **)(param_1 + 0x108);
            plVar6 = (long *)plVar12[0x32];
            fVar17 = *(float *)(param_1 + 0x68) * -0.5;
          }
          else {
            plVar12 = *(long **)(param_1 + 0x108);
            fVar17 = -fVar17;
            plVar6 = (long *)plVar12[0x32];
          }
          fVar20 = (fVar16 + fVar20) * 0.5;
                    /* try { // try from 00a92158 to 00b9218b has its CatchHandler @ 00a92258 */
          if (fVar20 <= fVar17) {
            fVar20 = fVar17;
          }
          pcVar11 = *(code **)(*plVar6 + 0x168);
          fVar16 = (float)(int)fVar20 - fVar16;
          goto LAB_00a92174;
        }
        plVar12 = *(long **)(param_1 + 0x108);
        lVar7 = (**(code **)(*(long *)plVar12[0x32] + 0x168))();
        pcVar11 = *(code **)(*plVar12 + 0xe8);
        fVar16 = fVar16 + *(float *)(lVar7 + 4);
      }
    }
    else if (param_1[0x40] == (EventContext)0x0) {
      plVar12 = *(long **)(param_1 + 0x108);
      lVar7 = (**(code **)(*(long *)plVar12[0x32] + 0x168))();
      fVar16 = *(float *)(lVar7 + 4);
      pcVar11 = *(code **)(*plVar12 + 0xe8);
    }
    else {
      if ((*(long *)(param_1 + 0x120) == 0) ||
         (fVar16 = *(float *)(*(long *)(param_1 + 0x120) + 0x94), fVar16 == 0.0)) {
        plVar12 = *(long **)(param_1 + 0x108);
        plVar6 = (long *)plVar12[0x32];
        fVar16 = *(float *)(param_1 + 0x68) * 0.5;
      }
      else {
        plVar12 = *(long **)(param_1 + 0x108);
        plVar6 = (long *)plVar12[0x32];
      }
      pcVar11 = *(code **)(*plVar6 + 0x168);
      fVar17 = fVar20 * 0.5;
      if (fVar16 <= fVar20 * 0.5) {
        fVar17 = fVar16;
      }
      fVar16 = (float)(int)fVar17;
LAB_00a92174:
      lVar7 = (*pcVar11)();
      pcVar11 = *(code **)(*plVar12 + 0xe8);
      fVar16 = *(float *)(lVar7 + 4) - fVar16;
    }
                    /* try { // try from 00a9218c to 00b9219f has its CatchHandler @ 00a92224 */
    (*pcVar11)(fVar16,plVar12);
  }
  if (bVar5) {
    iVar10 = (int)((fVar14 + fVar15) - fVar19);
                    /* try { // try from 00a921a4 to 00b921d7 has its CatchHandler @ 00a92228 */
    fVar15 = (float)iVar10;
    if (iVar10 < 1) {
                    /* try { // try from 00a921d8 to 00b92273 has its CatchHandler @ 00a91db8 */
      fVar19 = *(float *)(param_1 + 0x74);
      if (0.0 - fVar19 <= fVar15) {
                    /* catch() { ... } // from try @ 00a92158 with catch @ 00a92258 */
        plVar12 = *(long **)(param_1 + 0x108);
      }
      else {
        if (param_1[0x40] != (EventContext)0x0) {
          if ((*(long *)(param_1 + 0x128) == 0) ||
             (fVar20 = *(float *)(*(long *)(param_1 + 0x128) + 0x90), fVar20 <= 0.0)) {
            lVar7 = **(long **)(param_1 + 0x108);
            fVar20 = *(float *)(param_1 + 100) * -0.5;
          }
          else {
            fVar20 = -fVar20;
            lVar7 = **(long **)(param_1 + 0x108);
          }
          fVar15 = (fVar19 + fVar15) * 0.5;
          if (fVar15 <= fVar20) {
            fVar15 = fVar20;
          }
          pcVar11 = *(code **)(lVar7 + 0xd8);
          fVar15 = (float)(int)fVar15 - fVar19;
          goto LAB_00a922cc;
        }
        plVar12 = *(long **)(param_1 + 0x108);
        fVar15 = -fVar19;
      }
LAB_00a922c4:
      pcVar11 = *(code **)(*plVar12 + 0xd8);
    }
    else {
      if (param_1[0x40] == (EventContext)0x0) {
        plVar12 = *(long **)(param_1 + 0x108);
                    /* catch() { ... } // from try @ 00a9218c with catch @ 00a92224 */
        fVar15 = 0.0;
                    /* catch() { ... } // from try @ 00a921a4 with catch @ 00a92228 */
        goto LAB_00a922c4;
      }
      if ((*(long *)(param_1 + 0x120) == 0) ||
         (fVar19 = *(float *)(*(long *)(param_1 + 0x120) + 0x90), fVar19 == 0.0)) {
        lVar7 = **(long **)(param_1 + 0x108);
        fVar19 = *(float *)(param_1 + 100) * 0.5;
      }
      else {
        lVar7 = **(long **)(param_1 + 0x108);
      }
      pcVar11 = *(code **)(lVar7 + 0xd8);
      fVar20 = fVar15 * 0.5;
      if (fVar19 <= fVar15 * 0.5) {
        fVar20 = fVar19;
      }
      fVar15 = (float)(int)fVar20;
    }
LAB_00a922cc:
    (*pcVar11)(fVar15);
  }
  this = (Director *)cocos2d::Director::getInstance();
  fVar15 = (float)cocos2d::Director::getDeltaTime(this);
  cVar8 = clock();
  fVar19 = (float)((double)(cVar8 - *(long *)(param_1 + 0xb0)) / 1000000.0) * 60.0 + -1.0;
  if (fVar19 <= 1.0) {
    fVar20 = *(float *)(param_1 + 0xa4);
    fVar19 = *(float *)(param_1 + 0xa8);
  }
  else {
    fVar19 = powf(0.833,fVar19);
    fVar20 = fVar19 * *(float *)(param_1 + 0xa4);
    fVar19 = fVar19 * *(float *)(param_1 + 0xa8);
    *(float *)(param_1 + 0xa4) = fVar20;
    *(float *)(param_1 + 0xa8) = fVar19;
  }
  fVar18 = fVar15 * 10.0;
  fVar17 = fVar14 - *(float *)(param_1 + 0x94);
  fVar16 = in_s1 - *(float *)(param_1 + 0x98);
  if (!bVar5) {
    fVar17 = 0.0;
  }
  if (!bVar4) {
    fVar16 = 0.0;
  }
  *(float *)(param_1 + 0xa4) = (1.0 - fVar18) * fVar20 + fVar18 * (fVar17 / fVar15);
  *(float *)(param_1 + 0xa8) = (1.0 - fVar18) * fVar19 + fVar18 * (fVar16 / fVar15);
  if (fVar17 == 0.0) {
    if (fVar16 == 0.0) goto LAB_00a923d4;
    fVar17 = (*(float *)(param_1 + 0xa0) - *(float *)(lVar13 + 0x14)) / fVar16;
  }
  else {
    fVar17 = (*(float *)(param_1 + 0x9c) - *pfVar1) / fVar17;
  }
  *(float *)(param_1 + 0xac) = ABS(fVar17);
LAB_00a923d4:
  *(float *)(param_1 + 0x94) = fVar14;
  *(float *)(param_1 + 0x98) = in_s1;
  *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)pfVar1;
  cVar8 = clock();
  *(clock_t *)(param_1 + 0xb0) = cVar8;
  if (0.0 < *(float *)(param_1 + 0x74)) {
    fVar15 = (float)(**(code **)(**(long **)(param_1 + 0x108) + 0xe0))();
    fVar19 = *(float *)(param_1 + 0x74);
    fVar15 = -fVar15;
    fVar14 = (float)NEON_fminnm(fVar19,0);
    if (fVar14 <= fVar15) {
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      fVar14 = fVar15;
      if (fVar19 <= fVar15) {
        fVar14 = fVar19;
      }
    }
    *(float *)(param_1 + 0x5c) = fVar14;
  }
  if (0.0 < *(float *)(param_1 + 0x78)) {
    lVar7 = *(long *)(param_1 + 0x108);
    lVar13 = (**(code **)(**(long **)(lVar7 + 400) + 0x168))();
    fVar15 = *(float *)(param_1 + 0x78);
    fVar19 = -(*(float *)(lVar13 + 4) - *(float *)(lVar7 + 0x54));
    fVar14 = (float)NEON_fminnm(fVar15,0);
    if (fVar14 <= fVar19) {
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      fVar14 = fVar19;
      if (fVar15 <= fVar19) {
        fVar14 = fVar15;
      }
    }
    *(float *)(param_1 + 0x60) = fVar14;
  }
  if (*(int *)(param_1 + 0xc0) != 0) {
    lVar7 = *(long *)(param_1 + 0x108);
    fVar14 = *(float *)(lVar7 + 0x50);
    lVar13 = (**(code **)(**(long **)(lVar7 + 400) + 0x168))();
    fVar15 = *(float *)(lVar13 + 4);
    fVar19 = *(float *)(lVar7 + 0x54);
    uVar9 = loopCheckingCurrent((ScrollPane *)param_1);
    if ((uVar9 & 1) != 0) {
      lVar7 = *(long *)(param_1 + 0x108);
      fVar17 = *(float *)(lVar7 + 0x50);
      lVar13 = (**(code **)(**(long **)(lVar7 + 400) + 0x168))();
      fVar20 = *(float *)(lVar13 + 4);
      fVar16 = *(float *)(lVar7 + 0x54);
      *(float *)(param_1 + 0x84) = (fVar17 - fVar14) + *(float *)(param_1 + 0x84);
      *(float *)(param_1 + 0x88) =
           ((fVar20 - fVar16) - (fVar15 - fVar19)) + *(float *)(param_1 + 0x88);
    }
  }
  _draggingPane = param_1;
  *(undefined2 *)(param_1 + 0xb8) = 0x101;
  updateScrollBarPos((ScrollPane *)param_1);
  updateScrollBarVisible((ScrollPane *)param_1);
  if (param_1[0x58] != (EventContext)0x0) {
    updatePageController((ScrollPane *)param_1);
  }
  UIEventDispatcher::dispatchEvent
            (*(UIEventDispatcher **)(param_1 + 0xf8),0x28,(void *)0x0,(Value *)&cocos2d::Value::Null
            );
  return;
}

