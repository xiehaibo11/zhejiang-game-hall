
/* v8::internal::CompilationHandleScope&
   v8::base::Optional<v8::internal::CompilationHandleScope>::emplace<v8::internal::Isolate*&,
   v8::internal::OptimizedCompilationInfo*&>(v8::internal::Isolate*&,
   v8::internal::OptimizedCompilationInfo*&) */

CompilationHandleScope * __thiscall
v8::base::Optional<v8::internal::CompilationHandleScope>::
emplace<v8::internal::Isolate*&,v8::internal::OptimizedCompilationInfo*&>
          (Optional<v8::internal::CompilationHandleScope> *this,Isolate **param_1,
          OptimizedCompilationInfo **param_2)

{
  DeferredHandles *this_00;
  OptimizedCompilationInfo *pOVar1;
  DeferredHandles *local_28;
  
  if (*this != (Optional<v8::internal::CompilationHandleScope>)0x0) {
    pOVar1 = *(OptimizedCompilationInfo **)(this + 0x20);
    internal::DeferredHandleScope::Detach((DeferredHandleScope *)(this + 8));
    internal::OptimizedCompilationInfo::set_deferred_handles(pOVar1,&local_28);
    this_00 = local_28;
    local_28 = (DeferredHandles *)0x0;
    if (this_00 != (DeferredHandles *)0x0) {
      internal::DeferredHandles::~DeferredHandles(this_00);
      operator_delete(this_00);
    }
    internal::DeferredHandleScope::~DeferredHandleScope((DeferredHandleScope *)(this + 8));
    *this = (Optional<v8::internal::CompilationHandleScope>)0x0;
  }
  pOVar1 = *param_2;
  internal::DeferredHandleScope::DeferredHandleScope((DeferredHandleScope *)(this + 8),*param_1);
  *(OptimizedCompilationInfo **)(this + 0x20) = pOVar1;
  *this = (Optional<v8::internal::CompilationHandleScope>)0x1;
  return (CompilationHandleScope *)(this + 8);
}

