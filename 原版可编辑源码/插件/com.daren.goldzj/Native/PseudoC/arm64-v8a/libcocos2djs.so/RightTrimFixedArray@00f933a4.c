
/* v8::internal::Heap::RightTrimFixedArray(v8::internal::FixedArrayBase, int) */

void __thiscall
v8::internal::Heap::RightTrimFixedArray(undefined8 param_1,ulong param_2,int param_3)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = param_2 & 0xffffffff00000000 | 7;
  iVar1 = *(int *)(param_2 + 3) >> 1;
  if (*(short *)(uVar2 + *(uint *)(param_2 - 1)) == 0x85) {
    CreateFillerForArray<v8::internal::FixedArrayBase>();
    return;
  }
  if (*(ushort *)(uVar2 + *(uint *)(param_2 - 1)) - 0x76 < 0xf) {
    if (iVar1 != param_3) {
      CreateFillerForArray<v8::internal::FixedArrayBase>();
      return;
    }
  }
  else if (iVar1 != param_3) {
    CreateFillerForArray<v8::internal::FixedArrayBase>();
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","elements_to_trim != len");
}

