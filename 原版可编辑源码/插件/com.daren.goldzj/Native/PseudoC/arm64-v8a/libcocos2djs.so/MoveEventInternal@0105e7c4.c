
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105e828 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::MoveEventInternal(v8::internal::CodeEventListener::LogEventsAndTags,
   unsigned long, unsigned long) */

void __thiscall
v8::internal::Logger::MoveEventInternal(Logger *this,ulong param_2,void *param_3,void *param_4)

{
  MessageBuilder *pMVar1;
  Log *pLVar2;
  MessageBuilder aMStack_40 [8];
  Mutex *local_38;
  
  if (FLAG_log_code != '\0') {
    pLVar2 = *(Log **)(this + 0x28);
    if ((*pLVar2 == (Log)0x0) && (*(long *)(pLVar2 + 8) != 0)) {
      Log::MessageBuilder::MessageBuilder(aMStack_40,pLVar2);
      Log::MessageBuilder::operator<<
                (aMStack_40,(&PTR_s_code_creation_01cb2338)[param_2 & 0xffffffff]);
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<(pMVar1,param_3);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(pMVar1,param_4);
      Log::MessageBuilder::WriteToLogFile(aMStack_40);
      base::Mutex::Unlock(local_38);
    }
  }
  return;
}

