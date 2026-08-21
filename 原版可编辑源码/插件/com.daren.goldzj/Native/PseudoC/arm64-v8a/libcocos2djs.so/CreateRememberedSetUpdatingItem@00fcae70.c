
/* v8::internal::MarkCompactCollector::CreateRememberedSetUpdatingItem(v8::internal::MemoryChunk*,
   v8::internal::RememberedSetUpdatingMode) */

void __thiscall
v8::internal::MarkCompactCollector::CreateRememberedSetUpdatingItem
          (MarkCompactCollector *this,undefined8 param_1,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = operator_new(0x30);
  uVar2 = *(undefined8 *)(this + 8);
  puVar1[3] = this + 0x2701;
  puVar1[4] = param_1;
  *(undefined4 *)(puVar1 + 5) = param_3;
  *puVar1 = &PTR__Item_01ca8f48;
  puVar1[1] = 0;
  puVar1[2] = uVar2;
  return;
}

