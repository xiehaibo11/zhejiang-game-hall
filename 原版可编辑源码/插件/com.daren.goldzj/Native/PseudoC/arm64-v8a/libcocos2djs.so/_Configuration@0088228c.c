
/* cocos2d::Configuration::~Configuration() */

void __thiscall cocos2d::Configuration::~Configuration(Configuration *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  *(undefined ***)this = &PTR__Configuration_01c66f18;
  puVar1 = *(void **)(this + 0x58);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    cocos2d::Value::~Value((Value *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  Ref::~Ref((Ref *)this);
  operator_delete(this);
  return;
}

