
/* v8::internal::ExternalCodeEventListener::~ExternalCodeEventListener() */

void __thiscall
v8::internal::ExternalCodeEventListener::~ExternalCodeEventListener(ExternalCodeEventListener *this)

{
  *(undefined ***)this = &PTR__ExternalCodeEventListener_01cb2080;
  if (this[8] != (ExternalCodeEventListener)0x0) {
    CodeEventDispatcher::RemoveListener
              (*(CodeEventDispatcher **)(*(long *)(this + 0x10) + 0xb6d8),(CodeEventListener *)this)
    ;
  }
  operator_delete(this);
  return;
}

