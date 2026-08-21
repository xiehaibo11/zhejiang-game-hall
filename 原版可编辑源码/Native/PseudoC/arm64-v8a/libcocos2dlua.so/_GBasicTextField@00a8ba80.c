
/* fairygui::GBasicTextField::~GBasicTextField() */

void __thiscall fairygui::GBasicTextField::~GBasicTextField(GBasicTextField *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x1f8);
  *(undefined ***)this = &PTR__GBasicTextField_016a6b60;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = (void *)puVar3[2];
    while (puVar1 != (void *)0x0) {
      pvVar2 = (void *)*puVar1;
      cocos2d::Value::~Value((Value *)(puVar1 + 5));
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar2;
    }
    pvVar2 = (void *)*puVar3;
    *puVar3 = 0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    operator_delete(puVar3);
  }
  *(undefined8 *)(this + 0x1f8) = 0;
  if (((byte)this[0x1d8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1e8));
  }
  GObject::~GObject((GObject *)this);
  return;
}

