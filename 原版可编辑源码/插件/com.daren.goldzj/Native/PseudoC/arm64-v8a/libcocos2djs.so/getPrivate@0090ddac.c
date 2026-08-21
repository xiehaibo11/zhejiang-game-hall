
/* se::internal::getPrivate(v8::Isolate*, v8::Local<v8::Value>) */

undefined8 se::internal::getPrivate(Isolate *param_1,Value *param_2)

{
  int iVar1;
  undefined8 uVar2;
  Object *this;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  Value *pVVar6;
  undefined8 *puVar7;
  
  uVar2 = v8::Isolate::GetCurrentContext(param_1);
  this = (Object *)v8::Value::ToObject(param_2,uVar2);
  uVar3 = 0;
  if (this != (Object *)0x0) {
    iVar1 = v8::Object::InternalFieldCount(this);
    if (0 < iVar1) {
      uVar3 = ObjectWrap::unwrap(this);
      return uVar3;
    }
    lVar4 = v8::String::NewFromUtf8(param_1,KEY_PRIVATE_DATA,0,0xffffffff);
    uVar3 = 0;
    if (lVar4 != 0) {
      uVar5 = v8::Object::Has(this,uVar2,lVar4);
      uVar3 = 0;
      if (((((uVar5 & 0xff) != 0) && ((uVar5 & 0xff00) != 0)) &&
          (pVVar6 = (Value *)v8::Object::Get(this,uVar2,lVar4), uVar3 = 0, pVVar6 != (Value *)0x0))
         && (lVar4 = v8::Value::ToObject(pVVar6,uVar2), uVar3 = 0, lVar4 != 0)) {
        puVar7 = (undefined8 *)ObjectWrap::unwrap();
        uVar3 = *puVar7;
      }
    }
  }
  return uVar3;
}

