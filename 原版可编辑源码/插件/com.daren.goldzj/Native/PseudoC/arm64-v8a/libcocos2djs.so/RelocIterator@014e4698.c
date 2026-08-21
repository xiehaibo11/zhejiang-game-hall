
/* v8::internal::RelocIterator::RelocIterator(v8::internal::Code, unsigned long, unsigned long,
   unsigned char const*, unsigned char const*, int) */

void __thiscall
v8::internal::RelocIterator::RelocIterator
          (RelocIterator *this,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,int param_7)

{
  *(undefined8 *)this = param_5;
  *(undefined8 *)(this + 8) = param_6;
  this[0x38] = (RelocIterator)0x0;
  *(int *)(this + 0x3c) = param_7;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x10) = param_3;
  *(undefined8 *)(this + 0x30) = param_4;
  if (param_7 != 0) {
    next(this);
    return;
  }
  *(undefined8 *)this = param_6;
  next(this);
  return;
}

