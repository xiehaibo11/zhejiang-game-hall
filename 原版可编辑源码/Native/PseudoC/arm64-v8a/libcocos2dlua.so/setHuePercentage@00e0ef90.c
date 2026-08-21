
/* cocos2d::extension::ControlHuePicker::setHuePercentage(float) */

void __thiscall
cocos2d::extension::ControlHuePicker::setHuePercentage(ControlHuePicker *this,float param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float local_60;
  float fStack_5c;
  undefined1 auStack_58 [8];
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(float *)(this + 0x35c) = param_1;
  *(float *)(this + 0x358) = param_1 * 360.0;
  (**(code **)(**(long **)(this + 0x360) + 0x370))(auStack_58);
  fVar2 = *(float *)(this + 0x370);
  fVar3 = *(float *)(this + 0x374);
  fVar4 = local_50 * 0.5 + -15.0;
  sincosf((*(float *)(this + 0x35c) * 360.0 + -180.0) * 0.017453292,&fStack_5c,&local_60);
                    /* try { // try from 00e0f058 to 00f0f05f has its CatchHandler @ 00e0f1b8 */
  (**(code **)(**(long **)(this + 0x368) + 200))
            (fVar2 + local_50 * 0.5 + fVar4 * local_60,fVar3 + fStack_4c * 0.5 + fVar4 * fStack_5c);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

