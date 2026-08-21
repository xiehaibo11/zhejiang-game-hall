
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105ebe4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::ResourceEvent(char const*, char const*) */

void __thiscall v8::internal::Logger::ResourceEvent(Logger *this,char *param_1,char *param_2)

{
  MessageBuilder *pMVar1;
  long *plVar2;
  Log *pLVar3;
  uint local_38;
  uint local_34;
  long local_30;
  Mutex *local_28;
  
  pLVar3 = *(Log **)(this + 0x28);
  if ((*pLVar3 == (Log)0x0) && (*(long *)(pLVar3 + 8) != 0)) {
    if (FLAG_log != '\0') {
      Log::MessageBuilder::MessageBuilder((MessageBuilder *)&local_30,pLVar3);
      Log::MessageBuilder::operator<<((MessageBuilder *)&local_30,param_1);
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<(pMVar1,param_2);
      Log::MessageBuilder::operator<<(pMVar1,0);
      base::OS::GetUserTime(&local_34,&local_38);
      if ((int)pMVar1 != -1) {
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(local_30 + 0x10),local_34)
        ;
        pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                   local_38);
        Log::MessageBuilder::operator<<(pMVar1,0);
      }
      plVar2 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar2 + 0x80))();
      Log::MessageBuilder::AppendFormatString((char *)&local_30,&DAT_019d4ecb);
      Log::MessageBuilder::WriteToLogFile((MessageBuilder *)&local_30);
      base::Mutex::Unlock(local_28);
    }
  }
  return;
}

