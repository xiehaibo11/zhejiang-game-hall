
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105d2ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::NewEvent(char const*, void*, unsigned long) */

void __thiscall
v8::internal::Logger::NewEvent(Logger *this,char *param_1,void *param_2,ulong param_3)

{
  MessageBuilder *pMVar1;
  Log *pLVar2;
  MessageBuilder aMStack_40 [8];
  Mutex *local_38;
  
  pLVar2 = *(Log **)(this + 0x28);
  if ((*pLVar2 == (Log)0x0) && (*(long *)(pLVar2 + 8) != 0)) {
    if (FLAG_log != '\0') {
      Log::MessageBuilder::MessageBuilder(aMStack_40,pLVar2);
      Log::MessageBuilder::operator<<(aMStack_40,"new");
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<(pMVar1,param_1);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(pMVar1,param_2);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 (uint)param_3);
      Log::MessageBuilder::WriteToLogFile(aMStack_40);
      base::Mutex::Unlock(local_38);
    }
  }
  return;
}

