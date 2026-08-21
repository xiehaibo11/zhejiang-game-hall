
/* se::Value::Value(signed char) */

void __thiscall se::Value::Value(Value *this,char param_2)

{
  *(undefined2 *)(this + 8) = 0;
  reset(this,2);
  *(double *)this = (double)(int)param_2;
  return;
}

