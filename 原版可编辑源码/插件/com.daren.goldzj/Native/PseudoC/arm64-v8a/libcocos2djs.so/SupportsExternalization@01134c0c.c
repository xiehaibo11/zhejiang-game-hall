
/* v8::internal::String::SupportsExternalization() */

byte __thiscall v8::internal::String::SupportsExternalization(String *this)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  ulong local_8;
  
  uVar3 = *(ulong *)this;
  local_8 = uVar3 & 0xffffffff00000000;
  if ((*(ushort *)((local_8 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0x40) &&
     ((*(ushort *)((local_8 | 7) + (ulong)*(uint *)(uVar3 - 1)) & 7) == 5)) {
    local_8 = local_8 | *(uint *)(uVar3 + 0xb);
    bVar1 = SupportsExternalization((String *)&local_8);
  }
  else if (((*(byte *)((uVar3 & 0xfffffffffffc0000) + 10) >> 5 & 1) == 0) &&
          (((*(ushort *)((local_8 | *(uint *)(uVar3 - 1)) + 7) & 7) != 2 &&
           (iVar2 = HeapObject::SizeFromMap((HeapObject *)this,local_8 | *(uint *)(uVar3 - 1)),
           0x13 < iVar2)))) {
    bVar1 = *(int *)((ulong)*(uint *)(this + 4) << 0x20 | 0x89cc) < 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1 & 1;
}

