
/* void 
   v8::internal::EphemeronHashTable::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::YoungGenerationMarkingVisitor*) */

void v8::internal::EphemeronHashTable::BodyDescriptor::
     IterateBody<v8::internal::YoungGenerationMarkingVisitor>
               (undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

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
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar1 = (uint *)(param_2 + 7);
  if (puVar1 < (uint *)(param_2 + 0x13U)) {
    uVar3 = *puVar1;
    do {
      if ((uVar3 & 1) != 0) {
        uVar12 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3;
        uVar8 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000;
        if ((*(byte *)(uVar8 + 8) & 0x18) != 0) {
          puVar2 = (uint *)(*(long *)(uVar8 + 0x108) + (uVar12 - uVar8 >> 7 & 0x1ffffff) * 4);
          while( true ) {
            uVar3 = *puVar2;
            uVar7 = (uint)(1L << (uVar12 - uVar8 >> 2 & 0x1f));
            if ((uVar7 & (uVar3 ^ 0xffffffff)) == 0) break;
            while (*puVar2 == uVar3) {
              cVar4 = '\x01';
              bVar5 = (bool)ExclusiveMonitorPass(puVar2,0x10);
              if (bVar5) {
                *puVar2 = uVar3 | uVar7;
                cVar4 = ExclusiveMonitorsStatus();
              }
              if (cVar4 == '\0') {
                lVar11 = param_4[1];
                puVar13 = (undefined8 *)(lVar11 + (long)(int)param_4[2] * 0x50);
                puVar14 = (undefined8 *)*puVar13;
                lVar9 = puVar14[1];
                if (lVar9 == 0x40) {
                  base::Mutex::Lock((Mutex *)(lVar11 + 0x280));
                  *puVar14 = *(undefined8 *)(lVar11 + 0x2a8);
                  *(undefined8 **)(lVar11 + 0x2a8) = puVar14;
                  base::Mutex::Unlock((Mutex *)(lVar11 + 0x280));
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
                  *puVar13 = pvVar6;
                  *(undefined8 *)((long)pvVar6 + 8) = 1;
                  *(ulong *)((long)pvVar6 + 0x10) = uVar12;
                }
                else {
                  puVar14[1] = lVar9 + 1;
                  puVar14[lVar9 + 2] = uVar12;
                }
                goto LAB_00ff0118;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
LAB_00ff0118:
      puVar1 = puVar1 + 1;
      if ((uint *)(param_2 + 0x13U) <= puVar1) break;
      uVar3 = *puVar1;
    } while( true );
  }
  if ((int)*(uint *)(param_2 + 0xf) >> 1 != 0) {
    lVar9 = (long)((ulong)*(uint *)(param_2 + 0xf) << 0x20) >> 0x21;
    iVar10 = 0x14;
    do {
      (**(code **)(*param_4 + 0x28))(param_4,param_2,param_2 + -1 + (long)iVar10);
      (**(code **)(*param_4 + 0x28))(param_4,param_2,param_2 + -1 + (long)(iVar10 + 4));
      lVar9 = lVar9 + -1;
      iVar10 = iVar10 + 8;
    } while (lVar9 != 0);
  }
  return;
}

