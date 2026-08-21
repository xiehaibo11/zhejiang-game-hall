
/* v8::internal::Ticker::~Ticker() */

void __thiscall v8::internal::Ticker::~Ticker(Ticker *this)

{
  long *plVar1;
  
  *(undefined ***)this = &PTR__Ticker_01cb23f8;
  if (((byte)this[0x20] & 1) != 0) {
    sampler::Sampler::Stop((Sampler *)this);
  }
  plVar1 = *(long **)(this + 0x38);
  *(undefined8 *)(this + 0x38) = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  sampler::Sampler::~Sampler((Sampler *)this);
  operator_delete(this);
  return;
}

