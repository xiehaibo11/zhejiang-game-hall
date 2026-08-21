
/* cocos2d::JumpBy::initWithDuration(float, cocos2d::Vec2 const&, float, int) */

undefined4 __thiscall
cocos2d::JumpBy::initWithDuration
          (JumpBy *this,float param_1,Vec2 *param_2,float param_3,int param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (param_4 < 0) {
    log("JumpBy::initWithDuration error: Number of jumps must be >= 0");
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    fVar3 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar3 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(undefined2 *)(this + 0x54) = 1;
    *(float *)(this + 0x4c) = fVar3;
    uVar2 = *(undefined8 *)param_2;
    *(float *)(this + 0x68) = param_3;
    *(int *)(this + 0x6c) = param_4;
    *(undefined8 *)(this + 0x60) = uVar2;
  }
  return uVar1;
}

