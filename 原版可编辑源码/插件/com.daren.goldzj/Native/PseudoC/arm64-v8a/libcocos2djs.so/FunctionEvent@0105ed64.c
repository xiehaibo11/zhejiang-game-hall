
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105edf8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::FunctionEvent(char const*, int, double, int, int, v8::internal::String) */

void __thiscall
v8::internal::Logger::FunctionEvent
          (undefined8 param_3,Logger *this,undefined8 param_1,undefined4 param_2,undefined4 param_4,
          undefined4 param_5,undefined8 param_7)

{
  Log *pLVar1;
  MessageBuilder aMStack_60 [8];
  Mutex *local_58;
  
  pLVar1 = *(Log **)(this + 0x28);
  if ((*pLVar1 == (Log)0x0) && (*(long *)(pLVar1 + 8) != 0)) {
    if (FLAG_log_function_events != '\0') {
      Log::MessageBuilder::MessageBuilder(aMStack_60,pLVar1);
      FUN_0105ee28(param_3,aMStack_60,param_1,param_2,param_4,param_5,this + 0x80);
      if ((int)param_7 != 0) {
        Log::MessageBuilder::operator<<((MessageBuilder *)this,param_7);
      }
      Log::MessageBuilder::WriteToLogFile(aMStack_60);
      base::Mutex::Unlock(local_58);
    }
  }
  return;
}

