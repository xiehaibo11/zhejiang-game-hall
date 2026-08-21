
/* seval_to_double(se::Value const&, double*) */

undefined8 seval_to_double(Value *param_1,double *param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  if ((param_1[8] != (Value)0x2) || (dVar2 = (double)se::Value::toNumber(param_1), NAN(dVar2))) {
    uVar1 = 0;
    dVar2 = 0.0;
  }
  else {
    uVar1 = 1;
  }
  *param_2 = dVar2;
  return uVar1;
}

