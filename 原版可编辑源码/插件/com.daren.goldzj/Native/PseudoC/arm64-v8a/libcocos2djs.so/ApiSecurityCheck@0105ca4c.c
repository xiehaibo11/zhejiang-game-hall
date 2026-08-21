
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105ca98 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::ApiSecurityCheck() */

void __thiscall v8::internal::Logger::ApiSecurityCheck(Logger *this)

{
  MessageBuilder *this_00;
  Log *pLVar1;
  MessageBuilder aMStack_20 [8];
  Mutex *local_18;
  
  pLVar1 = *(Log **)(this + 0x28);
  if ((*pLVar1 == (Log)0x0) && (*(long *)(pLVar1 + 8) != 0)) {
    if (FLAG_log_api != '\0') {
      Log::MessageBuilder::MessageBuilder(aMStack_20,pLVar1);
      Log::MessageBuilder::operator<<(aMStack_20,"api");
      this_00 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<(this_00,"check-security");
      Log::MessageBuilder::WriteToLogFile(aMStack_20);
      base::Mutex::Unlock(local_18);
    }
  }
  return;
}

