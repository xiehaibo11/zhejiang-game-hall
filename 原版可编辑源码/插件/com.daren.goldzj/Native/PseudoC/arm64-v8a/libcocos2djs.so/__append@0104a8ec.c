
/* std::__ndk1::vector<v8::internal::JsonProperty,
   std::__ndk1::allocator<v8::internal::JsonProperty> >::__append(unsigned long) */

void __thiscall
std::__ndk1::vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>>::
__append(vector<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>> *this
        ,ulong param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  __split_buffer<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>&>
  a_Stack_58 [16];
  undefined8 *local_48;
  
  puVar2 = *(undefined8 **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)puVar2 >> 3) * -0x5555555555555555) < param_1) {
    uVar1 = FUN_0104a890(this,param_1 + ((long)puVar2 - *(long *)this >> 3) * -0x5555555555555555);
    __split_buffer<v8::internal::JsonProperty,std::__ndk1::allocator<v8::internal::JsonProperty>&>::
    __split_buffer(a_Stack_58,uVar1,(*(long *)(this + 8) - *(long *)this >> 3) * -0x5555555555555555
                   ,(allocator *)(this + 0x10));
    puVar2 = local_48;
  }
  *puVar2 = 0;
  *(byte *)(puVar2 + 1) = *(byte *)(puVar2 + 1) & 0xf0;
  puVar2[2] = 0;
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

