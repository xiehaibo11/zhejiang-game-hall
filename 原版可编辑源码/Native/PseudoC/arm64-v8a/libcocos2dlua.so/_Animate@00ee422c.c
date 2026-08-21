
/* cocos2d::Animate::~Animate() */

void __thiscall cocos2d::Animate::~Animate(Animate *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__Animate_016f8960;
  *(undefined ***)(this + 0x28) = &PTR_clone_016f89c0;
  if (*(Ref **)(this + 0x78) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x78));
  }
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x68));
  }
  puVar2 = *(undefined8 **)(this + 0x58);
  if (puVar2 != (undefined8 *)0x0) {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 != (void *)0x0) {
      puVar2[1] = pvVar1;
      operator_delete(pvVar1);
    }
    operator_delete(puVar2);
  }
  *(undefined8 *)(this + 0x58) = 0;
  if (*(Ref **)(this + 0x80) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x80));
  }
  Action::~Action((Action *)this);
  return;
}

