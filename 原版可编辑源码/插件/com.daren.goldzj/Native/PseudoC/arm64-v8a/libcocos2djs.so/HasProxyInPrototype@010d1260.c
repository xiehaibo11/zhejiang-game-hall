
/* v8::internal::JSReceiver::HasProxyInPrototype(v8::internal::Isolate*) */

undefined8 __thiscall
v8::internal::JSReceiver::HasProxyInPrototype(JSReceiver *this,Isolate *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)this;
  do {
    if (*(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0xa9) {
      return 1;
    }
    uVar1 = *(uint *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 0xf);
    uVar2 = uVar2 & 0xffffffff00000000 | (ulong)uVar1;
  } while (uVar1 != *(uint *)(param_1 + 0xb0));
  return 0;
}

