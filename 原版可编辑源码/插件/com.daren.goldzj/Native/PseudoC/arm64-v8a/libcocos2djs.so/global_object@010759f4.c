
/* v8::internal::Context::global_object() */

ulong __thiscall v8::internal::Context::global_object(Context *this)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)this & 0xffffffff00000000;
  return uVar1 | *(uint *)((uVar1 | *(uint *)((uVar1 | *(uint *)(*(ulong *)this - 1)) + 0x13)) + 0xf
                          );
}

