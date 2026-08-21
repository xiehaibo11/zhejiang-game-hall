
/* v8::internal::CopyFastNumberJSArrayElementsToTypedArray(unsigned long, unsigned long, unsigned
   long, unsigned long, unsigned long) */

void v8::internal::CopyFastNumberJSArrayElementsToTypedArray
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  
  switch(*(byte *)((param_3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(param_3 - 1)) >> 3) {
  case 0x11:
    uVar1 = FUN_01079070();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "Uint8ElementsAccessor::TryCopyElementsFastNumber( context, source, destination, length, offset)"
              );
    }
    break;
  case 0x12:
    uVar1 = FUN_01079498();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "Int8ElementsAccessor::TryCopyElementsFastNumber( context, source, destination, length, offset)"
              );
    }
    break;
  case 0x13:
    uVar1 = FUN_010798c0();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "Uint16ElementsAccessor::TryCopyElementsFastNumber( context, source, destination, length, offset)"
              );
    }
    break;
  case 0x14:
    uVar1 = FUN_01079ce8();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "Int16ElementsAccessor::TryCopyElementsFastNumber( context, source, destination, length, offset)"
              );
    }
    break;
  case 0x15:
    uVar1 = FUN_0107a110();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "Uint32ElementsAccessor::TryCopyElementsFastNumber( context, source, destination, length, offset)"
              );
    }
    break;
  case 0x16:
    uVar1 = FUN_0107a538();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "Int32ElementsAccessor::TryCopyElementsFastNumber( context, source, destination, length, offset)"
              );
    }
    break;
  case 0x17:
    uVar1 = FUN_0107a960();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "Float32ElementsAccessor::TryCopyElementsFastNumber( context, source, destination, length, offset)"
              );
    }
    break;
  case 0x18:
    uVar1 = FUN_0107adc4();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "Float64ElementsAccessor::TryCopyElementsFastNumber( context, source, destination, length, offset)"
              );
    }
    break;
  case 0x19:
    uVar1 = FUN_0107b07c();
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "Uint8ClampedElementsAccessor::TryCopyElementsFastNumber( context, source, destination, length, offset)"
              );
    }
    break;
  case 0x1a:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "BigUint64ElementsAccessor::TryCopyElementsFastNumber( context, source, destination, length, offset)"
            );
  case 0x1b:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "BigInt64ElementsAccessor::TryCopyElementsFastNumber( context, source, destination, length, offset)"
            );
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return;
}

