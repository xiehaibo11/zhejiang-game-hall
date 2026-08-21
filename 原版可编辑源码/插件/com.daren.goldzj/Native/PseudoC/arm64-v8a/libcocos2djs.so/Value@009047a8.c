
/* se::Value::Value(short) */

void __thiscall se::Value::Value(Value *this,short param_1)

{
  *(undefined2 *)(this + 8) = 0;
  reset(this,2);
  *(double *)this = (double)(int)param_1;
  return;
}

