
/* v8::internal::interpreter::ConstantArrayBuilder::AllocateIndexArray(v8::internal::interpreter::ConstantArrayBuilder::Entry,
   unsigned long) */

void v8::internal::interpreter::ConstantArrayBuilder::AllocateIndexArray
               (long *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (((ulong)((*(long *)(lVar1 + 8) - *(long *)(lVar1 + 0x10)) -
              (*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 4)) < param_4) &&
     (lVar1 = param_1[1],
     (ulong)((*(long *)(lVar1 + 8) - *(long *)(lVar1 + 0x10)) -
            (*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 4)) < param_4)) {
    lVar1 = param_1[2];
    if ((ulong)((*(long *)(lVar1 + 8) - *(long *)(lVar1 + 0x10)) -
               (*(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 4)) < param_4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  ConstantArraySlice::Allocate();
  return;
}

