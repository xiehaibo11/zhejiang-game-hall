
/* v8::RegisteredExtension::Register(std::__ndk1::unique_ptr<v8::Extension,
   std::__ndk1::default_delete<v8::Extension> >) */

void v8::RegisteredExtension::Register(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = operator_new(0x10);
  uVar3 = *param_1;
  *param_1 = 0;
  uVar1 = first_extension_;
  first_extension_ = puVar2;
  *puVar2 = uVar3;
  puVar2[1] = uVar1;
  return;
}

