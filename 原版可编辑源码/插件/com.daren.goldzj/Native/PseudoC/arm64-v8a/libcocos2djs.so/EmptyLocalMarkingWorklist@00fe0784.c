
/* v8::internal::YoungGenerationMarkingTask::EmptyLocalMarkingWorklist() */

void __thiscall
v8::internal::YoungGenerationMarkingTask::EmptyLocalMarkingWorklist
          (YoungGenerationMarkingTask *this)

{
  YoungGenerationMarkingTask *pYVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  long lVar21;
  undefined8 *puVar22;
  ulong local_80;
  ulong local_78 [2];
  ulong *local_68;
  
  local_80 = 0;
  uVar7 = Worklist<v8::internal::HeapObject,64>::Pop
                    (*(Worklist<v8::internal::HeapObject,64> **)(this + 0x58),*(int *)(this + 0x60),
                     (HeapObject *)&local_80);
  if ((uVar7 & 1) != 0) {
    pYVar1 = this + 0x70;
    do {
      uVar7 = local_80;
      uVar18 = local_80 & 0xffffffff00000000 | (ulong)*(uint *)(local_80 - 1);
      if (0x39 < *(byte *)(uVar18 + 6)) {
switchD_00fe087c_caseD_6:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("unreachable code");
      }
      lVar21 = local_80 - 1;
      switch(*(byte *)(uVar18 + 6)) {
      case 0:
      case 3:
        uVar8 = (ulong)((*(uint *)(local_80 + 3) & 0x3ffffffe) * 4 + 8);
        break;
      case 1:
        uVar12 = (*(int *)(local_80 + 3) >> 1) + 0xb;
        goto LAB_00fe08f4;
      case 2:
        uVar8 = (ulong)*(byte *)(uVar18 + 3) << 2;
        break;
      case 4:
        iVar11 = *(int *)(local_80 + 7);
        goto LAB_00fe08f0;
      case 5:
        iVar11 = *(int *)(local_80 + 7) << 1;
LAB_00fe08f0:
        uVar12 = iVar11 + 0xf;
LAB_00fe08f4:
        uVar8 = (ulong)(uVar12 & 0xfffffffc);
        break;
      default:
        goto switchD_00fe087c_caseD_6;
      case 7:
        bVar4 = *(byte *)(uVar18 + 3);
        puVar3 = (uint *)(local_80 + 0xf);
        uVar8 = (ulong)bVar4 << 2;
        for (puVar19 = (uint *)(local_80 + 3); puVar19 < puVar3; puVar19 = puVar19 + 1) {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar20 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar18 + 8) & 0x18) != 0) {
              puVar2 = (uint *)(*(long *)(uVar18 + 0x108) + (uVar20 - uVar18 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar2;
                uVar13 = (uint)(1L << (uVar20 - uVar18 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar2 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar6) {
                    *puVar2 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar14 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar21 = puVar15[1];
                    if (lVar21 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
                      *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar20;
                    }
                    else {
                      puVar15[1] = lVar21 + 1;
                      puVar15[lVar21 + 2] = uVar20;
                    }
                    goto LAB_00fe09c0;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe09c0:
        }
        if (bVar4 == 7) {
          (**(code **)(*(long *)pYVar1 + 0x10))(pYVar1,uVar7,uVar7 + 0x17,uVar7 + 0x1b);
        }
        break;
      case 9:
        puVar19 = (uint *)(local_80 + 3);
        puVar3 = (uint *)(local_80 + 7);
        if (puVar19 < puVar3) {
          do {
            uVar12 = *puVar19;
            if ((uVar12 & 1) != 0) {
              uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
              uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
              if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
                puVar2 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
                while( true ) {
                  uVar12 = *puVar2;
                  uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                  if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                  while (*puVar2 == uVar12) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar6) {
                      *puVar2 = uVar12 | uVar13;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') {
                      lVar14 = *(long *)(this + 0x78);
                      puVar22 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
                      puVar15 = (undefined8 *)*puVar22;
                      lVar21 = puVar15[1];
                      if (lVar21 == 0x40) {
                        base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                        *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
                        *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
                        base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
                        pvVar9 = operator_new(0x210);
                        *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                        *(undefined8 *)((long)pvVar9 + 400) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                        *(undefined8 *)((long)pvVar9 + 200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                        *puVar22 = pvVar9;
                        *(undefined8 *)((long)pvVar9 + 8) = 1;
                        *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                      }
                      else {
                        puVar15[1] = lVar21 + 1;
                        puVar15[lVar21 + 2] = uVar18;
                      }
                      goto LAB_00fe0b20;
                    }
                  }
                  ClearExclusiveLocal();
                }
              }
            }
LAB_00fe0b20:
            puVar19 = puVar19 + 1;
            uVar8 = 8;
          } while (puVar19 < puVar3);
        }
        else {
          uVar8 = 8;
        }
        break;
      case 10:
        iVar11 = *(int *)(local_80 + 0x13);
        if ((*(byte *)(local_80 + 0x17) & 1) != 0) {
          uVar7 = (long)(iVar11 + 0x47) & 0xfffffffffffffff8;
          iVar11 = (int)uVar7 + *(int *)(lVar21 + uVar7) + -0x38;
        }
        uVar8 = (ulong)((iVar11 + 3U & 0xfffffffc) + 0x5f & 0xffffffe0);
        Code::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,local_80,pYVar1);
        break;
      case 0xb:
        (**(code **)(*(long *)pYVar1 + 0x10))(pYVar1,local_80,local_80 + 3,local_80 + 7);
        uVar8 = 0xc;
        break;
      case 0xc:
        puVar19 = (uint *)(local_80 + 0xb);
        puVar3 = (uint *)(local_80 + 0x13);
        if (puVar19 < puVar3) {
          do {
            uVar12 = *puVar19;
            if ((uVar12 & 1) != 0) {
              uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
              uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
              if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
                puVar2 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
                while( true ) {
                  uVar12 = *puVar2;
                  uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                  if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                  while (*puVar2 == uVar12) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar6) {
                      *puVar2 = uVar12 | uVar13;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') {
                      lVar14 = *(long *)(this + 0x78);
                      puVar22 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
                      puVar15 = (undefined8 *)*puVar22;
                      lVar21 = puVar15[1];
                      if (lVar21 == 0x40) {
                        base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                        *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
                        *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
                        base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
                        pvVar9 = operator_new(0x210);
                        *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                        *(undefined8 *)((long)pvVar9 + 400) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                        *(undefined8 *)((long)pvVar9 + 200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                        *puVar22 = pvVar9;
                        *(undefined8 *)((long)pvVar9 + 8) = 1;
                        *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                      }
                      else {
                        puVar15[1] = lVar21 + 1;
                        puVar15[lVar21 + 2] = uVar18;
                      }
                      goto LAB_00fe0cec;
                    }
                  }
                  ClearExclusiveLocal();
                }
              }
            }
LAB_00fe0cec:
            puVar19 = puVar19 + 1;
            uVar8 = 0x14;
          } while (puVar19 < puVar3);
        }
        else {
LAB_00fe216c:
          uVar8 = 0x14;
        }
        break;
      case 0xd:
        local_68 = (ulong *)local_80;
        uVar18 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar18);
        uVar8 = uVar18 & 0xffffffff;
        puVar19 = (uint *)(uVar7 + 7);
joined_r0x00fe0dbc:
        if (puVar19 < (uint *)(lVar21 + (int)uVar18)) {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar20 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar3 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar20 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar3;
                uVar13 = (uint)(1L << (uVar20 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar3 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar6) {
                    *puVar3 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar17 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar17 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar14 = puVar15[1];
                    if (lVar14 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar17 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar17 + 0x2a8);
                      *(undefined8 **)(lVar17 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar17 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar20;
                      goto LAB_00fe0e60;
                    }
                    puVar15[1] = lVar14 + 1;
                    puVar15[lVar14 + 2] = uVar20;
                    puVar19 = puVar19 + 1;
                    goto joined_r0x00fe0dbc;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe0e60:
          puVar19 = puVar19 + 1;
          goto joined_r0x00fe0dbc;
        }
        break;
      case 0xe:
        local_68 = (ulong *)local_80;
        uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar18);
        uVar8 = uVar8 & 0xffffffff;
        DataHandler::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,uVar7,uVar8,pYVar1);
        break;
      case 0xf:
        local_68 = (ulong *)local_80;
        uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar18);
        uVar10 = 0xc;
        goto LAB_00fe0f5c;
      case 0x10:
        local_68 = (ulong *)local_80;
        uVar7 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar18);
        uVar8 = uVar7 & 0xffffffff;
        if (8 < (int)uVar7) {
          lVar14 = 8;
          do {
            uVar12 = *(uint *)(lVar14 + lVar21);
            if ((uVar12 & 1) != 0) {
              uVar18 = (ulong)(lVar14 + lVar21) & 0xffffffff00000000;
              uVar20 = uVar18 | uVar12;
              uVar18 = uVar18 | (ulong)uVar12 & 0xfffffffffffc0000;
              if ((*(byte *)(uVar18 + 8) & 0x18) != 0) {
                puVar19 = (uint *)(*(long *)(uVar18 + 0x108) +
                                  (uVar20 - uVar18 >> 7 & 0x1ffffff) * 4);
                while( true ) {
                  uVar12 = *puVar19;
                  uVar13 = (uint)(1L << (uVar20 - uVar18 >> 2 & 0x1f));
                  if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                  while (*puVar19 == uVar12) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar19,0x10);
                    if (bVar6) {
                      *puVar19 = uVar12 | uVar13;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') {
                      lVar16 = *(long *)(this + 0x78);
                      puVar22 = (undefined8 *)(lVar16 + (long)*(int *)(this + 0x80) * 0x50);
                      puVar15 = (undefined8 *)*puVar22;
                      lVar17 = puVar15[1];
                      if (lVar17 == 0x40) {
                        base::Mutex::Lock((Mutex *)(lVar16 + 0x280));
                        *puVar15 = *(undefined8 *)(lVar16 + 0x2a8);
                        *(undefined8 **)(lVar16 + 0x2a8) = puVar15;
                        base::Mutex::Unlock((Mutex *)(lVar16 + 0x280));
                        pvVar9 = operator_new(0x210);
                        *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                        *(undefined8 *)((long)pvVar9 + 400) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                        *(undefined8 *)((long)pvVar9 + 200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                        *puVar22 = pvVar9;
                        *(undefined8 *)((long)pvVar9 + 8) = 1;
                        *(ulong *)((long)pvVar9 + 0x10) = uVar20;
                      }
                      else {
                        puVar15[1] = lVar17 + 1;
                        puVar15[lVar17 + 2] = uVar20;
                      }
                      goto LAB_00fe1bd8;
                    }
                  }
                  ClearExclusiveLocal();
                }
              }
            }
LAB_00fe1bd8:
            lVar14 = lVar14 + 8;
          } while ((int)lVar14 < (int)uVar7);
        }
        break;
      case 0x11:
        local_68 = (ulong *)local_80;
        uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar18);
        uVar8 = uVar8 & 0xffffffff;
        EphemeronHashTable::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,uVar7,uVar8,pYVar1);
        break;
      case 0x12:
        puVar19 = (uint *)(local_80 + 3);
        puVar3 = (uint *)(local_80 + 7);
        if (puVar19 < puVar3) {
          do {
            uVar12 = *puVar19;
            if ((uVar12 & 1) != 0) {
              uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
              uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
              if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
                puVar2 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
                while( true ) {
                  uVar12 = *puVar2;
                  uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                  if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                  while (*puVar2 == uVar12) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar6) {
                      *puVar2 = uVar12 | uVar13;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') {
                      lVar14 = *(long *)(this + 0x78);
                      puVar22 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
                      puVar15 = (undefined8 *)*puVar22;
                      lVar21 = puVar15[1];
                      if (lVar21 == 0x40) {
                        base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                        *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
                        *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
                        base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
                        pvVar9 = operator_new(0x210);
                        *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                        *(undefined8 *)((long)pvVar9 + 400) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                        *(undefined8 *)((long)pvVar9 + 200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                        *puVar22 = pvVar9;
                        *(undefined8 *)((long)pvVar9 + 8) = 1;
                        *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                      }
                      else {
                        puVar15[1] = lVar21 + 1;
                        puVar15[lVar21 + 2] = uVar18;
                      }
                      goto LAB_00fe1050;
                    }
                  }
                  ClearExclusiveLocal();
                }
              }
            }
LAB_00fe1050:
            puVar19 = puVar19 + 1;
            uVar8 = 0xc;
          } while (puVar19 < puVar3);
        }
        else {
          uVar8 = 0xc;
        }
        break;
      case 0x13:
        uVar8 = (ulong)(*(int *)(local_80 + 0xf) * 4 + 0x20);
        FeedbackVector::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,local_80,uVar8,pYVar1);
        break;
      case 0x14:
        local_68 = (ulong *)local_80;
        uVar18 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar18);
        uVar8 = uVar18 & 0xffffffff;
        puVar19 = (uint *)(uVar7 + 7);
joined_r0x00fe1ccc:
        if (puVar19 < (uint *)(lVar21 + (int)uVar18)) {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar20 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar3 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar20 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar3;
                uVar13 = (uint)(1L << (uVar20 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar3 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar6) {
                    *puVar3 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar17 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar17 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar14 = puVar15[1];
                    if (lVar14 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar17 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar17 + 0x2a8);
                      *(undefined8 **)(lVar17 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar17 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar20;
                      goto LAB_00fe1d70;
                    }
                    puVar15[1] = lVar14 + 1;
                    puVar15[lVar14 + 2] = uVar20;
                    puVar19 = puVar19 + 1;
                    goto joined_r0x00fe1ccc;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe1d70:
          puVar19 = puVar19 + 1;
          goto joined_r0x00fe1ccc;
        }
        break;
      case 0x15:
        uVar8 = (ulong)(uint)(*(int *)(local_80 + 3) >> 1);
        break;
      case 0x16:
      case 0x19:
      case 0x1a:
      case 0x1e:
        uVar8 = (ulong)*(byte *)(uVar18 + 3) << 2;
        BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,local_80,4,uVar8,pYVar1);
        break;
      case 0x17:
        uVar8 = (ulong)*(byte *)(uVar18 + 3) << 2;
        JSArrayBuffer::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,local_80,uVar8,pYVar1);
        break;
      case 0x18:
        uVar8 = (ulong)*(byte *)(uVar18 + 3) << 2;
        JSDataView::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,local_80,uVar8,pYVar1);
        break;
      case 0x1b:
        puVar19 = (uint *)(local_80 + 3);
        uVar8 = (ulong)*(byte *)(uVar18 + 3) * 4;
joined_r0x00fe1148:
        if (puVar19 < (uint *)(lVar21 + uVar8)) {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar3 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar3;
                uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar3 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar6) {
                    *puVar3 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar17 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar17 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar14 = puVar15[1];
                    if (lVar14 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar17 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar17 + 0x2a8);
                      *(undefined8 **)(lVar17 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar17 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                      goto LAB_00fe11ec;
                    }
                    puVar15[1] = lVar14 + 1;
                    puVar15[lVar14 + 2] = uVar18;
                    puVar19 = puVar19 + 1;
                    goto joined_r0x00fe1148;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe11ec:
          puVar19 = puVar19 + 1;
          goto joined_r0x00fe1148;
        }
        break;
      case 0x1c:
        uVar8 = (ulong)*(byte *)(uVar18 + 3) << 2;
        JSTypedArray::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,local_80,uVar8,pYVar1);
        break;
      case 0x1d:
        uVar8 = (ulong)*(byte *)(uVar18 + 3) << 2;
        JSWeakRef::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,local_80,uVar8,pYVar1);
        break;
      case 0x1f:
        uVar8 = 0x28;
        Map::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,local_80,0x28,pYVar1);
        break;
      case 0x20:
        uVar8 = 0x42c;
        NativeContext::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,local_80,0x42c,pYVar1);
        break;
      case 0x21:
        puVar19 = (uint *)(local_80 + 0xb);
        puVar3 = (uint *)(local_80 + 0x1b);
        if (puVar19 < puVar3) {
          do {
            uVar12 = *puVar19;
            if ((uVar12 & 1) != 0) {
              uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
              uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
              if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
                puVar2 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
                while( true ) {
                  uVar12 = *puVar2;
                  uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                  if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                  while (*puVar2 == uVar12) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar6) {
                      *puVar2 = uVar12 | uVar13;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') {
                      lVar14 = *(long *)(this + 0x78);
                      puVar22 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
                      puVar15 = (undefined8 *)*puVar22;
                      lVar21 = puVar15[1];
                      if (lVar21 == 0x40) {
                        base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                        *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
                        *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
                        base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
                        pvVar9 = operator_new(0x210);
                        *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                        *(undefined8 *)((long)pvVar9 + 400) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                        *(undefined8 *)((long)pvVar9 + 200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                        *puVar22 = pvVar9;
                        *(undefined8 *)((long)pvVar9 + 8) = 1;
                        *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                      }
                      else {
                        puVar15[1] = lVar21 + 1;
                        puVar15[lVar21 + 2] = uVar18;
                      }
                      goto LAB_00fe13b4;
                    }
                  }
                  ClearExclusiveLocal();
                }
              }
            }
LAB_00fe13b4:
            puVar19 = puVar19 + 1;
            uVar8 = 0x1c;
          } while (puVar19 < puVar3);
        }
        else {
          uVar8 = 0x1c;
        }
        break;
      case 0x22:
        uVar12 = *(int *)(local_80 + 3) + 0xfU & 0xfffffffc;
        uVar8 = (ulong)(uVar12 + *(int *)(local_80 + 7) * 4);
        BodyDescriptorBase::IteratePointers<v8::internal::YoungGenerationMarkingVisitor>
                  (local_80,uVar12,uVar8,pYVar1);
        break;
      case 0x23:
        local_68 = (ulong *)local_80;
        uVar18 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar18);
        uVar8 = uVar18 & 0xffffffff;
        puVar19 = (uint *)(uVar7 + 7);
joined_r0x00fe14ac:
        if (puVar19 < (uint *)(lVar21 + (int)uVar18)) {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar20 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar3 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar20 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar3;
                uVar13 = (uint)(1L << (uVar20 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar3 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar6) {
                    *puVar3 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar17 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar17 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar14 = puVar15[1];
                    if (lVar14 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar17 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar17 + 0x2a8);
                      *(undefined8 **)(lVar17 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar17 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar20;
                      goto LAB_00fe1550;
                    }
                    puVar15[1] = lVar14 + 1;
                    puVar15[lVar14 + 2] = uVar20;
                    puVar19 = puVar19 + 1;
                    goto joined_r0x00fe14ac;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe1550:
          puVar19 = puVar19 + 1;
          goto joined_r0x00fe14ac;
        }
        break;
      case 0x24:
        puVar19 = (uint *)(local_80 + 3);
        puVar3 = (uint *)(local_80 + 0x13);
        if (puVar3 <= puVar19) goto LAB_00fe216c;
        do {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar2 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar2;
                uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar2 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar6) {
                    *puVar2 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar14 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar21 = puVar15[1];
                    if (lVar21 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
                      *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                    }
                    else {
                      puVar15[1] = lVar21 + 1;
                      puVar15[lVar21 + 2] = uVar18;
                    }
                    goto LAB_00fe1f20;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe1f20:
          puVar19 = puVar19 + 1;
          uVar8 = 0x14;
        } while (puVar19 < puVar3);
        break;
      case 0x25:
        local_68 = (ulong *)local_80;
        uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar18);
        uVar8 = uVar8 & 0xffffffff;
        PrototypeInfo::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,uVar7,uVar8,pYVar1);
        break;
      case 0x27:
        puVar19 = (uint *)(local_80 + 0xb);
        puVar3 = (uint *)(local_80 + 0x13);
        if (puVar3 <= puVar19) goto LAB_00fe216c;
        do {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar2 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar2;
                uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar2 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar6) {
                    *puVar2 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar14 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar21 = puVar15[1];
                    if (lVar21 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
                      *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                    }
                    else {
                      puVar15[1] = lVar21 + 1;
                      puVar15[lVar21 + 2] = uVar18;
                    }
                    goto LAB_00fe20ac;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe20ac:
          puVar19 = puVar19 + 1;
          uVar8 = 0x14;
        } while (puVar19 < puVar3);
        break;
      case 0x28:
        puVar19 = (uint *)(local_80 + 0xb);
        puVar3 = (uint *)(local_80 + 0x13);
        if (puVar3 <= puVar19) goto LAB_00fe216c;
        do {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar2 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar2;
                uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar2 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar6) {
                    *puVar2 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar14 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar21 = puVar15[1];
                    if (lVar21 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
                      *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                    }
                    else {
                      puVar15[1] = lVar21 + 1;
                      puVar15[lVar21 + 2] = uVar18;
                    }
                    goto LAB_00fe2210;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe2210:
          puVar19 = puVar19 + 1;
          uVar8 = 0x14;
        } while (puVar19 < puVar3);
        break;
      case 0x29:
        uVar8 = (ulong)((uint)*(byte *)(local_80 + 5) * 0x13 + 0xb & 0x3ffc);
        SmallOrderedHashTable<v8::internal::SmallOrderedHashMap>::BodyDescriptor::
        IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar18,local_80,uVar8,pYVar1);
        break;
      case 0x2a:
        uVar8 = (ulong)((uint)*(byte *)(local_80 + 5) * 0xb + 0xb & 0x1ffc);
        SmallOrderedHashTable<v8::internal::SmallOrderedHashSet>::BodyDescriptor::
        IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar18,local_80,uVar8,pYVar1);
        break;
      case 0x2b:
        uVar8 = (ulong)((uint)*(byte *)(local_80 + 9) * 0x1b + 0xf & 0x3ffc);
        SmallOrderedHashTable<v8::internal::SmallOrderedNameDictionary>::BodyDescriptor::
        IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar18,local_80,uVar8,pYVar1);
        break;
      case 0x2c:
        uVar8 = 0x48;
        SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,24,24>,v8::internal::FixedBodyDescriptor<24,72,72>>
        ::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar18,local_80,0x48,pYVar1);
        break;
      case 0x2d:
        puVar19 = (uint *)(local_80 + 3);
        uVar8 = (ulong)*(byte *)(uVar18 + 3) * 4;
joined_r0x00fe1694:
        if (puVar19 < (uint *)(lVar21 + uVar8)) {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar3 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar3;
                uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar3 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar6) {
                    *puVar3 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar17 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar17 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar14 = puVar15[1];
                    if (lVar14 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar17 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar17 + 0x2a8);
                      *(undefined8 **)(lVar17 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar17 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                      goto LAB_00fe1738;
                    }
                    puVar15[1] = lVar14 + 1;
                    puVar15[lVar14 + 2] = uVar18;
                    puVar19 = puVar19 + 1;
                    goto joined_r0x00fe1694;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe1738:
          puVar19 = puVar19 + 1;
          goto joined_r0x00fe1694;
        }
        break;
      case 0x2e:
        puVar19 = (uint *)(local_80 + 0xb);
        puVar3 = (uint *)(local_80 + 0xf);
        if (puVar19 < puVar3) {
          do {
            uVar12 = *puVar19;
            if ((uVar12 & 1) != 0) {
              uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
              uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
              if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
                puVar2 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
                while( true ) {
                  uVar12 = *puVar2;
                  uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                  if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                  while (*puVar2 == uVar12) {
                    cVar5 = '\x01';
                    bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                    if (bVar6) {
                      *puVar2 = uVar12 | uVar13;
                      cVar5 = ExclusiveMonitorsStatus();
                    }
                    if (cVar5 == '\0') {
                      lVar14 = *(long *)(this + 0x78);
                      puVar22 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
                      puVar15 = (undefined8 *)*puVar22;
                      lVar21 = puVar15[1];
                      if (lVar21 == 0x40) {
                        base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                        *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
                        *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
                        base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
                        pvVar9 = operator_new(0x210);
                        *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                        *(undefined8 *)((long)pvVar9 + 400) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                        *(undefined8 *)((long)pvVar9 + 200) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                        *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                        *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                        *puVar22 = pvVar9;
                        *(undefined8 *)((long)pvVar9 + 8) = 1;
                        *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                      }
                      else {
                        puVar15[1] = lVar21 + 1;
                        puVar15[lVar21 + 2] = uVar18;
                      }
                      goto LAB_00fe23a0;
                    }
                  }
                  ClearExclusiveLocal();
                }
              }
            }
LAB_00fe23a0:
            puVar19 = puVar19 + 1;
            uVar8 = 0x10;
          } while (puVar19 < puVar3);
        }
        else {
LAB_00fe22fc:
          uVar8 = 0x10;
        }
        break;
      case 0x2f:
        uVar8 = 0x24;
        SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,24,24>,v8::internal::FixedBodyDescriptor<28,36,36>>
        ::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar18,local_80,0x24,pYVar1);
        break;
      case 0x30:
        puVar19 = (uint *)(local_80 + 0xb);
        puVar3 = (uint *)(local_80 + 0xf);
        if (puVar3 <= puVar19) goto LAB_00fe22fc;
        do {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar2 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar2;
                uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar2 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar6) {
                    *puVar2 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar14 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar21 = puVar15[1];
                    if (lVar21 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
                      *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                    }
                    else {
                      puVar15[1] = lVar21 + 1;
                      puVar15[lVar21 + 2] = uVar18;
                    }
                    goto LAB_00fe18bc;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe18bc:
          puVar19 = puVar19 + 1;
          uVar8 = 0x10;
        } while (puVar19 < puVar3);
        break;
      case 0x31:
      case 0x37:
        local_68 = (ulong *)local_80;
        uVar8 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar18);
        uVar10 = 4;
LAB_00fe0f5c:
        uVar8 = uVar8 & 0xffffffff;
        BodyDescriptorBase::IterateMaybeWeakPointers<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar7,uVar10,uVar8,pYVar1);
        break;
      case 0x32:
        puVar19 = (uint *)(local_80 + 3);
        puVar3 = (uint *)(local_80 + 7);
        if (puVar3 <= puVar19) goto LAB_00fe22fc;
        do {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar18 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar2 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar18 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar2;
                uVar13 = (uint)(1L << (uVar18 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar2 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar2,0x10);
                  if (bVar6) {
                    *puVar2 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar14 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar14 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar21 = puVar15[1];
                    if (lVar21 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar14 + 0x2a8);
                      *(undefined8 **)(lVar14 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar18;
                    }
                    else {
                      puVar15[1] = lVar21 + 1;
                      puVar15[lVar21 + 2] = uVar18;
                    }
                    goto LAB_00fe1a1c;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe1a1c:
          puVar19 = puVar19 + 1;
          uVar8 = 0x10;
        } while (puVar19 < puVar3);
        break;
      case 0x33:
        uVar8 = 0x14;
        SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,8,16>,v8::internal::FixedBodyDescriptor<16,20,20>>
        ::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(uVar18,local_80,0x14,pYVar1);
        break;
      case 0x34:
        local_68 = (ulong *)local_80;
        uVar18 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar18);
        uVar8 = uVar18 & 0xffffffff;
        puVar19 = (uint *)(uVar7 + 0xb);
joined_r0x00fe2470:
        if (puVar19 < (uint *)(lVar21 + (int)uVar18)) {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar20 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar3 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar20 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar3;
                uVar13 = (uint)(1L << (uVar20 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar3 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar6) {
                    *puVar3 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar17 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar17 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar14 = puVar15[1];
                    if (lVar14 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar17 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar17 + 0x2a8);
                      *(undefined8 **)(lVar17 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar17 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar20;
                      goto LAB_00fe2514;
                    }
                    puVar15[1] = lVar14 + 1;
                    puVar15[lVar14 + 2] = uVar20;
                    puVar19 = puVar19 + 1;
                    goto joined_r0x00fe2470;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe2514:
          puVar19 = puVar19 + 1;
          goto joined_r0x00fe2470;
        }
        break;
      case 0x35:
        local_68 = (ulong *)local_80;
        uVar18 = HeapObject::SizeFromMap((HeapObject *)&local_68,uVar18);
        uVar8 = uVar18 & 0xffffffff;
        puVar19 = (uint *)(uVar7 + 0x17);
joined_r0x00fe25ec:
        if (puVar19 < (uint *)(lVar21 + (int)uVar18)) {
          uVar12 = *puVar19;
          if ((uVar12 & 1) != 0) {
            uVar20 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12;
            uVar7 = (ulong)puVar19 & 0xffffffff00000000 | (ulong)uVar12 & 0xfffffffffffc0000;
            if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
              puVar3 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar20 - uVar7 >> 7 & 0x1ffffff) * 4);
              while( true ) {
                uVar12 = *puVar3;
                uVar13 = (uint)(1L << (uVar20 - uVar7 >> 2 & 0x1f));
                if ((uVar13 & (uVar12 ^ 0xffffffff)) == 0) break;
                while (*puVar3 == uVar12) {
                  cVar5 = '\x01';
                  bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
                  if (bVar6) {
                    *puVar3 = uVar12 | uVar13;
                    cVar5 = ExclusiveMonitorsStatus();
                  }
                  if (cVar5 == '\0') {
                    lVar17 = *(long *)(this + 0x78);
                    puVar22 = (undefined8 *)(lVar17 + (long)*(int *)(this + 0x80) * 0x50);
                    puVar15 = (undefined8 *)*puVar22;
                    lVar14 = puVar15[1];
                    if (lVar14 == 0x40) {
                      base::Mutex::Lock((Mutex *)(lVar17 + 0x280));
                      *puVar15 = *(undefined8 *)(lVar17 + 0x2a8);
                      *(undefined8 **)(lVar17 + 0x2a8) = puVar15;
                      base::Mutex::Unlock((Mutex *)(lVar17 + 0x280));
                      pvVar9 = operator_new(0x210);
                      *(undefined8 *)((long)pvVar9 + 0x20) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x18) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x110) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x108) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x120) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x118) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x130) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x128) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x140) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x138) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x150) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x148) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x160) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x158) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x170) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x168) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x180) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x178) = 0;
                      *(undefined8 *)((long)pvVar9 + 400) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x188) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x198) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1a8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1b8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1c8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1d8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1e8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x1f8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x208) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x30) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x28) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x40) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x38) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x50) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x48) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x60) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x58) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x70) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x68) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x80) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x78) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x90) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x88) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x98) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xa8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xc0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xb8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd0) = 0;
                      *(undefined8 *)((long)pvVar9 + 200) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xd8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf0) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xe8) = 0;
                      *(undefined8 *)((long)pvVar9 + 0x100) = 0;
                      *(undefined8 *)((long)pvVar9 + 0xf8) = 0;
                      *puVar22 = pvVar9;
                      *(undefined8 *)((long)pvVar9 + 8) = 1;
                      *(ulong *)((long)pvVar9 + 0x10) = uVar20;
                      goto LAB_00fe2690;
                    }
                    puVar15[1] = lVar14 + 1;
                    puVar15[lVar14 + 2] = uVar20;
                    puVar19 = puVar19 + 1;
                    goto joined_r0x00fe25ec;
                  }
                }
                ClearExclusiveLocal();
              }
            }
          }
LAB_00fe2690:
          puVar19 = puVar19 + 1;
          goto joined_r0x00fe25ec;
        }
        break;
      case 0x36:
        uVar8 = (ulong)*(byte *)(uVar18 + 3) << 2;
        WasmInstanceObject::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
                  (uVar18,local_80,uVar8,pYVar1);
      }
      local_68 = local_78;
      local_78[0] = local_80 & 0xfffffffffffc0000;
      lVar21 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::__unordered_map_hasher<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,v8::internal::MemoryChunk::Hasher,true>,std::__ndk1::__unordered_map_equal<v8::internal::Page*,std::__ndk1::__hash_value_type<v8::internal::Page*,long>,std::__ndk1::equal_to<v8::internal::Page*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<v8::internal::Page*,long>>>
               ::
               __emplace_unique_key_args<v8::internal::Page*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<v8::internal::Page*&&>,std::__ndk1::tuple<>>
                         ((Page **)(this + 0x90),(piecewise_construct_t *)local_78,
                          (tuple *)&DAT_019c5885,(tuple *)&local_68);
      *(long *)(lVar21 + 0x18) = *(long *)(lVar21 + 0x18) + (long)(int)uVar8;
      uVar7 = Worklist<v8::internal::HeapObject,64>::Pop
                        (*(Worklist<v8::internal::HeapObject,64> **)(this + 0x58),
                         *(int *)(this + 0x60),(HeapObject *)&local_80);
    } while ((uVar7 & 1) != 0);
  }
  return;
}

