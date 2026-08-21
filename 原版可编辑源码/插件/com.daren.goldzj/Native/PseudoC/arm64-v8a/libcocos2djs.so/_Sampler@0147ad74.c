
/* v8::sampler::Sampler::~Sampler() */

void __thiscall v8::sampler::Sampler::~Sampler(Sampler *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__Sampler_01cc4088;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
    return;
  }
  return;
}

