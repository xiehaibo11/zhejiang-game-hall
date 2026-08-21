
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105eae0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::CodeNameEvent(unsigned long, int, char const*) */

void __thiscall
v8::internal::Logger::CodeNameEvent(Logger *this,ulong param_1,int param_2,char *param_3)

{
  MessageBuilder *pMVar1;
  MessageBuilder aMStack_40 [8];
  Mutex *local_38;
  
  if (param_3 != (char *)0x0) {
    Log::MessageBuilder::MessageBuilder(aMStack_40,*(Log **)(this + 0x28));
    Log::MessageBuilder::operator<<(aMStack_40,"snapshot-code-name");
    pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
               param_2);
    pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
    Log::MessageBuilder::operator<<(pMVar1,param_3);
    Log::MessageBuilder::WriteToLogFile(aMStack_40);
    base::Mutex::Unlock(local_38);
  }
  return;
}

