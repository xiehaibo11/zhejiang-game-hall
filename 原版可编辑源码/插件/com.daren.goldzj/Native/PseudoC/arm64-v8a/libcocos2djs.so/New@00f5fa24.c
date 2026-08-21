
/* v8::internal::MicrotaskQueue::New(v8::internal::Isolate*) */

void __thiscall v8::internal::MicrotaskQueue::New(MicrotaskQueue *this,Isolate *param_1)

{
  undefined8 *puVar1;
  undefined8 *in_x8;
  long lVar2;
  
  puVar1 = operator_new(0x68);
  *in_x8 = puVar1;
  *(undefined1 *)((long)puVar1 + 0x4c) = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 9) = 2;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR__MicrotaskQueue_01ca6ec8;
  lVar2 = *(long *)(*(long *)(this + 0xb7c0) + 0x38);
  puVar1[6] = *(undefined8 *)(lVar2 + 0x30);
  puVar1[7] = lVar2;
  *(undefined8 **)(*(long *)(lVar2 + 0x30) + 0x38) = puVar1;
  *(undefined8 **)(lVar2 + 0x30) = puVar1;
  return;
}

