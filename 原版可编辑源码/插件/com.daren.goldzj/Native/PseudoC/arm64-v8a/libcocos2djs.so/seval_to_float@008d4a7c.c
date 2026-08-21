
/* seval_to_float(se::Value const&, float*) */

undefined8 seval_to_float(Value *param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  if ((param_1[8] != (Value)0x2) || (fVar2 = (float)se::Value::toFloat(param_1), NAN(fVar2))) {
    uVar1 = 0;
    fVar2 = 0.0;
  }
  else {
    uVar1 = 1;
  }
  *param_2 = fVar2;
  return uVar1;
}

