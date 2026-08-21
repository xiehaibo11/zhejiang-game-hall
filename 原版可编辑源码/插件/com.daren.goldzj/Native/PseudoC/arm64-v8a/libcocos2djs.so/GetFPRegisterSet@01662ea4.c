
/* v8::internal::compiler::LinearScanAllocator::GetFPRegisterSet(v8::internal::MachineRepresentation,
   int*, int*, int const**) const */

void __thiscall
v8::internal::compiler::LinearScanAllocator::GetFPRegisterSet
          (LinearScanAllocator *this,char param_2,undefined4 *param_3,undefined4 *param_4,
          long *param_5)

{
  long lVar1;
  
  if (param_2 == '\r') {
    *param_3 = *(undefined4 *)(*(long *)(*(long *)this + 0x20) + 0x14);
    *param_4 = *(undefined4 *)(*(long *)(*(long *)this + 0x20) + 0x24);
    lVar1 = *(long *)(*(long *)this + 0x20) + 200;
  }
  else {
    if (param_2 != '\v') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    *param_3 = *(undefined4 *)(*(long *)(*(long *)this + 0x20) + 0xc);
    *param_4 = *(undefined4 *)(*(long *)(*(long *)this + 0x20) + 0x1c);
    lVar1 = *(long *)(*(long *)this + 0x20) + 0x40;
  }
  *param_5 = lVar1;
  return;
}

