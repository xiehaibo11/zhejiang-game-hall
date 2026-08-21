
/* v8::internal::MutableBigInt::GetRawBits(v8::internal::BigIntBase, bool*) */

long v8::internal::MutableBigInt::GetRawBits(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  if ((*(uint *)(param_1 + 3) & 0x7ffffffe) != 0) {
    if ((param_2 != (undefined1 *)0x0) && ((*(uint *)(param_1 + 3) & 0x7ffffffc) != 0)) {
      *param_2 = 0;
    }
    lVar1 = -*(long *)(param_1 + 7);
    if ((*(uint *)(param_1 + 3) & 1) == 0) {
      lVar1 = *(long *)(param_1 + 7);
    }
    return lVar1;
  }
  return 0;
}

