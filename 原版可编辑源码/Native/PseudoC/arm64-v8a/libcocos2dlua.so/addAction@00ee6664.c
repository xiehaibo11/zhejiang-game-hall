
/* cocos2d::ActionManager::addAction(cocos2d::Action*, cocos2d::Node*, bool) */

void __thiscall
cocos2d::ActionManager::addAction(ActionManager *this,Action *param_1,Node *param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *__s;
  void *__ptr;
  _ccArray *p_Var5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  
                    /* catch() { ... } // from try @ 00ee64a4 with catch @ 00ee667c */
  if (param_1 == (Action *)0x0) {
    return;
  }
  if (param_2 == (Node *)0x0) {
    return;
  }
                    /* catch() { ... } // from try @ 00ee6474 with catch @ 00ee66b8 */
  if (*(long *)(this + 0x28) != 0) {
    uVar9 = (uint)((ulong)param_2 >> 0x20);
                    /* catch() { ... } // from try @ 00ee6460 with catch @ 00ee66d8 */
    uVar16 = (uint)param_2;
    iVar13 = (uVar9 & 0xff000000) + 0x9e3779b9 + (uVar9 & 0xff0000) + (uVar9 & 0xff00) +
             (uVar9 & 0xff);
                    /* catch() { ... } // from try @ 00ee6454 with catch @ 00ee66f8 */
                    /* catch() { ... } // from try @ 00ee6530 with catch @ 00ee670c
                       catch() { ... } // from try @ 00ee6618 with catch @ 00ee670c */
    uVar9 = (((uVar16 & 0xff000000) + 0x9f49bac2) - iVar13) + (uVar16 & 0xff0000) +
            (uVar16 & 0xff00) + (uVar16 & 0xff) ^ 0x7f76d;
                    /* catch() { ... } // from try @ 00ee6554 with catch @ 00ee671c */
    uVar16 = (iVar13 + 0x1124109) - uVar9 ^ uVar9 << 8;
    uVar2 = (-0x1124109 - uVar9) - uVar16 ^ uVar16 >> 0xd;
    uVar9 = (uVar9 - uVar16) - uVar2 ^ uVar2 >> 0xc;
    plVar6 = *(long **)(*(long *)(this + 0x28) + 0x28);
    uVar16 = (uVar16 - uVar2) - uVar9 ^ uVar9 << 0x10;
    uVar2 = (uVar2 - uVar9) - uVar16 ^ uVar16 >> 5;
    uVar9 = (uVar9 - uVar16) - uVar2 ^ uVar2 >> 3;
    uVar16 = (uVar16 - uVar2) - uVar9 ^ uVar9 << 10;
                    /* try { // try from 00ee6784 to 00fe67c3 has its CatchHandler @ 00ee6784
                       catch() { ... } // from try @ 00ee6784 with catch @ 00ee6784
                       catch() { ... } // from try @ 00ee67ec with catch @ 00ee6784 */
    lVar10 = *(long *)(*plVar6 +
                      (ulong)(((uVar2 - uVar9) - uVar16 ^ uVar16 >> 0xf) & (int)plVar6[1] - 1U) *
                      0x10);
    while (lVar10 != 0) {
      puVar4 = (undefined8 *)(lVar10 - plVar6[4]);
      if ((*(int *)(puVar4 + 0xb) == 8) && (*(Node **)puVar4[10] == param_2)) goto LAB_00ee6b34;
      lVar10 = puVar4[9];
    }
  }
                    /* try { // try from 00ee67d0 to 00fe67eb has its CatchHandler @ 00ee6834 */
  puVar4 = calloc(0x60,1);
  *(bool *)((long)puVar4 + 0x21) = param_3;
  Ref::retain((Ref *)param_2);
                    /* try { // try from 00ee67ec to 00fe687f has its CatchHandler @ 00ee6784 */
  puVar4[1] = param_2;
  puVar4[7] = 0;
  puVar4[10] = puVar4 + 1;
  *(undefined4 *)(puVar4 + 0xb) = 8;
  puVar7 = *(undefined8 **)(this + 0x28);
  puVar8 = puVar4 + 5;
  if (puVar7 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x28) = puVar4;
                    /* catch() { ... } // from try @ 00ee67d0 with catch @ 00ee6834 */
    puVar4[6] = 0;
    puVar7 = malloc(0x40);
    puVar4[5] = puVar7;
    if (puVar7 == (undefined8 *)0x0) goto LAB_00ee6b9c;
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    plVar6 = puVar4 + 5;
    lVar10 = *plVar6;
                    /* catch() { ... } // from try @ 00ee67c4 with catch @ 00ee6864 */
    *(undefined8 *)(lVar10 + 8) = 0x500000020;
    *(long **)(lVar10 + 0x18) = plVar6;
    *(undefined8 *)(lVar10 + 0x20) = 0x28;
    puVar7 = malloc(0x200);
    *(undefined8 **)*plVar6 = puVar7;
    if (puVar7 == (undefined8 *)0x0) goto LAB_00ee6b9c;
                    /* try { // try from 00ee6880 to 00fe68c7 has its CatchHandler @ 00ee6880
                       catch() { ... } // from try @ 00ee6880 with catch @ 00ee6880
                       catch() { ... } // from try @ 00ee6a64 with catch @ 00ee6880 */
    lVar10 = puVar4[5];
    puVar7[0x3d] = 0;
    puVar7[0x3c] = 0;
    puVar7[0x3f] = 0;
    puVar7[0x3e] = 0;
    puVar7[0x39] = 0;
    puVar7[0x38] = 0;
    puVar7[0x3b] = 0;
    puVar7[0x3a] = 0;
    puVar7[0x35] = 0;
    puVar7[0x34] = 0;
    puVar7[0x37] = 0;
    puVar7[0x36] = 0;
    puVar7[0x31] = 0;
    puVar7[0x30] = 0;
    puVar7[0x33] = 0;
    puVar7[0x32] = 0;
    puVar7[0x2d] = 0;
    puVar7[0x2c] = 0;
    puVar7[0x2f] = 0;
    puVar7[0x2e] = 0;
    puVar7[0x29] = 0;
    puVar7[0x28] = 0;
    puVar7[0x2b] = 0;
    puVar7[0x2a] = 0;
    puVar7[0x25] = 0;
    puVar7[0x24] = 0;
    puVar7[0x27] = 0;
    puVar7[0x26] = 0;
    puVar7[0x21] = 0;
    puVar7[0x20] = 0;
    puVar7[0x23] = 0;
    puVar7[0x22] = 0;
    puVar7[0x1d] = 0;
    puVar7[0x1c] = 0;
    puVar7[0x1f] = 0;
    puVar7[0x1e] = 0;
    puVar7[0x19] = 0;
    puVar7[0x18] = 0;
    puVar7[0x1b] = 0;
    puVar7[0x1a] = 0;
    puVar7[0x15] = 0;
    puVar7[0x14] = 0;
    puVar7[0x17] = 0;
    puVar7[0x16] = 0;
    puVar7[0x11] = 0;
    puVar7[0x10] = 0;
    puVar7[0x13] = 0;
    puVar7[0x12] = 0;
    puVar7[0xd] = 0;
    puVar7[0xc] = 0;
    puVar7[0xf] = 0;
    puVar7[0xe] = 0;
    puVar7[9] = 0;
    puVar7[8] = 0;
    puVar7[0xb] = 0;
    puVar7[10] = 0;
                    /* try { // try from 00ee68c8 to 00fe68db has its CatchHandler @ 00ee6b0c */
    puVar7[5] = 0;
    puVar7[4] = 0;
    puVar7[7] = 0;
    puVar7[6] = 0;
    puVar7[1] = 0;
    *puVar7 = 0;
    puVar7[3] = 0;
    puVar7[2] = 0;
    *(undefined4 *)(lVar10 + 0x38) = 0xa0111fe1;
    lVar10 = puVar4[5];
    puVar7 = puVar4;
  }
  else {
    lVar10 = puVar7[5];
    lVar12 = *(long *)(lVar10 + 0x18);
    *(undefined8 **)(lVar12 + 0x10) = puVar4;
    puVar4[6] = lVar12 - *(long *)(lVar10 + 0x20);
    *(undefined8 **)(lVar10 + 0x18) = puVar8;
  }
                    /* try { // try from 00ee68dc to 00fe68f3 has its CatchHandler @ 00ee6aec */
  *(int *)(lVar10 + 0x10) = *(int *)(lVar10 + 0x10) + 1;
  puVar4[5] = puVar7[5];
                    /* try { // try from 00ee690c to 00fe691f has its CatchHandler @ 00ee6ab8 */
  iVar13 = (uint)*(byte *)((long)puVar4 + 0xf) * 0x1000000 + -0x61c88647 +
           (uint)*(byte *)((long)puVar4 + 0xe) * 0x10000 +
           (uint)*(byte *)((long)puVar4 + 0xd) * 0x100 + (uint)*(byte *)((long)puVar4 + 0xc);
  uVar9 = (((uint)*(byte *)((long)puVar4 + 0xb) * 0x1000000 + -0x60b6453e) - iVar13) +
          (uint)*(byte *)((long)puVar4 + 10) * 0x10000 + (uint)*(byte *)((long)puVar4 + 9) * 0x100 +
          (uint)*(byte *)(puVar4 + 1) ^ 0x7f76d;
  uVar16 = (iVar13 + 0x1124109) - uVar9 ^ uVar9 << 8;
  uVar2 = (-0x1124109 - uVar9) - uVar16 ^ uVar16 >> 0xd;
  uVar9 = (uVar9 - uVar16) - uVar2 ^ uVar2 >> 0xc;
  uVar16 = (uVar16 - uVar2) - uVar9 ^ uVar9 << 0x10;
  uVar2 = (uVar2 - uVar9) - uVar16 ^ uVar16 >> 5;
  uVar9 = (uVar9 - uVar16) - uVar2 ^ uVar2 >> 3;
  uVar16 = (uVar16 - uVar2) - uVar9 ^ uVar9 << 10;
                    /* try { // try from 00ee6990 to 00fe6997 has its CatchHandler @ 00ee6b20 */
  uVar9 = (uVar2 - uVar9) - uVar16 ^ uVar16 >> 0xf;
  *(uint *)((long)puVar4 + 0x5c) = uVar9;
  lVar10 = *(long *)puVar7[5];
  uVar11 = (ulong)(uVar9 & (int)((long *)puVar7[5])[1] - 1U);
  plVar6 = (long *)(lVar10 + uVar11 * 0x10);
                    /* try { // try from 00ee69b4 to 00fe69fb has its CatchHandler @ 00ee6b30 */
  lVar12 = *plVar6;
  uVar9 = (int)plVar6[1] + 1;
  *(uint *)(plVar6 + 1) = uVar9;
  puVar4[8] = 0;
  puVar4[9] = lVar12;
  if (lVar12 != 0) {
    *(undefined8 **)(lVar12 + 0x18) = puVar8;
  }
  *plVar6 = (long)puVar8;
  if ((*(int *)(lVar10 + uVar11 * 0x10 + 0xc) * 10 + 10U <= uVar9) &&
     (puVar7 = (undefined8 *)puVar4[5], *(int *)((long)puVar7 + 0x34) != 1)) {
    __s = malloc((ulong)(uint)(*(int *)(puVar7 + 1) << 1) << 4);
    if (__s == (void *)0x0) {
LAB_00ee6b9c:
                    /* WARNING: Subroutine does not return */
      exit(-1);
    }
    memset(__s,0,(ulong)(uint)(*(int *)(puVar7 + 1) << 1) << 4);
    uVar16 = *(uint *)(puVar7 + 1);
    __ptr = (void *)*puVar7;
    uVar9 = *(uint *)(puVar7 + 2) >> (ulong)(*(int *)((long)puVar7 + 0xc) + 1U & 0x1f);
    uVar2 = uVar16 * 2 - 1;
    if ((uVar2 & *(uint *)(puVar7 + 2)) != 0) {
      uVar9 = uVar9 + 1;
    }
    *(uint *)(puVar7 + 5) = uVar9;
    *(undefined4 *)((long)puVar7 + 0x2c) = 0;
                    /* try { // try from 00ee6a54 to 00fe6a63 has its CatchHandler @ 00ee6b20 */
    if (uVar16 != 0) {
      iVar13 = 0;
      uVar11 = 0;
      do {
        lVar10 = *(long *)((long)__ptr + uVar11 * 0x10);
        while (lVar10 != 0) {
          uVar14 = (ulong)(*(uint *)(lVar10 + 0x34) & uVar2);
          plVar6 = (long *)((long)__s + uVar14 * 0x10);
          lVar12 = *(long *)(lVar10 + 0x20);
          uVar1 = (int)plVar6[1] + 1;
          *(uint *)(plVar6 + 1) = uVar1;
          if (uVar9 < uVar1) {
            iVar13 = iVar13 + 1;
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar1 / uVar9;
            }
                    /* catch() { ... } // from try @ 00ee690c with catch @ 00ee6ab8 */
            *(int *)((long)puVar7 + 0x2c) = iVar13;
            *(uint *)((long)__s + uVar14 * 0x10 + 0xc) = uVar3;
          }
          *(undefined8 *)(lVar10 + 0x18) = 0;
          lVar15 = *plVar6;
          *(long *)(lVar10 + 0x20) = lVar15;
          if (lVar15 != 0) {
            *(long *)(lVar15 + 0x18) = lVar10;
          }
          *plVar6 = lVar10;
          lVar10 = lVar12;
        }
                    /* try { // try from 00ee6a64 to 00fe6b8f has its CatchHandler @ 00ee6880 */
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar16);
    }
    free(__ptr);
    puVar8 = (undefined8 *)*puVar8;
                    /* catch() { ... } // from try @ 00ee68dc with catch @ 00ee6aec */
    *puVar8 = __s;
    *(int *)(puVar8 + 1) = *(int *)(puVar8 + 1) << 1;
    *(int *)((long)puVar8 + 0xc) = *(int *)((long)puVar8 + 0xc) + 1;
    if (*(uint *)(puVar8 + 2) >> 1 < *(uint *)((long)puVar8 + 0x2c)) {
      iVar13 = *(int *)(puVar8 + 6);
                    /* catch() { ... } // from try @ 00ee68c8 with catch @ 00ee6b0c */
      *(uint *)(puVar8 + 6) = iVar13 + 1U;
      if (1 < iVar13 + 1U) {
                    /* catch() { ... } // from try @ 00ee6990 with catch @ 00ee6b20
                       catch() { ... } // from try @ 00ee6a54 with catch @ 00ee6b20 */
        *(undefined4 *)((long)puVar8 + 0x34) = 1;
        p_Var5 = (_ccArray *)*puVar4;
        goto joined_r0x00ee6b38;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00ee69b4 with catch @ 00ee6b30 */
      *(undefined4 *)(puVar8 + 6) = 0;
    }
  }
LAB_00ee6b34:
  p_Var5 = (_ccArray *)*puVar4;
joined_r0x00ee6b38:
  if (p_Var5 == (_ccArray *)0x0) {
    p_Var5 = (_ccArray *)ccArrayNew(4);
    *puVar4 = p_Var5;
  }
  else if (*(long *)p_Var5 == *(long *)(p_Var5 + 8)) {
    ccArrayDoubleCapacity(p_Var5);
    p_Var5 = (_ccArray *)*puVar4;
  }
  ccArrayAppendObject(p_Var5,(Ref *)param_1);
  (**(code **)(*(long *)param_1 + 0x30))(param_1,param_2);
                    /* try { // try from 00ee6b90 to 00fe6bd3 has its CatchHandler @ 00ee6b90
                       catch() { ... } // from try @ 00ee6b90 with catch @ 00ee6b90
                       catch() { ... } // from try @ 00ee6e30 with catch @ 00ee6b90
                       catch() { ... } // from try @ 00ee6e6c with catch @ 00ee6b90
                       catch() { ... } // from try @ 00ee6eec with catch @ 00ee6b90 */
  return;
}

