
/* v8::internal::ExternalCodeEventListener::StopListening() */

void __thiscall
v8::internal::ExternalCodeEventListener::StopListening(ExternalCodeEventListener *this)

{
  if (this[8] != (ExternalCodeEventListener)0x0) {
    CodeEventDispatcher::RemoveListener
              (*(CodeEventDispatcher **)(*(long *)(this + 0x10) + 0xb6d8),(CodeEventListener *)this)
    ;
    this[8] = (ExternalCodeEventListener)0x0;
  }
  return;
}

