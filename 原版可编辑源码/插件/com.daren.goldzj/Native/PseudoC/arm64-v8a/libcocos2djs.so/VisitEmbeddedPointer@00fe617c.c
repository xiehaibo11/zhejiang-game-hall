
/* v8::internal::MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,
   v8::internal::MajorMarkingState>::VisitEmbeddedPointer(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::
MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
::VisitEmbeddedPointer
          (MarkingVisitorBase<v8::internal::MainMarkingVisitor<v8::internal::MajorMarkingState>,v8::internal::MajorMarkingState>
           *this,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  Instruction IVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  uint uVar9;
  Instruction *this_00;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  
  this_00 = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar10 = param_3[3];
    puVar6 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
    puVar13 = (undefined8 *)(lVar10 - 1U & 0xffffffff00000000 | (ulong)*puVar6);
  }
  else {
    IVar2 = this_00[3];
    puVar13 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar2 == (Instruction)0x58) {
      puVar13 = (undefined8 *)*puVar13;
    }
  }
  uVar11 = (ulong)puVar13 & 0xfffffffffffc0000;
  uVar12 = (long)puVar13 - uVar11 >> 7 & 0x1ffffff;
  uVar9 = (uint)(1L << ((long)puVar13 - uVar11 >> 2 & 0x1f));
  if ((uVar9 & *(uint *)(*(long *)(uVar11 + 0x10) + uVar12 * 4)) != 0) goto LAB_00fe636c;
  if (((*(byte *)(param_2 + 0x17) & 0x3e) != 0) ||
     ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xf)) + 7) >> 3 & 1) ==
      0)) goto LAB_00fe6248;
  uVar3 = *(ushort *)
           (((ulong)puVar13 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar13 + -1)) + 7);
  if (uVar3 == 0xa5) {
LAB_00fe63dc:
    lVar14 = *(long *)(this + 0x18);
    lVar10 = lVar14 + (long)*(int *)(this + 0x28) * 0x50;
    puVar15 = *(undefined8 **)(lVar10 + 0x1050);
    lVar16 = puVar15[1];
    if (lVar16 == 0x40) {
      base::Mutex::Lock((Mutex *)(lVar14 + 0x12d0));
      *puVar15 = *(undefined8 *)(lVar14 + 0x12f8);
      *(undefined8 **)(lVar14 + 0x12f8) = puVar15;
      base::Mutex::Unlock((Mutex *)(lVar14 + 0x12d0));
      pvVar8 = operator_new(0x410);
      memset((void *)((long)pvVar8 + 0x20),0,0x3f0);
      *(void **)(lVar10 + 0x1050) = pvVar8;
      *(undefined8 *)((long)pvVar8 + 8) = 1;
      *(undefined8 **)((long)pvVar8 + 0x10) = puVar13;
      *(ulong *)((long)pvVar8 + 0x18) = param_2;
    }
    else {
      puVar15[1] = lVar16 + 1;
      puVar15[lVar16 * 2 + 2] = puVar13;
      puVar15[lVar16 * 2 + 3] = param_2;
    }
  }
  else {
    if (uVar3 == 0xa2) {
      if (0xa9 < *(ushort *)((long)puVar13 + 7)) goto LAB_00fe63dc;
    }
    else if ((0xa8 < uVar3) || ((ushort)(uVar3 - 0x88) < 10)) goto LAB_00fe63dc;
LAB_00fe6248:
    puVar6 = (uint *)(*(long *)(uVar11 + 0x10) + uVar12 * 4);
    while (uVar1 = *puVar6, (uVar9 & (uVar1 ^ 0xffffffff)) != 0) {
      while (*puVar6 == uVar1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar5) {
          *puVar6 = uVar1 | uVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar16 = *(long *)(this + 8);
          puVar15 = (undefined8 *)(lVar16 + (long)*(int *)(this + 0x28) * 0x50);
          puVar17 = (undefined8 *)*puVar15;
          lVar10 = puVar17[1];
          if (lVar10 == 0x40) {
            base::Mutex::Lock((Mutex *)(lVar16 + 0x280));
            *puVar17 = *(undefined8 *)(lVar16 + 0x2a8);
            *(undefined8 **)(lVar16 + 0x2a8) = puVar17;
            base::Mutex::Unlock((Mutex *)(lVar16 + 0x280));
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
            *puVar15 = puVar7;
            puVar7[1] = 1;
          }
          else {
            puVar7 = puVar17 + lVar10;
            puVar17[1] = lVar10 + 1;
          }
          puVar7[2] = puVar13;
          if (FLAG_track_retaining_path == '\x01') {
            Heap::AddRetainer(*(Heap **)(this + 0x20),param_2,puVar13);
          }
          goto LAB_00fe636c;
        }
      }
      ClearExclusiveLocal();
    }
  }
LAB_00fe636c:
  MarkCompactCollector::RecordRelocSlot(param_2,param_3,puVar13);
  return;
}

