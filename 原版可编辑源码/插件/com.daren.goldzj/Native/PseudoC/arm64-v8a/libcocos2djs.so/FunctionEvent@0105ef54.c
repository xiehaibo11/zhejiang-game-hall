
/* v8::internal::Logger::FunctionEvent(char const*, int, double, int, int, char const*, unsigned
   long) */

void __thiscall
v8::internal::Logger::FunctionEvent
          (Logger *this,char *param_1,int param_2,double param_3,int param_4,int param_5,
          char *param_6,ulong param_7)

{
  Log *pLVar1;
  MessageBuilder aMStack_60 [8];
  Mutex *local_58;
  
  pLVar1 = *(Log **)(this + 0x28);
  if (((*pLVar1 == (Log)0x0) && (*(long *)(pLVar1 + 8) != 0)) && (FLAG_log_function_events != '\0'))
  {
    Log::MessageBuilder::MessageBuilder(aMStack_60,pLVar1);
    FUN_0105ee28(param_3,aMStack_60,param_1,param_2,param_4,param_5,this + 0x80);
    if (param_7 != 0) {
      Log::MessageBuilder::AppendString(aMStack_60,param_6,param_7);
    }
    Log::MessageBuilder::WriteToLogFile(aMStack_60);
    base::Mutex::Unlock(local_58);
  }
  return;
}

