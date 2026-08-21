
/* cocos2d::extension::ControlButton::~ControlButton() */

void __thiscall cocos2d::extension::ControlButton::~ControlButton(ControlButton *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__ControlButton_016e8b90;
  if (*(Ref **)(this + 0x380) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x380));
  }
  if (*(Ref **)(this + 0x388) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x388));
  }
  Map<int,cocos2d::ui::Scale9Sprite*>::~Map((Map<int,cocos2d::ui::Scale9Sprite*> *)(this + 0x420));
  Map<int,cocos2d::Node*>::~Map((Map<int,cocos2d::Node*> *)(this + 0x3f8));
  puVar1 = *(void **)(this + 0x3e0);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x3d0);
  *(undefined8 *)(this + 0x3d0) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  puVar1 = *(void **)(this + 0x3b8);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 3) & 1) != 0) {
      operator_delete((void *)puVar1[5]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x3a8);
  *(undefined8 *)(this + 0x3a8) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (((byte)this[0x360] & 1) != 0) {
    operator_delete(*(void **)(this + 0x370));
  }
  Control::~Control((Control *)this);
  return;
}

