
/* void 
   v8::internal::BodyDescriptorBase::IterateJSObjectBodyImpl<v8::internal::YoungGenerationMarkingVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, int, v8::internal::YoungGenerationMarkingVisitor*) */

void v8::internal::BodyDescriptorBase::
     IterateJSObjectBodyImpl<v8::internal::YoungGenerationMarkingVisitor>
               (long param_1,long param_2,ulong param_3,undefined4 param_4,long param_5)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  
  if (*(short *)(param_1 + 7) == 0x421) {
    iVar5 = 0xc;
  }
  else {
    iVar5 = JSObject::GetHeaderSize(*(short *)(param_1 + 7),*(char *)(param_1 + 9) < '\0');
  }
  uVar13 = (ulong)*(byte *)(param_1 + 4) * 4;
  uVar8 = param_3 & 0xffffffff;
  if (iVar5 < (int)uVar13) {
    IteratePointers<v8::internal::YoungGenerationMarkingVisitor>
              (param_2,param_3 & 0xffffffff,iVar5,param_5);
    lVar12 = (long)iVar5;
    do {
      puVar1 = (uint *)(param_2 + -1 + lVar12);
      uVar2 = *puVar1;
      if ((uVar2 & 1) != 0) {
        uVar8 = (ulong)puVar1 & 0xffffffff00000000;
        uVar15 = uVar8 | uVar2;
        uVar8 = uVar8 | (ulong)uVar2 & 0xfffffffffffc0000;
        if ((*(byte *)(uVar8 + 8) & 0x18) != 0) {
          puVar1 = (uint *)(*(long *)(uVar8 + 0x108) + (uVar15 - uVar8 >> 7 & 0x1ffffff) * 4);
          while( true ) {
            uVar2 = *puVar1;
            uVar7 = (uint)(1L << (uVar15 - uVar8 >> 2 & 0x1f));
            if ((uVar7 & (uVar2 ^ 0xffffffff)) == 0) break;
            while (*puVar1 == uVar2) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
              if (bVar4) {
                *puVar1 = uVar2 | uVar7;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar14 = *(long *)(param_5 + 8);
                puVar10 = (undefined8 *)(lVar14 + (long)*(int *)(param_5 + 0x10) * 0x50);
                puVar11 = (undefined8 *)*puVar10;
                lVar9 = puVar11[1];
                if (lVar9 == 0x40) {
                  base::Mutex::Lock((Mutex *)(lVar14 + 0x280));
                  *puVar11 = *(undefined8 *)(lVar14 + 0x2a8);
                  *(undefined8 **)(lVar14 + 0x2a8) = puVar11;
                  base::Mutex::Unlock((Mutex *)(lVar14 + 0x280));
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
                  *puVar10 = pvVar6;
                  *(undefined8 *)((long)pvVar6 + 8) = 1;
                  *(ulong *)((long)pvVar6 + 0x10) = uVar15;
                }
                else {
                  puVar11[1] = lVar9 + 1;
                  puVar11[lVar9 + 2] = uVar15;
                }
                goto LAB_00ff095c;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
LAB_00ff095c:
      lVar12 = lVar12 + 8;
      uVar8 = uVar13;
    } while (lVar12 < (long)uVar13);
  }
  IteratePointers<v8::internal::YoungGenerationMarkingVisitor>(param_2,uVar8,param_4,param_5);
  return;
}

