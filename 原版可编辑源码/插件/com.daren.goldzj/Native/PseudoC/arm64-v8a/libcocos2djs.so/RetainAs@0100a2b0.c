
/* v8::internal::ScavengeWeakObjectRetainer::RetainAs(v8::internal::Object) */

ulong __thiscall
v8::internal::ScavengeWeakObjectRetainer::RetainAs(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  if (((param_2 & 1) != 0) && ((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) >> 3 & 1) != 0)) {
    uVar1 = 0;
    if ((*(uint *)(param_2 - 1) & 1) == 0) {
      uVar1 = CONCAT44((int)(param_2 >> 0x20),*(uint *)(param_2 - 1)) + 1;
    }
    return uVar1;
  }
  return param_2;
}

