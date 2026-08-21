
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0105f490 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* v8::internal::Logger::RuntimeCallTimerEvent() */

void __thiscall v8::internal::Logger::RuntimeCallTimerEvent(Logger *this)

{
  MessageBuilder *this_00;
  undefined8 *puVar1;
  MessageBuilder aMStack_30 [8];
  Mutex *local_28;
  
  puVar1 = *(undefined8 **)(*(long *)(*(long *)(this + 8) + 0x9520) + 0x58a8);
  if (puVar1 != (undefined8 *)0x0) {
    Log::MessageBuilder::MessageBuilder(aMStack_30,*(Log **)(this + 0x28));
    Log::MessageBuilder::operator<<(aMStack_30,"active-runtime-timer");
    this_00 = Log::MessageBuilder::operator<<((MessageBuilder *)this,0);
    Log::MessageBuilder::operator<<(this_00,(char *)*puVar1);
    Log::MessageBuilder::WriteToLogFile(aMStack_30);
    base::Mutex::Unlock(local_28);
  }
  return;
}

