
/* v8::Isolate::GetStackSample(v8::RegisterState const&, void**, unsigned long, v8::SampleInfo*) */

void __thiscall
v8::Isolate::GetStackSample
          (Isolate *this,RegisterState *param_1,void **param_2,ulong param_3,SampleInfo *param_4)

{
  uint uVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *(undefined8 *)(param_1 + 8);
  local_40 = *(undefined8 *)param_1;
  uStack_28 = *(undefined8 *)(param_1 + 0x18);
  uStack_30 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = internal::TickSample::GetStackSample((int)this,&local_40,1,param_2,param_3,param_4,1,0);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)param_4 = 0;
    *(undefined4 *)(param_4 + 8) = 5;
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  return;
}

