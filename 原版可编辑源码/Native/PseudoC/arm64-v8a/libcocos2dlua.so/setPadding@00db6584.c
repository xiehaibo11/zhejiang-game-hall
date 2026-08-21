
/* cocos2d::ui::ListView::setPadding(float, float, float, float) */

void __thiscall
cocos2d::ui::ListView::setPadding
          (ListView *this,float param_1,float param_2,float param_3,float param_4)

{
  if ((((*(float *)(this + 0x8e0) == param_1) && (*(float *)(this + 0x8e4) == param_2)) &&
      (*(float *)(this + 0x8e8) == param_3)) && (*(float *)(this + 0x8ec) == param_4)) {
    return;
  }
  *(float *)(this + 0x8e0) = param_1;
  *(float *)(this + 0x8e4) = param_2;
  *(float *)(this + 0x8e8) = param_3;
  *(float *)(this + 0x8ec) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00db65d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x6a8))();
  return;
}

