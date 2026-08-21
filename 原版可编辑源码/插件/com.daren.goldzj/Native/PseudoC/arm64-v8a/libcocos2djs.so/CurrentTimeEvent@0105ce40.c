
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105ce84 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::CurrentTimeEvent() */

void __thiscall v8::internal::Logger::CurrentTimeEvent(Logger *this)

{
  MessageBuilder *pMVar1;
  long lVar2;
  Log *pLVar3;
  long local_38;
  MessageBuilder aMStack_30 [8];
  Mutex *local_28;
  
  pLVar3 = *(Log **)(this + 0x28);
  if ((*pLVar3 == (Log)0x0) && (*(long *)(pLVar3 + 8) != 0)) {
    Log::MessageBuilder::MessageBuilder(aMStack_30,pLVar3);
    Log::MessageBuilder::operator<<(aMStack_30,"current-time");
    pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
    local_38 = base::TimeTicks::HighResolutionNow();
    local_38 = local_38 - *(long *)(this + 0x80);
    lVar2 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_38);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),lVar2)
    ;
    Log::MessageBuilder::WriteToLogFile(aMStack_30);
    base::Mutex::Unlock(local_28);
  }
  return;
}

