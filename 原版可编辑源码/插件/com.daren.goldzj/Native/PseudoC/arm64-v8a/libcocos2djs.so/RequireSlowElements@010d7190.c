
/* v8::internal::JSObject::RequireSlowElements(v8::internal::NumberDictionary) */

void __thiscall v8::internal::JSObject::RequireSlowElements(JSObject *this,long param_2)

{
  ulong uVar1;
  
  if ((*(uint *)(param_2 + 0x13) & 3) != 2) {
    *(undefined4 *)(param_2 + 0x13) = 2;
    uVar1 = *(ulong *)this;
    if ((*(uint *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 - 1)) + 0xb) >> 0x14 & 1) !=
        0) {
      FUN_010d8b9c(uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 - 1));
      return;
    }
  }
  return;
}

