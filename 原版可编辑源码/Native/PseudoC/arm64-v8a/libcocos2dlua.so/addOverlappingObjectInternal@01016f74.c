
/* cocos2d::btCollider::addOverlappingObjectInternal(btBroadphaseProxy*, btBroadphaseProxy*) */

void cocos2d::btCollider::addOverlappingObjectInternal
               (btBroadphaseProxy *param_1,btBroadphaseProxy *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar6 = *(uint *)(param_1 + 300);
  uVar7 = (ulong)uVar6;
  lVar12 = *(long *)param_2;
  if (0 < (int)uVar6) {
    plVar9 = *(long **)(param_1 + 0x138);
    do {
      if (*plVar9 == lVar12) {
        if ((int)uVar7 != 0) goto LAB_01017130;
        break;
      }
      uVar7 = uVar7 - 1;
      plVar9 = plVar9 + 1;
    } while (uVar7 != 0);
  }
  if (uVar6 == *(uint *)(param_1 + 0x130)) {
    uVar2 = uVar6 << 1;
    if (uVar6 == 0) {
      uVar2 = 1;
    }
    if ((int)uVar6 < (int)uVar2) {
      if (uVar2 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = btAlignedAllocInternal
                          (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3,0x10);
        uVar6 = *(uint *)(param_1 + 300);
      }
      if (0 < (int)uVar6) {
        lVar8 = 0;
        do {
          lVar10 = lVar8 * 8;
          lVar8 = lVar8 + 1;
          *(undefined8 *)(lVar5 + lVar10) = *(undefined8 *)(*(long *)(param_1 + 0x138) + lVar10);
        } while ((int)uVar6 != lVar8);
      }
      if (*(void **)(param_1 + 0x138) != (void *)0x0) {
        if (param_1[0x140] != (btBroadphaseProxy)0x0) {
          btAlignedFreeInternal(*(void **)(param_1 + 0x138));
          uVar6 = *(uint *)(param_1 + 300);
        }
        *(undefined8 *)(param_1 + 0x138) = 0;
      }
      *(long *)(param_1 + 0x138) = lVar5;
      param_1[0x140] = (btBroadphaseProxy)0x1;
      *(uint *)(param_1 + 0x130) = uVar2;
    }
  }
  *(long *)(*(long *)(param_1 + 0x138) + (long)(int)uVar6 * 8) = lVar12;
  lVar5 = *(long *)(param_1 + 0x148);
  *(uint *)(param_1 + 300) = uVar6 + 1;
  plVar9 = *(long **)(lVar5 + 0xa0);
  if ((plVar9 != (long *)0x0) && ((*(byte *)(*(long *)(lVar5 + 0xe0) + 0xe0) >> 2 & 1) != 0)) {
    puVar13 = *(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x28);
    puVar1 = *(undefined8 **)(*(long *)(lVar5 + 0x30) + 0x30);
    if (puVar13 == puVar1) {
      local_50 = (long *)0x0;
    }
    else {
      do {
        plVar11 = (long *)*puVar13;
        iVar4 = (**(code **)(*plVar11 + 0x10))(plVar11);
        if (iVar4 == 1) {
          lVar8 = plVar11[0xf];
joined_r0x010170bc:
          if (lVar8 == lVar12) goto LAB_01017114;
        }
        else {
          iVar4 = (**(code **)(*plVar11 + 0x10))(plVar11);
          if (iVar4 == 2) {
            lVar8 = plVar11[0x1c];
            goto joined_r0x010170bc;
          }
        }
        puVar13 = puVar13 + 1;
      } while (puVar1 != puVar13);
      plVar11 = (long *)0x0;
LAB_01017114:
      plVar9 = *(long **)(lVar5 + 0xa0);
      local_50 = plVar11;
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
    }
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_50);
  }
LAB_01017130:
  if (*(long *)(lVar3 + 0x28) == local_48) {
                    /* try { // try from 01017154 to 01117187 has its CatchHandler @ 01017154
                       catch() { ... } // from try @ 01017154 with catch @ 01017154
                       catch() { ... } // from try @ 0101718c with catch @ 01017154 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

