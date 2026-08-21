
/* v8::internal::MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,
   v8::internal::ConcurrentMarkingState>::VisitCodeTarget(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::
MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>::
VisitCodeTarget(MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
                *this,undefined8 param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint uVar2;
  Instruction IVar3;
  char cVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
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
  uVar12 = (long)puVar6 - 0x3f;
  uVar8 = uVar12 - (uVar12 & 0xfffffffffffc0000);
  puVar1 = (uint *)(*(long *)((uVar12 & 0xfffffffffffc0000) + 0x10) + (uVar8 >> 7 & 0x1ffffff) * 4);
  do {
    uVar2 = *puVar1;
    uVar10 = (uint)(1L << (uVar8 >> 2 & 0x1f));
    if ((uVar10 & (uVar2 ^ 0xffffffff)) == 0) {
LAB_014f5300:
      ConcurrentMarkingVisitor::RecordRelocSlot
                ((ConcurrentMarkingVisitor *)this,param_2,param_3,uVar12);
      return;
    }
    while (*puVar1 == uVar2) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar2 | uVar10;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar13 = *(long *)(this + 8);
        puVar6 = (undefined8 *)(lVar13 + (long)*(int *)(this + 0x28) * 0x50);
        puVar7 = (undefined8 *)*puVar6;
        lVar11 = puVar7[1];
        if (lVar11 == 0x40) {
          base::Mutex::Lock((Mutex *)(lVar13 + 0x280));
          *puVar7 = *(undefined8 *)(lVar13 + 0x2a8);
          *(undefined8 **)(lVar13 + 0x2a8) = puVar7;
          base::Mutex::Unlock((Mutex *)(lVar13 + 0x280));
          puVar9 = operator_new(0x210);
          puVar9[4] = 0;
          puVar9[3] = 0;
          puVar9[0x22] = 0;
          puVar9[0x21] = 0;
          puVar9[0x24] = 0;
          puVar9[0x23] = 0;
          puVar9[0x26] = 0;
          puVar9[0x25] = 0;
          puVar9[0x28] = 0;
          puVar9[0x27] = 0;
          puVar9[0x2a] = 0;
          puVar9[0x29] = 0;
          puVar9[0x2c] = 0;
          puVar9[0x2b] = 0;
          puVar9[0x2e] = 0;
          puVar9[0x2d] = 0;
          puVar9[0x30] = 0;
          puVar9[0x2f] = 0;
          puVar9[0x32] = 0;
          puVar9[0x31] = 0;
          puVar9[0x34] = 0;
          puVar9[0x33] = 0;
          puVar9[0x36] = 0;
          puVar9[0x35] = 0;
          puVar9[0x38] = 0;
          puVar9[0x37] = 0;
          puVar9[0x3a] = 0;
          puVar9[0x39] = 0;
          puVar9[0x3c] = 0;
          puVar9[0x3b] = 0;
          puVar9[0x3e] = 0;
          puVar9[0x3d] = 0;
          puVar9[0x40] = 0;
          puVar9[0x3f] = 0;
          puVar9[0x41] = 0;
          puVar9[6] = 0;
          puVar9[5] = 0;
          puVar9[8] = 0;
          puVar9[7] = 0;
          puVar9[10] = 0;
          puVar9[9] = 0;
          puVar9[0xc] = 0;
          puVar9[0xb] = 0;
          puVar9[0xe] = 0;
          puVar9[0xd] = 0;
          puVar9[0x10] = 0;
          puVar9[0xf] = 0;
          puVar9[0x12] = 0;
          puVar9[0x11] = 0;
          puVar9[0x14] = 0;
          puVar9[0x13] = 0;
          puVar9[0x16] = 0;
          puVar9[0x15] = 0;
          puVar9[0x18] = 0;
          puVar9[0x17] = 0;
          puVar9[0x1a] = 0;
          puVar9[0x19] = 0;
          puVar9[0x1c] = 0;
          puVar9[0x1b] = 0;
          puVar9[0x1e] = 0;
          puVar9[0x1d] = 0;
          puVar9[0x20] = 0;
          puVar9[0x1f] = 0;
          *puVar6 = puVar9;
          puVar9[1] = 1;
        }
        else {
          puVar9 = puVar7 + lVar11;
          puVar7[1] = lVar11 + 1;
        }
        puVar9[2] = uVar12;
        goto LAB_014f5300;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}

