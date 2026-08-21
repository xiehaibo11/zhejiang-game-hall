
/* v8::internal::Object v8::internal::VisitWeakList<v8::internal::Code>(v8::internal::Heap*,
   v8::internal::Object, v8::internal::WeakObjectRetainer*) */

ulong v8::internal::VisitWeakList<v8::internal::Code>(long param_1,ulong param_2,long *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  MemoryChunk *pMVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  
  uVar14 = *(ulong *)(param_1 + -0x87b0);
  uVar13 = (uint)uVar14;
  if (*(int *)(param_1 + 0x178) == 2) {
    bVar4 = *(char *)(*(long *)(param_1 + 0x800) + 0x4e) != '\0';
  }
  else {
    bVar4 = false;
  }
  uVar7 = uVar14;
  if ((uint)param_2 != uVar13) {
    uVar9 = 0;
    do {
      while( true ) {
        uVar5 = (**(code **)(*param_3 + 0x10))(param_3,param_2);
        puVar1 = (uint *)(param_2 + 0xf);
        uVar10 = param_2 & 0xffffffff00000000;
        uVar3 = *(uint *)((uVar10 | *puVar1) + 3);
        param_2 = uVar10 | uVar3;
        uVar6 = uVar7;
        if ((int)uVar5 != 0) break;
        uVar12 = *(ulong *)(param_1 + -0x87b0);
        uVar11 = (ulong)*puVar1;
        uVar7 = uVar10 | uVar11;
        *(int *)(uVar7 + 3) = (int)uVar12;
        uVar5 = uVar9;
        if ((((uVar12 & 1) != 0) && ((*(byte *)((uVar12 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
           ((*(byte *)((uVar10 | uVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,uVar7 + 3);
        }
joined_r0x00fff470:
        uVar7 = uVar6;
        uVar9 = uVar5;
        uVar5 = uVar9;
        if (uVar3 == uVar13) goto LAB_00fff494;
      }
      uVar6 = uVar5;
      if ((uint)uVar7 == uVar13) goto joined_r0x00fff470;
      uVar2 = *(uint *)(uVar9 + 0xf);
      uVar10 = uVar9 & 0xffffffff00000000;
      uVar6 = uVar10 | uVar2;
      *(int *)(uVar6 + 3) = (int)uVar5;
      if ((((uVar5 & 1) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
         ((*(byte *)((uVar10 | (ulong)uVar2 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar6,uVar6 + 3,uVar5);
      }
      uVar6 = uVar7;
      if (!bVar4) goto joined_r0x00fff470;
      if (((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 6 & 1) != 0) {
        pMVar8 = (MemoryChunk *)(uVar10 | (ulong)*(uint *)(uVar9 + 0xf) & 0xfffffffffffc0000);
        uVar12 = *(ulong *)(pMVar8 + 8);
        if ((((uint)uVar12 >> 0xf & 1) != 0) || ((uVar12 & 0x58) == 0)) {
          RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                    (pMVar8,(uVar10 | *(uint *)(uVar9 + 0xf)) + 3);
        }
        goto joined_r0x00fff470;
      }
      uVar9 = uVar5;
    } while (uVar3 != uVar13);
LAB_00fff494:
    if ((int)uVar5 != 0) {
      uVar3 = *(uint *)(uVar5 + 0xf);
      uVar9 = uVar5 & 0xffffffff00000000 | (ulong)uVar3;
      *(uint *)(uVar9 + 3) = uVar13;
      if ((((uVar14 & 1) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
         ((*(byte *)((uVar5 & 0xffffffff00000000 | (ulong)uVar3 & 0xfffffffffffc0000) + 8) & 0x18)
          == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,uVar9 + 3,uVar14);
      }
    }
  }
  return uVar7;
}

