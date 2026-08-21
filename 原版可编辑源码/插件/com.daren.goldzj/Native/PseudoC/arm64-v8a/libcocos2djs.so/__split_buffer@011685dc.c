
/* std::__ndk1::__split_buffer<v8::internal::FuncNameInferrer::Name,
   std::__ndk1::allocator<v8::internal::FuncNameInferrer::Name>&>::__split_buffer(unsigned long,
   unsigned long, std::__ndk1::allocator<v8::internal::FuncNameInferrer::Name>&) */

void __thiscall
std::__ndk1::
__split_buffer<v8::internal::FuncNameInferrer::Name,std::__ndk1::allocator<v8::internal::FuncNameInferrer::Name>&>
::__split_buffer(__split_buffer<v8::internal::FuncNameInferrer::Name,std::__ndk1::allocator<v8::internal::FuncNameInferrer::Name>&>
                 *this,ulong param_1,ulong param_2,allocator *param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(allocator **)(this + 0x20) = param_3;
  if (param_1 == 0) {
    pvVar2 = (void *)0x0;
  }
  else {
    if (param_1 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar2 = operator_new(param_1 << 3);
  }
  pvVar1 = (void *)((long)pvVar2 + param_2 * 8);
  *(void **)this = pvVar2;
  *(void **)(this + 8) = pvVar1;
  *(void **)(this + 0x10) = pvVar1;
  *(void **)(this + 0x18) = (void *)((long)pvVar2 + param_1 * 8);
  return;
}

