
/* fairygui::ScrollPane::setPosY(float, bool) */

void __thiscall fairygui::ScrollPane::setPosY(ScrollPane *this,float param_1,bool param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  float fVar4;
  float local_24;
  
  local_24 = param_1;
  GComponent::ensureBoundsCorrect(*(GComponent **)(this + 0xf8));
  if (*(int *)(this + 0xc0) == 2) {
    loopCheckingNewPos(this,&local_24,1);
    param_1 = local_24;
  }
  fVar4 = *(float *)(this + 0x78);
  local_24 = (float)NEON_fminnm(fVar4,0);
  if (local_24 <= param_1) {
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    local_24 = param_1;
    if (fVar4 <= param_1) {
      local_24 = fVar4;
    }
  }
  if (local_24 == *(float *)(this + 0x60)) {
    return;
  }
  *(float *)(this + 0x60) = local_24;
  if (*(int *)(this + 0xbc) == 1) {
    if (param_2) goto LAB_00a939b4;
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(this + 0xbc) != 0) goto LAB_00a939b4;
    uVar3 = 0xffffffff;
    if (param_2) {
      uVar3 = 1;
    }
  }
  *(undefined4 *)(this + 0xbc) = uVar3;
LAB_00a939b4:
  this[0x45] = (ScrollPane)0x1;
  lVar1 = cocos2d::Director::getInstance();
  uVar2 = cocos2d::Scheduler::isScheduled
                    (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_refresh);
  if ((uVar2 & 1) != 0) {
    return;
  }
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::schedule
            (*(Scheduler **)(lVar1 + 0xa0),__selector_refresh,(Ref *)0x0,0.0,SUB81(this,0));
  return;
}

