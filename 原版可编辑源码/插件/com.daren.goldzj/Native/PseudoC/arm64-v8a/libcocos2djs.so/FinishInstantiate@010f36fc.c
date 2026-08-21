
/* v8::internal::Module::FinishInstantiate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Module>,
   v8::internal::ZoneForwardList<v8::internal::Handle<v8::internal::SourceTextModule> >*, unsigned
   int*, v8::internal::Zone*) */

undefined8
v8::internal::Module::FinishInstantiate
          (Isolate *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(int *)(*param_2 + 0xb) < 4) {
    uVar2 = GetCurrentStackPosition();
    if (*(ulong *)(param_1 + 0x58) <= uVar2) {
      if (*(short *)((*param_2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_2 - 1)) == 0x44)
      {
        uVar1 = SourceTextModule::FinishInstantiate(param_1,param_2,param_3,param_4,param_5);
        return uVar1;
      }
      uVar1 = SyntheticModule::FinishInstantiate(param_1,param_2);
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

