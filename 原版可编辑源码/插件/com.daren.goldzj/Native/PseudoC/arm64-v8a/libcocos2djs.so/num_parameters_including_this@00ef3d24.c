
/* v8::internal::UnoptimizedCompilationInfo::num_parameters_including_this() const */

int __thiscall
v8::internal::UnoptimizedCompilationInfo::num_parameters_including_this
          (UnoptimizedCompilationInfo *this)

{
  return *(int *)(*(long *)(*(long *)(this + 0x10) + 0x28) + 0x88) + 1;
}

