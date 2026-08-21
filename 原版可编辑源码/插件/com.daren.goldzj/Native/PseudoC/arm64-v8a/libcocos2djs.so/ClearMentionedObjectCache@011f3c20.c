
/* v8::internal::StringStream::ClearMentionedObjectCache(v8::internal::Isolate*) */

void v8::internal::StringStream::ClearMentionedObjectCache(Isolate *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 47000);
  *(undefined8 *)(param_1 + 0xb7a0) = 0;
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = operator_new(0x18);
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
    *(undefined8 **)(param_1 + 47000) = puVar1;
  }
  puVar1[1] = *puVar1;
  return;
}

