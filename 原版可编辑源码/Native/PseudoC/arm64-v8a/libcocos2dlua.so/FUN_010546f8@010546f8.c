
long FUN_010546f8(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  
  lVar5 = *(long *)(param_1 + 0x150);
  if (0 < (long)*(short *)(lVar5 + 0xca6)) {
    lVar4 = 0;
    puVar6 = (uint *)(lVar5 + 0x7c8);
    iVar8 = -1;
    uVar7 = 0xffffffff;
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 0x1be;
      iVar2 = (int)lVar4;
      if (uVar7 <= uVar1 || uVar1 == *(int *)(lVar5 + 0xc7c) - 1U) {
        uVar1 = uVar7;
        iVar2 = iVar8;
      }
      iVar8 = iVar2;
      lVar4 = lVar4 + 1;
      uVar7 = uVar1;
    } while (*(short *)(lVar5 + 0xca6) != lVar4);
                    /* try { // try from 01054764 to 0115476b has its CatchHandler @ 01054770 */
    if (-1 < iVar8) {
                    /* try { // try from 0105476c to 0115499b has its CatchHandler @ 01053f18 */
                    /* catch() { ... } // from try @ 01054764 with catch @ 01054770 */
                    /* catch() { ... } // from try @ 010545c8 with catch @ 01054774 */
      lVar5 = FUN_0104b1fc(0x310,"new server wsi");
      if (lVar5 != 0) {
        *(char *)(lVar5 + 0x304) = (char)iVar8;
                    /* catch() { ... } // from try @ 010541e0 with catch @ 01054788 */
        *(long *)(lVar5 + 0x228) = param_1;
        *(undefined8 *)(lVar5 + 0x220) = *(undefined8 *)(param_1 + 0x150);
        *(undefined1 *)(lVar5 + 0x303) = 0;
        *(undefined2 *)(lVar5 + 0x2fe) = 0;
                    /* catch() { ... } // from try @ 01054588 with catch @ 010547a8 */
        *(uint *)(lVar5 + 0x2f4) = *(uint *)(lVar5 + 0x2f4) & 0xfffffe7e | 0x80;
                    /* catch() { ... } // from try @ 01054184 with catch @ 010547ac */
                    /* catch() { ... } // from try @ 01054168 with catch @ 010547b0 */
                    /* catch() { ... } // from try @ 010541a4 with catch @ 010547b4 */
                    /* catch() { ... } // from try @ 010542dc with catch @ 010547c4 */
        *(byte *)(lVar5 + 0x2f8) =
             *(byte *)(lVar5 + 0x2f8) & 0xf0 | *(byte *)(param_1 + 0x1f8) & 0xf;
        uVar3 = *(undefined8 *)(param_1 + 0x188);
        *(undefined8 *)(lVar5 + 0x270) = 0;
        *(undefined1 *)(lVar5 + 0x2fd) = 0;
                    /* catch() { ... } // from try @ 0105425c with catch @ 010547d4 */
        *(undefined8 *)(lVar5 + 0x2d0) = 0xffffffffffffffff;
        *(undefined8 *)(lVar5 + 0x248) = uVar3;
                    /* catch() { ... } // from try @ 01054218 with catch @ 010547dc */
                    /* catch() { ... } // from try @ 01054140 with catch @ 010547e0 */
        *(int *)(*(long *)(param_1 + 0x150) + 0xc70) =
             *(int *)(*(long *)(param_1 + 0x150) + 0xc70) + 1;
                    /* catch() { ... } // from try @ 01054110 with catch @ 01054800 */
        (**(code **)(*(long *)(param_1 + 0x188) + 8))(lVar5,0x1d,0,0,0);
        return lVar5;
      }
                    /* catch() { ... } // from try @ 01054314 with catch @ 01054828 */
      _lws_log(1,"Out of memory for new connection\n");
      return 0;
    }
  }
                    /* catch() { ... } // from try @ 01054368 with catch @ 01054810 */
  _lws_log(1,"no space for new conn\n");
                    /* catch() { ... } // from try @ 01054470 with catch @ 01054838 */
  return 0;
                    /* catch() { ... } // from try @ 010543c8 with catch @ 01054818 */
}

