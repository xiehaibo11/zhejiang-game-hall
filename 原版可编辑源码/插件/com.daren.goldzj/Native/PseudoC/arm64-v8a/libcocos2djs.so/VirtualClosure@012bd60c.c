
/* v8::internal::compiler::VirtualClosure::VirtualClosure(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::FeedbackVector>, v8::internal::compiler::Hints const&) */

void __thiscall
v8::internal::compiler::VirtualClosure::VirtualClosure
          (VirtualClosure *this,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  
  *(undefined8 *)this = param_2;
  *(undefined8 *)(this + 8) = param_3;
  lVar1 = *param_4;
  *(long *)(this + 0x10) = lVar1;
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x10) != 0)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","context_hints_.virtual_closures().IsEmpty()");
  }
  return;
}

