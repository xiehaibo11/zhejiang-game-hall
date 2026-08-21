
/* v8::internal::Logger::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, char const*) */

void __thiscall
v8::internal::Logger::CodeCreateEvent(Logger *this,undefined4 param_2,ulong param_3,char *param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  Log *pLVar4;
  uint uVar5;
  MessageBuilder aMStack_60 [8];
  Mutex *local_58;
  ulong local_38;
  
  uVar2 = (**(code **)(*(long *)this + 0x88))();
  if ((((FLAG_log_code != '\0') && ((uVar2 & 1) != 0)) &&
      (pLVar4 = *(Log **)(this + 0x28), *pLVar4 == (Log)0x0)) && (*(long *)(pLVar4 + 8) != 0)) {
    Log::MessageBuilder::MessageBuilder(aMStack_60,pLVar4);
    uVar2 = param_3 & 0xffffffff00000000 | 7;
    if (*(short *)(uVar2 + *(uint *)(param_3 - 1)) == 0x9a) {
      uVar5 = *(uint *)(param_3 + 0x17) >> 1 & 0x1f;
    }
    else {
      uVar5 = 0xc;
    }
    if (*(short *)(uVar2 + *(uint *)(param_3 - 1)) == 0x9a) {
      if (*(int *)(param_3 + 0x17) < 0) {
        local_38 = param_3;
        lVar3 = Code::OffHeapInstructionStart((Code *)&local_38);
      }
      else {
        lVar3 = param_3 + 0x3f;
        local_38 = param_3;
      }
    }
    else {
      lVar3 = param_3 + 0x21;
    }
    if (*(short *)(uVar2 + *(uint *)(param_3 - 1)) == 0x9a) {
      if (*(int *)(param_3 + 0x17) < 0) {
        local_38 = param_3;
        iVar1 = Code::OffHeapInstructionSize((Code *)&local_38);
      }
      else {
        iVar1 = *(int *)(param_3 + 0x13);
        local_38 = param_3;
      }
    }
    else {
      iVar1 = *(int *)(param_3 + 3) >> 1;
    }
    FUN_0105db00(aMStack_60,param_2,uVar5,lVar3,iVar1,this + 0x80);
    Log::MessageBuilder::operator<<(aMStack_60,param_4);
    Log::MessageBuilder::WriteToLogFile(aMStack_60);
    base::Mutex::Unlock(local_58);
  }
  return;
}

