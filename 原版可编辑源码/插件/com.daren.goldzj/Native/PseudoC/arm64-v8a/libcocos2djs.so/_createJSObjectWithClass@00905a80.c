
/* se::Class::_createJSObjectWithClass(se::Class*) */

long se::Class::_createJSObjectWithClass(Class *param_1)

{
  FunctionTemplate *this;
  ObjectTemplate *pOVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(ulong **)(param_1 + 0x38) == (ulong *)0x0) {
    this = (FunctionTemplate *)0x0;
  }
  else {
    this = (FunctionTemplate *)
           v8::HandleScope::CreateHandle(DAT_01d37198,**(ulong **)(param_1 + 0x38));
  }
  pOVar1 = (ObjectTemplate *)v8::FunctionTemplate::InstanceTemplate(this);
  uVar2 = v8::Isolate::GetCurrentContext((Isolate *)DAT_01d37198);
  lVar3 = v8::ObjectTemplate::NewInstance(pOVar1,uVar2);
  if (lVar3 == 0) {
    v8::V8::ToLocalEmpty();
  }
  return lVar3;
}

