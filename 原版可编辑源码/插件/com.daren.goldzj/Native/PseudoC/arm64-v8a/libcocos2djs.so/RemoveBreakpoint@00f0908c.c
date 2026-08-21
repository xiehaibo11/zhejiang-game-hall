
/* v8::internal::Debug::RemoveBreakpoint(int) */

void __thiscall v8::internal::Debug::RemoveBreakpoint(Debug *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = Factory::NewBreakPoint
                    (*(Factory **)(this + 0x88),param_1,*(Factory **)(this + 0x88) + 200);
  ClearBreakPoint(this,uVar1);
  return;
}

