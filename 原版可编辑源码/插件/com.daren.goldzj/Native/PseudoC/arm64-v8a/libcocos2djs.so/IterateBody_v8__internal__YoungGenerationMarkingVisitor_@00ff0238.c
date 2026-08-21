
/* void 
   v8::internal::FeedbackVector::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::YoungGenerationMarkingVisitor*) */

void v8::internal::FeedbackVector::BodyDescriptor::
     IterateBody<v8::internal::YoungGenerationMarkingVisitor>
               (undefined8 param_1,long param_2,undefined4 param_3,long param_4)

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
  long lVar11;
  undefined8 *puVar12;
  
  uVar2 = *(uint *)(param_2 + 3);
  if ((uVar2 & 1) != 0) {
    uVar7 = (ulong)(param_2 + 3) & 0xffffffff00000000;
    uVar9 = uVar7 | uVar2;
    uVar7 = uVar7 | (ulong)uVar2 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
      puVar1 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar9 - uVar7 >> 7 & 0x1ffffff) * 4);
      while (uVar2 = *puVar1, uVar6 = (uint)(1L << (uVar9 - uVar7 >> 2 & 0x1f)),
            (uVar6 & (uVar2 ^ 0xffffffff)) != 0) {
        while (*puVar1 == uVar2) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar2 | uVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = *(long *)(param_4 + 8);
            puVar10 = (undefined8 *)(lVar11 + (long)*(int *)(param_4 + 0x10) * 0x50);
            puVar12 = (undefined8 *)*puVar10;
            lVar8 = puVar12[1];
            if (lVar8 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar11 + 0x280));
              *puVar12 = *(undefined8 *)(lVar11 + 0x2a8);
              *(undefined8 **)(lVar11 + 0x2a8) = puVar12;
              base::Mutex::Unlock((Mutex *)(lVar11 + 0x280));
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
              *puVar10 = pvVar5;
              *(undefined8 *)((long)pvVar5 + 8) = 1;
              *(ulong *)((long)pvVar5 + 0x10) = uVar9;
            }
            else {
              puVar12[1] = lVar8 + 1;
              puVar12[lVar8 + 2] = uVar9;
            }
            goto LAB_00ff039c;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff039c:
  uVar2 = *(uint *)(param_2 + 7);
  if ((uVar2 != 3) && ((uVar2 & 1) != 0)) {
    uVar9 = (ulong)(param_2 + 7) & 0xffffffff00000000;
    uVar7 = uVar9 | (ulong)uVar2 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
      uVar9 = uVar9 | (ulong)uVar2 & 0xfffffffffffffffd;
      puVar1 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar9 - uVar7 >> 7 & 0x1ffffff) * 4);
      while (uVar2 = *puVar1, uVar6 = (uint)(1L << (uVar9 - uVar7 >> 2 & 0x1f)),
            (uVar6 & (uVar2 ^ 0xffffffff)) != 0) {
        while (*puVar1 == uVar2) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar2 | uVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = *(long *)(param_4 + 8);
            puVar10 = (undefined8 *)(lVar11 + (long)*(int *)(param_4 + 0x10) * 0x50);
            puVar12 = (undefined8 *)*puVar10;
            lVar8 = puVar12[1];
            if (lVar8 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar11 + 0x280));
              *puVar12 = *(undefined8 *)(lVar11 + 0x2a8);
              *(undefined8 **)(lVar11 + 0x2a8) = puVar12;
              base::Mutex::Unlock((Mutex *)(lVar11 + 0x280));
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
              *puVar10 = pvVar5;
              *(undefined8 *)((long)pvVar5 + 8) = 1;
              *(ulong *)((long)pvVar5 + 0x10) = uVar9;
            }
            else {
              puVar12[1] = lVar8 + 1;
              puVar12[lVar8 + 2] = uVar9;
            }
            goto LAB_00ff04e8;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff04e8:
  uVar2 = *(uint *)(param_2 + 0xb);
  if ((uVar2 & 1) != 0) {
    uVar7 = (ulong)(param_2 + 0xb) & 0xffffffff00000000;
    uVar9 = uVar7 | uVar2;
    uVar7 = uVar7 | (ulong)uVar2 & 0xfffffffffffc0000;
    if ((*(byte *)(uVar7 + 8) & 0x18) != 0) {
      puVar1 = (uint *)(*(long *)(uVar7 + 0x108) + (uVar9 - uVar7 >> 7 & 0x1ffffff) * 4);
      while (uVar2 = *puVar1, uVar6 = (uint)(1L << (uVar9 - uVar7 >> 2 & 0x1f)),
            (uVar6 & (uVar2 ^ 0xffffffff)) != 0) {
        while (*puVar1 == uVar2) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar4) {
            *puVar1 = uVar2 | uVar6;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar11 = *(long *)(param_4 + 8);
            puVar10 = (undefined8 *)(lVar11 + (long)*(int *)(param_4 + 0x10) * 0x50);
            puVar12 = (undefined8 *)*puVar10;
            lVar8 = puVar12[1];
            if (lVar8 == 0x40) {
              base::Mutex::Lock((Mutex *)(lVar11 + 0x280));
              *puVar12 = *(undefined8 *)(lVar11 + 0x2a8);
              *(undefined8 **)(lVar11 + 0x2a8) = puVar12;
              base::Mutex::Unlock((Mutex *)(lVar11 + 0x280));
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
              *puVar10 = pvVar5;
              *(undefined8 *)((long)pvVar5 + 8) = 1;
              *(ulong *)((long)pvVar5 + 0x10) = uVar9;
            }
            else {
              puVar12[1] = lVar8 + 1;
              puVar12[lVar8 + 2] = uVar9;
            }
            goto LAB_00ff0628;
          }
        }
        ClearExclusiveLocal();
      }
    }
  }
LAB_00ff0628:
  BodyDescriptorBase::IterateMaybeWeakPointers<v8::internal::YoungGenerationMarkingVisitor>
            (param_2,0x20,param_3,param_4);
  return;
}

