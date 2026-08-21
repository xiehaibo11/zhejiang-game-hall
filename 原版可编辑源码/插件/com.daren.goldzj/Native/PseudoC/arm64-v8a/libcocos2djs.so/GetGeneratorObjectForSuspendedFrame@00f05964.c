
/* v8::internal::BreakLocation::GetGeneratorObjectForSuspendedFrame(v8::internal::JavaScriptFrame*)
   const */

void __thiscall
v8::internal::BreakLocation::GetGeneratorObjectForSuspendedFrame
          (BreakLocation *this,JavaScriptFrame *param_1)

{
  InterpretedFrame::ReadInterpreterRegister((int)param_1);
  return;
}

