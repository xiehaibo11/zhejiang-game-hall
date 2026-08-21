
/* v8::internal::OptimizedCompilationInfo::set_deferred_handles(std::__ndk1::unique_ptr<v8::internal::DeferredHandles,
   std::__ndk1::default_delete<v8::internal::DeferredHandles> >) */

void __thiscall
v8::internal::OptimizedCompilationInfo::set_deferred_handles
          (OptimizedCompilationInfo *this,undefined8 *param_2)

{
  undefined8 uVar1;
  DeferredHandles *this_00;
  
  uVar1 = *param_2;
  *param_2 = 0;
  this_00 = *(DeferredHandles **)(this + 0x48);
  *(undefined8 *)(this + 0x48) = uVar1;
  if (this_00 != (DeferredHandles *)0x0) {
    DeferredHandles::~DeferredHandles(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

