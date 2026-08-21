
/* fairygui::GearXY::~GearXY() */

void __thiscall fairygui::GearXY::~GearXY(GearXY *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__GearXY_016aa6b8;
  cocos2d::Vec4::~Vec4((Vec4 *)(this + 0x50));
  puVar1 = *(void **)(this + 0x38);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    cocos2d::Vec4::~Vec4((Vec4 *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  GearBase::~GearBase((GearBase *)this);
  return;
}

