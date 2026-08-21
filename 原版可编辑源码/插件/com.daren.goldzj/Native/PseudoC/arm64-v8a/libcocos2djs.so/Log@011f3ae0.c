
/* v8::internal::StringStream::Log(v8::internal::Isolate*) */

void __thiscall v8::internal::StringStream::Log(StringStream *this,Isolate *param_1)

{
  ulong uVar1;
  Logger *this_00;
  
  this_00 = *(Logger **)(param_1 + 0x9558);
  uVar1 = Logger::is_logging(this_00);
  if ((uVar1 & 1) != 0) {
    Logger::StringEvent(this_00,"StackDump",*(char **)(this + 0x18));
    return;
  }
  return;
}

