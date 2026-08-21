
/* cocostudio::ColliderBody::~ColliderBody() */

void __thiscall cocostudio::ColliderBody::~ColliderBody(ColliderBody *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__ColliderBody_016c9d08;
  if (*(Ref **)(this + 0x40) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(this + 0x40));
  }
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

