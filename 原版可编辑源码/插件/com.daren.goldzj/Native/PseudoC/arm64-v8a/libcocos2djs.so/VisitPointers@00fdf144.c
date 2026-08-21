
/* v8::internal::YoungGenerationMarkingVisitor::VisitPointers(v8::internal::HeapObject,
   v8::internal::CompressedObjectSlot, v8::internal::CompressedObjectSlot) */

void __thiscall
v8::internal::YoungGenerationMarkingVisitor::VisitPointers
          (YoungGenerationMarkingVisitor *this,undefined8 param_2,uint *param_3,uint *param_4)

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
  undefined8 *puVar11;
  long lVar12;
  
  if (param_4 <= param_3) {
    return;
  }
  uVar2 = *param_3;
  do {
    if ((uVar2 & 1) != 0) {
      uVar9 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2;
      uVar7 = (ulong)param_3 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000;
      if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
        puVar1 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar9 - uVar7 >> 7 & 0x1ffffff) * 4);
        while( true ) {
          uVar2 = *puVar1;
          uVar6 = (uint)(1L << (uVar9 - uVar7 >> 2 & 0x1f));
          if ((uVar6 & (uVar2 ^ 0xffffffff)) == 0) break;
          while (*puVar1 == uVar2) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar2 | uVar6;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar12 = *(long *)(this + 8);
              puVar10 = (undefined8 *)(lVar12 + (long)*(int *)(this + 0x10) * 0x50);
              puVar11 = (undefined8 *)*puVar10;
              lVar8 = puVar11[1];
              if (lVar8 == 0x40) {
                base::Mutex::Lock((Mutex *)(lVar12 + 0x280));
                *puVar11 = *(undefined8 *)(lVar12 + 0x2a8);
                *(undefined8 **)(lVar12 + 0x2a8) = puVar11;
                base::Mutex::Unlock((Mutex *)(lVar12 + 0x280));
                pvVar5 = operator_new(0x210);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                *(undefined8 *)((long)pvVar5 + 0x18) = 0;
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
                *puVar10 = pvVar5;
                *(undefined8 *)((long)pvVar5 + 8) = 1;
                *(ulong *)((long)pvVar5 + 0x10) = uVar9;
              }
              else {
                puVar11[1] = lVar8 + 1;
                puVar11[lVar8 + 2] = uVar9;
              }
              goto LAB_00fdf220;
            }
          }
          ClearExclusiveLocal();
        }
      }
    }
LAB_00fdf220:
    param_3 = param_3 + 1;
    if (param_4 <= param_3) {
      return;
    }
    uVar2 = *param_3;
  } while( true );
}

