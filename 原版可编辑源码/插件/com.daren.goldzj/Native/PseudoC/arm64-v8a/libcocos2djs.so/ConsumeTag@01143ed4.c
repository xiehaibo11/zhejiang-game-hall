
/* v8::internal::ValueDeserializer::ConsumeTag(v8::internal::SerializationTag) */

void v8::internal::ValueDeserializer::ConsumeTag(long param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = *(char **)(param_1 + 0x10);
  do {
    if (*(char **)(param_1 + 0x18) <= pcVar2) {
      v8::V8::FromJustIsNothing();
      return;
    }
    cVar1 = *pcVar2;
    *(char **)(param_1 + 0x10) = pcVar2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 == '\0');
  return;
}

