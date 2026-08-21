
/* v8::internal::MinorMarkCompactCollector::DrainMarkingWorklist() */

void __thiscall
v8::internal::MinorMarkCompactCollector::DrainMarkingWorklist(MinorMarkCompactCollector *this)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  void *pvVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  Worklist<v8::internal::HeapObject,64> *this_00;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong local_70;
  ulong local_68;
  
  this_00 = *(Worklist<v8::internal::HeapObject,64> **)(this + 0x18);
  local_70 = 0;
  uVar10 = Worklist<v8::internal::HeapObject,64>::Pop(this_00,0,(HeapObject *)&local_70);
  uVar14 = local_70;
  do {
    if ((uVar10 & 1) == 0) {
      return;
    }
    plVar17 = *(long **)(this + 0x20);
    uVar10 = uVar14 & 0xffffffff00000000 | (ulong)*(uint *)(uVar14 - 1);
    local_70 = uVar14;
    if (0x39 < *(byte *)(uVar10 + 6)) {
switchD_00fd784c_caseD_6:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar20 = uVar14 - 1;
    switch(*(byte *)(uVar10 + 6)) {
    case 0:
    case 1:
    case 3:
      break;
    case 2:
      break;
    case 4:
    case 5:
      break;
    default:
      goto switchD_00fd784c_caseD_6;
    case 7:
      cVar6 = *(char *)(uVar10 + 3);
      puVar1 = (uint *)(uVar14 + 3);
joined_r0x00fd78a0:
      if (puVar1 < (uint *)(uVar14 + 0xf)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar21 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar10 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x108) + (uVar21 - uVar10 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar21 - uVar10 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar5 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar5 = ExclusiveMonitorsStatus();
                }
                if (cVar5 == '\0') {
                  lVar15 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar15 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar20 = puVar16[1];
                  if (lVar20 == 0x40) {
                    base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
                    *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
                    *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
                    base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
                    pvVar11 = operator_new(0x210);
                    *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                    *(undefined8 *)((long)pvVar11 + 400) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                    *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                    *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                    *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                    *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                    *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                    *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                    *(undefined8 *)((long)pvVar11 + 200) = 0;
                    *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                    *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                    *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                    *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                    *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                    *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                    *puVar22 = pvVar11;
                    *(undefined8 *)((long)pvVar11 + 8) = 1;
                    *(ulong *)((long)pvVar11 + 0x10) = uVar21;
                    goto LAB_00fd7944;
                  }
                  puVar16[1] = lVar20 + 1;
                  puVar16[lVar20 + 2] = uVar21;
                  puVar1 = puVar1 + 1;
                  goto joined_r0x00fd78a0;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd7944:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd78a0;
      }
      if (cVar6 == '\a') {
        lVar19 = *plVar17;
        lVar20 = uVar14 + 0x17;
        lVar15 = uVar14 + 0x1b;
        goto LAB_00fd7ba4;
      }
      break;
    case 9:
      puVar1 = (uint *)(uVar14 + 3);
joined_r0x00fd7a28:
      if (puVar1 < (uint *)(uVar14 + 7)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar21 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar10 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x108) + (uVar21 - uVar10 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar21 - uVar10 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar15 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar15 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar20 = puVar16[1];
                  if (lVar20 != 0x40) {
                    puVar16[1] = lVar20 + 1;
                    puVar16[lVar20 + 2] = uVar21;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd7a28;
                  }
                  base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
                  *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar21;
                  goto LAB_00fd7acc;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd7acc:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd7a28;
      }
      break;
    case 10:
      Code::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,plVar17);
      break;
    case 0xb:
      lVar19 = *plVar17;
      lVar20 = uVar14 + 3;
      lVar15 = uVar14 + 7;
LAB_00fd7ba4:
      (**(code **)(lVar19 + 0x10))(plVar17,uVar14,lVar20,lVar15);
      break;
    case 0xc:
      puVar1 = (uint *)(uVar14 + 0xb);
joined_r0x00fd7bc4:
      if (puVar1 < (uint *)(uVar14 + 0x13)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar21 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar10 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x108) + (uVar21 - uVar10 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar21 - uVar10 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar15 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar15 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar20 = puVar16[1];
                  if (lVar20 != 0x40) {
                    puVar16[1] = lVar20 + 1;
                    puVar16[lVar20 + 2] = uVar21;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd7bc4;
                  }
                  base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
                  *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar21;
                  goto LAB_00fd7c68;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd7c68:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd7bc4;
      }
      break;
    case 0xd:
      local_68 = uVar14;
      iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar10);
      puVar1 = (uint *)(uVar14 + 7);
joined_r0x00fd8a2c:
      if (puVar1 < (uint *)(lVar20 + iVar9)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar14 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar14 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar14 + 0x108) + (uVar10 - uVar14 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar10 - uVar14 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar19 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar19 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar15 = puVar16[1];
                  if (lVar15 != 0x40) {
                    puVar16[1] = lVar15 + 1;
                    puVar16[lVar15 + 2] = uVar10;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd8a2c;
                  }
                  base::Mutex::Lock((Mutex *)(lVar19 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar19 + 0x2a8);
                  *(undefined8 **)(lVar19 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar19 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar10;
                  goto LAB_00fd8ad0;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd8ad0:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd8a2c;
      }
      break;
    case 0xe:
      local_68 = uVar14;
      uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar10);
      DataHandler::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,uVar8,plVar17);
      break;
    case 0xf:
      local_68 = uVar14;
      uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar10);
      uVar12 = 0xc;
      goto LAB_00fd8ba0;
    case 0x10:
      local_68 = uVar14;
      iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar10);
      if (8 < iVar9) {
        lVar15 = 8;
        do {
          uVar3 = *(uint *)(lVar15 + lVar20);
          if ((uVar3 & 1) != 0) {
            uVar14 = (ulong)(lVar15 + lVar20) & 0xffffffff00000000;
            uVar10 = uVar14 | uVar3;
            uVar14 = uVar14 | (ulong)uVar3 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar14 + 8) & 0x18) != 0) {
              puVar1 = (uint *)(*(long *)(uVar14 + 0x108) + (uVar10 - uVar14 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar3 = *puVar1;
                uVar13 = (uint)(1L << (uVar10 - uVar14 >> 2 & 0x1f));
                if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
                while (*puVar1 == uVar3) {
                  cVar6 = '\x01';
                  bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
                  if (bVar7) {
                    *puVar1 = uVar3 | uVar13;
                    cVar6 = ExclusiveMonitorsStatus();
                  }
                  if (cVar6 == '\0') {
                    lVar18 = plVar17[1];
                    puVar22 = (undefined8 *)(lVar18 + (long)(int)plVar17[2] * 0x50);
                    puVar16 = (undefined8 *)*puVar22;
                    lVar19 = puVar16[1];
                    if (lVar19 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar18 + 0x280));
                      *puVar16 = *(undefined8 *)(lVar18 + 0x2a8);
                      *(undefined8 **)(lVar18 + 0x2a8) = puVar16;
                      base::Mutex::Unlock((Mutex *)(lVar18 + 0x280));
                      pvVar11 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar11 + 400) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar11 + 200) = 0;
                      *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                      *puVar22 = pvVar11;
                      *(undefined8 *)((long)pvVar11 + 8) = 1;
                      *(ulong *)((long)pvVar11 + 0x10) = uVar10;
                    }
                    else {
                      puVar16[1] = lVar19 + 1;
                      puVar16[lVar19 + 2] = uVar10;
                    }
                    goto LAB_00fd7e0c;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fd7e0c:
          lVar15 = lVar15 + 8;
        } while ((int)lVar15 < iVar9);
      }
      break;
    case 0x11:
      local_68 = uVar14;
      uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar10);
      EphemeronHashTable::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,uVar8,plVar17);
      break;
    case 0x12:
      puVar1 = (uint *)(uVar14 + 3);
joined_r0x00fd8bbc:
      if (puVar1 < (uint *)(uVar14 + 7)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar21 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar10 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x108) + (uVar21 - uVar10 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar21 - uVar10 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar15 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar15 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar20 = puVar16[1];
                  if (lVar20 != 0x40) {
                    puVar16[1] = lVar20 + 1;
                    puVar16[lVar20 + 2] = uVar21;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd8bbc;
                  }
                  base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
                  *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar21;
                  goto LAB_00fd8c60;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd8c60:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd8bbc;
      }
      break;
    case 0x13:
      FeedbackVector::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,*(int *)(uVar14 + 0xf) * 4 + 0x20,plVar17);
      break;
    case 0x14:
      local_68 = uVar14;
      iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar10);
      puVar1 = (uint *)(uVar14 + 7);
joined_r0x00fd7f00:
      if (puVar1 < (uint *)(lVar20 + iVar9)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar14 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar14 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar14 + 0x108) + (uVar10 - uVar14 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar10 - uVar14 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar19 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar19 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar15 = puVar16[1];
                  if (lVar15 != 0x40) {
                    puVar16[1] = lVar15 + 1;
                    puVar16[lVar15 + 2] = uVar10;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd7f00;
                  }
                  base::Mutex::Lock((Mutex *)(lVar19 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar19 + 0x2a8);
                  *(undefined8 **)(lVar19 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar19 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar10;
                  goto LAB_00fd7fa4;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd7fa4:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd7f00;
      }
      break;
    case 0x15:
      break;
    case 0x16:
    case 0x19:
    case 0x1a:
    case 0x1e:
      BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,4,(ulong)*(byte *)(uVar10 + 3) << 2,plVar17);
      break;
    case 0x17:
      JSArrayBuffer::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,(ulong)*(byte *)(uVar10 + 3) << 2,plVar17);
      break;
    case 0x18:
      JSDataView::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,(ulong)*(byte *)(uVar10 + 3) << 2,plVar17);
      break;
    case 0x1b:
      bVar4 = *(byte *)(uVar10 + 3);
      puVar1 = (uint *)(uVar14 + 3);
joined_r0x00fd808c:
      if (puVar1 < (uint *)(lVar20 + (ulong)bVar4 * 4)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar14 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar14 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar14 + 0x108) + (uVar10 - uVar14 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar10 - uVar14 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar19 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar19 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar15 = puVar16[1];
                  if (lVar15 != 0x40) {
                    puVar16[1] = lVar15 + 1;
                    puVar16[lVar15 + 2] = uVar10;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd808c;
                  }
                  base::Mutex::Lock((Mutex *)(lVar19 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar19 + 0x2a8);
                  *(undefined8 **)(lVar19 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar19 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar10;
                  goto LAB_00fd8130;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd8130:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd808c;
      }
      break;
    case 0x1c:
      JSTypedArray::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,(ulong)*(byte *)(uVar10 + 3) << 2,plVar17);
      break;
    case 0x1d:
      JSWeakRef::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,(ulong)*(byte *)(uVar10 + 3) << 2,plVar17);
      break;
    case 0x1f:
      Map::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,0x28,plVar17);
      break;
    case 0x20:
      NativeContext::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,0x42c,plVar17);
      break;
    case 0x21:
      puVar1 = (uint *)(uVar14 + 0xb);
joined_r0x00fd8244:
      if (puVar1 < (uint *)(uVar14 + 0x1b)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar21 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar10 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x108) + (uVar21 - uVar10 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar21 - uVar10 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar15 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar15 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar20 = puVar16[1];
                  if (lVar20 != 0x40) {
                    puVar16[1] = lVar20 + 1;
                    puVar16[lVar20 + 2] = uVar21;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd8244;
                  }
                  base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
                  *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar21;
                  goto LAB_00fd82e8;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd82e8:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd8244;
      }
      break;
    case 0x22:
      uVar3 = *(int *)(uVar14 + 3) + 0xfU & 0xfffffffc;
      BodyDescriptorBase::IteratePointers<v8::internal::YoungGenerationMarkingVisitor>
                (uVar14,uVar3,uVar3 + *(int *)(uVar14 + 7) * 4,plVar17);
      break;
    case 0x23:
      local_68 = uVar14;
      iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar10);
      puVar1 = (uint *)(uVar14 + 7);
joined_r0x00fd83e0:
      if (puVar1 < (uint *)(lVar20 + iVar9)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar14 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar14 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar14 + 0x108) + (uVar10 - uVar14 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar10 - uVar14 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar19 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar19 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar15 = puVar16[1];
                  if (lVar15 != 0x40) {
                    puVar16[1] = lVar15 + 1;
                    puVar16[lVar15 + 2] = uVar10;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd83e0;
                  }
                  base::Mutex::Lock((Mutex *)(lVar19 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar19 + 0x2a8);
                  *(undefined8 **)(lVar19 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar19 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar10;
                  goto LAB_00fd8484;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd8484:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd83e0;
      }
      break;
    case 0x24:
      puVar1 = (uint *)(uVar14 + 3);
joined_r0x00fd8d84:
      if (puVar1 < (uint *)(uVar14 + 0x13)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar21 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar10 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x108) + (uVar21 - uVar10 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar21 - uVar10 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar15 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar15 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar20 = puVar16[1];
                  if (lVar20 != 0x40) {
                    puVar16[1] = lVar20 + 1;
                    puVar16[lVar20 + 2] = uVar21;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd8d84;
                  }
                  base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
                  *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar21;
                  goto LAB_00fd8e28;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd8e28:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd8d84;
      }
      break;
    case 0x25:
      local_68 = uVar14;
      uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar10);
      PrototypeInfo::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,uVar8,plVar17);
      break;
    case 0x27:
      puVar1 = (uint *)(uVar14 + 0xb);
joined_r0x00fd8f14:
      if (puVar1 < (uint *)(uVar14 + 0x13)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar21 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar10 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x108) + (uVar21 - uVar10 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar21 - uVar10 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar15 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar15 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar20 = puVar16[1];
                  if (lVar20 != 0x40) {
                    puVar16[1] = lVar20 + 1;
                    puVar16[lVar20 + 2] = uVar21;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd8f14;
                  }
                  base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
                  *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar21;
                  goto LAB_00fd8fb8;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd8fb8:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd8f14;
      }
      break;
    case 0x28:
      puVar1 = (uint *)(uVar14 + 0xb);
joined_r0x00fd907c:
      if (puVar1 < (uint *)(uVar14 + 0x13)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar21 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar10 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x108) + (uVar21 - uVar10 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar21 - uVar10 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar15 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar15 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar20 = puVar16[1];
                  if (lVar20 != 0x40) {
                    puVar16[1] = lVar20 + 1;
                    puVar16[lVar20 + 2] = uVar21;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd907c;
                  }
                  base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
                  *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar21;
                  goto LAB_00fd9120;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd9120:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd907c;
      }
      break;
    case 0x29:
      SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::BodyDescriptor::
      IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,(uint)*(byte *)(uVar14 + 5) * 0x13 + 0xb & 0x3ffc,plVar17);
      break;
    case 0x2a:
      SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::BodyDescriptor::
      IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,(uint)*(byte *)(uVar14 + 5) * 0xb + 0xb & 0x1ffc,plVar17);
      break;
    case 0x2b:
      SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::BodyDescriptor::
      IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,(uint)*(byte *)(uVar14 + 9) * 0x1b + 0xf & 0x3ffc,plVar17);
      break;
    case 0x2c:
      SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,24,24>,v8::internal::FixedBodyDescriptor<24,72,72>>
      ::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar10,uVar14,0x48,plVar17);
      break;
    case 0x2d:
      bVar4 = *(byte *)(uVar10 + 3);
      puVar1 = (uint *)(uVar14 + 3);
joined_r0x00fd85b4:
      if (puVar1 < (uint *)(lVar20 + (ulong)bVar4 * 4)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar14 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar14 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar14 + 0x108) + (uVar10 - uVar14 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar10 - uVar14 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar19 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar19 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar15 = puVar16[1];
                  if (lVar15 != 0x40) {
                    puVar16[1] = lVar15 + 1;
                    puVar16[lVar15 + 2] = uVar10;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd85b4;
                  }
                  base::Mutex::Lock((Mutex *)(lVar19 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar19 + 0x2a8);
                  *(undefined8 **)(lVar19 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar19 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar10;
                  goto LAB_00fd8658;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd8658:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd85b4;
      }
      break;
    case 0x2e:
      puVar1 = (uint *)(uVar14 + 0xb);
joined_r0x00fd920c:
      if (puVar1 < (uint *)(uVar14 + 0xf)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar21 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar10 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x108) + (uVar21 - uVar10 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar21 - uVar10 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar15 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar15 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar20 = puVar16[1];
                  if (lVar20 != 0x40) {
                    puVar16[1] = lVar20 + 1;
                    puVar16[lVar20 + 2] = uVar21;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd920c;
                  }
                  base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
                  *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar21;
                  goto LAB_00fd92b0;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd92b0:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd920c;
      }
      break;
    case 0x2f:
      SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,24,24>,v8::internal::FixedBodyDescriptor<28,36,36>>
      ::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar10,uVar14,0x24,plVar17);
      break;
    case 0x30:
      puVar1 = (uint *)(uVar14 + 0xb);
joined_r0x00fd8734:
      if (puVar1 < (uint *)(uVar14 + 0xf)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar21 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar10 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x108) + (uVar21 - uVar10 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar21 - uVar10 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar15 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar15 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar20 = puVar16[1];
                  if (lVar20 != 0x40) {
                    puVar16[1] = lVar20 + 1;
                    puVar16[lVar20 + 2] = uVar21;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd8734;
                  }
                  base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
                  *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar21;
                  goto LAB_00fd87d8;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd87d8:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd8734;
      }
      break;
    case 0x31:
    case 0x37:
      local_68 = uVar14;
      uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar10);
      uVar12 = 4;
LAB_00fd8ba0:
      BodyDescriptorBase::IterateMaybeWeakPointers<v8::internal::YoungGenerationMarkingVisitor>
                (uVar14,uVar12,uVar8,plVar17);
      break;
    case 0x32:
      puVar1 = (uint *)(uVar14 + 3);
joined_r0x00fd889c:
      if (puVar1 < (uint *)(uVar14 + 7)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar21 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar10 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar10 + 0x108) + (uVar21 - uVar10 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar21 - uVar10 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar15 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar15 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar20 = puVar16[1];
                  if (lVar20 != 0x40) {
                    puVar16[1] = lVar20 + 1;
                    puVar16[lVar20 + 2] = uVar21;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd889c;
                  }
                  base::Mutex::Lock((Mutex *)(lVar15 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar15 + 0x2a8);
                  *(undefined8 **)(lVar15 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar15 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar21;
                  goto LAB_00fd8940;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd8940:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd889c;
      }
      break;
    case 0x33:
      SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,8,16>,v8::internal::FixedBodyDescriptor<16,20,20>>
      ::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar10,uVar14,0x14,plVar17);
      break;
    case 0x34:
      local_68 = uVar14;
      iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar10);
      puVar1 = (uint *)(uVar14 + 0xb);
joined_r0x00fd9384:
      if (puVar1 < (uint *)(lVar20 + iVar9)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar14 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar14 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar14 + 0x108) + (uVar10 - uVar14 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar10 - uVar14 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar19 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar19 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar15 = puVar16[1];
                  if (lVar15 != 0x40) {
                    puVar16[1] = lVar15 + 1;
                    puVar16[lVar15 + 2] = uVar10;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd9384;
                  }
                  base::Mutex::Lock((Mutex *)(lVar19 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar19 + 0x2a8);
                  *(undefined8 **)(lVar19 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar19 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar10;
                  goto LAB_00fd9428;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd9428:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd9384;
      }
      break;
    case 0x35:
      local_68 = uVar14;
      iVar9 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar10);
      puVar1 = (uint *)(uVar14 + 0x17);
joined_r0x00fd94fc:
      if (puVar1 < (uint *)(lVar20 + iVar9)) {
        uVar3 = *puVar1;
        if ((uVar3 & 1) != 0) {
          uVar10 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
          uVar14 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
          if ((*(byte *)(uVar14 + 8) & 0x18) != 0) {
            puVar2 = (uint *)(*(long *)(uVar14 + 0x108) + (uVar10 - uVar14 >> 7 & 0x1ffffff) * 4);
            while( true ) {
              uVar3 = *puVar2;
              uVar13 = (uint)(1L << (uVar10 - uVar14 >> 2 & 0x1f));
              if ((uVar13 & (uVar3 ^ 0xffffffff)) == 0) break;
              while (*puVar2 == uVar3) {
                cVar6 = '\x01';
                bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                if (bVar7) {
                  *puVar2 = uVar3 | uVar13;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 == '\0') {
                  lVar19 = plVar17[1];
                  puVar22 = (undefined8 *)(lVar19 + (long)(int)plVar17[2] * 0x50);
                  puVar16 = (undefined8 *)*puVar22;
                  lVar15 = puVar16[1];
                  if (lVar15 != 0x40) {
                    puVar16[1] = lVar15 + 1;
                    puVar16[lVar15 + 2] = uVar10;
                    puVar1 = puVar1 + 1;
                    goto joined_r0x00fd94fc;
                  }
                  base::Mutex::Lock((Mutex *)(lVar19 + 0x280));
                  *puVar16 = *(undefined8 *)(lVar19 + 0x2a8);
                  *(undefined8 **)(lVar19 + 0x2a8) = puVar16;
                  base::Mutex::Unlock((Mutex *)(lVar19 + 0x280));
                  pvVar11 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar11 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar11 + 400) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x208) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar11 + 200) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar11 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar11 + 0xf8) = 0;
                  *puVar22 = pvVar11;
                  *(undefined8 *)((long)pvVar11 + 8) = 1;
                  *(ulong *)((long)pvVar11 + 0x10) = uVar10;
                  goto LAB_00fd95a0;
                }
              }
              ClearExclusiveLocal();
            }
          }
        }
LAB_00fd95a0:
        puVar1 = puVar1 + 1;
        goto joined_r0x00fd94fc;
      }
      break;
    case 0x36:
      WasmInstanceObject::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                (uVar10,uVar14,(ulong)*(byte *)(uVar10 + 3) << 2,plVar17);
    }
    uVar10 = Worklist<v8::internal::HeapObject,64>::Pop(this_00,0,(HeapObject *)&local_70);
    uVar14 = local_70;
  } while( true );
}

