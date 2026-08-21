
/* v8::internal::Heap::ClearRecordedSlot(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::Heap::ClearRecordedSlot(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = param_3 & 0xfffffffffffc0000;
  if ((((*(byte *)(uVar6 + 8) & 0x18) == 0) && (*(long *)(uVar6 + 0xa8) != 0)) &&
     (*(long *)(uVar6 + 0x30) != 0)) {
    param_3 = param_3 - uVar6;
    lVar7 = *(long *)(*(long *)(uVar6 + 0x30) + (param_3 >> 9 & 0x7ffffffffffff8));
    if (lVar7 != 0) {
      puVar1 = (uint *)(lVar7 + (param_3 >> 7 & 0x1f) * 4);
      uVar3 = 1 << (ulong)((uint)(param_3 >> 2) & 0x1f);
      if ((*puVar1 & uVar3) != 0) {
        while (uVar2 = *puVar1, (uVar2 & uVar3) != 0) {
          while (*puVar1 == uVar2) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar5) {
              *puVar1 = uVar2 & ~uVar3;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              return;
            }
          }
          ClearExclusiveLocal();
        }
      }
    }
  }
  return;
}

