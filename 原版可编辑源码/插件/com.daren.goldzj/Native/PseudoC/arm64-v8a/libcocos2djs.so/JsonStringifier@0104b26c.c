
/* v8::internal::JsonStringifier::JsonStringifier(v8::internal::Isolate*) */

void __thiscall
v8::internal::JsonStringifier::JsonStringifier(JsonStringifier *this,Isolate *param_1)

{
  *(Isolate **)this = param_1;
  IncrementalStringBuilder::IncrementalStringBuilder((IncrementalStringBuilder *)(this + 8),param_1)
  ;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(long *)(this + 0x30) = *(long *)this + 0xa60;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  return;
}

