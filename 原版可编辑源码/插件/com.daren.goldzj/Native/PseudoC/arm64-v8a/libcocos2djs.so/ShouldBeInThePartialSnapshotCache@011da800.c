
/* v8::internal::PartialSerializer::ShouldBeInThePartialSnapshotCache(v8::internal::HeapObject) */

bool __thiscall
v8::internal::PartialSerializer::ShouldBeInThePartialSnapshotCache
          (PartialSerializer *this,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_2 & 0xffffffff00000000 | 7;
  if (*(ushort *)(uVar1 + *(uint *)(param_2 - 1)) < 0x41) {
    return true;
  }
  if (*(short *)(uVar1 + *(uint *)(param_2 - 1)) == 0xa6) {
    return true;
  }
  if (*(short *)(uVar1 + *(uint *)(param_2 - 1)) == 0x42) {
    return true;
  }
  if (*(short *)(uVar1 + *(uint *)(param_2 - 1)) == 0x9a) {
    return true;
  }
  if (*(short *)(uVar1 + *(uint *)(param_2 - 1)) == 0x83) {
    return true;
  }
  if (*(short *)(uVar1 + *(uint *)(param_2 - 1)) == 0x51) {
    return true;
  }
  if ((*(ushort *)(uVar1 + *(uint *)(param_2 - 1)) & 0xfffe) == 0x4e) {
    return true;
  }
  if (*(short *)(uVar1 + *(uint *)(param_2 - 1)) == 0x5a) {
    return true;
  }
  return *(int *)(param_2 - 1) == *(int *)(*(long *)(*(long *)(this + 0x1c8) + 0x68) + 0xe8);
}

