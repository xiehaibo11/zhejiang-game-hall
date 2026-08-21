
/* cocos2d::PointArray::setControlPoints(std::__ndk1::vector<cocos2d::Vec2,
   std::__ndk1::allocator<cocos2d::Vec2> >) */

void __thiscall cocos2d::PointArray::setControlPoints(PointArray *this,undefined8 *param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  
  pvVar1 = *(void **)(this + 0x30);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar1;
    operator_delete(pvVar1);
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
  uVar2 = *param_2;
  *(undefined8 *)(this + 0x38) = param_2[1];
  *(undefined8 *)(this + 0x30) = uVar2;
  *(undefined8 *)(this + 0x40) = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return;
}

