
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105ee6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0105ee28(double param_1,MessageBuilder *param_2,char *param_3,int param_4,int param_5,
                 int param_6,long *param_7)

{
  MessageBuilder *pMVar1;
  MessageBuilder *pMVar2;
  long local_48;
  
  v8::internal::Log::MessageBuilder::operator<<(param_2,"function");
  pMVar1 = v8::internal::Log::MessageBuilder::operator<<(param_2,0);
  v8::internal::Log::MessageBuilder::operator<<(pMVar1,param_3);
  pMVar1 = v8::internal::Log::MessageBuilder::operator<<(pMVar1,0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),param_4)
  ;
  pMVar1 = v8::internal::Log::MessageBuilder::operator<<(pMVar1,0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),param_5)
  ;
  pMVar1 = v8::internal::Log::MessageBuilder::operator<<(pMVar1,0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),param_6)
  ;
  pMVar1 = v8::internal::Log::MessageBuilder::operator<<(pMVar1,0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),param_1)
  ;
  pMVar1 = v8::internal::Log::MessageBuilder::operator<<(pMVar1,0);
  local_48 = v8::base::TimeTicks::HighResolutionNow();
  local_48 = local_48 - *param_7;
  pMVar2 = (MessageBuilder *)v8::base::TimeDelta::InMicroseconds((TimeDelta *)&local_48);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
             (long)pMVar2);
  v8::internal::Log::MessageBuilder::operator<<(pMVar2,0);
  return;
}

