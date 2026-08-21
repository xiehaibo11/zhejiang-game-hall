
/* v8::internal::Logger::SharedFunctionInfoMoveEvent(unsigned long, unsigned long) */

void __thiscall
v8::internal::Logger::SharedFunctionInfoMoveEvent(Logger *this,ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x88))();
  if ((uVar1 & 1) != 0) {
    MoveEventInternal(this,5,param_1,param_2);
    return;
  }
  return;
}

