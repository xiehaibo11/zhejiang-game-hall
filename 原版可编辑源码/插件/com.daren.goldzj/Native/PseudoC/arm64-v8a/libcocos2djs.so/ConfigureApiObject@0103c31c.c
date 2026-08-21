
/* v8::internal::Genesis::ConfigureApiObject(v8::internal::Handle<v8::internal::JSObject>,
   v8::internal::Handle<v8::internal::ObjectTemplateInfo>) */

bool __thiscall
v8::internal::Genesis::ConfigureApiObject(Genesis *this,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = ApiNatives::InstantiateObject((ulong)*(uint *)(param_2 + 4) << 0x20,param_3,0);
  if (lVar1 == 0) {
    *(undefined8 *)(*(long *)this + 0x2bd8) = *(undefined8 *)(*(long *)this + 0xa8);
  }
  else {
    TransferObject(this,lVar1,param_2);
  }
  return lVar1 != 0;
}

