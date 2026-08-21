
/* v8::internal::SamplingEventsProcessor::SamplingEventsProcessor(v8::internal::Isolate*,
   v8::internal::ProfileGenerator*, v8::internal::ProfilerCodeObserver*, v8::base::TimeDelta, bool)
    */

void __thiscall
v8::internal::SamplingEventsProcessor::SamplingEventsProcessor
          (SamplingEventsProcessor *this,Isolate *param_1,ProfileGenerator *param_2,
          ProfilerCodeObserver *param_3,undefined8 param_5,byte param_6)

{
  long lVar1;
  Sampler *this_00;
  long lVar2;
  
  ProfilerEventsProcessor::ProfilerEventsProcessor
            ((ProfilerEventsProcessor *)this,param_1,param_2,param_3);
  *(undefined ***)(this + 0x30) = &PTR_CodeEventHandler_01cb6378;
  *(undefined ***)this = &PTR__SamplingEventsProcessor_01cb6338;
  lVar2 = 0;
  do {
    lVar1 = lVar2 + 0x1040;
    *(undefined4 *)(this + lVar2 + 0x188) = 5;
    *(undefined8 *)(this + lVar2 + 0x1190) = 0;
    *(undefined8 *)(this + lVar2 + 0x198) = 0;
    *(undefined8 *)(this + lVar2 + 400) = 0;
    *(undefined8 *)(this + lVar2 + 0x11a8) = 0;
    *(undefined8 *)(this + lVar2 + 0x11a0) = 0;
    *(ushort *)(this + lVar2 + 0x1198) = *(ushort *)(this + lVar2 + 0x1198) & 0xfc00 | 0x200;
    *(undefined4 *)(this + lVar2 + 0x11b0) = 0;
    lVar2 = lVar1;
  } while (lVar1 != 0x7ff80);
  *(SamplingEventsProcessor **)(this + 0x80100) = this + 0x180;
  *(SamplingEventsProcessor **)(this + 0x80140) = this + 0x180;
  this_00 = ::operator_new(0x38);
  sampler::Sampler::Sampler(this_00,(Isolate *)param_1);
  *(SamplingEventsProcessor **)(this_00 + 0x30) = this;
  *(undefined ***)this_00 = &PTR__Sampler_01cb63c8;
  *(Sampler **)(this + 0x80180) = this_00;
  *(undefined8 *)(this + 0x80188) = param_5;
  this[0x80190] = (SamplingEventsProcessor)(param_6 & 1);
  sampler::Sampler::Start(this_00);
  return;
}

