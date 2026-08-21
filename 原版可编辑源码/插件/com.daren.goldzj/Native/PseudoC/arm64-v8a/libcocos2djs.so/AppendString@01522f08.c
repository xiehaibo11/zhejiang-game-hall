
/* v8::internal::Log::MessageBuilder::AppendString(v8::internal::Vector<char const>) */

void v8::internal::Log::MessageBuilder::AppendString
               (MessageBuilder *param_1,char *param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  
  if (0 < param_3) {
    pcVar2 = param_2;
    do {
      pcVar1 = pcVar2 + 1;
      AppendCharacter(param_1,*pcVar2);
      pcVar2 = pcVar1;
    } while (pcVar1 < param_2 + param_3);
  }
  return;
}

