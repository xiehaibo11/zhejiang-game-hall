
/* v8::Context::IsCodeGenerationFromStringsAllowed() */

bool __thiscall v8::Context::IsCodeGenerationFromStringsAllowed(Context *this)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(ulong *)this + 0x1f);
  if ((uVar1 & 1) == 0) {
    return true;
  }
  return uVar1 != *(uint *)((*(ulong *)this & 0xffffffff00000000) + 0xc0);
}

