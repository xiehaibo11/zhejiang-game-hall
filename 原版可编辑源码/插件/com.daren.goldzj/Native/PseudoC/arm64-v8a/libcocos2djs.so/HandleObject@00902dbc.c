
/* se::HandleObject::HandleObject(se::Object*) */

void __thiscall se::HandleObject::HandleObject(HandleObject *this,Object *param_1)

{
  *(Object **)this = param_1;
  if (param_1 != (Object *)0x0) {
    Object::root(param_1);
    return;
  }
  return;
}

