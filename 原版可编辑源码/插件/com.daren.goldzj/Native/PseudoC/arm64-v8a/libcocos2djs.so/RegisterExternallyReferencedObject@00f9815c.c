
/* v8::internal::Heap::RegisterExternallyReferencedObject(unsigned long*) */

void __thiscall v8::internal::Heap::RegisterExternallyReferencedObject(Heap *this,ulong *param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  GlobalHandles::MarkTraced(param_1);
  uVar10 = *param_1;
  if ((uVar10 & 1) != 0) {
    if ((FLAG_incremental_marking_wrappers == '\0') ||
       (lVar7 = *(long *)(this + 0x828), *(int *)(lVar7 + 0x58) < 2)) {
      lVar7 = *(long *)(this + 0x800);
      uVar9 = uVar10 - (uVar10 & 0xfffffffffffc0000);
      puVar1 = (uint *)(*(long *)((uVar10 & 0xfffffffffffc0000) + 0x10) +
                       (uVar9 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar2 = *puVar1;
        uVar6 = (uint)(1L << (uVar9 >> 2 & 0x1f));
        if ((uVar6 & (uVar2 ^ 0xffffffff)) == 0) break;
        while (*puVar1 == uVar2) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar2 | uVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            puVar11 = *(undefined8 **)(lVar7 + 0x58);
            lVar8 = puVar11[1];
            if (lVar8 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar7 + 0x2d8));
              *puVar11 = *(undefined8 *)(lVar7 + 0x300);
              *(undefined8 **)(lVar7 + 0x300) = puVar11;
              base::Mutex::Unlock((Mutex *)(lVar7 + 0x2d8));
              puVar12 = operator_new(0x210);
              puVar12[4] = 0;
              puVar12[3] = 0;
              puVar12[0x22] = 0;
              puVar12[0x21] = 0;
              puVar12[0x24] = 0;
              puVar12[0x23] = 0;
              puVar12[0x26] = 0;
              puVar12[0x25] = 0;
              puVar12[0x28] = 0;
              puVar12[0x27] = 0;
              puVar12[0x2a] = 0;
              puVar12[0x29] = 0;
              puVar12[0x2c] = 0;
              puVar12[0x2b] = 0;
              puVar12[0x2e] = 0;
              puVar12[0x2d] = 0;
              puVar12[0x30] = 0;
              puVar12[0x2f] = 0;
              puVar12[0x32] = 0;
              puVar12[0x31] = 0;
              puVar12[0x34] = 0;
              puVar12[0x33] = 0;
              puVar12[0x36] = 0;
              puVar12[0x35] = 0;
              puVar12[0x38] = 0;
              puVar12[0x37] = 0;
              puVar12[0x3a] = 0;
              puVar12[0x39] = 0;
              puVar12[0x3c] = 0;
              puVar12[0x3b] = 0;
              puVar12[0x3e] = 0;
              puVar12[0x3d] = 0;
              puVar12[0x40] = 0;
              puVar12[0x3f] = 0;
              puVar12[0x41] = 0;
              puVar12[6] = 0;
              puVar12[5] = 0;
              puVar12[8] = 0;
              puVar12[7] = 0;
              puVar12[10] = 0;
              puVar12[9] = 0;
              puVar12[0xc] = 0;
              puVar12[0xb] = 0;
              puVar12[0xe] = 0;
              puVar12[0xd] = 0;
              puVar12[0x10] = 0;
              puVar12[0xf] = 0;
              puVar12[0x12] = 0;
              puVar12[0x11] = 0;
              puVar12[0x14] = 0;
              puVar12[0x13] = 0;
              puVar12[0x16] = 0;
              puVar12[0x15] = 0;
              puVar12[0x18] = 0;
              puVar12[0x17] = 0;
              puVar12[0x1a] = 0;
              puVar12[0x19] = 0;
              puVar12[0x1c] = 0;
              puVar12[0x1b] = 0;
              puVar12[0x1e] = 0;
              puVar12[0x1d] = 0;
              puVar12[0x20] = 0;
              puVar12[0x1f] = 0;
              *(undefined8 **)(lVar7 + 0x58) = puVar12;
              puVar12[1] = 1;
            }
            else {
              puVar12 = puVar11 + lVar8;
              puVar11[1] = lVar8 + 1;
            }
            puVar12[2] = uVar10;
            if (FLAG_track_retaining_path == '\0') {
              return;
            }
            AddRetainingRoot(*(Heap **)(lVar7 + 8),0x15,uVar10);
            return;
          }
        }
        ClearExclusiveLocal();
      }
    }
    else {
      uVar9 = uVar10 - (uVar10 & 0xfffffffffffc0000);
      puVar1 = (uint *)(*(long *)((uVar10 & 0xfffffffffffc0000) + 0x10) +
                       (uVar9 >> 7 & 0x1ffffff) * 4);
      while( true ) {
        uVar2 = *puVar1;
        uVar6 = (uint)(1L << (uVar9 >> 2 & 0x1f));
        if ((uVar6 & (uVar2 ^ 0xffffffff)) == 0) break;
        while (*puVar1 == uVar2) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar2 | uVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            puVar11 = *(undefined8 **)(lVar7 + 0x10);
            puVar12 = (undefined8 *)*puVar11;
            lVar7 = puVar12[1];
            if (lVar7 == 0x40) {
              base::Mutex::Lock((Mutex *)(puVar11 + 0x50));
              *puVar12 = puVar11[0x55];
              puVar11[0x55] = puVar12;
              base::Mutex::Unlock((Mutex *)(puVar11 + 0x50));
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
              *puVar11 = pvVar5;
              *(undefined8 *)((long)pvVar5 + 8) = 1;
              *(ulong *)((long)pvVar5 + 0x10) = uVar10;
              return;
            }
            puVar12[1] = lVar7 + 1;
            puVar12[lVar7 + 2] = uVar10;
            return;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
  return;
}

