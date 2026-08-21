
/* v8::internal::JSRegExp::Initialize(v8::internal::Handle<v8::internal::JSRegExp>,
   v8::internal::Handle<v8::internal::String>, v8::internal::Handle<v8::internal::String>) */

undefined8 v8::internal::JSRegExp::Initialize(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  Factory *pFVar4;
  char local_34 [4];
  
  pFVar4 = (Factory *)((ulong)*(uint *)(param_1 + 4) << 0x20);
  local_34[0] = '\0';
  uVar1 = FlagsFromString(pFVar4,param_3,local_34);
  if (local_34[0] == '\0') {
    puVar3 = (undefined8 *)Factory::NewSyntaxError(pFVar4,0x101,param_3,0,0);
    Isolate::Throw((Isolate *)pFVar4,*puVar3,0);
    uVar2 = 0;
  }
  else {
    uVar2 = Initialize(param_1,param_2,uVar1,0);
  }
  return uVar2;
}

