
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::sampler::Sampler::Stop() */

void __thiscall v8::sampler::Sampler::Stop(Sampler *this)

{
  int iVar1;
  
  if (((DAT_01d46180 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d46180), iVar1 != 0)) {
    uRam0000000001d46168 = 0;
    _DAT_01d46160 = 0;
    uRam0000000001d46158 = 0;
    _DAT_01d46150 = 0;
    _DAT_01d46170 = 0x3f800000;
    _DAT_01d46178 = 0;
    __cxa_guard_release(&DAT_01d46180);
  }
  SamplerManager::RemoveSampler((SamplerManager *)&DAT_01d46150,this);
  SignalHandler::DecreaseSamplerCount();
  this[0x20] = (Sampler)0x0;
  return;
}

