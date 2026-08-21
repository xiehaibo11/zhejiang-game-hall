
/* v8::internal::InstallGetterSetter(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSObject>, char const*, void
   (*)(v8::FunctionCallbackInfo<v8::Value> const&), void (*)(v8::FunctionCallbackInfo<v8::Value>
   const&)) */

void v8::internal::InstallGetterSetter
               (long param_1,undefined8 param_2,char *param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  FunctionTemplate *pFVar3;
  long lVar4;
  ulong *puVar5;
  char *local_60;
  size_t sStack_58;
  
  sStack_58 = strlen(param_3);
  local_60 = param_3;
  lVar1 = Factory::NewStringFromOneByte(param_1,&local_60,0);
  if ((lVar1 != 0) && (lVar2 = Name::ToFunctionName(param_1,lVar1,param_1 + 0x700), lVar2 != 0)) {
    pFVar3 = (FunctionTemplate *)FunctionTemplate::New(param_1,param_4,0,0,0,1,0);
    FunctionTemplate::RemovePrototype(pFVar3);
    lVar2 = ApiNatives::InstantiateFunction(pFVar3,lVar2);
    if ((lVar2 != 0) && (lVar4 = Name::ToFunctionName(param_1,lVar1,param_1 + 0x9b0), lVar4 != 0)) {
      pFVar3 = (FunctionTemplate *)FunctionTemplate::New(param_1,param_5,0,0,0,1,0);
      FunctionTemplate::RemovePrototype(pFVar3);
      puVar5 = (ulong *)ApiNatives::InstantiateFunction(pFVar3,lVar4);
      if (puVar5 != (ulong *)0x0) {
        *(undefined2 *)((*puVar5 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar5 + 0xb)) + 0x13) = 1
        ;
        v8::Object::SetAccessorProperty(param_2,lVar1,lVar2,puVar5,0,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

