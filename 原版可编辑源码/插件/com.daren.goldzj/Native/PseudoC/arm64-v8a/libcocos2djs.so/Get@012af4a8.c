
/* v8::internal::compiler::RedundancyElimination::PathChecksForEffectNodes::Get(v8::internal::compiler::Node*)
   const */

undefined8 __thiscall
v8::internal::compiler::RedundancyElimination::PathChecksForEffectNodes::Get
          (PathChecksForEffectNodes *this,Node *param_1)

{
  if (((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) <
      (ulong)(*(long *)(this + 8) - *(long *)this >> 3)) {
    return *(undefined8 *)(*(long *)this + ((ulong)*(uint *)(param_1 + 0x14) & 0xffffff) * 8);
  }
  return 0;
}

