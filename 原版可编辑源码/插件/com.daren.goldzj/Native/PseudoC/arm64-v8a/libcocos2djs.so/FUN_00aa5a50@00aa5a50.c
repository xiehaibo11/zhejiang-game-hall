
undefined8 FUN_00aa5a50(long *param_1,byte *param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  
  iVar1 = (int)param_1[5];
  lVar11 = *param_1;
  bVar3 = *param_2;
  uVar9 = (uint)bVar3;
  if (iVar1 != 2) {
    if (iVar1 == 1) {
      if (uVar9 - 0x30 < 10) {
        cVar4 = bVar3 - 0x30;
      }
      else if (uVar9 - 0x61 < 6) {
        cVar4 = bVar3 + 0xa9;
      }
      else {
        if (5 < uVar9 - 0x41) {
          return 2;
        }
        cVar4 = bVar3 - 0x37;
      }
      if (-1 < cVar4) {
        *(byte *)((long)param_1 + 0x34) = bVar3;
        *(undefined4 *)(param_1 + 5) = 2;
        return 1;
      }
      return 2;
    }
    if ((iVar1 == 0) && (bVar3 == 0x25)) {
      *(undefined4 *)(param_1 + 5) = 1;
      return 1;
    }
    bVar5 = false;
    uVar8 = *(uint *)((long)param_1 + 0x24);
    goto joined_r0x00aa5c58;
  }
  uVar10 = (uint)bVar3;
  uVar8 = uVar10 - 0x30;
  if (uVar8 < 10) {
    cVar4 = bVar3 - 0x30;
  }
  else if (uVar10 - 0x61 < 6) {
    cVar4 = bVar3 + 0xa9;
  }
  else {
    if (5 < uVar10 - 0x41) {
      return 2;
    }
    cVar4 = bVar3 - 0x37;
  }
  if (cVar4 < '\0') {
    return 2;
  }
  bVar3 = *(byte *)((long)param_1 + 0x34);
  uVar10 = (uint)bVar3;
  if (bVar3 - 0x30 < 10) {
    uVar10 = (uVar10 + 0xd0) * 0x10;
joined_r0x00aa5c14:
    if ((uVar8 & 0xff) < 10) goto LAB_00aa5af8;
LAB_00aa5c18:
    if (uVar9 - 0x61 < 6) {
      uVar8 = uVar9 + 0xa9;
    }
    else {
      uVar8 = uVar9 + 0xc9;
      if (5 < uVar9 - 0x41) {
        uVar8 = 0xff;
      }
    }
  }
  else {
    if (5 < bVar3 - 0x61) {
      iVar1 = uVar10 + 0xc9;
      if (5 < uVar10 - 0x41) {
        iVar1 = -1;
      }
      uVar10 = iVar1 << 4;
      goto joined_r0x00aa5c14;
    }
    uVar10 = (uVar10 + 0xa9) * 0x10;
    if (9 < (uVar8 & 0xff)) goto LAB_00aa5c18;
LAB_00aa5af8:
    uVar8 = uVar9 + 0xd0;
  }
  uVar9 = uVar8 | uVar10;
  bVar5 = true;
  *param_2 = (byte)uVar9;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar8 = *(uint *)((long)param_1 + 0x24);
joined_r0x00aa5c58:
  if (uVar8 < 4) {
                    /* WARNING: Could not recover jumptable at 0x00aa5c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)(&DAT_0189ecdc + *(int *)(&DAT_0189ecdc + (ulong)uVar8 * 4)))();
    return uVar6;
  }
  if (bVar5) {
    return 0;
  }
  if ((uVar9 & 0xff) != 0x3f) {
    return 0;
  }
  if (*(char *)(lVar11 + 0x34c) == '\0') {
    if ((int)param_1[5] != 0) {
                    /* catch() { ... } // from try @ 00aa5c74 with catch @ 00aa5e1c */
      return 2;
    }
    lVar7 = *param_1;
                    /* try { // try from 00aa5f10 to 00ba5f17 has its CatchHandler @ 00aa6138 */
    uVar9 = *(uint *)(lVar7 + 0xb60);
    if (uVar9 < *(uint *)(param_1[0x44] + 0xc88)) {
      uVar8 = (uint)*(ushort *)(lVar7 + (ulong)*(byte *)(lVar7 + 0xb8b) * 8 + 0x20);
      if (uVar8 < *(uint *)(param_1 + 6)) {
        *(uint *)(lVar7 + 0xb60) = uVar9 + 1;
        *(undefined1 *)(*(long *)(lVar7 + 0x10) + (ulong)uVar9) = 0;
      }
      else if (*(uint *)(param_1 + 6) == uVar8) {
        *(uint *)(lVar7 + 0xb60) = uVar9 + 1;
        *(undefined1 *)(*(long *)(lVar7 + 0x10) + (ulong)uVar9) = 0;
        _lws_log(2,"header %i exceeds limit %d\n",*(undefined1 *)((long)param_1 + 0x36),
                 (int)param_1[6]);
      }
      bVar3 = *(char *)(lVar11 + 0xb8b) + 1;
      *(byte *)(lVar11 + 0xb8b) = bVar3;
                    /* try { // try from 00aa6080 to 00ba6097 has its CatchHandler @ 00aa6114 */
      if (bVar3 < 0x5b) {
        uVar2 = *(undefined4 *)(lVar11 + 0xb60);
        lVar7 = lVar11 + (ulong)bVar3 * 8;
        *(undefined2 *)(lVar7 + 0x20) = 0;
        *(undefined1 *)(lVar7 + 0x22) = 0;
        *(undefined4 *)(lVar7 + 0x1c) = uVar2;
        *(undefined1 *)((long)param_1 + 0x35) = 0;
        *(undefined1 *)(lVar11 + 0x34c) = *(undefined1 *)(lVar11 + 0xb8b);
        *(undefined4 *)((long)param_1 + 0x24) = 0;
                    /* catch() { ... } // from try @ 00aa5d14 with catch @ 00aa5bf0
                       catch() { ... } // from try @ 00aa5d84 with catch @ 00aa5bf0 */
        return 1;
      }
      return 3;
    }
    if (uVar9 != *(uint *)(param_1[0x44] + 0xc88)) {
                    /* try { // try from 00aa6098 to 00ba619b has its CatchHandler @ 00aa5e80 */
      _lws_log(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds");
      return 0xffffffff;
    }
    _lws_log(1,"Ran out of header data space\n");
                    /* try { // try from 00aa6008 to 00ba603b has its CatchHandler @ 00aa5e80 */
    return 0xffffffff;
  }
                    /* catch() { ... } // from try @ 00aa5d74 with catch @ 00aa5dfc */
  return 0;
}

