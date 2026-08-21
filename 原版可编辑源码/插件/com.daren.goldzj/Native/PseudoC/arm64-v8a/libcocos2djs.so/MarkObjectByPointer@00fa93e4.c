
/* v8::internal::IncrementalMarkingRootMarkingVisitor::MarkObjectByPointer(v8::internal::FullObjectSlot)
    */

void __thiscall
v8::internal::IncrementalMarkingRootMarkingVisitor::MarkObjectByPointer
          (IncrementalMarkingRootMarkingVisitor *this,ulong *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  uVar9 = *param_2;
  if ((uVar9 & 1) != 0) {
    uVar8 = uVar9 - (uVar9 & 0xfffffffffffc0000);
    lVar6 = *(long *)(*(long *)(this + 8) + 0x828);
    puVar1 = (uint *)(*(long *)((uVar9 & 0xfffffffffffc0000) + 0x10) + (uVar8 >> 7 & 0x1ffffff) * 4)
    ;
    while( true ) {
      uVar2 = *puVar1;
      uVar7 = (uint)(1L << (uVar8 >> 2 & 0x1f));
      if ((uVar7 & (uVar2 ^ 0xffffffff)) == 0) break;
      while (*puVar1 == uVar2) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar2 | uVar7;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          puVar10 = *(undefined8 **)(lVar6 + 0x10);
          puVar11 = (undefined8 *)*puVar10;
          lVar6 = puVar11[1];
          if (lVar6 == 0x40) {
            base::Mutex::Lock((Mutex *)(puVar10 + 0x50));
            *puVar11 = puVar10[0x55];
            puVar10[0x55] = puVar11;
            base::Mutex::Unlock((Mutex *)(puVar10 + 0x50));
            pvVar5 = operator_new(0x210);
            *(undefined8 *)((long)pvVar5 + 0x20) = 0;
            *(undefined8 *)((long)pvVar5 + 0x18) = 0;
            *(undefined8 *)((long)pvVar5 + 0x110) = 0;
            *(undefined8 *)((long)pvVar5 + 0x108) = 0;
            *(undefined8 *)((long)pvVar5 + 0x120) = 0;
            *(undefined8 *)((long)pvVar5 + 0x118) = 0;
            *(undefined8 *)((long)pvVar5 + 0x130) = 0;
            *(undefined8 *)((long)pvVar5 + 0x128) = 0;
            *(undefined8 *)((long)pvVar5 + 0x140) = 0;
            *(undefined8 *)((long)pvVar5 + 0x138) = 0;
            *(undefined8 *)((long)pvVar5 + 0x150) = 0;
            *(undefined8 *)((long)pvVar5 + 0x148) = 0;
            *(undefined8 *)((long)pvVar5 + 0x160) = 0;
            *(undefined8 *)((long)pvVar5 + 0x158) = 0;
            *(undefined8 *)((long)pvVar5 + 0x170) = 0;
            *(undefined8 *)((long)pvVar5 + 0x168) = 0;
            *(undefined8 *)((long)pvVar5 + 0x180) = 0;
            *(undefined8 *)((long)pvVar5 + 0x178) = 0;
            *(undefined8 *)((long)pvVar5 + 400) = 0;
            *(undefined8 *)((long)pvVar5 + 0x188) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1a0) = 0;
            *(undefined8 *)((long)pvVar5 + 0x198) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1b0) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1a8) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1c0) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1b8) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1d0) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1c8) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1e0) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1d8) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1f0) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1e8) = 0;
            *(undefined8 *)((long)pvVar5 + 0x200) = 0;
            *(undefined8 *)((long)pvVar5 + 0x1f8) = 0;
            *(undefined8 *)((long)pvVar5 + 0x208) = 0;
            *(undefined8 *)((long)pvVar5 + 0x30) = 0;
            *(undefined8 *)((long)pvVar5 + 0x28) = 0;
            *(undefined8 *)((long)pvVar5 + 0x40) = 0;
            *(undefined8 *)((long)pvVar5 + 0x38) = 0;
            *(undefined8 *)((long)pvVar5 + 0x50) = 0;
            *(undefined8 *)((long)pvVar5 + 0x48) = 0;
            *(undefined8 *)((long)pvVar5 + 0x60) = 0;
            *(undefined8 *)((long)pvVar5 + 0x58) = 0;
            *(undefined8 *)((long)pvVar5 + 0x70) = 0;
            *(undefined8 *)((long)pvVar5 + 0x68) = 0;
            *(undefined8 *)((long)pvVar5 + 0x80) = 0;
            *(undefined8 *)((long)pvVar5 + 0x78) = 0;
            *(undefined8 *)((long)pvVar5 + 0x90) = 0;
            *(undefined8 *)((long)pvVar5 + 0x88) = 0;
            *(undefined8 *)((long)pvVar5 + 0xa0) = 0;
            *(undefined8 *)((long)pvVar5 + 0x98) = 0;
            *(undefined8 *)((long)pvVar5 + 0xb0) = 0;
            *(undefined8 *)((long)pvVar5 + 0xa8) = 0;
            *(undefined8 *)((long)pvVar5 + 0xc0) = 0;
            *(undefined8 *)((long)pvVar5 + 0xb8) = 0;
            *(undefined8 *)((long)pvVar5 + 0xd0) = 0;
            *(undefined8 *)((long)pvVar5 + 200) = 0;
            *(undefined8 *)((long)pvVar5 + 0xe0) = 0;
            *(undefined8 *)((long)pvVar5 + 0xd8) = 0;
            *(undefined8 *)((long)pvVar5 + 0xf0) = 0;
            *(undefined8 *)((long)pvVar5 + 0xe8) = 0;
            *(undefined8 *)((long)pvVar5 + 0x100) = 0;
            *(undefined8 *)((long)pvVar5 + 0xf8) = 0;
            *puVar10 = pvVar5;
            *(undefined8 *)((long)pvVar5 + 8) = 1;
            *(ulong *)((long)pvVar5 + 0x10) = uVar9;
            return;
          }
          puVar11[1] = lVar6 + 1;
          puVar11[lVar6 + 2] = uVar9;
          return;
        }
      }
      ClearExclusiveLocal();
    }
  }
  return;
}

