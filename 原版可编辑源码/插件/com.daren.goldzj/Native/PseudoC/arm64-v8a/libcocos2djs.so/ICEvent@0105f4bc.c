
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105f564 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::ICEvent(char const*, bool, v8::internal::Map, v8::internal::Object, char,
   char, char const*, char const*) */

void __thiscall
v8::internal::Logger::ICEvent
          (Logger *this,char *param_1,ulong param_3,undefined8 param_4,ulong param_5,char param_6,
          char param_7,char *param_8,char *param_9)

{
  MessageBuilder *pMVar1;
  MessageBuilder *this_00;
  Log *pLVar2;
  ulong uVar3;
  int local_78;
  int local_74;
  long local_70;
  Mutex *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  pLVar2 = *(Log **)(this + 0x28);
  if ((*pLVar2 == (Log)0x0) && (*(long *)(pLVar2 + 8) != 0)) {
    if (FLAG_trace_ic != '\0') {
      Log::MessageBuilder::MessageBuilder((MessageBuilder *)&local_70,pLVar2);
      if ((param_3 & 1) != 0) {
        Log::MessageBuilder::operator<<((MessageBuilder *)&local_70,"Keyed");
      }
      pMVar1 = (MessageBuilder *)Isolate::GetAbstractPC(*(Isolate **)(this + 8),&local_74,&local_78)
      ;
      Log::MessageBuilder::operator<<((MessageBuilder *)&local_70,param_1);
      this_00 = Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(this_00,pMVar1);
      pMVar1 = Log::MessageBuilder::operator<<(this_00,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 local_74);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 local_78);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(pMVar1,param_6);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(pMVar1,param_7);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      uStack_58 = 0x10c;
      local_60 = param_4;
      internal::operator<<((basic_ostream *)(*(long *)pMVar1 + 0x10),(AsHex *)&local_60);
      Log::MessageBuilder::operator<<(pMVar1,0);
      if ((param_5 & 1) == 0) {
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(local_70 + 0x10),
                   (int)param_5 >> 1);
      }
      else {
        uVar3 = param_5 & 0xffffffff00000000 | 7;
        if (*(short *)(uVar3 + *(uint *)(param_5 - 1)) == 0x42) {
          std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(local_70 + 0x10),
                     *(double *)(param_5 + 3));
        }
        else if (*(ushort *)(uVar3 + *(uint *)(param_5 - 1)) < 0x41) {
          Log::MessageBuilder::operator<<(pMVar1,param_5);
        }
      }
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(pMVar1,param_8);
      Log::MessageBuilder::operator<<(pMVar1,0);
      if (param_9 != (char *)0x0) {
        Log::MessageBuilder::operator<<((MessageBuilder *)&local_70,param_9);
      }
      Log::MessageBuilder::WriteToLogFile((MessageBuilder *)&local_70);
      base::Mutex::Unlock(local_68);
    }
  }
  return;
}

