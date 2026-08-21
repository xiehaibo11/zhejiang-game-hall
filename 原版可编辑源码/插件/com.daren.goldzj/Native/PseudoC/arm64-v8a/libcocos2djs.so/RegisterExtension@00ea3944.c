
/* v8::RegisterExtension(std::__ndk1::unique_ptr<v8::Extension,
   std::__ndk1::default_delete<v8::Extension> >) */

void v8::RegisterExtension(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = 0;
  puVar2 = operator_new(0x10);
  uVar1 = RegisteredExtension::first_extension_;
  RegisteredExtension::first_extension_ = puVar2;
  *puVar2 = uVar3;
  puVar2[1] = uVar1;
  return;
}

