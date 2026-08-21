
/* se::Value::Value(bool) */

void __thiscall se::Value::Value(Value *this,bool param_1)

{
  *(undefined2 *)(this + 8) = 0;
  reset(this,3);
  *this = (Value)param_1;
  return;
}

