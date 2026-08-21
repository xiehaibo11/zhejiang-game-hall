
/* v8::internal::interpreter::ConstantArrayBuilder::InsertJumpTable(unsigned long) */

undefined4 __thiscall
v8::internal::interpreter::ConstantArrayBuilder::InsertJumpTable
          (ConstantArrayBuilder *this,ulong param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)this;
  if (((ulong)((*(long *)(lVar2 + 8) - *(long *)(lVar2 + 0x10)) -
              (*(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 4)) < param_1) &&
     (lVar2 = *(long *)(this + 8),
     (ulong)((*(long *)(lVar2 + 8) - *(long *)(lVar2 + 0x10)) -
            (*(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 4)) < param_1)) {
    lVar2 = *(long *)(this + 0x10);
    if ((ulong)((*(long *)(lVar2 + 8) - *(long *)(lVar2 + 0x10)) -
               (*(long *)(lVar2 + 0x28) - *(long *)(lVar2 + 0x20) >> 4)) < param_1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
  }
  uVar1 = ConstantArraySlice::Allocate(lVar2,param_1,7,param_1);
  return uVar1;
}

