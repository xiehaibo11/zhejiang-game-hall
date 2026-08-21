
/* v8::internal::JsonParseInternalizer::RecurseAndApply(v8::internal::Handle<v8::internal::JSReceiver>,
   v8::internal::Handle<v8::internal::String>) */

bool __thiscall
v8::internal::JsonParseInternalizer::RecurseAndApply
          (JsonParseInternalizer *this,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined1 local_58 [8];
  ulong *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)this;
  uVar3 = GetCurrentStackPosition();
  if (uVar3 < *(ulong *)(lVar4 + 0x58)) {
    Isolate::StackOverflow(*(Isolate **)this);
    bVar1 = false;
  }
  else {
    local_50 = (ulong *)InternalizeJsonProperty(this,param_2,param_3);
    bVar1 = false;
    if (local_50 != (ulong *)0x0) {
      if (((*local_50 & 1) == 0) || ((int)*local_50 != *(int *)(*(long *)this + 0xa0))) {
        uStack_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_58[0] = 0xff;
        cVar2 = JSReceiver::DefineOwnProperty(*(long *)this,param_2,param_3,local_58,0x100000001);
      }
      else {
        cVar2 = JSReceiver::DeletePropertyOrElement(param_2,param_3,0);
      }
      bVar1 = cVar2 != '\0';
    }
  }
  return bVar1;
}

