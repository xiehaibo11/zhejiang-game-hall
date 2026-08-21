
/* v8::internal::Object::ToBoolean(v8::internal::Isolate*) */

ulong __thiscall v8::internal::Object::ToBoolean(Object *this,Isolate *param_1)

{
  long lVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)this;
  if ((((uVar2 & 1) == 0) ||
      (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) != 0x43)) ||
     (1 < (*(uint *)(uVar2 + 0x17) >> 1 & 0xff))) {
    uVar2 = BooleanValue(this,param_1);
    lVar1 = 0xb8;
    if ((uVar2 & 1) == 0) {
      lVar1 = 0xc0;
    }
    uVar2 = *(ulong *)(param_1 + lVar1);
  }
  return uVar2;
}

