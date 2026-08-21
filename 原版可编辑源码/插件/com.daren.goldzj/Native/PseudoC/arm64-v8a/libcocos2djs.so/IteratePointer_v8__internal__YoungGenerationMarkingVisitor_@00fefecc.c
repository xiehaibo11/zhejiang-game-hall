
/* void 
   v8::internal::BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>(v8::internal::HeapObject,
   int, v8::internal::YoungGenerationMarkingVisitor*) */

void v8::internal::BodyDescriptorBase::IteratePointer<v8::internal::YoungGenerationMarkingVisitor>
               (long param_1,int param_2,long param_3)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  void *pvVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  
  puVar6 = (uint *)(param_1 + param_2 + -1);
  uVar1 = *puVar6;
  if ((uVar1 & 1) != 0) {
    uVar7 = (ulong)puVar6 & 0xffffffff00000000;
    uVar9 = uVar7 | uVar1;
    uVar7 = uVar7 | (ulong)uVar1 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
      puVar6 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar9 - uVar7 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar1 = *puVar6;
        uVar5 = (uint)(1L << (uVar9 - uVar7 >> 2 & 0x1f));
        if ((uVar5 & (uVar1 ^ 0xffffffff)) == 0) break;
        while (*puVar6 == uVar1) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar6,0x10);
          if (bVar3) {
            *puVar6 = uVar1 | uVar5;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = *(long *)(param_3 + 8);
            puVar10 = (undefined8 *)(lVar11 + (long)*(int *)(param_3 + 0x10) * 0x50);
            puVar12 = (undefined8 *)*puVar10;
            lVar8 = puVar12[1];
            if (lVar8 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar11 + 0x280));
              *puVar12 = *(undefined8 *)(lVar11 + 0x2a8);
              *(undefined8 **)(lVar11 + 0x2a8) = puVar12;
              base::Mutex::Unlock((Mutex *)(lVar11 + 0x280));
              pvVar4 = operator_new(0x210);
              *(undefined8 *)((long)pvVar4 + 0x20) = 0;
              *(undefined8 *)((long)pvVar4 + 0x18) = 0;
              *(undefined8 *)((long)pvVar4 + 0x110) = 0;
              *(undefined8 *)((long)pvVar4 + 0x108) = 0;
              *(undefined8 *)((long)pvVar4 + 0x120) = 0;
              *(undefined8 *)((long)pvVar4 + 0x118) = 0;
              *(undefined8 *)((long)pvVar4 + 0x130) = 0;
              *(undefined8 *)((long)pvVar4 + 0x128) = 0;
              *(undefined8 *)((long)pvVar4 + 0x140) = 0;
              *(undefined8 *)((long)pvVar4 + 0x138) = 0;
              *(undefined8 *)((long)pvVar4 + 0x150) = 0;
              *(undefined8 *)((long)pvVar4 + 0x148) = 0;
              *(undefined8 *)((long)pvVar4 + 0x160) = 0;
              *(undefined8 *)((long)pvVar4 + 0x158) = 0;
              *(undefined8 *)((long)pvVar4 + 0x170) = 0;
              *(undefined8 *)((long)pvVar4 + 0x168) = 0;
              *(undefined8 *)((long)pvVar4 + 0x180) = 0;
              *(undefined8 *)((long)pvVar4 + 0x178) = 0;
              *(undefined8 *)((long)pvVar4 + 400) = 0;
              *(undefined8 *)((long)pvVar4 + 0x188) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1a0) = 0;
              *(undefined8 *)((long)pvVar4 + 0x198) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1b0) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1a8) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1c0) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1b8) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1d0) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1c8) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1e0) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1d8) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1f0) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1e8) = 0;
              *(undefined8 *)((long)pvVar4 + 0x200) = 0;
              *(undefined8 *)((long)pvVar4 + 0x1f8) = 0;
              *(undefined8 *)((long)pvVar4 + 0x208) = 0;
              *(undefined8 *)((long)pvVar4 + 0x30) = 0;
              *(undefined8 *)((long)pvVar4 + 0x28) = 0;
              *(undefined8 *)((long)pvVar4 + 0x40) = 0;
              *(undefined8 *)((long)pvVar4 + 0x38) = 0;
              *(undefined8 *)((long)pvVar4 + 0x50) = 0;
              *(undefined8 *)((long)pvVar4 + 0x48) = 0;
              *(undefined8 *)((long)pvVar4 + 0x60) = 0;
              *(undefined8 *)((long)pvVar4 + 0x58) = 0;
              *(undefined8 *)((long)pvVar4 + 0x70) = 0;
              *(undefined8 *)((long)pvVar4 + 0x68) = 0;
              *(undefined8 *)((long)pvVar4 + 0x80) = 0;
              *(undefined8 *)((long)pvVar4 + 0x78) = 0;
              *(undefined8 *)((long)pvVar4 + 0x90) = 0;
              *(undefined8 *)((long)pvVar4 + 0x88) = 0;
              *(undefined8 *)((long)pvVar4 + 0xa0) = 0;
              *(undefined8 *)((long)pvVar4 + 0x98) = 0;
              *(undefined8 *)((long)pvVar4 + 0xb0) = 0;
              *(undefined8 *)((long)pvVar4 + 0xa8) = 0;
              *(undefined8 *)((long)pvVar4 + 0xc0) = 0;
              *(undefined8 *)((long)pvVar4 + 0xb8) = 0;
              *(undefined8 *)((long)pvVar4 + 0xd0) = 0;
              *(undefined8 *)((long)pvVar4 + 200) = 0;
              *(undefined8 *)((long)pvVar4 + 0xe0) = 0;
              *(undefined8 *)((long)pvVar4 + 0xd8) = 0;
              *(undefined8 *)((long)pvVar4 + 0xf0) = 0;
              *(undefined8 *)((long)pvVar4 + 0xe8) = 0;
              *(undefined8 *)((long)pvVar4 + 0x100) = 0;
              *(undefined8 *)((long)pvVar4 + 0xf8) = 0;
              *puVar10 = pvVar4;
              *(undefined8 *)((long)pvVar4 + 8) = 1;
              *(ulong *)((long)pvVar4 + 0x10) = uVar9;
              return;
            }
            puVar12[1] = lVar8 + 1;
            puVar12[lVar8 + 2] = uVar9;
            return;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
  return;
}

