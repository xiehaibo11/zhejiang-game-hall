
/* seval_to_longlong(se::Value const&, long long*) */

bool seval_to_longlong(Value *param_1,longlong *param_2)

{
  Value VVar1;
  longlong lVar2;
  
  VVar1 = param_1[8];
  if (VVar1 != (Value)0x2) {
    lVar2 = 0;
  }
  else {
    lVar2 = se::Value::toLong(param_1);
  }
  *param_2 = lVar2;
  return VVar1 == (Value)0x2;
}

