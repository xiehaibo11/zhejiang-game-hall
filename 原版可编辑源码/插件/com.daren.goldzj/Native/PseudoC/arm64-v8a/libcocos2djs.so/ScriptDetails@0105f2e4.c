
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105f344 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::ScriptDetails(v8::internal::Script) */

void __thiscall v8::internal::Logger::ScriptDetails(Logger *this,ulong param_2)

{
  MessageBuilder *pMVar1;
  Log *pLVar2;
  ulong uVar3;
  MessageBuilder aMStack_40 [8];
  Mutex *local_38;
  
  pLVar2 = *(Log **)(this + 0x28);
  if ((*pLVar2 == (Log)0x0) && (*(long *)(pLVar2 + 8) != 0)) {
    if (FLAG_log_function_events != '\0') {
      Log::MessageBuilder::MessageBuilder(aMStack_40,pLVar2);
      Log::MessageBuilder::operator<<(aMStack_40,"script-details");
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 *(int *)(param_2 + 0x1f) >> 1);
      Log::MessageBuilder::operator<<(pMVar1,0);
      uVar3 = param_2 & 0xffffffff00000000;
      if ((*(uint *)(param_2 + 7) & 1) != 0) {
        if (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(param_2 + 7)) - 1)) < 0x40
           ) {
          Log::MessageBuilder::operator<<();
        }
      }
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 *(int *)(param_2 + 0xb) >> 1);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 *(int *)(param_2 + 0xf) >> 1);
      Log::MessageBuilder::operator<<(pMVar1,0);
      if ((*(uint *)(param_2 + 0x37) & 1) != 0) {
        if (*(ushort *)((uVar3 | 7) + (ulong)*(uint *)((uVar3 | *(uint *)(param_2 + 0x37)) - 1)) <
            0x40) {
          Log::MessageBuilder::operator<<();
        }
      }
      Log::MessageBuilder::WriteToLogFile(aMStack_40);
      base::Mutex::Unlock(local_38);
      EnsureLogScriptSource(this,param_2);
    }
  }
  return;
}

