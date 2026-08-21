
long FUN_00ab1f74(long param_1)

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
    if (-1 < iVar8) {
      lVar5 = FUN_00aa8a78(0x310,"new server wsi");
      if (lVar5 != 0) {
        *(char *)(lVar5 + 0x304) = (char)iVar8;
                    /* try { // try from 00ab2004 to 00bb20bf has its CatchHandler @ 00ab2004
                       catch() { ... } // from try @ 00ab2004 with catch @ 00ab2004
                       catch() { ... } // from try @ 00ab20c8 with catch @ 00ab2004 */
        *(long *)(lVar5 + 0x228) = param_1;
        *(undefined8 *)(lVar5 + 0x220) = *(undefined8 *)(param_1 + 0x150);
        *(undefined1 *)(lVar5 + 0x303) = 0;
        *(undefined2 *)(lVar5 + 0x2fe) = 0;
        *(uint *)(lVar5 + 0x2f4) = *(uint *)(lVar5 + 0x2f4) & 0xfffffe7e | 0x80;
        *(byte *)(lVar5 + 0x2f8) =
             *(byte *)(lVar5 + 0x2f8) & 0xf0 | *(byte *)(param_1 + 0x1f8) & 0xf;
        uVar3 = *(undefined8 *)(param_1 + 0x188);
        *(undefined8 *)(lVar5 + 0x270) = 0;
        *(undefined1 *)(lVar5 + 0x2fd) = 0;
        *(undefined8 *)(lVar5 + 0x2d0) = 0xffffffffffffffff;
        *(undefined8 *)(lVar5 + 0x248) = uVar3;
        *(int *)(*(long *)(param_1 + 0x150) + 0xc70) =
             *(int *)(*(long *)(param_1 + 0x150) + 0xc70) + 1;
        (**(code **)(*(long *)(param_1 + 0x188) + 8))(lVar5,0x1d,0,0,0);
        return lVar5;
      }
      _lws_log(1,"Out of memory for new connection\n");
      return 0;
    }
  }
  _lws_log(1,"no space for new conn\n");
  return 0;
}

