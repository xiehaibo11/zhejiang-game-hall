
/* v8::internal::CallPrinter::Print(v8::internal::FunctionLiteral*, int) */

void __thiscall
v8::internal::CallPrinter::Print(CallPrinter *this,FunctionLiteral *param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  
  *(undefined4 *)(this + 8) = 0;
  *(int *)(this + 0x18) = param_2;
  if (this[0x1c] == (CallPrinter)0x0) {
    if (this[0x48] == (CallPrinter)0x0) {
      uVar1 = GetCurrentStackPosition();
      if (uVar1 < *(ulong *)(this + 0x40)) {
        this[0x48] = (CallPrinter)0x1;
      }
      else {
        VisitNoStackOverflowCheck(this,(AstNode *)param_1);
      }
    }
  }
  else {
    Print(this,"(intermediate value)");
  }
  lVar2 = IncrementalStringBuilder::Finish(*(IncrementalStringBuilder **)(this + 0x10));
  if (lVar2 != 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(location_) != nullptr");
}

