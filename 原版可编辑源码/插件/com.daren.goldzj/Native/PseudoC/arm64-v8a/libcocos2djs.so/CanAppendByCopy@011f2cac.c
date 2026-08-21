
/* v8::internal::IncrementalStringBuilder::CanAppendByCopy(v8::internal::Handle<v8::internal::String>)
    */

bool __thiscall
v8::internal::IncrementalStringBuilder::CanAppendByCopy
          (IncrementalStringBuilder *this,ulong *param_2)

{
  ushort uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  if (*(int *)(this + 8) == 1) {
LAB_011f2d1c:
    if (*(int *)(uVar2 + 7) < 0x11) {
      return *(int *)(uVar2 + 7) < *(int *)(this + 0x10) - *(int *)(this + 0x14);
    }
  }
  else {
    uVar3 = uVar2;
    if (((*(ushort *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 - 1)) + 7) & 7) != 1) ||
       (*(int *)((uVar2 & 0xffffffff00000000 | (ulong)*(uint *)(uVar2 + 0xf)) + 7) == 0)) {
      while( true ) {
        uVar1 = *(ushort *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 - 1)) + 7);
        if ((uVar1 & 9) == 0) break;
        if ((uVar1 & 9) == 8) goto LAB_011f2d1c;
        uVar3 = uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 0xb);
      }
    }
  }
  return false;
}

