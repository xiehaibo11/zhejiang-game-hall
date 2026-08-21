
/* v8::internal::ExternalCodeEventListener::ExternalCodeEventListener(v8::internal::Isolate*) */

void __thiscall
v8::internal::ExternalCodeEventListener::ExternalCodeEventListener
          (ExternalCodeEventListener *this,Isolate *param_1)

{
  this[8] = (ExternalCodeEventListener)0x0;
  *(Isolate **)(this + 0x10) = param_1;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)this = &PTR__ExternalCodeEventListener_01cb2080;
  return;
}

