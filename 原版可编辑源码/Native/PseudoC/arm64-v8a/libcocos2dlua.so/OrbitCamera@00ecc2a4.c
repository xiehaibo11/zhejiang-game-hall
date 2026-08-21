
/* cocos2d::OrbitCamera::OrbitCamera() */

void __thiscall cocos2d::OrbitCamera::OrbitCamera(OrbitCamera *this)

{
  Action::Action((Action *)this);
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined ***)this = &PTR__Action_016f5648;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f56a8;
  Vec3::Vec3((Vec3 *)(this + 0x58),0.0,0.0,0.0);
  Vec3::Vec3((Vec3 *)(this + 100),0.0,0.0,1.1920929e-07);
  Vec3::Vec3((Vec3 *)(this + 0x70),0.0,1.0,0.0);
  *(undefined8 *)(this + 0x84) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x94) = 0;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined ***)this = &PTR__OrbitCamera_016f56d0;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f5730;
  *(undefined8 *)(this + 0x9c) = 0;
  return;
}

