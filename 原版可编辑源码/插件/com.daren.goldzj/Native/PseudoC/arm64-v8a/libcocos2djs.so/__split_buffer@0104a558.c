
/* std::__ndk1::__split_buffer<v8::internal::JsonProperty,
   std::__ndk1::allocator<v8::internal::JsonProperty>&>::__split_buffer(unsigned long, unsigned
   long, std::__ndk1::allocator<v8::internal::JsonProperty>&) */

void __thiscall
std::__ndk1::
__split_buffer<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>&>::
__split_buffer(__split_buffer<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>&>
               *this,ulong param_1,ulong param_2,allocator *param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  *(undefined8 *)(this + 0x18) = 0;
  *(allocator **)(this + 0x20) = param_3;
  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar1 = operator_new(param_1 * 0x18);
  }
  pvVar2 = (void *)((long)pvVar1 + param_2 * 0x18);
  *(void **)this = pvVar1;
  *(void **)(this + 8) = pvVar2;
  *(void **)(this + 0x10) = pvVar2;
  *(void **)(this + 0x18) = (void *)((long)pvVar1 + param_1 * 0x18);
  return;
}

