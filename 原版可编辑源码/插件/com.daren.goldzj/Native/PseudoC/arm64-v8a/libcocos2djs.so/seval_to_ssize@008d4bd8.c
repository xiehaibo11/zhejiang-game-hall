
/* seval_to_ssize(se::Value const&, long*) */

bool seval_to_ssize(Value *param_1,long *param_2)

{
  Value VVar1;
  long lVar2;
  
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

