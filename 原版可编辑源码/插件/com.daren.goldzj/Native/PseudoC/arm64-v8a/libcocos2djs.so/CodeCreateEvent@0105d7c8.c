
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105d930 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, v8::internal::SharedFunctionInfo, v8::internal::Name) */

void __thiscall
v8::internal::Logger::CodeCreateEvent
          (Logger *this,undefined4 param_2,ulong param_3,long param_4,undefined8 param_5)

{
  MessageBuilder *pMVar1;
  MessageBuilder *pMVar2;
  char *pcVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  MessageBuilder aMStack_68 [8];
  Mutex *local_60;
  ulong local_58;
  
  pMVar1 = (MessageBuilder *)(**(code **)(*(long *)this + 0x88))();
  if (FLAG_log_code == '\0') {
    return;
  }
  if (((ulong)pMVar1 & 1) == 0) {
    return;
  }
  if (**(char **)(this + 0x28) != '\0') {
    return;
  }
  if (*(long *)(*(char **)(this + 0x28) + 8) == 0) {
    return;
  }
  Builtins::builtin((Builtins *)(*(long *)(this + 8) + 0x9e00),0x42);
  if ((int)param_3 == (int)pMVar1) {
    return;
  }
  Log::MessageBuilder::MessageBuilder(aMStack_68,*(Log **)(this + 0x28));
  uVar6 = param_3 & 0xffffffff00000000 | 7;
  if (*(short *)(uVar6 + *(uint *)(param_3 - 1)) == 0x9a) {
    uVar5 = *(uint *)(param_3 + 0x17) >> 1 & 0x1f;
  }
  else {
    uVar5 = 0xc;
  }
  if (*(short *)(uVar6 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_58 = param_3;
      pMVar2 = (MessageBuilder *)Code::OffHeapInstructionStart((Code *)&local_58);
      pMVar1 = pMVar2;
    }
    else {
      pMVar2 = (MessageBuilder *)(param_3 + 0x3f);
      local_58 = param_3;
    }
  }
  else {
    pMVar2 = (MessageBuilder *)(param_3 + 0x21);
  }
  if (*(short *)(uVar6 + *(uint *)(param_3 - 1)) == 0x9a) {
    if (*(int *)(param_3 + 0x17) < 0) {
      local_58 = param_3;
      pMVar1 = (MessageBuilder *)Code::OffHeapInstructionSize((Code *)&local_58);
      uVar4 = (ulong)pMVar1 & 0xffffffff;
    }
    else {
      uVar4 = (ulong)*(uint *)(param_3 + 0x13);
      local_58 = param_3;
    }
  }
  else {
    uVar4 = (ulong)(uint)(*(int *)(param_3 + 3) >> 1);
  }
  FUN_0105db00(aMStack_68,param_2,uVar5,pMVar2,uVar4,this + 0x80);
  Log::MessageBuilder::operator<<(pMVar1,param_5);
  pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
  Log::MessageBuilder::operator<<(pMVar1,(void *)(param_4 + -1));
  pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
  if (*(short *)(uVar6 + *(uint *)(param_3 - 1)) == 0x9a) {
    uVar5 = *(uint *)(param_3 + 0x17) >> 1 & 0x1f;
    if (uVar5 == 0) {
      pcVar3 = "*";
      goto LAB_0105d9a4;
    }
    if (uVar5 != 0xc) {
      pcVar3 = "";
      goto LAB_0105d9a4;
    }
  }
  pcVar3 = "~";
  if ((*(uint *)(param_4 + 0x1b) & 0xf00000) != 0) {
    pcVar3 = "";
  }
LAB_0105d9a4:
  Log::MessageBuilder::operator<<(pMVar1,pcVar3);
  Log::MessageBuilder::WriteToLogFile(aMStack_68);
  base::Mutex::Unlock(local_60);
  return;
}

