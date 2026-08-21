
/* v8::internal::Sweeper::FilterSweepingPagesScope::FilterSweepingPagesScope(v8::internal::Sweeper*,
   v8::internal::Sweeper::PauseOrCompleteScope const&) */

void __thiscall
v8::internal::Sweeper::FilterSweepingPagesScope::FilterSweepingPagesScope
          (FilterSweepingPagesScope *this,Sweeper *param_1,PauseOrCompleteScope *param_2)

{
  FilterSweepingPagesScope FVar1;
  
  *(Sweeper **)this = param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(PauseOrCompleteScope **)(this + 0x20) = param_2;
  FVar1 = *(FilterSweepingPagesScope *)(param_1 + 0xf9);
  this[0x28] = FVar1;
  if (FVar1 != (FilterSweepingPagesScope)0x0) {
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xb0) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(*(long *)this + 0xb8) = *(undefined8 *)(*(long *)this + 0xb0);
  }
  return;
}

