
/* v8::internal::Object::GetOrCreateHash(v8::internal::Isolate*) */

void __thiscall v8::internal::Object::GetOrCreateHash(Object *this,Isolate *param_1)

{
  ulong uVar1;
  undefined8 local_28;
  
  uVar1 = GetSimpleHash(*(undefined8 *)this);
  if ((uVar1 & 1) != 0) {
    local_28 = *(undefined8 *)this;
    JSReceiver::GetOrCreateIdentityHash((JSReceiver *)&local_28,param_1);
  }
  return;
}

