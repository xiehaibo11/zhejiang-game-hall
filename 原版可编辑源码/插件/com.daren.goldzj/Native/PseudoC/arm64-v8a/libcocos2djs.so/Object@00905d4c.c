
/* se::Object::Object() */

void __thiscall se::Object::Object(Object *this)

{
  RefCounter::RefCounter((RefCounter *)this);
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__Object_01c68a98;
  ObjectWrap::ObjectWrap((ObjectWrap *)(this + 0x18));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  return;
}

