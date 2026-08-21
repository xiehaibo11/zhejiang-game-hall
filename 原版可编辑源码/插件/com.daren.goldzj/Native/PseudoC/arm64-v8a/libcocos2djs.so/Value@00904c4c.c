
/* se::Value::Value(se::HandleObject const&, bool) */

void __thiscall se::Value::Value(Value *this,HandleObject *param_1,bool param_2)

{
  *(undefined2 *)(this + 8) = 0;
  setObject(this,*(Object **)param_1,param_2);
  return;
}

