
/* v8::internal::Log::MessageBuilder::MessageBuilder(v8::internal::Log*) */

void __thiscall v8::internal::Log::MessageBuilder::MessageBuilder(MessageBuilder *this,Log *param_1)

{
  *(Log **)this = param_1;
  *(Mutex **)(this + 8) = (Mutex *)(param_1 + 0xf8);
  base::Mutex::Lock((Mutex *)(param_1 + 0xf8));
  return;
}

