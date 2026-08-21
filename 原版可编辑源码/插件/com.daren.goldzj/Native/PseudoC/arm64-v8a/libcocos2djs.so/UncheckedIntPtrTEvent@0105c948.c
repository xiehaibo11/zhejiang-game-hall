
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105c990 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::UncheckedIntPtrTEvent(char const*, long) */

void __thiscall v8::internal::Logger::UncheckedIntPtrTEvent(Logger *this,char *param_1,long param_2)

{
  Log *pLVar1;
  MessageBuilder aMStack_30 [8];
  Mutex *local_28;
  
  pLVar1 = *(Log **)(this + 0x28);
  if ((*pLVar1 == (Log)0x0) && (*(long *)(pLVar1 + 8) != 0)) {
    Log::MessageBuilder::MessageBuilder(aMStack_30,pLVar1);
    Log::MessageBuilder::operator<<(aMStack_30,param_1);
    Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
    Log::MessageBuilder::AppendFormatString((char *)aMStack_30,"%ld",param_2);
    Log::MessageBuilder::WriteToLogFile(aMStack_30);
    base::Mutex::Unlock(local_28);
  }
  return;
}

