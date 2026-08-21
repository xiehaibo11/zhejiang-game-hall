
/* void 
   v8::internal::NativeContext::BodyDescriptor::IterateBody<v8::internal::YoungGenerationMarkingVisitor>(v8::internal::Map,
   v8::internal::HeapObject, int, v8::internal::YoungGenerationMarkingVisitor*) */

void v8::internal::NativeContext::BodyDescriptor::
     IterateBody<v8::internal::YoungGenerationMarkingVisitor>
               (undefined8 param_1,long param_2,undefined8 param_3,long *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  void *pvVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  puVar1 = (uint *)(param_2 + 3);
  puVar2 = (uint *)(param_2 + 0x417);
  if (puVar1 < puVar2) {
    uVar4 = *puVar1;
    do {
      if ((uVar4 & 1) != 0) {
        uVar12 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar4;
        uVar9 = (ulong)puVar1 & 0xffffffff00000000 | (ulong)uVar4 & 0xfffffffffffc0000;
        if ((*(byte *)(uVar9 + 8) & 0x18) != 0) {
          puVar3 = (uint *)(*(long *)(uVar9 + 0x108) + (uVar12 - uVar9 >> 7 & 0x1ffffff) * 4);
          while( true ) {
            uVar4 = *puVar3;
            uVar8 = (uint)(1L << (uVar12 - uVar9 >> 2 & 0x1f));
            if ((uVar8 & (uVar4 ^ 0xffffffff)) == 0) break;
            while (*puVar3 == uVar4) {
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(puVar3,0x10);
              if (bVar6) {
                *puVar3 = uVar4 | uVar8;
                cVar5 = ExclusiveMonitorsStatus();
              }
              if (cVar5 == '\0') {
                lVar11 = param_4[1];
                puVar13 = (undefined8 *)(lVar11 + (long)(int)param_4[2] * 0x50);
                puVar14 = (undefined8 *)*puVar13;
                lVar10 = puVar14[1];
                if (lVar10 == 0x40) {
                  base::Mutex::Lock((Mutex *)(lVar11 + 0x280));
                  *puVar14 = *(undefined8 *)(lVar11 + 0x2a8);
                  *(undefined8 **)(lVar11 + 0x2a8) = puVar14;
                  base::Mutex::Unlock((Mutex *)(lVar11 + 0x280));
                  pvVar7 = operator_new(0x210);
                  *(undefined8 *)((long)pvVar7 + 0x20) = 0;
                  *(undefined8 *)((long)pvVar7 + 0x18) = 0;
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
                  *puVar13 = pvVar7;
                  *(undefined8 *)((long)pvVar7 + 8) = 1;
                  *(ulong *)((long)pvVar7 + 0x10) = uVar12;
                }
                else {
                  puVar14[1] = lVar10 + 1;
                  puVar14[lVar10 + 2] = uVar12;
                }
                goto LAB_00ff14cc;
              }
            }
            ClearExclusiveLocal();
          }
        }
      }
LAB_00ff14cc:
      puVar1 = puVar1 + 1;
      if (puVar2 <= puVar1) break;
      uVar4 = *puVar1;
    } while( true );
  }
                    /* WARNING: Could not recover jumptable at 0x00ff15a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_4 + 0x10))(param_4,param_2,puVar2,param_2 + 0x423);
  return;
}

