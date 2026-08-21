
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105d404 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::CallbackEventInternal(char const*, v8::internal::Name, unsigned long) */

void __thiscall
v8::internal::Logger::CallbackEventInternal
          (Logger *this,char *param_1,undefined8 param_3,void *param_4)

{
  MessageBuilder *pMVar1;
  MessageBuilder *pMVar2;
  Log *pLVar3;
  MessageBuilder aMStack_50 [8];
  Mutex *local_48;
  long local_28;
  
  if (FLAG_log_code != '\0') {
    pLVar3 = *(Log **)(this + 0x28);
    if ((*pLVar3 == (Log)0x0) && (*(long *)(pLVar3 + 8) != 0)) {
      Log::MessageBuilder::MessageBuilder(aMStack_50,pLVar3);
      Log::MessageBuilder::operator<<(aMStack_50,"code-creation");
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<(pMVar1,"Callback");
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),-2);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      local_28 = base::TimeTicks::HighResolutionNow();
      local_28 = local_28 - *(long *)(this + 0x80);
      pMVar2 = (MessageBuilder *)base::TimeDelta::InMicroseconds((TimeDelta *)&local_28);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 (long)pMVar2);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar2,0);
      Log::MessageBuilder::operator<<(pMVar1,param_4);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),1);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(pMVar1,param_1);
      Log::MessageBuilder::operator<<(pMVar1,param_3);
      Log::MessageBuilder::WriteToLogFile(aMStack_50);
      base::Mutex::Unlock(local_48);
    }
  }
  return;
}

