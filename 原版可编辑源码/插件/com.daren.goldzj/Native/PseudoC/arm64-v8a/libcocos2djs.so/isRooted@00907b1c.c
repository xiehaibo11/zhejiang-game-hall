
/* se::Object::isRooted() const */

bool __thiscall se::Object::isRooted(Object *this)

{
  return *(int *)(this + 0x38) != 0;
}

