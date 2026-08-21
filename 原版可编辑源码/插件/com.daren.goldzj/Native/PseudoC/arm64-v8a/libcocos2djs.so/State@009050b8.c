
/* se::State::State(void*) */

void __thiscall se::State::State(State *this,void *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(void **)this = param_1;
  se::Value::Value((Value *)(this + 0x18));
  return;
}

