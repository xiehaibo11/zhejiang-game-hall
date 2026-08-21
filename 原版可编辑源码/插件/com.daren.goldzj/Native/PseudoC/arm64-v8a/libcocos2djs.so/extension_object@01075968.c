
/* v8::internal::Context::extension_object() */

ulong __thiscall v8::internal::Context::extension_object(Context *this)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)this & 0xffffffff00000000;
  uVar2 = *(uint *)(*(ulong *)this + 0xf);
  uVar1 = 0;
  if (uVar2 != *(uint *)(uVar3 + 0xa0)) {
    uVar1 = uVar3 | uVar2;
  }
  return uVar1;
}

