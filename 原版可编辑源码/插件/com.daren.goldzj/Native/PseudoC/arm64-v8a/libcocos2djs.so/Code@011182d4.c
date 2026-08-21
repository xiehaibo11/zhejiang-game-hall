
/* v8::internal::JSRegExp::Code(bool) const */

ulong __thiscall v8::internal::JSRegExp::Code(JSRegExp *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)this & 0xffffffff00000000;
  lVar1 = 0x13;
  if (!param_1) {
    lVar1 = 0x17;
  }
  return uVar2 | *(uint *)((uVar2 | *(uint *)(*(ulong *)this + 0xb)) + lVar1);
}

