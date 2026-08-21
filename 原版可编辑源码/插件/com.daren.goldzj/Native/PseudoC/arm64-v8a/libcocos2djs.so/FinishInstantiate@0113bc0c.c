
/* v8::internal::SyntheticModule::FinishInstantiate(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SyntheticModule>) */

undefined8 v8::internal::SyntheticModule::FinishInstantiate(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_18;
  
  local_18 = *param_2;
  Module::SetStatus((Module *)&local_18,3);
  return 1;
}

