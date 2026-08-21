
/* se::HandleObject::~HandleObject() */

void __thiscall se::HandleObject::~HandleObject(HandleObject *this)

{
  if (*(Object **)this != (Object *)0x0) {
    Object::unroot(*(Object **)this);
    RefCounter::decRef(*(RefCounter **)this);
  }
  return;
}

