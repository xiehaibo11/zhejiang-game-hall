
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105d798 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, v8::internal::Name) */

void __thiscall
v8::internal::Logger::CodeCreateEvent
          (Logger *this,undefined4 param_2,ulong param_3,undefined8 param_4)

{
  MessageBuilder *pMVar1;
  MessageBuilder *pMVar2;
  Log *pLVar3;
  uint uVar4;
  ulong uVar5;
  MessageBuilder aMStack_60 [8];
  Mutex *local_58;
  ulong local_38;
  
  pMVar1 = (MessageBuilder *)(**(code **)(*(long *)this + 0x88))();
  if ((FLAG_log_code != '\0') && (((ulong)pMVar1 & 1) != 0)) {
    pLVar3 = *(Log **)(this + 0x28);
    if ((*pLVar3 == (Log)0x0) && (*(long *)(pLVar3 + 8) != 0)) {
      Log::MessageBuilder::MessageBuilder(aMStack_60,pLVar3);
      uVar5 = param_3 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar5 + *(uint *)(param_3 - 1)) == 0x9a) {
        uVar4 = *(uint *)(param_3 + 0x17) >> 1 & 0x1f;
      }
      else {
        uVar4 = 0xc;
      }
      if (*(short *)(uVar5 + *(uint *)(param_3 - 1)) == 0x9a) {
        if (*(int *)(param_3 + 0x17) < 0) {
          local_38 = param_3;
          pMVar2 = (MessageBuilder *)Code::OffHeapInstructionStart((Code *)&local_38);
          pMVar1 = pMVar2;
        }
        else {
          pMVar2 = (MessageBuilder *)(param_3 + 0x3f);
          local_38 = param_3;
        }
      }
      else {
        pMVar2 = (MessageBuilder *)(param_3 + 0x21);
      }
      if (*(short *)(uVar5 + *(uint *)(param_3 - 1)) == 0x9a) {
        if (*(int *)(param_3 + 0x17) < 0) {
          local_38 = param_3;
          pMVar1 = (MessageBuilder *)Code::OffHeapInstructionSize((Code *)&local_38);
          uVar5 = (ulong)pMVar1 & 0xffffffff;
        }
        else {
          uVar5 = (ulong)*(uint *)(param_3 + 0x13);
          local_38 = param_3;
        }
      }
      else {
        uVar5 = (ulong)(uint)(*(int *)(param_3 + 3) >> 1);
      }
      FUN_0105db00(aMStack_60,param_2,uVar4,pMVar2,uVar5,this + 0x80);
      Log::MessageBuilder::operator<<(pMVar1,param_4);
      Log::MessageBuilder::WriteToLogFile(aMStack_60);
      base::Mutex::Unlock(local_58);
    }
  }
  return;
}

