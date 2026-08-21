
/* v8::String::GetExternalStringResourceSlow() const */

undefined8 __thiscall v8::String::GetExternalStringResourceSlow(String *this)

{
  ulong uVar1;
  ulong uVar2;
  uint *puVar3;
  
  uVar1 = *(ulong *)this;
  uVar2 = uVar1 & 0xffffffff00000000;
  puVar3 = (uint *)(uVar1 - 1);
  if ((*(ushort *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) < 0x40) &&
     ((*(ushort *)((uVar2 | 7) + (ulong)*puVar3) & 7) == 5)) {
    uVar1 = uVar2 | *(uint *)(uVar1 + 0xb);
    puVar3 = (uint *)(uVar1 - 1);
  }
  if ((*(ushort *)((uVar2 | *puVar3) + 7) & 0xf) == 2) {
    return *(undefined8 *)(uVar1 + 0xb);
  }
  return 0;
}

