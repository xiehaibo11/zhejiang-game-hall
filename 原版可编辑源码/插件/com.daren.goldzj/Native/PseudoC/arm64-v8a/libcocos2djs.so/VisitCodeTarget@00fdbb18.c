
/* v8::internal::MarkCompactCollector::CustomRootBodyMarkingVisitor::VisitCodeTarget(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::MarkCompactCollector::CustomRootBodyMarkingVisitor::VisitCodeTarget
          (CustomRootBodyMarkingVisitor *this,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  Instruction IVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  IVar3 = ((Instruction *)*param_3)[3];
  puVar6 = (undefined8 *)Instruction::ImmPCOffsetTarget((Instruction *)*param_3);
  if (IVar3 == (Instruction)0x58) {
    puVar6 = (undefined8 *)*puVar6;
  }
  puVar7 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
  uVar8 = Isolate::CurrentEmbeddedBlobSize();
  if ((puVar7 <= puVar6) && (puVar6 < (undefined8 *)((long)puVar7 + (uVar8 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","address < start || address >= end");
  }
  uVar8 = (long)puVar6 - 0x3f;
  if ((uVar8 & 1) != 0) {
    lVar12 = *(long *)(this + 8);
    uVar11 = uVar8 - (uVar8 & 0xfffffffffffc0000);
    puVar1 = (uint *)(*(long *)((uVar8 & 0xfffffffffffc0000) + 0x10) + (uVar11 >> 7 & 0x1ffffff) * 4
                     );
    while( true ) {
      uVar2 = *puVar1;
      uVar9 = (uint)(1L << (uVar11 >> 2 & 0x1f));
      if ((uVar9 & (uVar2 ^ 0xffffffff)) == 0) break;
      while (*puVar1 == uVar2) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar2 | uVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          puVar6 = *(undefined8 **)(lVar12 + 0x58);
          lVar10 = puVar6[1];
          if (lVar10 == 0x40) {
            base::Mutex::Lock((Mutex *)(lVar12 + 0x2d8));
            *puVar6 = *(undefined8 *)(lVar12 + 0x300);
            *(undefined8 **)(lVar12 + 0x300) = puVar6;
            base::Mutex::Unlock((Mutex *)(lVar12 + 0x2d8));
            puVar7 = operator_new(0x210);
            puVar7[4] = 0;
            puVar7[3] = 0;
            puVar7[0x22] = 0;
            puVar7[0x21] = 0;
            puVar7[0x24] = 0;
            puVar7[0x23] = 0;
            puVar7[0x26] = 0;
            puVar7[0x25] = 0;
            puVar7[0x28] = 0;
            puVar7[0x27] = 0;
            puVar7[0x2a] = 0;
            puVar7[0x29] = 0;
            puVar7[0x2c] = 0;
            puVar7[0x2b] = 0;
            puVar7[0x2e] = 0;
            puVar7[0x2d] = 0;
            puVar7[0x30] = 0;
            puVar7[0x2f] = 0;
            puVar7[0x32] = 0;
            puVar7[0x31] = 0;
            puVar7[0x34] = 0;
            puVar7[0x33] = 0;
            puVar7[0x36] = 0;
            puVar7[0x35] = 0;
            puVar7[0x38] = 0;
            puVar7[0x37] = 0;
            puVar7[0x3a] = 0;
            puVar7[0x39] = 0;
            puVar7[0x3c] = 0;
            puVar7[0x3b] = 0;
            puVar7[0x3e] = 0;
            puVar7[0x3d] = 0;
            puVar7[0x40] = 0;
            puVar7[0x3f] = 0;
            puVar7[0x41] = 0;
            puVar7[6] = 0;
            puVar7[5] = 0;
            puVar7[8] = 0;
            puVar7[7] = 0;
            puVar7[10] = 0;
            puVar7[9] = 0;
            puVar7[0xc] = 0;
            puVar7[0xb] = 0;
            puVar7[0xe] = 0;
            puVar7[0xd] = 0;
            puVar7[0x10] = 0;
            puVar7[0xf] = 0;
            puVar7[0x12] = 0;
            puVar7[0x11] = 0;
            puVar7[0x14] = 0;
            puVar7[0x13] = 0;
            puVar7[0x16] = 0;
            puVar7[0x15] = 0;
            puVar7[0x18] = 0;
            puVar7[0x17] = 0;
            puVar7[0x1a] = 0;
            puVar7[0x19] = 0;
            puVar7[0x1c] = 0;
            puVar7[0x1b] = 0;
            puVar7[0x1e] = 0;
            puVar7[0x1d] = 0;
            puVar7[0x20] = 0;
            puVar7[0x1f] = 0;
            *(undefined8 **)(lVar12 + 0x58) = puVar7;
            puVar7[1] = 1;
          }
          else {
            puVar7 = puVar6 + lVar10;
            puVar6[1] = lVar10 + 1;
          }
          puVar7[2] = uVar8;
          if (FLAG_track_retaining_path == '\0') {
            return;
          }
          Heap::AddRetainer(*(Heap **)(lVar12 + 8),param_2,uVar8);
          return;
        }
      }
      ClearExclusiveLocal();
    }
  }
  return;
}

