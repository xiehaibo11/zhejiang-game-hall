
/* v8::internal::compiler::SimdScalarLowering::HasReplacement(unsigned long,
   v8::internal::compiler::Node*) */

bool __thiscall
v8::internal::compiler::SimdScalarLowering::HasReplacement
          (SimdScalarLowering *this,ulong param_1,Node *param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(this + 0x60) + ((ulong)*(uint *)(param_2 + 0x14) & 0xffffff) * 0x10);
  if (lVar1 != 0) {
    return *(long *)(lVar1 + param_1 * 8) != 0;
  }
  return false;
}

