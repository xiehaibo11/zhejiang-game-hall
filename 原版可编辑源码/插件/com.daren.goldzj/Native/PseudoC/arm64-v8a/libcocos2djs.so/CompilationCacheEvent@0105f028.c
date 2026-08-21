
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105f100 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::CompilationCacheEvent(char const*, char const*,
   v8::internal::SharedFunctionInfo) */

void __thiscall
v8::internal::Logger::CompilationCacheEvent(Logger *this,char *param_1,char *param_2,ulong param_4)

{
  MessageBuilder *pMVar1;
  long lVar2;
  Log *pLVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  long local_50;
  MessageBuilder aMStack_48 [8];
  Mutex *local_40;
  ulong local_38;
  
  pLVar3 = *(Log **)(this + 0x28);
  if ((*pLVar3 == (Log)0x0) && (*(long *)(pLVar3 + 8) != 0)) {
    if (FLAG_log_function_events != '\0') {
      local_38 = param_4;
      Log::MessageBuilder::MessageBuilder(aMStack_48,pLVar3);
      uVar5 = param_4 & 0xffffffff00000000;
      uVar4 = uVar5 | *(uint *)(param_4 + 0xf);
      uVar6 = uVar4;
      if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x5b) {
        uVar6 = uVar5 | *(uint *)(uVar4 + 0xb);
      }
      if (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x65) {
        if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x5b) {
          uVar4 = uVar5 | *(uint *)(uVar4 + 0xb);
        }
        iVar7 = *(int *)(uVar4 + 0x1f) >> 1;
      }
      else {
        iVar7 = -1;
      }
      Log::MessageBuilder::operator<<(aMStack_48,"compilation-cache");
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      Log::MessageBuilder::operator<<(pMVar1,param_1);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(pMVar1,param_2);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 iVar7);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      SharedFunctionInfo::StartPosition((SharedFunctionInfo *)&local_38);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 (int)(SharedFunctionInfo *)&local_38);
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)&local_38,0);
      SharedFunctionInfo::EndPosition((SharedFunctionInfo *)&local_38);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 (int)(SharedFunctionInfo *)&local_38);
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)&local_38,0);
      local_50 = base::TimeTicks::HighResolutionNow();
      local_50 = local_50 - *(long *)(this + 0x80);
      lVar2 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_50);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 lVar2);
      Log::MessageBuilder::WriteToLogFile(aMStack_48);
      base::Mutex::Unlock(local_40);
    }
  }
  return;
}

