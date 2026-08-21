
/* se::State::State() */

void __thiscall se::State::State(State *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  se::Value::Value((Value *)(this + 0x18));
  return;
}

