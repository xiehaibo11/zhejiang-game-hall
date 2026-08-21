
/* v8::internal::TickSample::Init(v8::internal::Isolate*, v8::RegisterState const&,
   v8::internal::TickSample::RecordCEntryFrame, bool, bool, v8::base::TimeDelta) */

void __thiscall
v8::internal::TickSample::Init
          (TickSample *this,undefined8 param_1,undefined8 *param_2,undefined4 param_4,ulong param_5,
          uint param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40 [8];
  undefined4 local_38;
  long local_30;
  undefined8 local_28;
  
  uVar3 = 0x200;
  if ((param_5 & 1) == 0) {
    uVar3 = 0;
  }
  *(ushort *)(this + 0x1010) = *(ushort *)(this + 0x1010) & 0xfdff | uVar3;
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  uVar1 = GetStackSample(param_1,&local_60,param_4,this + 0x18,0xff,local_40,param_6 & 1,
                         this + 0x810);
  if ((uVar1 & 1) == 0) {
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    *(undefined4 *)this = local_38;
    *(undefined8 *)(this + 8) = local_60;
    *(ushort *)(this + 0x1010) =
         *(ushort *)(this + 0x1010) & 0xfe00 | CONCAT11(local_30 != 0,local_40[0]);
    *(undefined8 *)(this + 0x1008) = local_28;
    if (local_30 == 0) {
      *(undefined8 *)(this + 0x10) = 0;
    }
    else {
      *(long *)(this + 0x10) = local_30;
    }
    *(undefined8 *)(this + 0x1020) = param_7;
    uVar2 = base::TimeTicks::HighResolutionNow();
    *(undefined8 *)(this + 0x1018) = uVar2;
  }
  return;
}

