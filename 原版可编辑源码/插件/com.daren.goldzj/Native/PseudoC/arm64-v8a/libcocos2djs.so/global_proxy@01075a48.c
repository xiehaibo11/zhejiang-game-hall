
/* v8::internal::Context::global_proxy() */

ulong __thiscall v8::internal::Context::global_proxy(Context *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this & 0xffffffff00000000;
  return uVar1 | *(uint *)((uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)this - 1)) + 0x13)) +
                          0x13);
}

