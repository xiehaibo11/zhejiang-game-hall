
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105e55c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::CodeDisableOptEvent(v8::internal::AbstractCode,
   v8::internal::SharedFunctionInfo) */

void __thiscall
v8::internal::Logger::CodeDisableOptEvent(Logger *this,undefined8 param_2,long param_3)

{
  MessageBuilder *pMVar1;
  char *pcVar2;
  Log *pLVar3;
  MessageBuilder aMStack_30 [8];
  Mutex *local_28;
  long local_8;
  
  local_8 = param_3;
  pMVar1 = (MessageBuilder *)(**(code **)(*(long *)this + 0x88))();
  if ((FLAG_log_code != '\0') && (((ulong)pMVar1 & 1) != 0)) {
    pLVar3 = *(Log **)(this + 0x28);
    if ((*pLVar3 == (Log)0x0) && (*(long *)(pLVar3 + 8) != 0)) {
      Log::MessageBuilder::MessageBuilder(aMStack_30,pLVar3);
      Log::MessageBuilder::operator<<(aMStack_30,"code-disable-optimization");
      Log::MessageBuilder::operator<<(pMVar1,0);
      pMVar1 = (MessageBuilder *)SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_8);
      Log::MessageBuilder::operator<<(pMVar1,pMVar1);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      pcVar2 = (char *)GetBailoutReason(*(uint *)(local_8 + 0x1b) >> 0x14 & 0xf);
      Log::MessageBuilder::operator<<(pMVar1,pcVar2);
      Log::MessageBuilder::WriteToLogFile(aMStack_30);
      base::Mutex::Unlock(local_28);
    }
  }
  return;
}

