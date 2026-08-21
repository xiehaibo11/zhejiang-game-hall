
/* v8::CodeEventHandler::Disable() */

void __thiscall v8::CodeEventHandler::Disable(CodeEventHandler *this)

{
  internal::ExternalCodeEventListener::StopListening(*(ExternalCodeEventListener **)(this + 8));
  return;
}

