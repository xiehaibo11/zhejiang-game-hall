
/* v8::internal::SourceTextModule::MaybeTransitionComponent(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SourceTextModule>,
   v8::internal::ZoneForwardList<v8::internal::Handle<v8::internal::SourceTextModule> >*,
   v8::internal::Module::Status) */

undefined8
v8::internal::SourceTextModule::MaybeTransitionComponent
          (undefined8 param_1,long *param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  ulong uVar2;
  undefined8 local_28;
  
  if ((*(uint *)(*param_2 + 0x37) ^ *(uint *)(*param_2 + 0x3b)) < 2) {
    do {
      piVar1 = (int *)((undefined8 *)*param_3)[1];
      *param_3 = *(undefined8 *)*param_3;
      if ((param_4 == 3) && (uVar2 = RunInitializationCode(param_1,piVar1), (uVar2 & 1) == 0)) {
        return 0;
      }
      local_28 = *(undefined8 *)piVar1;
      Module::SetStatus((Module *)&local_28,param_4);
    } while (*piVar1 != (int)*param_2);
  }
  return 1;
}

