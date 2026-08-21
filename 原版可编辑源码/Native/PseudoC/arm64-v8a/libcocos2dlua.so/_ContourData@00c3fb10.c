
/* cocostudio::ContourData::~ContourData() */

void __thiscall cocostudio::ContourData::~ContourData(ContourData *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x28);
  *(undefined ***)this = &PTR__ContourData_016c8ef8;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

