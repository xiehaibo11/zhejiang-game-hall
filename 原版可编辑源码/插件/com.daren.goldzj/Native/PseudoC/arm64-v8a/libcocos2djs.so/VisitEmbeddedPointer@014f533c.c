
/* v8::internal::MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,
   v8::internal::ConcurrentMarkingState>::VisitEmbeddedPointer(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::
MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>::
VisitEmbeddedPointer
          (MarkingVisitorBase<v8::internal::ConcurrentMarkingVisitor,v8::internal::ConcurrentMarkingState>
           *this,ulong param_2,undefined8 *param_3)

{
  uint uVar1;
  Instruction IVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  uint *puVar6;
  void *pvVar7;
  uint uVar8;
  Instruction *this_00;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  
  this_00 = (Instruction *)*param_3;
  if (*(char *)(param_3 + 1) == '\x02') {
    if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
    }
    lVar9 = param_3[3];
    puVar6 = (uint *)Instruction::ImmPCOffsetTarget(this_00);
    puVar12 = (undefined8 *)(lVar9 - 1U & 0xffffffff00000000 | (ulong)*puVar6);
  }
  else {
    IVar2 = this_00[3];
    puVar12 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
    if (IVar2 == (Instruction)0x58) {
      puVar12 = (undefined8 *)*puVar12;
    }
  }
  uVar10 = (ulong)puVar12 & 0xfffffffffffc0000;
  uVar11 = (long)puVar12 - uVar10 >> 7 & 0x1ffffff;
  uVar8 = (uint)(1L << ((long)puVar12 - uVar10 >> 2 & 0x1f));
  if ((uVar8 & *(uint *)(*(long *)(uVar10 + 0x10) + uVar11 * 4)) != 0) goto LAB_014f53e4;
  if (((*(byte *)(param_2 + 0x17) & 0x3e) != 0) ||
     ((*(uint *)((param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0xf)) + 7) >> 3 & 1) ==
      0)) goto LAB_014f5430;
  uVar3 = *(ushort *)
           (((ulong)puVar12 & 0xffffffff00000000 | (ulong)*(uint *)((long)puVar12 + -1)) + 7);
  if (uVar3 == 0xa5) {
LAB_014f5588:
    lVar14 = *(long *)(this + 0x18);
    lVar9 = lVar14 + (long)*(int *)(this + 0x28) * 0x50;
    puVar13 = *(undefined8 **)(lVar9 + 0x1050);
    lVar15 = puVar13[1];
    if (lVar15 == 0x40) {
      base::Mutex::Lock((Mutex *)(lVar14 + 0x12d0));
      *puVar13 = *(undefined8 *)(lVar14 + 0x12f8);
      *(undefined8 **)(lVar14 + 0x12f8) = puVar13;
      base::Mutex::Unlock((Mutex *)(lVar14 + 0x12d0));
      pvVar7 = operator_new(0x410);
      memset((void *)((long)pvVar7 + 0x20),0,0x3f0);
      *(void **)(lVar9 + 0x1050) = pvVar7;
      *(undefined8 *)((long)pvVar7 + 8) = 1;
      *(undefined8 **)((long)pvVar7 + 0x10) = puVar12;
      *(ulong *)((long)pvVar7 + 0x18) = param_2;
    }
    else {
      puVar13[1] = lVar15 + 1;
      puVar13[lVar15 * 2 + 2] = puVar12;
      puVar13[lVar15 * 2 + 3] = param_2;
    }
  }
  else {
    if (uVar3 == 0xa2) {
      if (0xa9 < *(ushort *)((long)puVar12 + 7)) goto LAB_014f5588;
    }
    else if ((0xa8 < uVar3) || ((ushort)(uVar3 - 0x88) < 10)) goto LAB_014f5588;
LAB_014f5430:
    puVar6 = (uint *)(*(long *)(uVar10 + 0x10) + uVar11 * 4);
    while (uVar1 = *puVar6, (uVar8 & (uVar1 ^ 0xffffffff)) != 0) {
      while (*puVar6 == uVar1) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar6,0x10);
        if (bVar5) {
          *puVar6 = uVar1 | uVar8;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          lVar15 = *(long *)(this + 8);
          puVar13 = (undefined8 *)(lVar15 + (long)*(int *)(this + 0x28) * 0x50);
          puVar16 = (undefined8 *)*puVar13;
          lVar9 = puVar16[1];
          if (lVar9 == 0x40) {
            base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
            *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
            *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
            base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
            pvVar7 = operator_new(0x210);
            *(undefined8 *)((long)pvVar7 + 0x20) = 0;
            *(undefined8 *)((long)pvVar7 + 0x18) = 0;
            *(undefined8 *)((long)pvVar7 + 0x110) = 0;
            *(undefined8 *)((long)pvVar7 + 0x108) = 0;
            *(undefined8 *)((long)pvVar7 + 0x120) = 0;
            *(undefined8 *)((long)pvVar7 + 0x118) = 0;
            *(undefined8 *)((long)pvVar7 + 0x130) = 0;
            *(undefined8 *)((long)pvVar7 + 0x128) = 0;
            *(undefined8 *)((long)pvVar7 + 0x140) = 0;
            *(undefined8 *)((long)pvVar7 + 0x138) = 0;
            *(undefined8 *)((long)pvVar7 + 0x150) = 0;
            *(undefined8 *)((long)pvVar7 + 0x148) = 0;
            *(undefined8 *)((long)pvVar7 + 0x160) = 0;
            *(undefined8 *)((long)pvVar7 + 0x158) = 0;
            *(undefined8 *)((long)pvVar7 + 0x170) = 0;
            *(undefined8 *)((long)pvVar7 + 0x168) = 0;
            *(undefined8 *)((long)pvVar7 + 0x180) = 0;
            *(undefined8 *)((long)pvVar7 + 0x178) = 0;
            *(undefined8 *)((long)pvVar7 + 400) = 0;
            *(undefined8 *)((long)pvVar7 + 0x188) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1a0) = 0;
            *(undefined8 *)((long)pvVar7 + 0x198) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1b0) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1a8) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1c0) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1b8) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1d0) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1c8) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1e0) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1d8) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1f0) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1e8) = 0;
            *(undefined8 *)((long)pvVar7 + 0x200) = 0;
            *(undefined8 *)((long)pvVar7 + 0x1f8) = 0;
            *(undefined8 *)((long)pvVar7 + 0x208) = 0;
            *(undefined8 *)((long)pvVar7 + 0x30) = 0;
            *(undefined8 *)((long)pvVar7 + 0x28) = 0;
            *(undefined8 *)((long)pvVar7 + 0x40) = 0;
            *(undefined8 *)((long)pvVar7 + 0x38) = 0;
            *(undefined8 *)((long)pvVar7 + 0x50) = 0;
            *(undefined8 *)((long)pvVar7 + 0x48) = 0;
            *(undefined8 *)((long)pvVar7 + 0x60) = 0;
            *(undefined8 *)((long)pvVar7 + 0x58) = 0;
            *(undefined8 *)((long)pvVar7 + 0x70) = 0;
            *(undefined8 *)((long)pvVar7 + 0x68) = 0;
            *(undefined8 *)((long)pvVar7 + 0x80) = 0;
            *(undefined8 *)((long)pvVar7 + 0x78) = 0;
            *(undefined8 *)((long)pvVar7 + 0x90) = 0;
            *(undefined8 *)((long)pvVar7 + 0x88) = 0;
            *(undefined8 *)((long)pvVar7 + 0xa0) = 0;
            *(undefined8 *)((long)pvVar7 + 0x98) = 0;
            *(undefined8 *)((long)pvVar7 + 0xb0) = 0;
            *(undefined8 *)((long)pvVar7 + 0xa8) = 0;
            *(undefined8 *)((long)pvVar7 + 0xc0) = 0;
            *(undefined8 *)((long)pvVar7 + 0xb8) = 0;
            *(undefined8 *)((long)pvVar7 + 0xd0) = 0;
            *(undefined8 *)((long)pvVar7 + 200) = 0;
            *(undefined8 *)((long)pvVar7 + 0xe0) = 0;
            *(undefined8 *)((long)pvVar7 + 0xd8) = 0;
            *(undefined8 *)((long)pvVar7 + 0xf0) = 0;
            *(undefined8 *)((long)pvVar7 + 0xe8) = 0;
            *(undefined8 *)((long)pvVar7 + 0x100) = 0;
            *(undefined8 *)((long)pvVar7 + 0xf8) = 0;
            *puVar13 = pvVar7;
            *(undefined8 *)((long)pvVar7 + 8) = 1;
            *(undefined8 **)((long)pvVar7 + 0x10) = puVar12;
          }
          else {
            puVar16[1] = lVar9 + 1;
            puVar16[lVar9 + 2] = puVar12;
          }
          goto LAB_014f53e4;
        }
      }
      ClearExclusiveLocal();
    }
  }
LAB_014f53e4:
  ConcurrentMarkingVisitor::RecordRelocSlot
            ((ConcurrentMarkingVisitor *)this,param_2,param_3,puVar12);
  return;
}

