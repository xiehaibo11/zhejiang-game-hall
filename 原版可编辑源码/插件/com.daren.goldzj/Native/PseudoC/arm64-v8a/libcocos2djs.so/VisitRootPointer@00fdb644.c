
/* v8::internal::MarkCompactCollector::RootMarkingVisitor::VisitRootPointer(v8::internal::Root, char
   const*, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::MarkCompactCollector::RootMarkingVisitor::VisitRootPointer
          (RootMarkingVisitor *this,undefined4 param_2,undefined8 param_3,ulong *param_4)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  
  uVar9 = *param_4;
  if ((uVar9 & 1) != 0) {
    lVar10 = *(long *)(this + 8);
    uVar8 = uVar9 - (uVar9 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)((uVar9 & 0xfffffffffffc0000) + 0x10) + (uVar8 >> 7 & 0x1ffffff) * 4)
    ;
    while( true ) {
      uVar2 = *puVar1;
      uVar6 = (uint)(1L << (uVar8 >> 2 & 0x1f));
      if ((uVar6 & (uVar2 ^ 0xffffffff)) == 0) break;
      while (*puVar1 == uVar2) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar4) {
          *puVar1 = uVar2 | uVar6;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          puVar11 = *(undefined8 **)(lVar10 + 0x58);
          lVar7 = puVar11[1];
          if (lVar7 == 0x40) {
            base::Mutex::Lock((Mutex *)(lVar10 + 0x2d8));
            *puVar11 = *(undefined8 *)(lVar10 + 0x300);
            *(undefined8 **)(lVar10 + 0x300) = puVar11;
            base::Mutex::Unlock((Mutex *)(lVar10 + 0x2d8));
            puVar5 = operator_new(0x210);
            puVar5[4] = 0;
            puVar5[3] = 0;
            puVar5[0x22] = 0;
            puVar5[0x21] = 0;
            puVar5[0x24] = 0;
            puVar5[0x23] = 0;
            puVar5[0x26] = 0;
            puVar5[0x25] = 0;
            puVar5[0x28] = 0;
            puVar5[0x27] = 0;
            puVar5[0x2a] = 0;
            puVar5[0x29] = 0;
            puVar5[0x2c] = 0;
            puVar5[0x2b] = 0;
            puVar5[0x2e] = 0;
            puVar5[0x2d] = 0;
            puVar5[0x30] = 0;
            puVar5[0x2f] = 0;
            puVar5[0x32] = 0;
            puVar5[0x31] = 0;
            puVar5[0x34] = 0;
            puVar5[0x33] = 0;
            puVar5[0x36] = 0;
            puVar5[0x35] = 0;
            puVar5[0x38] = 0;
            puVar5[0x37] = 0;
            puVar5[0x3a] = 0;
            puVar5[0x39] = 0;
            puVar5[0x3c] = 0;
            puVar5[0x3b] = 0;
            puVar5[0x3e] = 0;
            puVar5[0x3d] = 0;
            puVar5[0x40] = 0;
            puVar5[0x3f] = 0;
            puVar5[0x41] = 0;
            puVar5[6] = 0;
            puVar5[5] = 0;
            puVar5[8] = 0;
            puVar5[7] = 0;
            puVar5[10] = 0;
            puVar5[9] = 0;
            puVar5[0xc] = 0;
            puVar5[0xb] = 0;
            puVar5[0xe] = 0;
            puVar5[0xd] = 0;
            puVar5[0x10] = 0;
            puVar5[0xf] = 0;
            puVar5[0x12] = 0;
            puVar5[0x11] = 0;
            puVar5[0x14] = 0;
            puVar5[0x13] = 0;
            puVar5[0x16] = 0;
            puVar5[0x15] = 0;
            puVar5[0x18] = 0;
            puVar5[0x17] = 0;
            puVar5[0x1a] = 0;
            puVar5[0x19] = 0;
            puVar5[0x1c] = 0;
            puVar5[0x1b] = 0;
            puVar5[0x1e] = 0;
            puVar5[0x1d] = 0;
            puVar5[0x20] = 0;
            puVar5[0x1f] = 0;
            *(undefined8 **)(lVar10 + 0x58) = puVar5;
            puVar5[1] = 1;
          }
          else {
            puVar5 = puVar11 + lVar7;
            puVar11[1] = lVar7 + 1;
          }
          puVar5[2] = uVar9;
          if (FLAG_track_retaining_path == '\0') {
            return;
          }
          Heap::AddRetainingRoot(*(Heap **)(lVar10 + 8),param_2,uVar9);
          return;
        }
      }
      ClearExclusiveLocal();
    }
  }
  return;
}

