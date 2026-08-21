
undefined8 FUN_01076670(long param_1,char param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  
  uVar11 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x108);
  iVar10 = (int)uVar11;
  if (iVar10 != 0) {
                    /* catch() { ... } // from try @ 010765ac with catch @ 01076698 */
    memcpy(*(void **)(param_1 + 0xe8),*(void **)(param_1 + 0xf0),
           (ulong)*(ushort *)(param_1 + 0xe4) << 4);
  }
  memcpy((void *)(*(long *)(param_1 + 0x118) + 0x210),(void *)(*(long *)(param_1 + 8) + 0x140),0x60)
  ;
  if (param_2 == '\0') {
    lVar8 = *(long *)(param_1 + 0x118);
    uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + 0x60);
    *(undefined8 *)(lVar8 + 0x198) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x68);
    *(undefined8 *)(lVar8 + 400) = uVar7;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x118);
                    /* catch() { ... } // from try @ 010765a0 with catch @ 010766d8 */
    *(undefined8 *)(lVar8 + 0x198) = 0x10000;
    *(undefined8 *)(lVar8 + 400) = 0x10000;
    memcpy(*(void **)(param_1 + 0xf8),*(void **)(param_1 + 0xf0),
           (ulong)*(ushort *)(param_1 + 0xe4) << 4);
  }
  lVar8 = *(long *)(param_1 + 0xf0);
  uVar9 = (ulong)*(ushort *)(param_1 + 0xe4);
  lVar5 = lVar8 + uVar9 * 0x10;
  *(ulong *)(lVar5 + -0x40) = *(long *)(lVar5 + -0x40) + 0x20U & 0xffffffffffffffc0;
  *(ulong *)(lVar5 + -0x30) = *(long *)(lVar5 + -0x30) + 0x20U & 0xffffffffffffffc0;
                    /* try { // try from 01076740 to 011767af has its CatchHandler @ 01076740
                       catch(type#1 @ 00000000) { ... } // from try @ 01076740 with catch @ 01076740
                       catch(type#1 @ 00000000) { ... } // from try @ 010767c4 with catch @ 01076740
                        */
  *(ulong *)(lVar5 + -0x18) = *(long *)(lVar5 + -0x18) + 0x20U & 0xffffffffffffffc0;
  *(ulong *)(lVar5 + -8) = *(long *)(lVar5 + -8) + 0x20U & 0xffffffffffffffc0;
  if (iVar10 != 0) {
    lVar8 = *(long *)(param_1 + 0x118);
    pbVar12 = *(byte **)(*(long *)(param_1 + 0x18) + 0x70);
    *(ulong *)(lVar8 + 0x328) = uVar11 & 0xffffffff;
    *(char *)(lVar8 + 0x3c0) = param_2;
    *(undefined8 *)(lVar8 + 800) = *(undefined8 *)(lVar8 + 0x2b8);
    uVar7 = *(undefined8 *)(param_1 + 0x108);
    *(undefined8 *)(lVar8 + 0x140) = *(undefined8 *)(param_1 + 0x110);
    *(undefined8 *)(lVar8 + 0x138) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0xf8);
    *(undefined8 *)(lVar8 + 0x130) = *(undefined8 *)(param_1 + 0x100);
    *(undefined8 *)(lVar8 + 0x128) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(lVar8 + 0x120) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(lVar8 + 0x118) = uVar7;
    uVar7 = *(undefined8 *)(param_1 + 0xd8);
                    /* try { // try from 010767b0 to 011767b7 has its CatchHandler @ 010767d8 */
    *(undefined8 *)(lVar8 + 0x110) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(lVar8 + 0x108) = uVar7;
    plVar6 = *(long **)(param_1 + 0x118);
                    /* try { // try from 010767c0 to 011767c3 has its CatchHandler @ 010767dc */
                    /* try { // try from 010767c4 to 0117681b has its CatchHandler @ 01076740 */
    plVar6[0x50] = 0;
    *(undefined4 *)(plVar6 + 0x4e) = 3;
    plVar1 = plVar6 + 0x25;
    plVar6[0x4f] = plVar6[100];
    plVar6[0x51] = plVar6[0x65];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010767b0 with catch @ 010767d8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010767c0 with catch @ 010767dc
                        */
    plVar2 = plVar6 + 0x23;
    plVar3 = plVar6 + 0x27;
    plVar4 = plVar6 + 0x21;
    plVar6[0xe] = plVar6[0x26];
    plVar6[0xd] = *plVar1;
    plVar6[0xc] = plVar6[0x24];
    plVar6[0xb] = *plVar2;
    plVar6[0x10] = plVar6[0x28];
    plVar6[0xf] = *plVar3;
    plVar6[10] = plVar6[0x22];
    plVar6[9] = *plVar4;
    plVar6[0x18] = plVar6[0x28];
    plVar6[0x17] = *plVar3;
    plVar6[0x16] = plVar6[0x26];
    plVar6[0x15] = *plVar1;
    plVar6[0x14] = plVar6[0x24];
    plVar6[0x13] = *plVar2;
    plVar6[0x12] = plVar6[0x22];
    plVar6[0x11] = *plVar4;
    plVar6[0x20] = plVar6[0x28];
    plVar6[0x1f] = *plVar3;
    plVar6[0x1e] = plVar6[0x26];
    plVar6[0x1d] = *plVar1;
    plVar6[0x1c] = plVar6[0x24];
    plVar6[0x1b] = *plVar2;
    *(undefined4 *)((long)plVar6 + 0x264) = 0x10001;
    *(undefined2 *)(plVar6 + 0x4d) = 1;
    plVar6[0x1a] = plVar6[0x22];
    plVar6[0x19] = *plVar4;
    *(undefined4 *)((long)plVar6 + 0x21a) = 0x4000;
    *(undefined4 *)((long)plVar6 + 0x21e) = 0x4000;
    *(undefined4 *)((long)plVar6 + 0x216) = 0x4000;
    *(undefined4 *)(plVar6 + 0x47) = 1;
    plVar6[0x45] = 1;
    plVar6[4] = 0;
    *(undefined4 *)(plVar6 + 0x5d) = 0;
    uVar7 = (**(code **)(*plVar6 + 0x420))();
    if (((int)uVar7 != 0) && (*(char *)(*(long *)(param_1 + 0x118) + 0x3c1) != '\0')) {
      return uVar7;
    }
    *pbVar12 = *pbVar12 | (byte)(*(int *)(*(long *)(param_1 + 0x118) + 0x260) << 5) | 4;
    lVar8 = *(long *)(param_1 + 0xf0);
    uVar9 = (ulong)*(ushort *)(param_1 + 0xe4);
  }
  lVar8 = lVar8 + uVar9 * 0x10;
  uVar7 = *(undefined8 *)(lVar8 + -0x40);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(lVar8 + -0x38);
  *(undefined8 *)(param_1 + 0x70) = uVar7;
  uVar7 = *(undefined8 *)(lVar8 + -0x30);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(lVar8 + -0x28);
  *(undefined8 *)(param_1 + 0x80) = uVar7;
  uVar7 = *(undefined8 *)(lVar8 + -0x20);
  *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(lVar8 + -0x18);
  *(undefined8 *)(param_1 + 0x140) = uVar7;
  uVar7 = *(undefined8 *)(lVar8 + -0x10);
  *(undefined8 *)(param_1 + 0x158) = *(undefined8 *)(lVar8 + -8);
  *(undefined8 *)(param_1 + 0x150) = uVar7;
                    /* try { // try from 010768e0 to 0117692f has its CatchHandler @ 010768e0
                       catch() { ... } // from try @ 010768e0 with catch @ 010768e0
                       catch() { ... } // from try @ 01076964 with catch @ 010768e0 */
  return 0;
}

