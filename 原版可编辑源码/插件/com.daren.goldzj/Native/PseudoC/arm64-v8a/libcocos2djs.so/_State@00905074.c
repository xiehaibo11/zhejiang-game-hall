
/* se::State::~State() */

void __thiscall se::State::~State(State *this)

{
  if (*(RefCounter **)(this + 8) != (RefCounter *)0x0) {
    RefCounter::decRef(*(RefCounter **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  se::Value::~Value((Value *)(this + 0x18));
  return;
}

