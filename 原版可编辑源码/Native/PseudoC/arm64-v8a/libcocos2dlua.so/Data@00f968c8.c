
/* cocos2d::Data::Data(cocos2d::Data&&) */

void __thiscall cocos2d::Data::Data(Data *this,Data *param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = 0;
  if (*(long *)param_1 != 0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    uVar1 = *(undefined8 *)param_1;
  }
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}

