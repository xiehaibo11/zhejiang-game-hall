
/* v8::internal::Heap::AllowedToBeMigrated(v8::internal::Map, v8::internal::HeapObject,
   v8::internal::AllocationSpace) */

bool __thiscall
v8::internal::Heap::AllowedToBeMigrated(Heap *this,long param_2,ulong param_3,int param_4)

{
  if (((int)param_2 != *(int *)(this + -0x87c8)) &&
     ((*(byte *)((param_3 & 0xfffffffffffc0000) + 10) >> 5 & 1) == 0)) {
    switch(*(undefined4 *)(*(long *)((param_3 & 0xfffffffffffc0000) + 0x58) + 0x48)) {
    case 0:
    case 4:
    case 5:
    case 6:
    case 7:
      return false;
    case 1:
      return param_4 - 1U < 2;
    case 2:
      return param_4 == 2;
    case 3:
      return param_4 == 3 && *(short *)(param_2 + 7) == 0x9a;
    default:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  return false;
}

