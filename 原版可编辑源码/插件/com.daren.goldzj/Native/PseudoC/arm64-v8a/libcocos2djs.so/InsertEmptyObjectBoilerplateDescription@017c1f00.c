
/* v8::internal::interpreter::ConstantArrayBuilder::InsertEmptyObjectBoilerplateDescription() */

long v8::internal::interpreter::ConstantArrayBuilder::InsertEmptyObjectBoilerplateDescription(void)

{
  int iVar1;
  long *in_x0;
  long lVar2;
  undefined8 in_x1;
  
  iVar1 = (int)in_x0[0x13];
  if (iVar1 < 0) {
    lVar2 = *in_x0;
    if (*(long *)(lVar2 + 8) - *(long *)(lVar2 + 0x10) ==
        *(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 4) {
      lVar2 = in_x0[1];
      if (*(long *)(lVar2 + 8) - *(long *)(lVar2 + 0x10) ==
          *(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 4) {
        lVar2 = in_x0[2];
        if (*(long *)(lVar2 + 8) - *(long *)(lVar2 + 0x10) ==
            *(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 4) {
                    /* WARNING: Subroutine does not return */
          V8_Fatal("unreachable code");
        }
      }
    }
    iVar1 = ConstantArraySlice::Allocate(lVar2,in_x1,0xb,1);
    *(int *)(in_x0 + 0x13) = iVar1;
  }
  return (long)iVar1;
}

