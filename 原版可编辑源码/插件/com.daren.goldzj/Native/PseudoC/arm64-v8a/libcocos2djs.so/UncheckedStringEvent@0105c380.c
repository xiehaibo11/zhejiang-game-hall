
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105c3c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::UncheckedStringEvent(char const*, char const*) */

void __thiscall v8::internal::Logger::UncheckedStringEvent(Logger *this,char *param_1,char *param_2)

{
  MessageBuilder *this_00;
  Log *pLVar1;
  MessageBuilder aMStack_30 [8];
  Mutex *local_28;
  
  pLVar1 = *(Log **)(this + 0x28);
  if ((*pLVar1 == (Log)0x0) && (*(long *)(pLVar1 + 8) != 0)) {
    Log::MessageBuilder::MessageBuilder(aMStack_30,pLVar1);
    Log::MessageBuilder::operator<<(aMStack_30,param_1);
    this_00 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
    Log::MessageBuilder::operator<<(this_00,param_2);
    Log::MessageBuilder::WriteToLogFile(aMStack_30);
    base::Mutex::Unlock(local_28);
  }
  return;
}

