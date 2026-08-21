
/* v8::internal::Object v8::internal::VisitWeakList<v8::internal::Context>(v8::internal::Heap*,
   v8::internal::Object, v8::internal::WeakObjectRetainer*) */

ulong v8::internal::VisitWeakList<v8::internal::Context>(long param_1,ulong param_2,long *param_3)

{
  int *piVar1;
  uint uVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar8 = *(ulong *)(param_1 + -0x87b0);
  uVar7 = (uint)uVar8;
  if (*(int *)(param_1 + 0x178) == 2) {
    bVar4 = *(char *)(*(long *)(param_1 + 0x800) + 0x4e) != '\0';
  }
  else {
    bVar4 = false;
  }
  uVar6 = uVar8;
  if ((uint)param_2 != uVar7) {
    uVar9 = 0;
    do {
      uVar5 = (**(code **)(*param_3 + 0x10))(param_3,param_2);
      uVar2 = *(uint *)(param_2 + 0x41f);
      if ((int)uVar5 == 0) {
        WeakListVisitor<v8::internal::Context>::VisitPhantomObject(param_1,param_2);
      }
      else {
        uVar3 = uVar5;
        if ((uint)uVar6 != uVar7) {
          piVar1 = (int *)(uVar9 + 0x41f);
          *piVar1 = (int)uVar5;
          if ((((uVar5 & 1) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
             ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(uVar9,piVar1,uVar5);
          }
          uVar3 = uVar6;
          if ((bVar4) && (((uint)*(undefined8 *)((uVar5 & 0xfffffffffffc0000) + 8) >> 6 & 1) != 0))
          {
            uVar6 = *(ulong *)((MemoryChunk *)(uVar9 & 0xfffffffffffc0000) + 8);
            if ((((uint)uVar6 >> 0xf & 1) != 0) || ((uVar6 & 0x58) == 0)) {
              RememberedSet<(v8::internal::RememberedSetType)1>::Insert<(v8::internal::AccessMode)0>
                        ((MemoryChunk *)(uVar9 & 0xfffffffffffc0000),(ulong)piVar1);
            }
          }
        }
        uVar6 = uVar3;
        WeakListVisitor<v8::internal::Context>::VisitLiveObject(param_1,uVar5,param_3);
        uVar9 = uVar5;
      }
      param_2 = param_2 & 0xffffffff00000000 | (ulong)uVar2;
    } while (uVar2 != uVar7);
    if ((int)uVar9 != 0) {
      *(uint *)(uVar9 + 0x41f) = uVar7;
      if ((((uVar8 & 1) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) != 0)) &&
         ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar9,(uint *)(uVar9 + 0x41f),uVar8);
      }
    }
  }
  return uVar6;
}

