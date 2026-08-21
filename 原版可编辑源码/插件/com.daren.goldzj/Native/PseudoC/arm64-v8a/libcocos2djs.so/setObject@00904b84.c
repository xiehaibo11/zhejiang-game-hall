
/* se::Value::setObject(se::Object*, bool) */

void __thiscall se::Value::setObject(Value *this,Object *param_1,bool param_2)

{
  RefCounter *this_00;
  
  if (param_1 == (Object *)0x0) {
    reset(this,1);
    return;
  }
  if (this[8] != (Value)0x5) {
    reset(this,5);
  }
  if (*(Object **)this == param_1) {
    this[9] = (Value)param_2;
    if (param_2) {
      Object::root(param_1);
      return;
    }
  }
  else {
    RefCounter::incRef((RefCounter *)param_1);
    if (param_2) {
      Object::root(param_1);
    }
    this_00 = *(RefCounter **)this;
    if (this_00 != (RefCounter *)0x0) {
      if (this[9] != (Value)0x0) {
        Object::unroot((Object *)this_00);
        this_00 = *(RefCounter **)this;
      }
      RefCounter::decRef(this_00);
    }
    *(Object **)this = param_1;
    this[9] = (Value)param_2;
  }
  return;
}

