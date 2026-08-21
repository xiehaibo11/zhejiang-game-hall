
/* cocostudio::ColliderBody::ColliderBody(cocostudio::ContourData*) */

void __thiscall cocostudio::ColliderBody::ColliderBody(ColliderBody *this,ContourData *param_1)

{
  cocos2d::Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__ColliderBody_016c9d08;
  *(undefined8 *)(this + 0x28) = 0;
  *(ContourData **)(this + 0x40) = param_1;
  if (param_1 != (ContourData *)0x0) {
    cocos2d::Ref::retain((Ref *)param_1);
  }
  return;
}

