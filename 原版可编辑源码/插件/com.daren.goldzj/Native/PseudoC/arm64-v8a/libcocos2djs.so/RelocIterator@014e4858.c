
/* v8::internal::RelocIterator::RelocIterator(v8::internal::Vector<unsigned char>,
   v8::internal::Vector<unsigned char const>, unsigned long, int) */

void __thiscall
v8::internal::RelocIterator::RelocIterator
          (RelocIterator *this,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
          undefined8 param_6,int param_7)

{
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  this[0x38] = (RelocIterator)0x0;
  *(int *)(this + 0x3c) = param_7;
  *(long *)(this + 8) = param_4;
  *(undefined8 *)(this + 0x10) = param_2;
  *(long *)this = param_4 + param_5;
  *(undefined8 *)(this + 0x30) = param_6;
  if (param_7 != 0) {
    next(this);
    return;
  }
  *(long *)this = param_4;
  next(this);
  return;
}

