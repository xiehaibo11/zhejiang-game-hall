
/* void v8::internal::SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4, 24, 24>,
   v8::internal::FixedBodyDescriptor<28, 36, 36>
   >::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::YoungGenerationMarkingVisitor*) */

void v8::internal::
     SubclassBodyDescriptor<v8::internal::FixedBodyDescriptor<4,24,24>,v8::internal::FixedBodyDescriptor<28,36,36>>
     ::IterateBody<v8::internal::YoungGenerationMarkingVisitor>
               (undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  puVar1 = (uint *)(param_2 + 3);
  if ((uint *)(param_2 + 0x17U) <= puVar1) {
LAB_00ff23a0:
    puVar1 = (uint *)(param_2 + 0x1b);
    if ((uint *)(param_2 + 0x23U) <= puVar1) {
      return;
    }
    uVar3 = *puVar1;
    do {
      if ((uVar3 & 1) != 0) {
        uVar11 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
        uVar8 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
        if ((*(byte *)(uVar8 + 8) & 0x18) != 0) {
          puVar2 = (uint *)(*(long *)(uVar8 + 0x108) + (uVar11 - uVar8 >> 7 & 0x1ffffff) * 4);
          while( true ) {
            uVar3 = *puVar2;
            uVar7 = (uint)(1L << (uVar11 - uVar8 >> 2 & 0x1f));
            if ((uVar7 & (uVar3 ^ 0xffffffff)) == 0) break;
            while (*puVar2 == uVar3) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar3 | uVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar10 = *(long *)(param_4 + 8);
                puVar12 = (undefined8 *)(lVar10 + (long)*(int *)(param_4 + 0x10) * 0x50);
                puVar13 = (undefined8 *)*puVar12;
                lVar9 = puVar13[1];
                if (lVar9 == 0x40) {
                  base::Mutex::Lock((Mutex *)(lVar10 + 0x280));
                  *puVar13 = *(undefined8 *)(lVar10 + 0x2a8);
                  *(undefined8 **)(lVar10 + 0x2a8) = puVar13;
                  base::Mutex::Unlock((Mutex *)(lVar10 + 0x280));
                  pvVar6 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar6 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x18) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x30) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x28) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x40) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x38) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x50) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x48) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x60) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x58) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x70) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x68) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x80) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x78) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x90) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x88) = 0;
                  *(undefined8 *)((long)pvVar6 + 0xa0) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x98) = 0;
                  *(undefined8 *)((long)pvVar6 + 0xb0) = 0;
                  *(undefined8 *)((long)pvVar6 + 0xa8) = 0;
                  *(undefined8 *)((long)pvVar6 + 0xc0) = 0;
                  *(undefined8 *)((long)pvVar6 + 0xb8) = 0;
                  *(undefined8 *)((long)pvVar6 + 0xd0) = 0;
                  *(undefined8 *)((long)pvVar6 + 200) = 0;
                  *(undefined8 *)((long)pvVar6 + 0xe0) = 0;
                  *(undefined8 *)((long)pvVar6 + 0xd8) = 0;
                  *(undefined8 *)((long)pvVar6 + 0xf0) = 0;
                  *(undefined8 *)((long)pvVar6 + 0xe8) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x100) = 0;
                  *(undefined8 *)((long)pvVar6 + 0xf8) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x110) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x108) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x120) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x118) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x130) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x128) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x140) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x138) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x150) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x148) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x160) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x158) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x170) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x168) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x180) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x178) = 0;
                  *(undefined8 *)((long)pvVar6 + 400) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x188) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1a0) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x198) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1b0) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1a8) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1c0) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1b8) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1d0) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1c8) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1e0) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1d8) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1f0) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1e8) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x200) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x1f8) = 0;
                  *(undefined8 *)((long)pvVar6 + 0x208) = 0;
                  *puVar12 = pvVar6;
                  *(undefined8 *)((long)pvVar6 + 8) = 1;
                  *(ulong *)((long)pvVar6 + 0x10) = uVar11;
                }
                else {
                  puVar13[1] = lVar9 + 1;
                  puVar13[lVar9 + 2] = uVar11;
                }
                goto LAB_00ff245c;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
LAB_00ff245c:
      puVar1 = puVar1 + 1;
      if ((uint *)(param_2 + 0x23U) <= puVar1) {
        return;
      }
      uVar3 = *puVar1;
    } while( true );
  }
  uVar3 = *puVar1;
  do {
    if ((uVar3 & 1) != 0) {
      uVar11 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
      uVar8 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
      if ((*(byte *)(uVar8 + 8) & 0x18) != 0) {
        puVar2 = (uint *)(*(long *)(uVar8 + 0x108) + (uVar11 - uVar8 >> 7 & 0x1ffffff) * 4);
        while( true ) {
          uVar3 = *puVar2;
          uVar7 = (uint)(1L << (uVar11 - uVar8 >> 2 & 0x1f));
          if ((uVar7 & (uVar3 ^ 0xffffffff)) == 0) break;
          while (*puVar2 == uVar3) {
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar5) {
              *puVar2 = uVar3 | uVar7;
              cVar4 = ExclusiveMonitorsStatus();
            }
            if (cVar4 == '\0') {
              lVar10 = *(long *)(param_4 + 8);
              puVar12 = (undefined8 *)(lVar10 + (long)*(int *)(param_4 + 0x10) * 0x50);
              puVar13 = (undefined8 *)*puVar12;
              lVar9 = puVar13[1];
              if (lVar9 == 0x40) {
                base::Mutex::Lock((Mutex *)(lVar10 + 0x280));
                *puVar13 = *(undefined8 *)(lVar10 + 0x2a8);
                *(undefined8 **)(lVar10 + 0x2a8) = puVar13;
                base::Mutex::Unlock((Mutex *)(lVar10 + 0x280));
                pvVar6 = operator_new(0x210);
                *(undefined8 *)((long)pvVar6 + 0x20) = 0;
                *(undefined8 *)((long)pvVar6 + 0x18) = 0;
                *(undefined8 *)((long)pvVar6 + 0x30) = 0;
                *(undefined8 *)((long)pvVar6 + 0x28) = 0;
                *(undefined8 *)((long)pvVar6 + 0x40) = 0;
                *(undefined8 *)((long)pvVar6 + 0x38) = 0;
                *(undefined8 *)((long)pvVar6 + 0x50) = 0;
                *(undefined8 *)((long)pvVar6 + 0x48) = 0;
                *(undefined8 *)((long)pvVar6 + 0x60) = 0;
                *(undefined8 *)((long)pvVar6 + 0x58) = 0;
                *(undefined8 *)((long)pvVar6 + 0x70) = 0;
                *(undefined8 *)((long)pvVar6 + 0x68) = 0;
                *(undefined8 *)((long)pvVar6 + 0x80) = 0;
                *(undefined8 *)((long)pvVar6 + 0x78) = 0;
                *(undefined8 *)((long)pvVar6 + 0x90) = 0;
                *(undefined8 *)((long)pvVar6 + 0x88) = 0;
                *(undefined8 *)((long)pvVar6 + 0xa0) = 0;
                *(undefined8 *)((long)pvVar6 + 0x98) = 0;
                *(undefined8 *)((long)pvVar6 + 0xb0) = 0;
                *(undefined8 *)((long)pvVar6 + 0xa8) = 0;
                *(undefined8 *)((long)pvVar6 + 0xc0) = 0;
                *(undefined8 *)((long)pvVar6 + 0xb8) = 0;
                *(undefined8 *)((long)pvVar6 + 0xd0) = 0;
                *(undefined8 *)((long)pvVar6 + 200) = 0;
                *(undefined8 *)((long)pvVar6 + 0xe0) = 0;
                *(undefined8 *)((long)pvVar6 + 0xd8) = 0;
                *(undefined8 *)((long)pvVar6 + 0xf0) = 0;
                *(undefined8 *)((long)pvVar6 + 0xe8) = 0;
                *(undefined8 *)((long)pvVar6 + 0x100) = 0;
                *(undefined8 *)((long)pvVar6 + 0xf8) = 0;
                *(undefined8 *)((long)pvVar6 + 0x110) = 0;
                *(undefined8 *)((long)pvVar6 + 0x108) = 0;
                *(undefined8 *)((long)pvVar6 + 0x120) = 0;
                *(undefined8 *)((long)pvVar6 + 0x118) = 0;
                *(undefined8 *)((long)pvVar6 + 0x130) = 0;
                *(undefined8 *)((long)pvVar6 + 0x128) = 0;
                *(undefined8 *)((long)pvVar6 + 0x140) = 0;
                *(undefined8 *)((long)pvVar6 + 0x138) = 0;
                *(undefined8 *)((long)pvVar6 + 0x150) = 0;
                *(undefined8 *)((long)pvVar6 + 0x148) = 0;
                *(undefined8 *)((long)pvVar6 + 0x160) = 0;
                *(undefined8 *)((long)pvVar6 + 0x158) = 0;
                *(undefined8 *)((long)pvVar6 + 0x170) = 0;
                *(undefined8 *)((long)pvVar6 + 0x168) = 0;
                *(undefined8 *)((long)pvVar6 + 0x180) = 0;
                *(undefined8 *)((long)pvVar6 + 0x178) = 0;
                *(undefined8 *)((long)pvVar6 + 400) = 0;
                *(undefined8 *)((long)pvVar6 + 0x188) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1a0) = 0;
                *(undefined8 *)((long)pvVar6 + 0x198) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1b0) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1a8) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1c0) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1b8) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1d0) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1c8) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1e0) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1d8) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1f0) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1e8) = 0;
                *(undefined8 *)((long)pvVar6 + 0x200) = 0;
                *(undefined8 *)((long)pvVar6 + 0x1f8) = 0;
                *(undefined8 *)((long)pvVar6 + 0x208) = 0;
                *puVar12 = pvVar6;
                *(undefined8 *)((long)pvVar6 + 8) = 1;
                *(ulong *)((long)pvVar6 + 0x10) = uVar11;
              }
              else {
                puVar13[1] = lVar9 + 1;
                puVar13[lVar9 + 2] = uVar11;
              }
              goto LAB_00ff22f8;
            }
          }
          ClearExclusiveLocal();
        }
      }
    }
LAB_00ff22f8:
    puVar1 = puVar1 + 1;
    if ((uint *)(param_2 + 0x17U) <= puVar1) goto LAB_00ff23a0;
    uVar3 = *puVar1;
  } while( true );
}

