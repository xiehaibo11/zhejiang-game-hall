
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105da7c */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::wasm::WasmCode const*, v8::internal::Vector<char const>) */

void v8::internal::Logger::CodeCreateEvent
               (long *param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4,long param_5
               )

{
  uint uVar1;
  MessageBuilder *pMVar2;
  Log *pLVar3;
  char *pcVar4;
  long lVar5;
  MessageBuilder aMStack_50 [8];
  Mutex *local_48;
  
  pMVar2 = (MessageBuilder *)(**(code **)(*param_1 + 0x88))();
  if ((((FLAG_log_code != '\0') && (((ulong)pMVar2 & 1) != 0)) &&
      (pLVar3 = (Log *)param_1[5], *pLVar3 == (Log)0x0)) && (*(long *)(pLVar3 + 8) != 0)) {
    Log::MessageBuilder::MessageBuilder(aMStack_50,pLVar3);
    FUN_0105db00(aMStack_50,param_2,5,*param_3,*(undefined4 *)(param_3 + 1),param_1 + 0x10);
    if (param_5 == 0) {
      Log::MessageBuilder::operator<<(aMStack_50,"<unknown wasm>");
    }
    else {
      Log::MessageBuilder::AppendString(aMStack_50,param_4,param_5);
    }
    lVar5 = param_3[6];
    uVar1 = *(uint *)(param_3 + 7);
    pMVar2 = Log::MessageBuilder::operator<<(pMVar2,0);
    Log::MessageBuilder::operator<<(pMVar2,(void *)(lVar5 + (ulong)uVar1));
    pMVar2 = Log::MessageBuilder::operator<<(pMVar2,0);
    if (*(int *)((long)param_3 + 0x3c) == 3) {
      pcVar4 = "~";
    }
    else if (*(int *)((long)param_3 + 0x3c) == 0) {
      pcVar4 = "";
      if (*(char *)(param_3 + 0x11) != '\x02') {
        pcVar4 = "*";
      }
    }
    else {
      pcVar4 = "";
    }
    Log::MessageBuilder::operator<<(pMVar2,pcVar4);
    Log::MessageBuilder::WriteToLogFile(aMStack_50);
    base::Mutex::Unlock(local_48);
  }
  return;
}

