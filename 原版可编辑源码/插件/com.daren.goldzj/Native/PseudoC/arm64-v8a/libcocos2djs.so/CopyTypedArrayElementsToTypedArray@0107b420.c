
/* v8::internal::CopyTypedArrayElementsToTypedArray(unsigned long, unsigned long, unsigned long,
   unsigned long) */

void v8::internal::CopyTypedArrayElementsToTypedArray
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  switch(*(byte *)((param_2 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(param_2 - 1)) >> 3) {
  case 0x11:
    FUN_0107b4c8();
    return;
  case 0x12:
    FUN_0107bc78();
    return;
  case 0x13:
    FUN_0107c428();
    return;
  case 0x14:
    FUN_0107cbc8();
    return;
  case 0x15:
    FUN_0107d368();
    return;
  case 0x16:
    FUN_0107d9a0();
    return;
  case 0x17:
    FUN_0107dfd8();
    return;
  case 0x18:
    FUN_0107e5a0();
    return;
  case 0x19:
    FUN_0107e884();
    return;
  case 0x1a:
    FUN_0107ef7c();
    return;
  case 0x1b:
    FUN_0107f184();
    return;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
}

