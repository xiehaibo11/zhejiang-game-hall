
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105d178 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::ApiObjectAccess(char const*, v8::internal::JSObject) */

void __thiscall v8::internal::Logger::ApiObjectAccess(Logger *this,char *param_1,undefined8 param_3)

{
  MessageBuilder *pMVar1;
  Log *pLVar2;
  MessageBuilder aMStack_30 [8];
  Mutex *local_28;
  undefined8 local_8;
  
  pLVar2 = *(Log **)(this + 0x28);
  if ((*pLVar2 == (Log)0x0) && (*(long *)(pLVar2 + 8) != 0)) {
    if (FLAG_log_api != '\0') {
      local_8 = param_3;
      Log::MessageBuilder::MessageBuilder(aMStack_30,pLVar2);
      Log::MessageBuilder::operator<<(aMStack_30,"api");
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<(pMVar1,param_1);
      Log::MessageBuilder::operator<<(pMVar1,0);
      pMVar1 = (MessageBuilder *)JSReceiver::class_name((JSReceiver *)&local_8);
      Log::MessageBuilder::operator<<(pMVar1,pMVar1);
      Log::MessageBuilder::WriteToLogFile(aMStack_30);
      base::Mutex::Unlock(local_28);
    }
  }
  return;
}

