
/* v8::CodeEventHandler::CodeEventHandler(v8::Isolate*) */

void __thiscall v8::CodeEventHandler::CodeEventHandler(CodeEventHandler *this,Isolate *param_1)

{
  ExternalCodeEventListener *this_00;
  
  *(undefined ***)this = &PTR__CodeEventHandler_01c98290;
  this_00 = operator_new(0x20);
  internal::ExternalCodeEventListener::ExternalCodeEventListener(this_00,(Isolate *)param_1);
  *(ExternalCodeEventListener **)(this + 8) = this_00;
  return;
}

