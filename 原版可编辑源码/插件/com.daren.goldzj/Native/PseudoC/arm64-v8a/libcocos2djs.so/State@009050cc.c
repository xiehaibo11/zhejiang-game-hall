
/* se::State::State(void*, std::__ndk1::vector<se::Value, std::__ndk1::allocator<se::Value> >
   const&) */

void __thiscall se::State::State(State *this,void *param_1,vector *param_2)

{
  *(void **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(vector **)(this + 0x10) = param_2;
  se::Value::Value((Value *)(this + 0x18));
  return;
}

