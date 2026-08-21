
/* cocostudio::TextureData::~TextureData() */

void __thiscall cocostudio::TextureData::~TextureData(TextureData *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__TextureData_016c8f28;
  puVar1 = *(undefined8 **)(this + 0x50);
  puVar2 = *(undefined8 **)(this + 0x58);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x50);
  }
  *(undefined8 **)(this + 0x58) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x58) = puVar1;
    operator_delete(puVar1);
  }
  if (((byte)this[0x38] & 1) != 0) {
    operator_delete(*(void **)(this + 0x48));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

