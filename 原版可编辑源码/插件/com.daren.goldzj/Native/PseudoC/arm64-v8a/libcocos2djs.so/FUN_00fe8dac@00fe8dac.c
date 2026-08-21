
void FUN_00fe8dac(undefined8 param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  
  if ((*param_4 & 1) != 0) {
    if (((uint)*(undefined8 *)((*param_4 & 0xfffffffffffc0000) + 8) >> 6 & 1) != 0) {
      uVar1 = *(ulong *)((MemoryChunk *)(*param_2 & 0xfffffffffffc0000) + 8);
      if ((((uint)uVar1 >> 0xf & 1) != 0) || ((uVar1 & 0x58) == 0)) {
        v8::internal::RememberedSet<(v8::internal::RememberedSetType)1>::
        Insert<(v8::internal::AccessMode)0>((MemoryChunk *)(*param_2 & 0xfffffffffffc0000),*param_3)
        ;
        return;
      }
    }
  }
  return;
}

