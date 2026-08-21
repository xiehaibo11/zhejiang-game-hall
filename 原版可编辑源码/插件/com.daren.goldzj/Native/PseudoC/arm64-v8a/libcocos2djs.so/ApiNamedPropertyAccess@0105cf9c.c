
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105cffc */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::ApiNamedPropertyAccess(char const*, v8::internal::JSObject,
   v8::internal::Object) */

void __thiscall
v8::internal::Logger::ApiNamedPropertyAccess
          (Logger *this,char *param_1,undefined8 param_3,undefined8 param_4)

{
  MessageBuilder *pMVar1;
  Log *pLVar2;
  MessageBuilder aMStack_38 [8];
  Mutex *local_30;
  undefined8 local_28;
  
  pLVar2 = *(Log **)(this + 0x28);
  if ((*pLVar2 == (Log)0x0) && (*(long *)(pLVar2 + 8) != 0)) {
    if (FLAG_log_api != '\0') {
      local_28 = param_3;
      Log::MessageBuilder::MessageBuilder(aMStack_38,pLVar2);
      Log::MessageBuilder::operator<<(aMStack_38,"api");
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<(pMVar1,param_1);
      Log::MessageBuilder::operator<<(pMVar1,0);
      pMVar1 = (MessageBuilder *)JSReceiver::class_name((JSReceiver *)&local_28);
      Log::MessageBuilder::operator<<(pMVar1,pMVar1);
      Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(pMVar1,param_4);
      Log::MessageBuilder::WriteToLogFile(aMStack_38);
      base::Mutex::Unlock(local_30);
    }
  }
  return;
}

