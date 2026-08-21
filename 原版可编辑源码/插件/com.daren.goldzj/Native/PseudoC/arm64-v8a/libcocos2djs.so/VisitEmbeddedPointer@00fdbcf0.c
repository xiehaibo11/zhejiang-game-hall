
/* v8::internal::MarkCompactCollector::CustomRootBodyMarkingVisitor::VisitEmbeddedPointer(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::MarkCompactCollector::CustomRootBodyMarkingVisitor::VisitEmbeddedPointer
          (CustomRootBodyMarkingVisitor *this,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  Instruction IVar2;
  char cVar3;
  bool bVar4;
  uint *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  Instruction *this_00;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  
  this_00 = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar9 = param_3[3];
    puVar5 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
    puVar11 = (undefined8 *)(lVar9 - 1U & 0xffffffff00000000 | (ulong)*puVar5);
    if ((*puVar5 & 1) == 0) {
      return;
    }
  }
  else {
    IVar2 = this_00[3];
    puVar11 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar2 == (Instruction)0x58) {
      puVar11 = (undefined8 *)*puVar11;
    }
    if (((ulong)puVar11 & 1) == 0) {
      return;
    }
  }
  lVar9 = *(long *)(this + 8);
  uVar10 = (long)puVar11 - ((ulong)puVar11 & 0xfffffffffffc0000);
  puVar5 = (uint *)(*(long *)(((ulong)puVar11 & 0xfffffffffffc0000) + 0x10) +
                   (uVar10 >> 7 & 0x1ffffff) * 4);
  do {
    uVar1 = *puVar5;
    uVar7 = (uint)(1L << (uVar10 >> 2 & 0x1f));
    if ((uVar7 & (uVar1 ^ 0xffffffff)) == 0) {
      return;
    }
    while (*puVar5 == uVar1) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
      if (bVar4) {
        *puVar5 = uVar1 | uVar7;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        puVar12 = *(undefined8 **)(lVar9 + 0x58);
        lVar8 = puVar12[1];
        if (lVar8 == 0x40) {
          base::Mutex::Lock((Mutex *)(lVar9 + 0x2d8));
          *puVar12 = *(undefined8 *)(lVar9 + 0x300);
          *(undefined8 **)(lVar9 + 0x300) = puVar12;
          base::Mutex::Unlock((Mutex *)(lVar9 + 0x2d8));
          puVar6 = operator_new(0x210);
          puVar6[4] = 0;
          puVar6[3] = 0;
          puVar6[0x22] = 0;
          puVar6[0x21] = 0;
          puVar6[0x24] = 0;
          puVar6[0x23] = 0;
          puVar6[0x26] = 0;
          puVar6[0x25] = 0;
          puVar6[0x28] = 0;
          puVar6[0x27] = 0;
          puVar6[0x2a] = 0;
          puVar6[0x29] = 0;
          puVar6[0x2c] = 0;
          puVar6[0x2b] = 0;
          puVar6[0x2e] = 0;
          puVar6[0x2d] = 0;
          puVar6[0x30] = 0;
          puVar6[0x2f] = 0;
          puVar6[0x32] = 0;
          puVar6[0x31] = 0;
          puVar6[0x34] = 0;
          puVar6[0x33] = 0;
          puVar6[0x36] = 0;
          puVar6[0x35] = 0;
          puVar6[0x38] = 0;
          puVar6[0x37] = 0;
          puVar6[0x3a] = 0;
          puVar6[0x39] = 0;
          puVar6[0x3c] = 0;
          puVar6[0x3b] = 0;
          puVar6[0x3e] = 0;
          puVar6[0x3d] = 0;
          puVar6[0x40] = 0;
          puVar6[0x3f] = 0;
          puVar6[0x41] = 0;
          puVar6[6] = 0;
          puVar6[5] = 0;
          puVar6[8] = 0;
          puVar6[7] = 0;
          puVar6[10] = 0;
          puVar6[9] = 0;
          puVar6[0xc] = 0;
          puVar6[0xb] = 0;
          puVar6[0xe] = 0;
          puVar6[0xd] = 0;
          puVar6[0x10] = 0;
          puVar6[0xf] = 0;
          puVar6[0x12] = 0;
          puVar6[0x11] = 0;
          puVar6[0x14] = 0;
          puVar6[0x13] = 0;
          puVar6[0x16] = 0;
          puVar6[0x15] = 0;
          puVar6[0x18] = 0;
          puVar6[0x17] = 0;
          puVar6[0x1a] = 0;
          puVar6[0x19] = 0;
          puVar6[0x1c] = 0;
          puVar6[0x1b] = 0;
          puVar6[0x1e] = 0;
          puVar6[0x1d] = 0;
          puVar6[0x20] = 0;
          puVar6[0x1f] = 0;
          *(undefined8 **)(lVar9 + 0x58) = puVar6;
          puVar6[1] = 1;
        }
        else {
          puVar6 = puVar12 + lVar8;
          puVar12[1] = lVar8 + 1;
        }
        puVar6[2] = puVar11;
        if (FLAG_track_retaining_path == '\0') {
          return;
        }
        Heap::AddRetainer(*(Heap **)(lVar9 + 8),param_2,puVar11);
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
}

