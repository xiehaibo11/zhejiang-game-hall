
/* seval_to_size(se::Value const&, unsigned long*) */

bool seval_to_size(Value *param_1,ulong *param_2)

{
  Value VVar1;
  ulong uVar2;
  
  VVar1 = param_1[8];
  if (VVar1 != (Value)0x2) {
    uVar2 = 0;
  }
  else {
    uVar2 = se::Value::toLong(param_1);
  }
  *param_2 = uVar2;
  return VVar1 == (Value)0x2;
}

