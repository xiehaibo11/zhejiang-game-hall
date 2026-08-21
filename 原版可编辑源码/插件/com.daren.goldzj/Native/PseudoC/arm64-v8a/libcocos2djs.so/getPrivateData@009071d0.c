
/* se::Object::getPrivateData() const */

void __thiscall se::Object::getPrivateData(Object *this)

{
  Isolate *pIVar1;
  undefined8 uVar2;
  
  pIVar1 = DAT_01d371a8;
  if (*(long *)(this + 0x40) == 0) {
    uVar2 = ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
    uVar2 = internal::getPrivate(pIVar1,uVar2);
    *(undefined8 *)(this + 0x40) = uVar2;
  }
  return;
}

