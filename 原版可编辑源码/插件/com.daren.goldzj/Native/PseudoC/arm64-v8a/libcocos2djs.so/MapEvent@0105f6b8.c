
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105f774 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::MapEvent(char const*, v8::internal::Map, v8::internal::Map, char const*,
   v8::internal::HeapObject) */

void __thiscall
v8::internal::Logger::MapEvent
          (Logger *this,char *param_1,undefined8 param_3,undefined8 param_4,char *param_5,
          MessageBuilder *param_6)

{
  Isolate *this_00;
  MessageBuilder *pMVar1;
  MessageBuilder *pMVar2;
  ulong uVar3;
  MessageBuilder *pMVar4;
  long local_78;
  MessageBuilder aMStack_70 [8];
  Mutex *local_68;
  MessageBuilder *local_60;
  undefined8 uStack_58;
  int local_38;
  int local_34;
  
  if ((**(char **)(this + 0x28) == '\0') && (*(long *)(*(char **)(this + 0x28) + 8) != 0)) {
    if (FLAG_trace_maps != '\0') {
      if ((int)param_4 != 0) {
        MapDetails(this,param_4);
      }
      local_38 = -1;
      local_34 = -1;
      this_00 = *(Isolate **)(this + 8);
      if (*(int *)(*(long *)(this_00 + 0x9508) + 8) == 0) {
        pMVar4 = (MessageBuilder *)Isolate::GetAbstractPC(this_00,&local_34,&local_38);
        this_00 = (Isolate *)pMVar4;
      }
      else {
        pMVar4 = (MessageBuilder *)0x0;
      }
      Log::MessageBuilder::MessageBuilder(aMStack_70,*(Log **)(this + 0x28));
      Log::MessageBuilder::operator<<(aMStack_70,"map");
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this_00,0);
      Log::MessageBuilder::operator<<(pMVar1,param_1);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      local_78 = base::TimeTicks::HighResolutionNow();
      local_78 = local_78 - *(long *)(this + 0x80);
      pMVar2 = (MessageBuilder *)base::TimeDelta::InMicroseconds((TimeDelta *)&local_78);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 (long)pMVar2);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar2,0);
      uStack_58 = 0x10c;
      local_60 = (MessageBuilder *)param_3;
      internal::operator<<((basic_ostream *)(*(long *)pMVar1 + 0x10),(AsHex *)&local_60);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      uStack_58 = 0x10c;
      local_60 = (MessageBuilder *)param_4;
      internal::operator<<((basic_ostream *)(*(long *)pMVar1 + 0x10),(AsHex *)&local_60);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      uStack_58 = 0x10c;
      local_60 = pMVar4;
      internal::operator<<((basic_ostream *)(*(long *)pMVar1 + 0x10),(AsHex *)&local_60);
      pMVar4 = Log::MessageBuilder::operator<<(pMVar1,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar4 + 0x10),
                 local_34);
      pMVar4 = Log::MessageBuilder::operator<<(pMVar4,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar4 + 0x10),
                 local_38);
      pMVar4 = Log::MessageBuilder::operator<<(pMVar4,0);
      Log::MessageBuilder::operator<<(pMVar4,param_5);
      Log::MessageBuilder::operator<<(pMVar4,0);
      if ((int)param_6 != 0) {
        uVar3 = (ulong)param_6 & 0xffffffff00000000 | 7;
        if (*(ushort *)(uVar3 + *(uint *)(param_6 + -1)) < 0x41) {
          Log::MessageBuilder::operator<<(pMVar4,param_6);
        }
        else if (*(short *)(uVar3 + *(uint *)(param_6 + -1)) == 0xa6) {
          local_60 = param_6;
          pMVar4 = (MessageBuilder *)SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_60);
          Log::MessageBuilder::operator<<(pMVar4,pMVar4);
        }
      }
      Log::MessageBuilder::WriteToLogFile(aMStack_70);
      base::Mutex::Unlock(local_68);
    }
  }
  return;
}

