
/* v8::Object::IsApiWrapper() */

uint __thiscall v8::Object::IsApiWrapper(Object *this)

{
  uint uVar1;
  undefined8 local_18;
  
  local_18 = *(undefined8 *)this;
  uVar1 = internal::JSObject::IsApiWrapper((JSObject *)&local_18);
  return uVar1 & 1;
}

