
/* cocos2d::PUDynamicAttributeCurved::PUDynamicAttributeCurved(cocos2d::PUDynamicAttributeCurved
   const&) */

void __thiscall
cocos2d::PUDynamicAttributeCurved::PUDynamicAttributeCurved
          (PUDynamicAttributeCurved *this,PUDynamicAttributeCurved *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  Ref::Ref((Ref *)this);
                    /* try { // try from 00e3d414 to 00f3d41b has its CatchHandler @ 00e3d73c */
                    /* try { // try from 00e3d41c to 00f3d63b has its CatchHandler @ 00e3d3c4 */
  *(undefined ***)this = &PTR__PUDynamicAttributeCurved_016f1c48;
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  this[0x30] = param_1[0x30];
  std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::vector
            ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(this + 0x38),
             (vector *)(param_1 + 0x38));
  std::__ndk1::vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>>::vector
            ((vector<cocos2d::Vec3,std::__ndk1::allocator<cocos2d::Vec3>> *)(this + 0x50),
             (vector *)(param_1 + 0x50));
  Mat4::Mat4((Mat4 *)(this + 0x68),(Mat4 *)(param_1 + 0x68));
  uVar2 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0x24) = 2;
  *(undefined4 *)(this + 0xa8) = uVar2;
  puVar4 = *(undefined8 **)(param_1 + 0xb0);
  if (puVar4 != *(undefined8 **)(param_1 + 0xb8)) {
    puVar3 = *(undefined8 **)(param_1 + 0xb8) + -1;
    while (std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
           __push_back_slow_path<cocos2d::Vec2_const&>
                     ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)(this + 0xb0),
                      (Vec2 *)puVar4), puVar3 != puVar4) {
      while( true ) {
        puVar1 = *(undefined8 **)(this + 0xb8);
        puVar4 = puVar4 + 1;
        if (puVar1 == *(undefined8 **)(this + 0xc0)) break;
        *puVar1 = *puVar4;
        *(undefined8 **)(this + 0xb8) = puVar1 + 1;
        if (puVar3 == puVar4) goto LAB_00e3d4d4;
      }
    }
  }
LAB_00e3d4d4:
  processControlPoints(this);
  return;
}

