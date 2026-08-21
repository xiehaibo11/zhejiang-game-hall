
/* v8::internal::interpreter::ConstantArrayBuilder::AllocateIndex(v8::internal::interpreter::ConstantArrayBuilder::Entry)
    */

void v8::internal::interpreter::ConstantArrayBuilder::AllocateIndex(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((*(long *)(lVar1 + 8) - *(long *)(lVar1 + 0x10) ==
       *(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 4) &&
     (lVar1 = param_1[1],
     *(long *)(lVar1 + 8) - *(long *)(lVar1 + 0x10) ==
     *(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 4)) {
    lVar1 = param_1[2];
    if (*(long *)(lVar1 + 8) - *(long *)(lVar1 + 0x10) ==
        *(long *)(lVar1 + 0x28) - *(long *)(lVar1 + 0x20) >> 4) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  ConstantArraySlice::Allocate();
  return;
}

