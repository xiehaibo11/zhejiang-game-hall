
/* v8::internal::Logger::CodeMoveEvent(v8::internal::AbstractCode, v8::internal::AbstractCode) */

void __thiscall v8::internal::Logger::CodeMoveEvent(Logger *this,long param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x88))();
  if ((uVar1 & 1) != 0) {
    MoveEventInternal(this,2,param_2 + -1,param_3 + -1);
    return;
  }
  return;
}

