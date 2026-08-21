
/* se::Value::setBoolean(bool) */

void __thiscall se::Value::setBoolean(Value *this,bool param_1)

{
  reset(this,3);
  *this = (Value)param_1;
  return;
}

