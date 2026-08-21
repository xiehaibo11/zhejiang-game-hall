
/* v8::sampler::Sampler::Sampler(v8::Isolate*) */

void __thiscall v8::sampler::Sampler::Sampler(Sampler *this,Isolate *param_1)

{
  pthread_t *ppVar1;
  pthread_t pVar2;
  
  this[8] = (Sampler)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(Isolate **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__Sampler_01cc4088;
  *(undefined2 *)(this + 0x20) = 0;
  ppVar1 = operator_new(8);
  pVar2 = pthread_self();
  *ppVar1 = pVar2;
  *(pthread_t **)(this + 0x28) = ppVar1;
  return;
}

