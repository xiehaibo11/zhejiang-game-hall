
/* se::Value::Value(int) */

void __thiscall se::Value::Value(Value *this,int param_1)

{
  *(undefined2 *)(this + 8) = 0;
  reset(this,2);
  *(double *)this = (double)param_1;
  return;
}

