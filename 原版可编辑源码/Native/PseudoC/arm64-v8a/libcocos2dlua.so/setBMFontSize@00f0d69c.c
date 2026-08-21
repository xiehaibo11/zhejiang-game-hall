
/* cocos2d::Label::setBMFontSize(float) */

void __thiscall cocos2d::Label::setBMFontSize(Label *this,float param_1)

{
  undefined4 in_register_00005004;
  
  if (*(int *)(this + 0x308) == 1) {
    (**(code **)(*(long *)this + 0x540))
              (CONCAT44(in_register_00005004,param_1),this,this + 0x348,&Vec2::ZERO);
    this[0x30c] = (Label)0x1;
  }
  *(float *)(this + 0x688) = param_1;
  return;
}

