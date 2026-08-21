
/* v8::internal::Module::PrepareInstantiate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Module>, v8::Local<v8::Context>, v8::MaybeLocal<v8::Module>
   (*)(v8::Local<v8::Context>, v8::Local<v8::String>, v8::Local<v8::Module>)) */

undefined8
v8::internal::Module::PrepareInstantiate
          (Isolate *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(int *)(*param_2 + 0xb) < 2) {
    *(undefined4 *)(*param_2 + 0xb) = 2;
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)(param_1 + 0x58) <= uVar2) {
      if (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) == 0x44)
      {
        uVar1 = SourceTextModule::PrepareInstantiate();
        return uVar1;
      }
      uVar1 = SyntheticModule::PrepareInstantiate(param_1,param_2,param_3,param_4);
      return uVar1;
    }
    Isolate::StackOverflow(param_1);
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

