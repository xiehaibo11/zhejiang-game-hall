
/* v8::internal::FixedArrayBuilder::Add(v8::internal::Smi) */

void __thiscall v8::internal::FixedArrayBuilder::Add(FixedArrayBuilder *this,undefined4 param_2)

{
  *(undefined4 *)(**(long **)this + (long)(*(int *)(this + 8) << 2) + 7) = param_2;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}

