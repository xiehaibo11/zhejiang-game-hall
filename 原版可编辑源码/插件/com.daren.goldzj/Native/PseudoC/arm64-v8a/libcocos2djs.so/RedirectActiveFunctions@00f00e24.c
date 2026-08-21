
/* v8::internal::RedirectActiveFunctions::RedirectActiveFunctions(v8::internal::SharedFunctionInfo,
   v8::internal::RedirectActiveFunctions::Mode) */

void __thiscall
v8::internal::RedirectActiveFunctions::RedirectActiveFunctions
          (RedirectActiveFunctions *this,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(this + 0x10) = param_3;
  *(undefined ***)this = &PTR_VisitThread_01ca44f0;
  *(undefined8 *)(this + 8) = param_2;
  return;
}

