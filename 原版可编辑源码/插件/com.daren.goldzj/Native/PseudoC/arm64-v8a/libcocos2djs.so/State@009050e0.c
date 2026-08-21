
/* se::State::State(se::Object*, std::__ndk1::vector<se::Value, std::__ndk1::allocator<se::Value> >
   const&) */

void __thiscall se::State::State(State *this,Object *param_1,vector *param_2)

{
  *(undefined8 *)this = 0;
  *(Object **)(this + 8) = param_1;
  *(vector **)(this + 0x10) = param_2;
  se::Value::Value((Value *)(this + 0x18));
  if (*(RefCounter **)(this + 8) != (RefCounter *)0x0) {
    RefCounter::incRef(*(RefCounter **)(this + 8));
  }
  return;
}

