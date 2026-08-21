
/* v8::internal::MarkCompactCollector::IsUnmarkedHeapObject(v8::internal::Heap*,
   v8::internal::FullObjectSlot) */

bool v8::internal::MarkCompactCollector::IsUnmarkedHeapObject(undefined8 param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  if ((uVar1 & 1) == 0) {
    return false;
  }
  uVar2 = uVar1 - (uVar1 & 0xfffffffffffc0000);
  return (*(uint *)(*(long *)((uVar1 & 0xfffffffffffc0000) + 0x10) + (uVar2 >> 7 & 0x1ffffff) * 4)
          >> (ulong)((uint)(uVar2 >> 2) & 0x1f) & 1) == 0;
}

