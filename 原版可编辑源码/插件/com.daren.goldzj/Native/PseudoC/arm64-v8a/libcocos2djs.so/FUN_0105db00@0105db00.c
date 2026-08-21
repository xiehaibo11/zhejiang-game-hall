
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105db38 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_0105db00(MessageBuilder *param_1,ulong param_2,int param_3,void *param_4,int param_5,
                 long *param_6)

{
  MessageBuilder *pMVar1;
  MessageBuilder *pMVar2;
  long local_28;
  
  v8::internal::Log::MessageBuilder::operator<<(param_1,"code-creation");
  pMVar1 = v8::internal::Log::MessageBuilder::operator<<(param_1,0);
  v8::internal::Log::MessageBuilder::operator<<
            (pMVar1,(&PTR_s_code_creation_01cb2338)[param_2 & 0xffffffff]);
  pMVar1 = v8::internal::Log::MessageBuilder::operator<<(pMVar1,0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),param_3)
  ;
  pMVar1 = v8::internal::Log::MessageBuilder::operator<<(pMVar1,0);
  local_28 = v8::base::TimeTicks::HighResolutionNow();
  local_28 = local_28 - *param_6;
  pMVar2 = (MessageBuilder *)v8::base::TimeDelta::InMicroseconds((TimeDelta *)&local_28);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),
             (long)pMVar2);
  pMVar1 = v8::internal::Log::MessageBuilder::operator<<(pMVar2,0);
  v8::internal::Log::MessageBuilder::operator<<(pMVar1,param_4);
  pMVar1 = v8::internal::Log::MessageBuilder::operator<<(pMVar1,0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)(*(long *)pMVar1 + 0x10),param_5)
  ;
  v8::internal::Log::MessageBuilder::operator<<(pMVar1,0);
  return;
}

