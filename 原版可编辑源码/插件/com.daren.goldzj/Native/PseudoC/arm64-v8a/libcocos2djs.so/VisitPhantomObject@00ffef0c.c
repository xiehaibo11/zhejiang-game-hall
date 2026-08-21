
/* v8::internal::WeakListVisitor<v8::internal::Context>::VisitPhantomObject(v8::internal::Heap*,
   v8::internal::Context) */

void v8::internal::WeakListVisitor<v8::internal::Context>::VisitPhantomObject
               (long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *(ulong *)(param_1 + -0x87b0);
  uVar5 = (uint)uVar6;
  if (*(uint *)(param_2 + 0x417) != uVar5) {
    uVar7 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0x417);
    do {
      uVar4 = uVar7 & 0xffffffff00000000;
      uVar1 = *(uint *)((uVar4 | *(uint *)(uVar7 + 0xf)) + 3);
      uVar3 = (ulong)*(uint *)(uVar7 + 0xf);
      uVar7 = uVar4 | uVar1;
      uVar2 = uVar4 | uVar3;
      *(uint *)(uVar2 + 3) = uVar5;
      if ((((uVar6 & 1) != 0) && ((*(byte *)(uVar6 & 0xfffffffffffc0000 | 8) & 0x18) != 0)) &&
         ((*(byte *)((uVar4 | uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar2,uVar2 + 3,uVar6);
      }
    } while (uVar1 != uVar5);
    uVar6 = *(ulong *)(param_1 + -0x87b0);
  }
  uVar5 = (uint)uVar6;
  if (*(uint *)(param_2 + 0x41b) != uVar5) {
    uVar7 = param_2 & 0xffffffff00000000 | (ulong)*(uint *)(param_2 + 0x41b);
    do {
      uVar4 = uVar7 & 0xffffffff00000000;
      uVar1 = *(uint *)((uVar4 | *(uint *)(uVar7 + 0xf)) + 3);
      uVar3 = (ulong)*(uint *)(uVar7 + 0xf);
      uVar7 = uVar4 | uVar1;
      uVar2 = uVar4 | uVar3;
      *(uint *)(uVar2 + 3) = uVar5;
      if ((((uVar6 & 1) != 0) && ((*(byte *)(uVar6 & 0xfffffffffffc0000 | 8) & 0x18) != 0)) &&
         ((*(byte *)((uVar4 | uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar2,uVar2 + 3,uVar6);
      }
    } while (uVar1 != uVar5);
  }
  return;
}

