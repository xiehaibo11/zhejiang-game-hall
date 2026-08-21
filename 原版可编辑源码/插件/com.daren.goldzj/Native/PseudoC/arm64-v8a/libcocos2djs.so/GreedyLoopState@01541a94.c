
/* v8::internal::GreedyLoopState::GreedyLoopState(bool) */

void __thiscall v8::internal::GreedyLoopState::GreedyLoopState(GreedyLoopState *this,bool param_1)

{
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)this = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x42) = 0;
  this[0x46] = (GreedyLoopState)0x0;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x4c] = (GreedyLoopState)0x0;
  *(undefined4 *)(this + 0x4e) = 0;
  this[0x52] = (GreedyLoopState)0x0;
  *(undefined8 *)(this + 0x54) = 0;
  this[0x5c] = (GreedyLoopState)0x0;
  this[0x40] = (GreedyLoopState)0x0;
  *(undefined8 *)(this + 0x60) = 0xffffffff00000064;
  *(GreedyLoopState **)(this + 0x18) = this;
  if (param_1) {
    *(undefined4 *)(this + 100) = 0;
  }
  return;
}

