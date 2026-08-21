
/* v8::internal::FixedArrayBuilder::FixedArrayBuilder(v8::internal::Handle<v8::internal::FixedArray>)
    */

void __thiscall
v8::internal::FixedArrayBuilder::FixedArrayBuilder(FixedArrayBuilder *this,undefined8 param_2)

{
  *(undefined8 *)this = param_2;
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (FixedArrayBuilder)0x0;
  return;
}

