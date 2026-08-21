
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105c190 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::ProfilerBeginEvent() */

void __thiscall v8::internal::Logger::ProfilerBeginEvent(Logger *this)

{
  MessageBuilder *pMVar1;
  Log *pLVar2;
  MessageBuilder aMStack_20 [8];
  Mutex *local_18;
  
  pLVar2 = *(Log **)(this + 0x28);
  if ((*pLVar2 == (Log)0x0) && (*(long *)(pLVar2 + 8) != 0)) {
    Log::MessageBuilder::MessageBuilder(aMStack_20,pLVar2);
    Log::MessageBuilder::operator<<(aMStack_20,"profiler");
    pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
    Log::MessageBuilder::operator<<(pMVar1,"begin");
    pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
               FLAG_prof_sampling_interval);
    Log::MessageBuilder::WriteToLogFile(aMStack_20);
    base::Mutex::Unlock(local_18);
  }
  return;
}

