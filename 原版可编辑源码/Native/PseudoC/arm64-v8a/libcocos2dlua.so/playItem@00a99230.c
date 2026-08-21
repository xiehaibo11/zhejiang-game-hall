
/* fairygui::Transition::playItem(fairygui::TransitionItem*) */

void __thiscall fairygui::Transition::playItem(Transition *this,TransitionItem *param_1)

{
  Transition TVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  GTweener *pGVar5;
  float *pfVar6;
  code *pcVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  float fVar11;
  undefined8 local_200 [2];
  undefined8 local_1f0 [2];
  undefined **local_1e0;
  code *local_1d8;
  undefined8 uStack_1d0;
  Transition *local_1c8;
  undefined ***local_1c0;
  undefined **local_1b0;
  code *local_1a8;
  undefined8 uStack_1a0;
  Transition *local_198;
  undefined ***local_190;
  undefined **local_180;
  code *local_178;
  undefined8 uStack_170;
  Transition *local_168;
  undefined ***local_160;
  undefined **local_150;
  code *local_148;
  undefined8 uStack_140;
  Transition *local_138;
  undefined ***local_130;
  undefined **local_120;
  code *local_118;
  undefined8 uStack_110;
  Transition *local_108;
  undefined ***local_100;
  undefined **local_f0;
  code *local_e8;
  undefined8 uStack_e0;
  Transition *local_d8;
  undefined ***local_d0;
  undefined **local_c0;
  code *local_b8;
  undefined8 uStack_b0;
  Transition *local_a8;
  undefined ***local_a0;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  pfVar6 = *(float **)(param_1 + 0x28);
  if (pfVar6 == (float *)0x0) {
    if (*(int *)(param_1 + 0x20) == 0xb) {
      pfVar6 = *(float **)(param_1 + 0x48);
      if (this[0xb4] == (Transition)0x0) {
                    /* try { // try from 00a993c0 to 00b9941b has its CatchHandler @ 00a992f4 */
        fVar11 = *(float *)param_1;
      }
      else {
        fVar11 = (*(float *)(this + 0xb8) - *(float *)param_1) - pfVar6[1];
      }
      if ((*(float *)(this + 0xd0) != -1.0) && (*(float *)(this + 0xd0) < fVar11))
      goto LAB_00a9978c;
      pfVar6[2] = 0.0;
      pfVar6[3] = 0.0;
      pfVar6[4] = 0.0;
      pfVar6[5] = 0.0;
      pGVar5 = (GTweener *)GTween::shake((Vec2 *)&cocos2d::Vec2::ZERO,*pfVar6,pfVar6[1]);
      pGVar5 = (GTweener *)GTweener::setDelay(pGVar5,fVar11);
      pGVar5 = (GTweener *)GTweener::setTimeScale(pGVar5,*(float *)(this + 200));
                    /* catch() { ... } // from try @ 00a99344 with catch @ 00a99400
                       catch() { ... } // from try @ 00a993ac with catch @ 00a99400 */
      pGVar5 = (GTweener *)GTweener::setTargetAny(pGVar5,param_1);
      local_130 = &local_150;
      uStack_140 = 0;
      local_148 = onTweenStart;
      local_150 = &PTR_FUN_016a7610;
      local_138 = this;
      pGVar5 = (GTweener *)GTweener::onStart(pGVar5,&local_150);
      local_160 = &local_180;
      uStack_170 = 0;
      local_178 = onTweenUpdate;
      local_180 = &PTR_FUN_016a7610;
      local_168 = this;
      pGVar5 = (GTweener *)GTweener::onUpdate(pGVar5,&local_180);
      local_1b0 = &PTR_FUN_016a7610;
      uStack_1a0 = 0;
      local_1a8 = onTweenComplete;
      local_198 = this;
      local_190 = &local_1b0;
      uVar4 = GTweener::onComplete1(pGVar5,&local_1b0);
      *(undefined8 *)(param_1 + 0x80) = uVar4;
      if (&local_1b0 == local_190) {
        pcVar7 = (code *)(*local_190)[4];
LAB_00a99568:
        (*pcVar7)();
      }
      else if (local_190 != (undefined ***)0x0) {
        pcVar7 = (code *)(*local_190)[5];
        goto LAB_00a99568;
      }
                    /* catch() { ... } // from try @ 00a99528 with catch @ 00a9956c */
      if (&local_180 == local_160) {
        pcVar7 = (code *)(*local_160)[4];
LAB_00a99594:
        (*pcVar7)();
      }
      else if (local_160 != (undefined ***)0x0) {
        pcVar7 = (code *)(*local_160)[5];
        goto LAB_00a99594;
      }
      if (&local_150 == local_130) {
        pcVar7 = (code *)(*local_130)[4];
LAB_00a995c0:
        (*pcVar7)();
      }
      else if (local_130 != (undefined ***)0x0) {
        pcVar7 = (code *)(*local_130)[5];
        goto LAB_00a995c0;
      }
      if (0.0 <= *(float *)(this + 0xd0)) {
        pGVar5 = *(GTweener **)(param_1 + 0x80);
        fVar11 = *(float *)(this + 0xd0) - *(float *)param_1;
        goto LAB_00a9977c;
      }
      goto LAB_00a99780;
    }
    if (this[0xb4] == (Transition)0x0) {
      fVar11 = *(float *)param_1;
    }
    else {
      fVar11 = *(float *)(this + 0xb8) - *(float *)param_1;
    }
                    /* try { // try from 00a99494 to 00b99527 has its CatchHandler @ 00a99494
                       catch() { ... } // from try @ 00a99494 with catch @ 00a99494
                       catch() { ... } // from try @ 00a99530 with catch @ 00a99494 */
    if (fVar11 <= *(float *)(this + 0xcc)) {
      applyValue(this,param_1);
                    /* try { // try from 00a99528 to 00b9952f has its CatchHandler @ 00a9956c */
                    /* try { // try from 00a99530 to 00b99587 has its CatchHandler @ 00a99494 */
      if ((*(float *)(this + 0xcc) <= *(float *)param_1) &&
         (*(long **)(param_1 + 0x70) != (long *)0x0)) {
        pcVar7 = *(code **)(**(long **)(param_1 + 0x70) + 0x30);
        goto LAB_00a99824;
      }
      goto LAB_00a9978c;
    }
    if ((*(float *)(this + 0xd0) != -1.0) && (*(float *)(this + 0xd0) < fVar11)) goto LAB_00a9978c;
    *(int *)(this + 100) = *(int *)(this + 100) + 1;
    pGVar5 = (GTweener *)GTween::delayedCall(fVar11);
    pGVar5 = (GTweener *)GTweener::setTimeScale(pGVar5,*(float *)(this + 200));
    pGVar5 = (GTweener *)GTweener::setTargetAny(pGVar5,param_1);
    local_1e0 = &PTR_FUN_016a7610;
    uStack_1d0 = 0;
    local_1d8 = onDelayedPlayItem;
    local_1c8 = this;
    local_1c0 = &local_1e0;
    uVar4 = GTweener::onComplete1(pGVar5,&local_1e0);
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    if (&local_1e0 == local_1c0) {
      pcVar7 = (code *)(*local_1c0)[4];
    }
    else {
      if (local_1c0 == (undefined ***)0x0) goto LAB_00a9978c;
      pcVar7 = (code *)(*local_1c0)[5];
    }
LAB_00a99824:
    (*pcVar7)();
    pGVar5 = *(GTweener **)(param_1 + 0x80);
    if (pGVar5 == (GTweener *)0x0) goto LAB_00a9979c;
    goto LAB_00a99794;
  }
  TVar1 = this[0xb4];
  if (TVar1 == (Transition)0x0) {
    fVar11 = *(float *)param_1;
  }
  else {
    fVar11 = (*(float *)(this + 0xb8) - *(float *)param_1) - *pfVar6;
  }
                    /* try { // try from 00a992f4 to 00b99343 has its CatchHandler @ 00a992f4
                       catch() { ... } // from try @ 00a992f4 with catch @ 00a992f4
                       catch() { ... } // from try @ 00a9937c with catch @ 00a992f4
                       catch() { ... } // from try @ 00a993c0 with catch @ 00a992f4 */
  if ((*(float *)(this + 0xd0) != -1.0) && (*(float *)(this + 0xd0) < fVar11)) goto LAB_00a9978c;
  lVar9 = 0x10;
  if (TVar1 != (Transition)0x0) {
    lVar9 = 0x18;
  }
  pfVar8 = *(float **)((long)pfVar6 + lVar9);
  lVar9 = 0x18;
  if (TVar1 != (Transition)0x0) {
    lVar9 = 0x10;
  }
  pfVar10 = *(float **)((long)pfVar6 + lVar9);
  if (*(char *)(pfVar8 + 4) == '\0') {
                    /* try { // try from 00a99344 to 00b9937b has its CatchHandler @ 00a99400 */
    bVar3 = *(char *)(pfVar10 + 4) != '\0';
  }
  else {
    bVar3 = true;
  }
  lVar9 = *(long *)(param_1 + 0x48);
  *(bool *)(lVar9 + 0x10) = bVar3;
  if (*(char *)((long)pfVar8 + 0x11) == '\0') {
    bVar3 = *(char *)((long)pfVar10 + 0x11) != '\0';
  }
  else {
    bVar3 = true;
  }
  *(bool *)(lVar9 + 0x11) = bVar3;
                    /* try { // try from 00a9937c to 00b993ab has its CatchHandler @ 00a992f4 */
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
  case 1:
  case 2:
  case 0xd:
    local_1f0[0] = *(undefined8 *)pfVar8;
                    /* try { // try from 00a993ac to 00b993bf has its CatchHandler @ 00a99400 */
    local_200[0] = *(undefined8 *)pfVar10;
    uVar4 = GTween::to((Vec2 *)local_1f0,(Vec2 *)local_200,*pfVar6);
    break;
  default:
    goto switchD_00a99398_caseD_3;
  case 4:
  case 5:
    uVar4 = GTween::to(*pfVar8,*pfVar10,*pfVar6);
    break;
  case 6:
    cocos2d::Color4B::Color4B
              ((Color4B *)local_1f0,(uchar)(int)*pfVar8,(uchar)(int)pfVar8[1],(uchar)(int)pfVar8[2],
               (uchar)(int)pfVar8[3]);
    local_200[0] = CONCAT44(local_200[0]._4_4_,(undefined4)local_1f0[0]);
    cocos2d::Color4B::Color4B
              ((Color4B *)local_1f0,(uchar)(int)*pfVar10,(uchar)(int)pfVar10[1],
               (uchar)(int)pfVar10[2],(uchar)(int)pfVar10[3]);
    uVar4 = GTween::to((Color4B *)local_200,(Color4B *)local_1f0,**(float **)(param_1 + 0x28));
    break;
  case 0xc:
    cocos2d::Vec4::Vec4((Vec4 *)local_1f0,*pfVar8,pfVar8[1],pfVar8[2],pfVar8[3]);
    cocos2d::Vec4::Vec4((Vec4 *)local_200,*pfVar10,pfVar10[1],pfVar10[2],pfVar10[3]);
    uVar4 = GTween::to((Vec4 *)local_1f0,(Vec4 *)local_200,**(float **)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x80) = uVar4;
    cocos2d::Vec4::~Vec4((Vec4 *)local_200);
    cocos2d::Vec4::~Vec4((Vec4 *)local_1f0);
    goto switchD_00a99398_caseD_3;
  }
  *(undefined8 *)(param_1 + 0x80) = uVar4;
switchD_00a99398_caseD_3:
  pGVar5 = (GTweener *)GTweener::setDelay(*(GTweener **)(param_1 + 0x80),fVar11);
  pGVar5 = (GTweener *)GTweener::setEase(pGVar5,*(undefined4 *)(*(long *)(param_1 + 0x28) + 4));
  pGVar5 = (GTweener *)
           GTweener::setRepeat(pGVar5,*(int *)(*(long *)(param_1 + 0x28) + 8),
                               *(bool *)(*(long *)(param_1 + 0x28) + 0xc));
  pGVar5 = (GTweener *)GTweener::setTimeScale(pGVar5,*(float *)(this + 200));
  pGVar5 = (GTweener *)GTweener::setTargetAny(pGVar5,param_1);
  local_a0 = &local_c0;
  uStack_b0 = 0;
  local_b8 = onTweenStart;
                    /* try { // try from 00a99698 to 00b996e7 has its CatchHandler @ 00a99698
                       catch() { ... } // from try @ 00a99698 with catch @ 00a99698
                       catch() { ... } // from try @ 00a99720 with catch @ 00a99698
                       catch() { ... } // from try @ 00a99764 with catch @ 00a99698 */
  local_c0 = &PTR_FUN_016a7610;
  local_a8 = this;
  pGVar5 = (GTweener *)GTweener::onStart(pGVar5,&local_c0);
  local_d0 = &local_f0;
  uStack_e0 = 0;
  local_e8 = onTweenUpdate;
  local_f0 = &PTR_FUN_016a7610;
  local_d8 = this;
  pGVar5 = (GTweener *)GTweener::onUpdate(pGVar5,&local_f0);
  local_120 = &PTR_FUN_016a7610;
  uStack_110 = 0;
  local_118 = onTweenComplete;
  local_108 = this;
  local_100 = &local_120;
  GTweener::onComplete1(pGVar5,&local_120);
                    /* try { // try from 00a996e8 to 00b9971f has its CatchHandler @ 00a997a4 */
  if (&local_120 == local_100) {
    pcVar7 = (code *)(*local_100)[4];
LAB_00a9970c:
    (*pcVar7)();
  }
  else if (local_100 != (undefined ***)0x0) {
    pcVar7 = (code *)(*local_100)[5];
    goto LAB_00a9970c;
  }
  if (&local_f0 == local_d0) {
    pcVar7 = (code *)(*local_d0)[4];
LAB_00a99738:
    (*pcVar7)();
  }
  else {
                    /* try { // try from 00a99720 to 00b9974f has its CatchHandler @ 00a99698 */
    if (local_d0 != (undefined ***)0x0) {
      pcVar7 = (code *)(*local_d0)[5];
      goto LAB_00a99738;
    }
  }
  if (&local_c0 == local_a0) {
    pcVar7 = (code *)(*local_a0)[4];
LAB_00a99764:
                    /* try { // try from 00a99764 to 00b997bf has its CatchHandler @ 00a99698 */
    (*pcVar7)();
  }
  else if (local_a0 != (undefined ***)0x0) {
                    /* try { // try from 00a99750 to 00b99763 has its CatchHandler @ 00a997a4 */
    pcVar7 = (code *)(*local_a0)[5];
    goto LAB_00a99764;
  }
  if (0.0 <= *(float *)(this + 0xd0)) {
    pGVar5 = *(GTweener **)(param_1 + 0x80);
    fVar11 = *(float *)(this + 0xd0) - fVar11;
LAB_00a9977c:
    GTweener::setBreakpoint(pGVar5,fVar11);
  }
LAB_00a99780:
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
LAB_00a9978c:
  pGVar5 = *(GTweener **)(param_1 + 0x80);
  if (pGVar5 != (GTweener *)0x0) {
LAB_00a99794:
    GTweener::seek(pGVar5,*(float *)(this + 0xcc));
  }
LAB_00a9979c:
                    /* catch() { ... } // from try @ 00a996e8 with catch @ 00a997a4
                       catch() { ... } // from try @ 00a99750 with catch @ 00a997a4 */
  if (*(long *)(lVar2 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

