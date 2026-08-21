
/* v8::Object::InternalFieldCount() */

int __thiscall v8::Object::InternalFieldCount(Object *this)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = *(ulong *)this;
  if (0xa9 < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1))) {
    uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1);
    bVar1 = *(byte *)(uVar3 + 3);
    if (bVar1 != 0) {
      if (*(short *)(uVar3 + 7) == 0x421) {
        iVar2 = 0xc;
      }
      else {
        iVar2 = internal::JSObject::GetHeaderSize(*(short *)(uVar3 + 7),*(char *)(uVar3 + 9) < '\0')
        ;
      }
      iVar2 = (((int)((uint)bVar1 * 4 - iVar2) >> 2) - (uint)*(byte *)(uVar3 + 3)) +
              (uint)*(byte *)(uVar3 + 4);
      if (iVar2 < 0) {
        iVar2 = iVar2 + 1;
      }
      return iVar2 >> 1;
    }
  }
  return 0;
}

