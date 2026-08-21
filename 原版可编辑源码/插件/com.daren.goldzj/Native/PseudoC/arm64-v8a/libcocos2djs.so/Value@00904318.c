
/* se::Value::Value(se::Value::Type) */

void __thiscall se::Value::Value(Value *this)

{
  *(undefined2 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  reset();
  return;
}

