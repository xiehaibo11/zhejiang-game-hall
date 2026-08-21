
/* v8::Object::CreationContext() */

void __thiscall v8::Object::CreationContext(Object *this)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)this;
  internal::JSReceiver::GetCreationContext((JSReceiver *)&local_18);
  return;
}

