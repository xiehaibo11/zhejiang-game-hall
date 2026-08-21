
/* fairygui::Transition::onTweenUpdate(fairygui::GTweener*) */

void fairygui::Transition::onTweenUpdate(GTweener *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long in_x1;
  TransitionItem *pTVar4;
  float *pfVar5;
  undefined8 *puVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float in_s1;
  float fVar11;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pTVar4 = *(TransitionItem **)(in_x1 + 0x88);
                    /* try { // try from 00a99ebc to 00b99ec3 has its CatchHandler @ 00a9a06c */
  switch(*(undefined4 *)(pTVar4 + 0x20)) {
  case 0:
  case 1:
  case 2:
  case 0xd:
    pfVar5 = *(float **)(pTVar4 + 0x48);
    lVar7 = *(long *)(*(long *)(pTVar4 + 0x28) + 0x20);
    fVar8 = (float)TweenValue::getVec2((TweenValue *)(in_x1 + 0x58));
    if (lVar7 == 0) {
      *pfVar5 = fVar8;
      pfVar5[1] = in_s1;
    }
    else {
      fVar11 = in_s1;
      fVar9 = (float)TweenValue::getVec2((TweenValue *)(in_x1 + 0x28));
      *pfVar5 = fVar8 + fVar9;
      pfVar5[1] = in_s1 + fVar11;
    }
    break;
  case 4:
  case 5:
    **(undefined4 **)(pTVar4 + 0x48) = *(undefined4 *)(in_x1 + 0x58);
    break;
  case 6:
    pfVar5 = *(float **)(pTVar4 + 0x48);
    uVar3 = TweenValue::getColor((TweenValue *)(in_x1 + 0x58));
    uVar2 = (uint)uVar3;
    *pfVar5 = (float)(uVar2 & 0xff);
    pfVar5[1] = (float)(uVar2 >> 8 & 0xff);
    pfVar5[2] = (float)(uVar2 >> 0x10 & 0xff);
    pfVar5[3] = (float)(uVar3 >> 0x18 & 0xff);
    break;
  case 0xb:
    uVar10 = TweenValue::getVec2((TweenValue *)(in_x1 + 0x70));
    lVar7 = *(long *)(pTVar4 + 0x48);
    *(undefined4 *)(lVar7 + 0x10) = uVar10;
    *(float *)(lVar7 + 0x14) = in_s1;
    break;
  case 0xc:
    puVar6 = *(undefined8 **)(pTVar4 + 0x48);
    TweenValue::getVec4();
    puVar6[1] = uStack_68;
    *puVar6 = local_70;
    cocos2d::Vec4::~Vec4((Vec4 *)&local_70);
  }
  applyValue((Transition *)param_1,pTVar4);
                    /* try { // try from 00a99fb4 to 00b99fbb has its CatchHandler @ 00a99ff0 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00a99fcc to 00b99fd3 has its CatchHandler @ 00a99fe8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a99fd4 to 00b9a11b has its CatchHandler @ 00a998b0 */
  __stack_chk_fail();
}

