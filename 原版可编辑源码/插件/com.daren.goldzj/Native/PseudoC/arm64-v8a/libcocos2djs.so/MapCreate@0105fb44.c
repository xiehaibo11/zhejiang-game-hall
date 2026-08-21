
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105fba4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::MapCreate(v8::internal::Map) */

void __thiscall v8::internal::Logger::MapCreate(Logger *this,undefined8 param_2)

{
  MessageBuilder *pMVar1;
  MessageBuilder *pMVar2;
  Log *pLVar3;
  MessageBuilder aMStack_50 [8];
  Mutex *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  long local_18;
  
  pLVar3 = *(Log **)(this + 0x28);
  if ((*pLVar3 == (Log)0x0) && (*(long *)(pLVar3 + 8) != 0)) {
    if (FLAG_trace_maps != '\0') {
      Log::MessageBuilder::MessageBuilder(aMStack_50,pLVar3);
      Log::MessageBuilder::operator<<(aMStack_50,"map-create");
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      local_18 = base::TimeTicks::HighResolutionNow();
      local_18 = local_18 - *(long *)(this + 0x80);
      pMVar2 = (MessageBuilder *)base::TimeDelta::InMicroseconds((TimeDelta *)&local_18);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 (long)pMVar2);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar2,0);
      uStack_38 = 0x10c;
      local_40 = param_2;
      internal::operator<<((basic_ostream *)(*(long *)pMVar1 + 0x10),(AsHex *)&local_40);
      Log::MessageBuilder::WriteToLogFile(aMStack_50);
      base::Mutex::Unlock(local_48);
    }
  }
  return;
}

