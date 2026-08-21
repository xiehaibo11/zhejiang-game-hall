
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105cf38 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::TimerEvent(v8::internal::Logger::StartEnd, char const*) */

void __thiscall v8::internal::Logger::TimerEvent(Logger *this,uint param_2,char *param_3)

{
  MessageBuilder *pMVar1;
  long lVar2;
  Log *pLVar3;
  MessageBuilder aMStack_40 [8];
  Mutex *local_38;
  long local_18;
  
  pLVar3 = *(Log **)(this + 0x28);
  if ((*pLVar3 == (Log)0x0) && (*(long *)(pLVar3 + 8) != 0)) {
    Log::MessageBuilder::MessageBuilder(aMStack_40,pLVar3);
    if (param_2 < 3) {
      Log::MessageBuilder::operator<<(aMStack_40,(&PTR_s_timer_event_start_01cb2458)[(int)param_2]);
    }
    pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
    Log::MessageBuilder::operator<<(pMVar1,param_3);
    pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
    local_18 = base::TimeTicks::HighResolutionNow();
    local_18 = local_18 - *(long *)(this + 0x80);
    lVar2 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_18);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),lVar2)
    ;
    Log::MessageBuilder::WriteToLogFile(aMStack_40);
    base::Mutex::Unlock(local_38);
  }
  return;
}

