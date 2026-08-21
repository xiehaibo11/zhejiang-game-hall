
/* v8::internal::EvacuationWeakObjectRetainer::RetainAs(v8::internal::Object) */

ulong __thiscall
v8::internal::EvacuationWeakObjectRetainer::RetainAs(undefined8 param_1,ulong param_2)

{
  if ((param_2 & 1) == 0) {
    return param_2;
  }
  if ((*(uint *)(param_2 - 1) & 1) == 0) {
    param_2 = CONCAT44((int)(param_2 >> 0x20),*(uint *)(param_2 - 1)) + 1;
  }
  return param_2;
}

