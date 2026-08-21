
/* cocos2d::PUDynamicAttributeCurved::addControlPoint(float, float) */

void __thiscall
cocos2d::PUDynamicAttributeCurved::addControlPoint
          (PUDynamicAttributeCurved *this,float param_1,float param_2)

{
  undefined8 *puVar1;
  long lVar2;
  float local_30;
  float fStack_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  puVar1 = *(undefined8 **)(this + 0xb8);
  local_30 = param_1;
  fStack_2c = param_2;
  if (puVar1 < *(undefined8 **)(this + 0xc0)) {
    *puVar1 = CONCAT44(param_2,param_1);
    *(undefined8 **)(this + 0xb8) = puVar1 + 1;
  }
  else {
    std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
    __push_back_slow_path<cocos2d::Vec2>
              ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)(this + 0xb0),
               (Vec2 *)&local_30);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

