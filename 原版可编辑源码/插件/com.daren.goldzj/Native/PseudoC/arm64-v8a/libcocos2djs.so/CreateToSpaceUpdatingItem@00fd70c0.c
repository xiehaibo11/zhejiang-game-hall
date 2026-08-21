
/* v8::internal::MinorMarkCompactCollector::CreateToSpaceUpdatingItem(v8::internal::MemoryChunk*,
   unsigned long, unsigned long) */

void __thiscall
v8::internal::MinorMarkCompactCollector::CreateToSpaceUpdatingItem
          (MinorMarkCompactCollector *this,MemoryChunk *param_1,ulong param_2,ulong param_3)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x30);
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  puVar1[5] = this + 0x69;
  *puVar1 = &PTR__Item_01ca8fb8;
  puVar1[1] = 0;
  return;
}

