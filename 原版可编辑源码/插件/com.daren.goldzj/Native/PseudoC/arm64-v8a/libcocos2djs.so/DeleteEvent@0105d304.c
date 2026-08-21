
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105d360 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::DeleteEvent(char const*, void*) */

void __thiscall v8::internal::Logger::DeleteEvent(Logger *this,char *param_1,void *param_2)

{
  MessageBuilder *pMVar1;
  Log *pLVar2;
  MessageBuilder aMStack_30 [8];
  Mutex *local_28;
  
  pLVar2 = *(Log **)(this + 0x28);
  if ((*pLVar2 == (Log)0x0) && (*(long *)(pLVar2 + 8) != 0)) {
    if (FLAG_log != '\0') {
      Log::MessageBuilder::MessageBuilder(aMStack_30,pLVar2);
      Log::MessageBuilder::operator<<(aMStack_30,"delete");
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<(pMVar1,param_1);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(pMVar1,param_2);
      Log::MessageBuilder::WriteToLogFile(aMStack_30);
      base::Mutex::Unlock(local_28);
    }
  }
  return;
}

