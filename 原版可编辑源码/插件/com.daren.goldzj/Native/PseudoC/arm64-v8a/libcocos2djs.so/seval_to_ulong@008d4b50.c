
/* seval_to_ulong(se::Value const&, unsigned long*) */

bool seval_to_ulong(Value *param_1,ulong *param_2)

{
  Value VVar1;
  ulong uVar2;
  
  VVar1 = param_1[8];
  if (VVar1 != (Value)0x2) {
    uVar2 = 0;
  }
  else {
    uVar2 = se::Value::toUlong(param_1);
  }
  *param_2 = uVar2;
  return VVar1 == (Value)0x2;
}

