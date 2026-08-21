
/* v8::internal::FreeListCategory::PickNodeFromList(unsigned long, unsigned long*) */

ulong __thiscall
v8::internal::FreeListCategory::PickNodeFromList
          (FreeListCategory *this,ulong param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(this + 8);
  if ((ulong)((long)((ulong)*(uint *)(uVar2 + 3) << 0x20) >> 0x21) < param_1) {
    *param_2 = 0;
    return 0;
  }
  *(ulong *)(this + 8) = uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 7);
  uVar1 = *(uint *)(uVar2 + 3);
  *param_2 = (long)((ulong)uVar1 << 0x20) >> 0x21;
  *(int *)(this + 4) = *(int *)(this + 4) - ((int)uVar1 >> 1);
  return uVar2;
}

