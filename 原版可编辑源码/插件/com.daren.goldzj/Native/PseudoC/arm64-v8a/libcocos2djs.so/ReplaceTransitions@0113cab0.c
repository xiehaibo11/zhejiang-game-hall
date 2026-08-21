
/* v8::internal::TransitionsAccessor::ReplaceTransitions(v8::internal::MaybeObject) */

void __thiscall
v8::internal::TransitionsAccessor::ReplaceTransitions(TransitionsAccessor *this,ulong param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  if (*(int *)(this + 0x20) != 4) goto LAB_0113cb44;
  lVar4 = *(long *)(this + 0x18);
  uVar1 = (int)*(uint *)(lVar4 + 3) >> 1;
  if (uVar1 != 0) {
    uVar3 = (long)((ulong)*(uint *)(lVar4 + 3) << 0x20) >> 0x21;
    uVar2 = *(undefined4 *)(*(long *)this + 0xa8);
    if (uVar1 < 8) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar3 & 0xfffffffffffffff8;
      puVar8 = (undefined8 *)(lVar4 + 0x17);
      uVar9 = uVar7;
      do {
        puVar8[-1] = CONCAT44(uVar2,uVar2);
        puVar8[-2] = CONCAT44(uVar2,uVar2);
        puVar8[1] = CONCAT44(uVar2,uVar2);
        *puVar8 = CONCAT44(uVar2,uVar2);
        uVar9 = uVar9 - 8;
        puVar8 = puVar8 + 4;
      } while (uVar9 != 0);
      if (uVar7 == uVar3) goto LAB_0113cb40;
    }
    lVar5 = uVar3 - uVar7;
    puVar6 = (undefined4 *)(lVar4 + 7 + uVar7 * 4);
    do {
      lVar5 = lVar5 + -1;
      *puVar6 = uVar2;
      puVar6 = puVar6 + 1;
    } while (lVar5 != 0);
  }
LAB_0113cb40:
  *(undefined4 *)(lVar4 + 0xb) = 0;
LAB_0113cb44:
  *(int *)(*(long *)(this + 0x10) + 0x23) = (int)param_2;
  if (((int)param_2 != 3) && ((param_2 & 1) != 0)) {
    uVar3 = *(ulong *)(this + 0x10);
    lVar4 = uVar3 + 0x23;
    if ((*(byte *)((param_2 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,lVar4,param_2 & 0xfffffffffffffffd);
      uVar3 = *(ulong *)(this + 0x10);
      lVar4 = uVar3 + 0x23;
    }
    if (((*(byte *)((param_2 & 0xfffffffffffc0000) + 8) & 0x18) != 0) &&
       ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,lVar4,param_2 & 0xfffffffffffffffd);
      return;
    }
  }
  return;
}

