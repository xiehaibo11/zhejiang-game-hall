
/* se::Value::Value(double) */

void __thiscall se::Value::Value(Value *this,double param_1)

{
  *(undefined2 *)(this + 8) = 0;
  reset(this,2);
  *(double *)this = param_1;
  return;
}

