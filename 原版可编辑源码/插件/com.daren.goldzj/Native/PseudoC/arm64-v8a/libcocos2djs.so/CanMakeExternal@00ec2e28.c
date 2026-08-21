
/* v8::String::CanMakeExternal() */

bool __thiscall v8::String::CanMakeExternal(String *this)

{
  bool bVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = *(ulong *)this;
  uVar2 = local_18 & 0xffffffff00000000 | 7;
  if ((*(ushort *)(uVar2 + *(uint *)(local_18 - 1)) < 0x40) &&
     ((*(ushort *)(uVar2 + *(uint *)(local_18 - 1)) & 7) == 5)) {
    local_18 = local_18 & 0xffffffff00000000 | (ulong)*(uint *)(local_18 + 0xb);
  }
  uVar2 = internal::String::SupportsExternalization((String *)&local_18);
  if ((uVar2 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (*(byte *)((local_18 & 0xfffffffffffc0000) + 8) & 0x18) == 0;
  }
  return bVar1;
}

