
/* cocostudio::ContourData::addVertex(cocos2d::Vec2&) */

void __thiscall cocostudio::ContourData::addVertex(ContourData *this,Vec2 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x30);
  if (puVar1 != *(undefined8 **)(this + 0x38)) {
    *puVar1 = *(undefined8 *)param_1;
    *(undefined8 **)(this + 0x30) = puVar1 + 1;
    return;
  }
  std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
  __push_back_slow_path<cocos2d::Vec2_const&>
            ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)(this + 0x28),param_1);
  return;
}

