
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105c0e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::SharedLibraryEvent(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, unsigned long, unsigned
   long, long) */

void __thiscall
v8::internal::Logger::SharedLibraryEvent
          (Logger *this,basic_string *param_1,ulong param_2,ulong param_3,long param_4)

{
  MessageBuilder *pMVar1;
  Log *pLVar2;
  basic_string *pbVar3;
  MessageBuilder aMStack_40 [8];
  Mutex *local_38;
  
  pLVar2 = *(Log **)(this + 0x28);
  if ((*pLVar2 == (Log)0x0) && (*(long *)(pLVar2 + 8) != 0)) {
    if (FLAG_prof_cpp != '\0') {
      Log::MessageBuilder::MessageBuilder(aMStack_40,pLVar2);
      Log::MessageBuilder::operator<<(aMStack_40,"shared-library");
      pMVar1 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
      pbVar3 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar3 = param_1 + 1;
      }
      Log::MessageBuilder::operator<<(pMVar1,(char *)pbVar3);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(pMVar1,(void *)param_2);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      Log::MessageBuilder::operator<<(pMVar1,(void *)param_3);
      pMVar1 = Log::MessageBuilder::operator<<(pMVar1,0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
                 param_4);
      Log::MessageBuilder::WriteToLogFile(aMStack_40);
      base::Mutex::Unlock(local_38);
    }
  }
  return;
}

