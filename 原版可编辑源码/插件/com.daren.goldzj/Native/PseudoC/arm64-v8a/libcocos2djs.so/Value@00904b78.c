
/* se::Value::Value(se::Object*, bool) */

void __thiscall se::Value::Value(Value *this,Object *param_1,bool param_2)

{
  *(undefined2 *)(this + 8) = 0;
  setObject(this,param_1,param_2);
  return;
}

