
/* v8::internal::MinorMarkCompactCollector::RootMarkingVisitor::VisitRootPointers(v8::internal::Root,
   char const*, v8::internal::FullObjectSlot, v8::internal::FullObjectSlot) */

void __thiscall
v8::internal::MinorMarkCompactCollector::RootMarkingVisitor::VisitRootPointers
          (RootMarkingVisitor *this,undefined8 param_2,undefined8 param_3,ulong *param_4,
          ulong *param_5)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_4 < param_5) {
    uVar7 = *param_4;
    while( true ) {
      if (((uVar7 & 1) != 0) &&
         (uVar4 = uVar7 & 0xfffffffffffc0000, (*(byte *)(uVar4 + 8) & 0x18) != 0)) {
        lVar6 = (uVar7 - uVar4 >> 7 & 0x1ffffff) * 4;
        uVar1 = *(uint *)(*(long *)(uVar4 + 0x108) + lVar6);
        lVar5 = *(long *)(this + 8);
        uVar2 = 1 << (ulong)((uint)(uVar7 - uVar4 >> 2) & 0x1f);
        *(uint *)(*(long *)(uVar4 + 0x108) + lVar6) = uVar1 | uVar2;
        if ((uVar1 & uVar2) == 0) {
          puVar8 = *(undefined8 **)(lVar5 + 0x18);
          puVar9 = (undefined8 *)*puVar8;
          lVar5 = puVar9[1];
          if (lVar5 == 0x40) {
            base::Mutex::Lock((Mutex *)(puVar8 + 0x50));
            *puVar9 = puVar8[0x55];
            puVar8[0x55] = puVar9;
            base::Mutex::Unlock((Mutex *)(puVar8 + 0x50));
            pvVar3 = operator_new(0x210);
            *(undefined8 *)((long)pvVar3 + 0x20) = 0;
            *(undefined8 *)((long)pvVar3 + 0x18) = 0;
            *(undefined8 *)((long)pvVar3 + 0x30) = 0;
            *(undefined8 *)((long)pvVar3 + 0x28) = 0;
            *(undefined8 *)((long)pvVar3 + 0x40) = 0;
            *(undefined8 *)((long)pvVar3 + 0x38) = 0;
            *(undefined8 *)((long)pvVar3 + 0x50) = 0;
            *(undefined8 *)((long)pvVar3 + 0x48) = 0;
            *(undefined8 *)((long)pvVar3 + 0x60) = 0;
            *(undefined8 *)((long)pvVar3 + 0x58) = 0;
            *(undefined8 *)((long)pvVar3 + 0x70) = 0;
            *(undefined8 *)((long)pvVar3 + 0x68) = 0;
            *(undefined8 *)((long)pvVar3 + 0x80) = 0;
            *(undefined8 *)((long)pvVar3 + 0x78) = 0;
            *(undefined8 *)((long)pvVar3 + 0x90) = 0;
            *(undefined8 *)((long)pvVar3 + 0x88) = 0;
            *(undefined8 *)((long)pvVar3 + 0xa0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x98) = 0;
            *(undefined8 *)((long)pvVar3 + 0xb0) = 0;
            *(undefined8 *)((long)pvVar3 + 0xa8) = 0;
            *(undefined8 *)((long)pvVar3 + 0xc0) = 0;
            *(undefined8 *)((long)pvVar3 + 0xb8) = 0;
            *(undefined8 *)((long)pvVar3 + 0xd0) = 0;
            *(undefined8 *)((long)pvVar3 + 200) = 0;
            *(undefined8 *)((long)pvVar3 + 0xe0) = 0;
            *(undefined8 *)((long)pvVar3 + 0xd8) = 0;
            *(undefined8 *)((long)pvVar3 + 0xf0) = 0;
            *(undefined8 *)((long)pvVar3 + 0xe8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x100) = 0;
            *(undefined8 *)((long)pvVar3 + 0xf8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x110) = 0;
            *(undefined8 *)((long)pvVar3 + 0x108) = 0;
            *(undefined8 *)((long)pvVar3 + 0x120) = 0;
            *(undefined8 *)((long)pvVar3 + 0x118) = 0;
            *(undefined8 *)((long)pvVar3 + 0x130) = 0;
            *(undefined8 *)((long)pvVar3 + 0x128) = 0;
            *(undefined8 *)((long)pvVar3 + 0x140) = 0;
            *(undefined8 *)((long)pvVar3 + 0x138) = 0;
            *(undefined8 *)((long)pvVar3 + 0x150) = 0;
            *(undefined8 *)((long)pvVar3 + 0x148) = 0;
            *(undefined8 *)((long)pvVar3 + 0x160) = 0;
            *(undefined8 *)((long)pvVar3 + 0x158) = 0;
            *(undefined8 *)((long)pvVar3 + 0x170) = 0;
            *(undefined8 *)((long)pvVar3 + 0x168) = 0;
            *(undefined8 *)((long)pvVar3 + 0x180) = 0;
            *(undefined8 *)((long)pvVar3 + 0x178) = 0;
            *(undefined8 *)((long)pvVar3 + 400) = 0;
            *(undefined8 *)((long)pvVar3 + 0x188) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1a0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x198) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1b0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1a8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1c0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1b8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1d0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1c8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1e0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1d8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1f0) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1e8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x200) = 0;
            *(undefined8 *)((long)pvVar3 + 0x1f8) = 0;
            *(undefined8 *)((long)pvVar3 + 0x208) = 0;
            *puVar8 = pvVar3;
            *(undefined8 *)((long)pvVar3 + 8) = 1;
            *(ulong *)((long)pvVar3 + 0x10) = uVar7;
          }
          else {
            puVar9[1] = lVar5 + 1;
            puVar9[lVar5 + 2] = uVar7;
          }
        }
      }
      param_4 = param_4 + 1;
      if (param_5 <= param_4) break;
      uVar7 = *param_4;
    }
  }
  return;
}

