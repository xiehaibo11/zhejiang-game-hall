
/* v8::RegisteredExtension::RegisteredExtension(std::__ndk1::unique_ptr<v8::Extension,
   std::__ndk1::default_delete<v8::Extension> >) */

void __thiscall
v8::RegisteredExtension::RegisteredExtension(RegisteredExtension *this,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)this = uVar1;
  *(undefined8 *)(this + 8) = 0;
  return;
}

