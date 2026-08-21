
/* v8::String::GetExternalOneByteStringResource() const */

undefined8 __thiscall v8::String::GetExternalOneByteStringResource(String *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)this;
  uVar1 = uVar2 & 0xffffffff00000000;
  if (((*(ushort *)((uVar1 | *(uint *)(uVar2 - 1)) + 7) & 0xf) != 10) &&
     (((0x3f < *(ushort *)((uVar1 | 7) + (ulong)*(uint *)(uVar2 - 1)) ||
       ((*(ushort *)((uVar1 | 7) + (ulong)*(uint *)(uVar2 - 1)) & 7) != 5)) ||
      (uVar2 = uVar1 | *(uint *)(uVar2 + 0xb),
      (*(ushort *)((uVar1 | *(uint *)(uVar2 - 1)) + 7) & 0xf) != 10)))) {
    return 0;
  }
  return *(undefined8 *)(uVar2 + 0xb);
}

