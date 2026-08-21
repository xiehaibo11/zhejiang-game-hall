
/* cocosbuilder::CCBSequenceProperty::~CCBSequenceProperty() */

void __thiscall cocosbuilder::CCBSequenceProperty::~CCBSequenceProperty(CCBSequenceProperty *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined ***)this = &PTR__CCBSequenceProperty_016cfd38;
  puVar1 = *(undefined8 **)(this + 0x48);
  puVar2 = *(undefined8 **)(this + 0x50);
  if (puVar1 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar1);
      puVar1 = puVar1 + 1;
    } while (puVar2 != puVar1);
    puVar1 = *(undefined8 **)(this + 0x48);
  }
  *(undefined8 **)(this + 0x50) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x50) = puVar1;
    operator_delete(puVar1);
  }
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

