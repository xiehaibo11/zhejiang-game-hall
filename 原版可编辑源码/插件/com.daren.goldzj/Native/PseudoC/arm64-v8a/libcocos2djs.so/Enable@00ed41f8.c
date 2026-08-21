
/* v8::CodeEventHandler::Enable() */

void __thiscall v8::CodeEventHandler::Enable(CodeEventHandler *this)

{
  internal::ExternalCodeEventListener::StartListening
            (*(ExternalCodeEventListener **)(this + 8),this);
  return;
}

