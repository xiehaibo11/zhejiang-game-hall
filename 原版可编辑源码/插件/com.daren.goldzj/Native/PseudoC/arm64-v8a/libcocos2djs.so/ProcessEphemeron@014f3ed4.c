
/* v8::internal::ConcurrentMarkingVisitor::ProcessEphemeron(v8::internal::HeapObject,
   v8::internal::HeapObject) */

undefined8 __thiscall
v8::internal::ConcurrentMarkingVisitor::ProcessEphemeron
          (ConcurrentMarkingVisitor *this,ulong param_2,ulong param_3)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  
  uVar7 = param_2 - (param_2 & 0xfffffffffffc0000);
  uVar9 = param_3 - (param_3 & 0xfffffffffffc0000);
  puVar1 = (uint *)(*(long *)((param_3 & 0xfffffffffffc0000) + 0x10) + (uVar9 >> 7 & 0x1ffffff) * 4)
  ;
  uVar6 = (uint)(1L << (uVar9 >> 2 & 0x1f));
  if ((*(uint *)(*(long *)((param_2 & 0xfffffffffffc0000) + 0x10) + (uVar7 >> 7 & 0x1ffffff) * 4) >>
       (ulong)((uint)(uVar7 >> 2) & 0x1f) & 1) == 0) {
    if ((*puVar1 & uVar6) == 0) {
      lVar12 = *(long *)(this + 0x18);
      lVar8 = lVar12 + (long)*(int *)(this + 0x28) * 0x50;
      puVar10 = *(undefined8 **)(lVar8 + 0x828);
      lVar11 = puVar10[1];
      if (lVar11 == 0x40) {
        base::Mutex::Lock((Mutex *)(lVar12 + 0xaa8));
        *puVar10 = *(undefined8 *)(lVar12 + 0xad0);
        *(undefined8 **)(lVar12 + 0xad0) = puVar10;
        base::Mutex::Unlock((Mutex *)(lVar12 + 0xaa8));
        pvVar5 = operator_new(0x410);
        memset((void *)((long)pvVar5 + 0x20),0,0x3f0);
        *(void **)(lVar8 + 0x828) = pvVar5;
        *(undefined8 *)((long)pvVar5 + 8) = 1;
        *(ulong *)((long)pvVar5 + 0x10) = param_2;
        *(ulong *)((long)pvVar5 + 0x18) = param_3;
        return 0;
      }
      puVar10[1] = lVar11 + 1;
      puVar10[lVar11 * 2 + 2] = param_2;
      puVar10[lVar11 * 2 + 3] = param_3;
      return 0;
    }
  }
  else {
    while (uVar2 = *puVar1, (uVar6 & (uVar2 ^ 0xffffffff)) != 0) {
      while (*puVar1 == uVar2) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar2 | uVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar11 = *(long *)(this + 8);
          puVar10 = (undefined8 *)(lVar11 + (long)*(int *)(this + 0x28) * 0x50);
          puVar13 = (undefined8 *)*puVar10;
          lVar8 = puVar13[1];
          if (lVar8 == 0x40) {
            base::Mutex::Lock((Mutex *)(lVar11 + 0x280));
            *puVar13 = *(undefined8 *)(lVar11 + 0x2a8);
            *(undefined8 **)(lVar11 + 0x2a8) = puVar13;
            base::Mutex::Unlock((Mutex *)(lVar11 + 0x280));
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
            *(ulong *)((long)pvVar5 + 0x10) = param_3;
            return 1;
          }
          puVar13[1] = lVar8 + 1;
          puVar13[lVar8 + 2] = param_3;
          return 1;
        }
      }
      ClearExclusiveLocal();
    }
  }
  return 0;
}

