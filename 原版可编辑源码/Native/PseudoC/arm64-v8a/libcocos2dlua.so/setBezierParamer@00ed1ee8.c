
/* cocos2d::EaseBezierAction::setBezierParamer(float, float, float, float) */

void __thiscall
cocos2d::EaseBezierAction::setBezierParamer
          (EaseBezierAction *this,float param_1,float param_2,float param_3,float param_4)

{
  *(float *)(this + 0x60) = param_1;
  *(float *)(this + 100) = param_2;
  *(float *)(this + 0x68) = param_3;
  *(float *)(this + 0x6c) = param_4;
  return;
}

