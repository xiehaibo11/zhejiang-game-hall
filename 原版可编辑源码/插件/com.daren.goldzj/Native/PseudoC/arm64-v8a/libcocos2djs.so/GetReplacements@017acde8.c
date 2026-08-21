
/* v8::internal::compiler::SimdScalarLowering::GetReplacements(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::SimdScalarLowering::GetReplacements(SimdScalarLowering *this,Node *param_1)

{
  return *(undefined8 *)
          (*(long *)(this + 0x60) + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 0x10);
}

