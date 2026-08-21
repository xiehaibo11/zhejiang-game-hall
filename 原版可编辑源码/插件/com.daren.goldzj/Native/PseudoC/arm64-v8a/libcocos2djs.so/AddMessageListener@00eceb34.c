
/* v8::Isolate::AddMessageListener(void (*)(v8::Local<v8::Message>, v8::Local<v8::Value>),
   v8::Local<v8::Value>) */

undefined8 __thiscall
v8::Isolate::AddMessageListener(Isolate *this,undefined8 param_1,undefined8 param_3)

{
  AddMessageListenerWithErrorLevel(this,param_1,8,param_3);
  return 1;
}

