
/* v8::ObjectTemplate::SetImmutableProto() */

void __thiscall v8::ObjectTemplate::SetImmutableProto(ObjectTemplate *this)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = (ulong)*(uint *)(this + 4) << 0x20;
  uVar1 = *(undefined4 *)(lVar2 + 0x2c60);
  *(undefined4 *)(lVar2 + 0x2c60) = 5;
  *(uint *)(*(long *)this + 0x1b) = *(uint *)(*(long *)this + 0x1b) & 0xfffffffc | 2;
  *(undefined4 *)(lVar2 + 0x2c60) = uVar1;
  return;
}

