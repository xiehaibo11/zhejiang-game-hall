
/* v8::internal::JSMap::JSMapVerify(v8::internal::Isolate*) */

void __thiscall v8::internal::JSMap::JSMapVerify(JSMap *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  TorqueGeneratedClassVerifiers::JSMapVerify(*(undefined8 *)this);
  uVar1 = *(uint *)(*(ulong *)this + 0xb);
  if (((uVar1 & 1) != 0) &&
     ((uVar2 = *(ulong *)this & 0xffffffff00000000,
      *(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | uVar1) - 1)) == 0x7c ||
      (uVar1 == *(uint *)(param_1 + 0xa0))))) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","table().IsOrderedHashMap() || table().IsUndefined(isolate)");
}

