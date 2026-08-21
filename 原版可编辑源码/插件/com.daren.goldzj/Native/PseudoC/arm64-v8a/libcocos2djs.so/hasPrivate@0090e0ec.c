
/* se::internal::hasPrivate(v8::Isolate*, v8::Local<v8::Value>) */

bool se::internal::hasPrivate(Isolate *param_1,Object *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  iVar2 = v8::Object::InternalFieldCount(param_2);
  if (iVar2 < 1) {
    lVar3 = v8::String::NewFromUtf8(param_1,KEY_PRIVATE_DATA,0,0xffffffff);
    bVar1 = false;
    if (lVar3 != 0) {
      uVar4 = v8::Isolate::GetCurrentContext(param_1);
      uVar5 = v8::Object::Has(param_2,uVar4,lVar3);
      if ((uVar5 & 0xff) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = (uVar5 & 0xff00) != 0;
      }
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

