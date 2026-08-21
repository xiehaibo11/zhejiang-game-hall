
/* cocos2d::PhysicsContact::generateContactData() */

void cocos2d::PhysicsContact::generateContactData(void)

{
  undefined4 *puVar1;
  int iVar2;
  long in_x0;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined4 in_s1;
  
  lVar5 = *(long *)(in_x0 + 0x80);
  if (lVar5 == 0) {
    return;
  }
  if (*(void **)(in_x0 + 0x90) != (void *)0x0) {
                    /* catch() { ... } // from try @ 01001d28 with catch @ 01001cf8 */
    operator_delete(*(void **)(in_x0 + 0x90));
  }
  *(undefined8 *)(in_x0 + 0x90) = *(undefined8 *)(in_x0 + 0x88);
  puVar3 = operator_new(0x2c,(nothrow_t *)&std::nothrow);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar3 + 0x24) = 0;
    *(undefined8 *)((long)puVar3 + 0x1c) = 0;
                    /* try { // try from 01001d20 to 01101d27 has its CatchHandler @ 01001db4 */
    puVar3[1] = 0;
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
  }
  *(undefined8 **)(in_x0 + 0x88) = puVar3;
                    /* try { // try from 01001d28 to 01101dcf has its CatchHandler @ 01001cf8 */
  iVar2 = cpArbiterGetCount(lVar5);
  lVar4 = *(long *)(in_x0 + 0x88);
  *(int *)(lVar4 + 0x20) = iVar2;
  if (0 < iVar2) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      uVar8 = cpArbiterGetPointA(lVar5,uVar6 & 0xffffffff);
      uVar6 = uVar6 + 1;
      puVar1 = (undefined4 *)(*(long *)(in_x0 + 0x88) + lVar7);
      *puVar1 = uVar8;
      puVar1[1] = in_s1;
      lVar4 = *(long *)(in_x0 + 0x88);
      if (3 < uVar6) break;
      lVar7 = lVar7 + 8;
    } while ((long)uVar6 < (long)*(int *)(lVar4 + 0x20));
    if (0 < *(int *)(lVar4 + 0x20)) {
      uVar8 = cpArbiterGetNormal(lVar5);
      lVar4 = *(long *)(in_x0 + 0x88);
      goto LAB_01001da8;
    }
  }
  uVar8 = 0;
  in_s1 = 0;
LAB_01001da8:
  *(undefined4 *)(lVar4 + 0x24) = uVar8;
  *(undefined4 *)(lVar4 + 0x28) = in_s1;
                    /* catch() { ... } // from try @ 01001d20 with catch @ 01001db4 */
  return;
}

