
/* v8::internal::Logger::RemoveCodeEventListener(v8::internal::CodeEventListener*) */

void __thiscall
v8::internal::Logger::RemoveCodeEventListener(Logger *this,CodeEventListener *param_1)

{
  CodeEventDispatcher::RemoveListener
            (*(CodeEventDispatcher **)(*(long *)(this + 8) + 0xb6d8),param_1);
  return;
}

