
/* v8::internal::compiler::LiveRangeBuilder::FixedFPLiveRangeID(int,
   v8::internal::MachineRepresentation) */

int __thiscall
v8::internal::compiler::LiveRangeBuilder::FixedFPLiveRangeID
          (LiveRangeBuilder *this,uint param_1,char param_3)

{
  long lVar1;
  
  param_1 = ~param_1;
  if (param_3 == '\v') {
    lVar1 = *(long *)(*(long *)this + 0x20);
  }
  else {
    if (param_3 != '\r') {
      if (param_3 != '\f') {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar1 = *(long *)(*(long *)this + 0x20);
      goto LAB_0165ada4;
    }
    lVar1 = *(long *)(*(long *)this + 0x20);
    param_1 = param_1 + *(int *)(lVar1 + 0xc) * -2;
  }
  param_1 = param_1 + *(int *)(lVar1 + 0x10) * -2;
LAB_0165ada4:
  return param_1 + *(int *)(lVar1 + 8) * -2;
}

