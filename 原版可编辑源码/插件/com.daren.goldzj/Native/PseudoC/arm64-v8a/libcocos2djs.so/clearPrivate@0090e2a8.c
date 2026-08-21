
/* se::internal::clearPrivate(v8::Isolate*, se::ObjectWrap&) */

void se::internal::clearPrivate(Isolate *param_1,ObjectWrap *param_2)

{
  int iVar1;
  Object *this;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  Value *pVVar5;
  long lVar6;
  void *__ptr;
  
  this = (Object *)ObjectWrap::handle(param_2,param_1);
  iVar1 = v8::Object::InternalFieldCount(this);
  if (0 < iVar1) {
    ObjectWrap::wrap(param_2,(void *)0x0);
    return;
  }
  uVar2 = v8::Isolate::GetCurrentContext(param_1);
  lVar3 = v8::String::NewFromUtf8(param_1,KEY_PRIVATE_DATA,0,0xffffffff);
  if ((((lVar3 != 0) && (uVar4 = v8::Object::Has(this,uVar2,lVar3), (uVar4 & 0xff) != 0)) &&
      ((uVar4 & 0xff00) != 0)) &&
     ((pVVar5 = (Value *)v8::Object::Get(this,uVar2,lVar3), pVVar5 != (Value *)0x0 &&
      (lVar6 = v8::Value::ToObject(pVVar5,uVar2), lVar6 != 0)))) {
    __ptr = (void *)ObjectWrap::unwrap();
    free(__ptr);
    v8::Object::Delete(this,uVar2,lVar3);
    return;
  }
  return;
}

