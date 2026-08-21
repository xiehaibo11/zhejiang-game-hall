
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105ed24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::SuspectReadEvent(v8::internal::Name, v8::internal::Object) */

void __thiscall
v8::internal::Logger::SuspectReadEvent(Logger *this,undefined8 param_2,ulong param_3)

{
  MessageBuilder *pMVar1;
  Log *pLVar2;
  MessageBuilder aMStack_40 [8];
  Mutex *local_38;
  ulong local_18;
  
  pLVar2 = *(Log **)(this + 0x28);
  if (*pLVar2 != (Log)0x0) {
    return;
  }
  if (*(long *)(pLVar2 + 8) != 0) {
    if (FLAG_log_suspect != '\0') {
      Log::MessageBuilder::MessageBuilder(aMStack_40,pLVar2);
      if (((param_3 & 1) == 0) ||
         (*(ushort *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) < 0xaa)) {
        pMVar1 = *(MessageBuilder **)(*(long *)(this + 8) + 200);
      }
      else {
        local_18 = param_3;
        pMVar1 = (MessageBuilder *)JSReceiver::class_name((JSReceiver *)&local_18);
        this = (Logger *)pMVar1;
      }
      Log::MessageBuilder::operator<<(aMStack_40,"suspect-read");
      Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<((MessageBuilder *)this,pMVar1);
      Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<((MessageBuilder *)this,param_2);
      Log::MessageBuilder::WriteToLogFile(aMStack_40);
      base::Mutex::Unlock(local_38);
      return;
    }
    return;
  }
  return;
}

