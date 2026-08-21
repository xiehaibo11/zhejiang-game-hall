
/* v8::internal::WeakArrayList::RemoveOne(v8::internal::MaybeObjectHandle const&) */

undefined8 __thiscall
v8::internal::WeakArrayList::RemoveOne(WeakArrayList *this,MaybeObjectHandle *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  
  uVar4 = *(ulong *)this;
  iVar9 = *(int *)(uVar4 + 7) >> 1;
  if ((iVar9 != 0) && (1 < *(int *)(uVar4 + 7))) {
    puVar7 = *(undefined8 **)(param_1 + 8);
    iVar2 = iVar9 + -1;
    iVar9 = iVar9 * 4;
    uVar5 = uVar4 & 0xffffffff00000000;
    lVar8 = (long)iVar2 + 1;
    do {
      iVar9 = iVar9 + -4;
      lVar1 = (long)iVar9 + 0xb;
      if (*(int *)param_1 == 0) {
        if (puVar7 == (undefined8 *)0x0) goto LAB_01110ae4;
        uVar10 = (uint)*puVar7 | 2;
      }
      else {
        if (puVar7 == (undefined8 *)0x0) {
LAB_01110ae4:
                    /* WARNING: Subroutine does not return */
          V8_Fatal("Check failed: %s.","(location_) != nullptr");
        }
        uVar10 = (uint)*puVar7;
      }
      if (*(uint *)(lVar1 + uVar4) == uVar10) {
        lVar8 = (long)(iVar2 * 4) + 0xb;
        uVar10 = *(uint *)(lVar8 + uVar4);
        uVar6 = (ulong)uVar10;
        *(uint *)(uVar4 + lVar1) = uVar10;
        uVar4 = *(ulong *)this;
        if ((uVar10 != 3) && ((uVar10 & 1) != 0)) {
          uVar11 = uVar5 | uVar6 & 0xfffffffffffc0000;
          lVar3 = uVar4 + lVar1;
          if ((*(byte *)(uVar11 + 10) >> 2 & 1) != 0) {
            Heap_MarkingBarrierSlow(uVar4,lVar3,uVar5 | uVar6 & 0xfffffffffffffffd);
            uVar4 = *(ulong *)this;
            lVar3 = uVar4 + lVar1;
          }
          if (((*(byte *)(uVar11 + 8) & 0x18) != 0) &&
             ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            Heap_GenerationalBarrierSlow(uVar4,lVar3,uVar5 | uVar6 & 0xfffffffffffffffd);
            uVar4 = *(ulong *)this;
          }
        }
        *(undefined4 *)(uVar4 + lVar8) = 3;
        *(int *)(*(long *)this + 7) = iVar2 * 2;
        return 1;
      }
      lVar8 = lVar8 + -1;
    } while (0 < lVar8);
  }
  return 0;
}

