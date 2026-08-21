
/* v8::internal::Context::declaration_context() */

ulong __thiscall v8::internal::Context::declaration_context(Context *this)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_8;
  
  uVar2 = *(ulong *)this;
  while( true ) {
    local_8 = uVar2;
    uVar1 = is_declaration_context((Context *)&local_8);
    if ((uVar1 & 1) != 0) break;
    uVar2 = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xb);
  }
  return uVar2;
}

