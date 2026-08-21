
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105e73c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::RegExpCodeCreateEvent(v8::internal::AbstractCode, v8::internal::String) */

void __thiscall
v8::internal::Logger::RegExpCodeCreateEvent(Logger *this,ulong param_2,undefined8 param_3)

{
  MessageBuilder *pMVar1;
  MessageBuilder *pMVar2;
  Log *pLVar3;
  uint uVar4;
  ulong uVar5;
  MessageBuilder aMStack_58 [8];
  Mutex *local_50;
  ulong local_48;
  
  pMVar1 = (MessageBuilder *)(**(code **)(*(long *)this + 0x88))();
  if ((FLAG_log_code != '\0') && (((ulong)pMVar1 & 1) != 0)) {
    pLVar3 = *(Log **)(this + 0x28);
    if ((*pLVar3 == (Log)0x0) && (*(long *)(pLVar3 + 8) != 0)) {
      Log::MessageBuilder::MessageBuilder(aMStack_58,pLVar3);
      uVar5 = param_2 & 0xffffffff00000000 | 7;
      if (*(short *)(uVar5 + *(uint *)(param_2 - 1)) == 0x9a) {
        uVar4 = *(uint *)(param_2 + 0x17) >> 1 & 0x1f;
      }
      else {
        uVar4 = 0xc;
      }
      if (*(short *)(uVar5 + *(uint *)(param_2 - 1)) == 0x9a) {
        if (*(int *)(param_2 + 0x17) < 0) {
          local_48 = param_2;
          pMVar2 = (MessageBuilder *)Code::OffHeapInstructionStart((Code *)&local_48);
          pMVar1 = pMVar2;
        }
        else {
          pMVar2 = (MessageBuilder *)(param_2 + 0x3f);
          local_48 = param_2;
        }
      }
      else {
        pMVar2 = (MessageBuilder *)(param_2 + 0x21);
      }
      if (*(short *)(uVar5 + *(uint *)(param_2 - 1)) == 0x9a) {
        if (*(int *)(param_2 + 0x17) < 0) {
          local_48 = param_2;
          pMVar1 = (MessageBuilder *)Code::OffHeapInstructionSize((Code *)&local_48);
          uVar5 = (ulong)pMVar1 & 0xffffffff;
        }
        else {
          uVar5 = (ulong)*(uint *)(param_2 + 0x13);
          local_48 = param_2;
        }
      }
      else {
        uVar5 = (ulong)(uint)(*(int *)(param_2 + 3) >> 1);
      }
      FUN_0105db00(aMStack_58,0x10,uVar4,pMVar2,uVar5,this + 0x80);
      Log::MessageBuilder::operator<<(pMVar1,param_3);
      Log::MessageBuilder::WriteToLogFile(aMStack_58);
      base::Mutex::Unlock(local_50);
    }
  }
  return;
}

