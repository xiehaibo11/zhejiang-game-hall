
/* v8::internal::compiler::hash_value(v8::internal::compiler::StackSlotRepresentation) */

void v8::internal::compiler::hash_value(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = base::hash_value((uint)((ulong)param_1 >> 0x20));
  uVar1 = base::hash_combine(0,uVar1);
  uVar2 = base::hash_value((uint)param_1);
  base::hash_combine(uVar1,uVar2);
  return;
}

