
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* v8::sampler::SignalHandler::HandleProfilerSignal(int, siginfo*, void*) */

void v8::sampler::SignalHandler::HandleProfilerSignal(int param_1,siginfo *param_2,void *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  if (param_1 == 0x1b) {
    auVar2 = NEON_ext(*(undefined1 (*) [16])((long)param_3 + 0x1b0),
                      *(undefined1 (*) [16])((long)param_3 + 0x1b0),8,1);
    uStack_28 = auVar2._8_8_;
    local_30 = auVar2._0_8_;
    uStack_18 = SUB168(*(undefined1 (*) [16])((long)param_3 + 0x1a0),8);
    local_20 = SUB168(*(undefined1 (*) [16])((long)param_3 + 0x1a0),0);
    if (((DAT_01d46180 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01d46180), iVar1 != 0)) {
      uRam0000000001d46168 = 0;
      _DAT_01d46160 = 0;
      uRam0000000001d46158 = 0;
      _DAT_01d46150 = 0;
      _DAT_01d46170 = 0x3f800000;
      _DAT_01d46178 = 0;
      __cxa_guard_release(&DAT_01d46180);
    }
    SamplerManager::DoSample((SamplerManager *)&DAT_01d46150,(RegisterState *)&local_30);
  }
  return;
}

