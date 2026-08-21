
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105c5d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::TickEvent(v8::internal::TickSample*, bool) */

void __thiscall v8::internal::Logger::TickEvent(Logger *this,TickSample *param_1,bool param_2)

{
  ushort uVar1;
  MessageBuilder *pMVar2;
  MessageBuilder *pMVar3;
  Log *pLVar4;
  ulong uVar5;
  long local_48;
  MessageBuilder aMStack_40 [8];
  Mutex *local_38;
  
  pLVar4 = *(Log **)(this + 0x28);
  if ((*pLVar4 == (Log)0x0) && (*(long *)(pLVar4 + 8) != 0)) {
    if (FLAG_prof_cpp != '\0') {
      if (TracingFlags::runtime_stats == 1) {
        RuntimeCallTimerEvent(this);
        pLVar4 = *(Log **)(this + 0x28);
      }
      Log::MessageBuilder::MessageBuilder(aMStack_40,pLVar4);
      Log::MessageBuilder::operator<<(aMStack_40,"tick");
      pMVar2 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<(pMVar2,*(void **)(param_1 + 8));
      pMVar2 = Log::MessageBuilder::operator<<(pMVar2,0);
      local_48 = base::TimeTicks::HighResolutionNow();
      local_48 = local_48 - *(long *)(this + 0x80);
      pMVar3 = (MessageBuilder *)base::TimeDelta::InMicroseconds((TimeDelta *)&local_48);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar2 + 0x10),
                 (long)pMVar3);
      uVar1 = *(ushort *)(param_1 + 0x1010);
      pMVar2 = Log::MessageBuilder::operator<<(pMVar3,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar2 + 0x10),
                 uVar1 >> 8 & 1);
      pMVar2 = Log::MessageBuilder::operator<<(pMVar2,0);
      Log::MessageBuilder::operator<<(pMVar2,*(void **)(param_1 + 0x10));
      pMVar2 = Log::MessageBuilder::operator<<(pMVar2,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar2 + 0x10),
                 *(int *)param_1);
      if (param_2) {
        pMVar2 = Log::MessageBuilder::operator<<(pMVar2,0);
        Log::MessageBuilder::operator<<(pMVar2,"overflow");
      }
      if (param_1[0x1010] != (TickSample)0x0) {
        uVar5 = 0;
        do {
          pMVar2 = Log::MessageBuilder::operator<<(pMVar2,0);
          Log::MessageBuilder::operator<<(pMVar2,*(void **)(param_1 + uVar5 * 8 + 0x18));
          uVar5 = uVar5 + 1;
        } while (uVar5 < (byte)param_1[0x1010]);
      }
      Log::MessageBuilder::WriteToLogFile(aMStack_40);
      base::Mutex::Unlock(local_38);
    }
  }
  return;
}

