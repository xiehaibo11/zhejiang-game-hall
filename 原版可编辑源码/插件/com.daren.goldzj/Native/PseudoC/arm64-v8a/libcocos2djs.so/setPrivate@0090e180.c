
/* se::internal::setPrivate(v8::Isolate*, se::ObjectWrap&, void*, se::internal::PrivateData**) */

void se::internal::setPrivate
               (Isolate *param_1,ObjectWrap *param_2,void *param_3,PrivateData **param_4)

{
  int iVar1;
  Object *this;
  Object *this_00;
  PrivateData *pPVar2;
  ObjectWrap *pOVar3;
  _func_void_void_ptr *p_Var4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  this = (Object *)ObjectWrap::handle(param_2,param_1);
  iVar1 = v8::Object::InternalFieldCount(this);
  if (iVar1 < 1) {
    this_00 = (Object *)Object::createObjectWithClass(__jsb_CCPrivateData_class);
    pPVar2 = malloc(0x10);
    *(void **)pPVar2 = param_3;
    *(Object **)(pPVar2 + 8) = this_00;
    pOVar3 = (ObjectWrap *)Object::_getWrap(this_00);
    p_Var4 = (_func_void_void_ptr *)Class::_getFinalizeFunction(__jsb_CCPrivateData_class);
    ObjectWrap::setFinalizeCallback(pOVar3,p_Var4);
    pOVar3 = (ObjectWrap *)Object::_getWrap(this_00);
    ObjectWrap::wrap(pOVar3,pPVar2);
    lVar5 = v8::String::NewFromUtf8(param_1,KEY_PRIVATE_DATA,0,0xffffffff);
    uVar6 = v8::Isolate::GetCurrentContext(param_1);
    if (lVar5 == 0) {
      v8::V8::ToLocalEmpty();
    }
    uVar7 = Object::_getJSObject(this_00);
    v8::Object::Set(this,uVar6,lVar5,uVar7);
    if (param_4 != (PrivateData **)0x0) {
      *param_4 = pPVar2;
    }
  }
  else {
    ObjectWrap::wrap(param_2,param_3);
    if (param_4 != (PrivateData **)0x0) {
      *param_4 = (PrivateData *)0x0;
    }
  }
  return;
}

