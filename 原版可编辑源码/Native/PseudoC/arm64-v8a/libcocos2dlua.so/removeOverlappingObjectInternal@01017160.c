
/* cocos2d::btCollider::removeOverlappingObjectInternal(btBroadphaseProxy*, btDispatcher*,
   btBroadphaseProxy*) */

void cocos2d::btCollider::removeOverlappingObjectInternal
               (btBroadphaseProxy *param_1,btDispatcher *param_2,btBroadphaseProxy *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar2 = *(uint *)(param_1 + 300);
                    /* try { // try from 01017188 to 0111718b has its CatchHandler @ 010171c8 */
                    /* try { // try from 0101718c to 011171db has its CatchHandler @ 01017154 */
  if (0 < (int)uVar2) {
    lVar10 = *(long *)param_2;
    lVar7 = *(long *)(param_1 + 0x138);
    lVar6 = 0;
    uVar8 = 0;
    do {
      if (*(long *)(lVar7 + uVar8 * 8) == lVar10) {
                    /* catch() { ... } // from try @ 01017188 with catch @ 010171c8 */
        if ((int)uVar8 < (int)uVar2) {
          *(undefined8 *)(lVar7 + (lVar6 >> 0x1d)) =
               *(undefined8 *)(lVar7 + (long)(int)(uVar2 - 1) * 8);
                    /* try { // try from 010171dc to 01117303 has its CatchHandler @ 010171dc
                       catch() { ... } // from try @ 010171dc with catch @ 010171dc
                       catch() { ... } // from try @ 01017320 with catch @ 010171dc
                       catch() { ... } // from try @ 01017358 with catch @ 010171dc
                       catch() { ... } // from try @ 01017388 with catch @ 010171dc
                       catch() { ... } // from try @ 010173b8 with catch @ 010171dc
                       catch() { ... } // from try @ 010173e8 with catch @ 010171dc
                       catch() { ... } // from try @ 01017418 with catch @ 010171dc */
          lVar6 = *(long *)(param_1 + 0x148);
          *(uint *)(param_1 + 300) = uVar2 - 1;
          plVar5 = *(long **)(lVar6 + 0xd0);
          if ((plVar5 != (long *)0x0) && ((*(byte *)(*(long *)(lVar6 + 0xe0) + 0xe0) >> 2 & 1) != 0)
             ) {
            puVar11 = *(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x28);
            puVar1 = *(undefined8 **)(*(long *)(lVar6 + 0x30) + 0x30);
            if (puVar11 != puVar1) goto LAB_01017220;
            local_50 = (long *)0x0;
            goto LAB_0101727c;
          }
        }
        break;
      }
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x100000000;
    } while (uVar2 != uVar8);
  }
  goto LAB_0101728c;
LAB_01017220:
  do {
    plVar9 = (long *)*puVar11;
    iVar4 = (**(code **)(*plVar9 + 0x10))(plVar9);
    if (iVar4 == 1) {
      lVar7 = plVar9[0xf];
joined_r0x01017218:
      if (lVar7 == lVar10) goto LAB_01017270;
    }
    else {
      iVar4 = (**(code **)(*plVar9 + 0x10))(plVar9);
      if (iVar4 == 2) {
        lVar7 = plVar9[0x1c];
        goto joined_r0x01017218;
      }
    }
    puVar11 = puVar11 + 1;
  } while (puVar1 != puVar11);
  plVar9 = (long *)0x0;
LAB_01017270:
  plVar5 = *(long **)(lVar6 + 0xd0);
  local_50 = plVar9;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_009d64e4();
  }
LAB_0101727c:
  (**(code **)(*plVar5 + 0x30))(plVar5,&local_50);
LAB_0101728c:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

