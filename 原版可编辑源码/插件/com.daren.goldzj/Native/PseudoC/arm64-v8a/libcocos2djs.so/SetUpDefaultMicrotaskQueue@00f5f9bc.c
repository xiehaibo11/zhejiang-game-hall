
/* v8::internal::MicrotaskQueue::SetUpDefaultMicrotaskQueue(v8::internal::Isolate*) */

void v8::internal::MicrotaskQueue::SetUpDefaultMicrotaskQueue(Isolate *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x68);
  *(undefined4 *)(puVar1 + 9) = 2;
  *(undefined1 *)((long)puVar1 + 0x4c) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  *puVar1 = &PTR__MicrotaskQueue_01ca6ec8;
  puVar1[10] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = puVar1;
  puVar1[7] = puVar1;
  *(undefined8 **)(param_1 + 0xb7c0) = puVar1;
  return;
}

