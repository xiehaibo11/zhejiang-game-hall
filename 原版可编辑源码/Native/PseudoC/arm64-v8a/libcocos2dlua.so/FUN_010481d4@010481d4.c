
undefined8 FUN_010481d4(long *param_1,byte *param_2)

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
  
                    /* catch() { ... } // from try @ 01048014 with catch @ 010481d4 */
                    /* catch() { ... } // from try @ 0104801c with catch @ 010481e4 */
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
                    /* try { // try from 010482f0 to 011482fb has its CatchHandler @ 0104835c */
      }
      else {
        if (5 < uVar9 - 0x41) {
          return 2;
        }
        cVar4 = bVar3 - 0x37;
                    /* catch() { ... } // from try @ 010482f0 with catch @ 0104835c */
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
    goto joined_r0x010483dc;
  }
  uVar10 = (uint)bVar3;
  uVar8 = uVar10 - 0x30;
  if (uVar8 < 10) {
    cVar4 = bVar3 - 0x30;
                    /* try { // try from 01048254 to 011482ef has its CatchHandler @ 01048254
                       catch() { ... } // from try @ 01048254 with catch @ 01048254
                       catch() { ... } // from try @ 010482fc with catch @ 01048254 */
  }
  else if (uVar10 - 0x61 < 6) {
    cVar4 = bVar3 + 0xa9;
  }
  else {
    if (5 < uVar10 - 0x41) {
                    /* try { // try from 01048620 to 0114863f has its CatchHandler @ 01048e0c */
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
joined_r0x01048398:
    if ((uVar8 & 0xff) < 10) goto LAB_0104827c;
LAB_0104839c:
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
                    /* try { // try from 010482fc to 01148377 has its CatchHandler @ 01048254 */
    if (5 < bVar3 - 0x61) {
      iVar1 = uVar10 + 0xc9;
      if (5 < uVar10 - 0x41) {
        iVar1 = -1;
      }
      uVar10 = iVar1 << 4;
      goto joined_r0x01048398;
    }
    uVar10 = (uVar10 + 0xa9) * 0x10;
    if (9 < (uVar8 & 0xff)) goto LAB_0104839c;
LAB_0104827c:
    uVar8 = uVar9 + 0xd0;
  }
  uVar9 = uVar8 | uVar10;
  bVar5 = true;
  *param_2 = (byte)uVar9;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar8 = *(uint *)((long)param_1 + 0x24);
                    /* try { // try from 010483d8 to 011483fb has its CatchHandler @ 01048d14 */
joined_r0x010483dc:
  if (uVar8 < 4) {
                    /* WARNING: Could not recover jumptable at 0x010483f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (*(code *)(&DAT_0145986c + *(int *)(&DAT_0145986c + (ulong)uVar8 * 4)))();
    return uVar6;
  }
                    /* try { // try from 010485d4 to 011485f3 has its CatchHandler @ 01048d74 */
  if (bVar5) {
    return 0;
  }
  if ((uVar9 & 0xff) != 0x3f) {
    return 0;
  }
  if (*(char *)(lVar11 + 0x34c) == '\0') {
    if ((int)param_1[5] != 0) {
                    /* try { // try from 0104859c to 011485a7 has its CatchHandler @ 01048d5c */
      return 2;
    }
    lVar7 = *param_1;
    uVar9 = *(uint *)(lVar7 + 0xb60);
                    /* try { // try from 0104869c to 011486ab has its CatchHandler @ 01048dc0 */
    if (uVar9 < *(uint *)(param_1[0x44] + 0xc88)) {
                    /* try { // try from 010486b0 to 011486cf has its CatchHandler @ 01048e1c */
      uVar8 = (uint)*(ushort *)(lVar7 + (ulong)*(byte *)(lVar7 + 0xb8b) * 8 + 0x20);
      if (uVar8 < *(uint *)(param_1 + 6)) {
        *(uint *)(lVar7 + 0xb60) = uVar9 + 1;
        *(undefined1 *)(*(long *)(lVar7 + 0x10) + (ulong)uVar9) = 0;
      }
      else if (*(uint *)(param_1 + 6) == uVar8) {
                    /* try { // try from 010487d0 to 011487ef has its CatchHandler @ 01048e20 */
        *(uint *)(lVar7 + 0xb60) = uVar9 + 1;
        *(undefined1 *)(*(long *)(lVar7 + 0x10) + (ulong)uVar9) = 0;
        _lws_log(2,"header %i exceeds limit %d\n",*(undefined1 *)((long)param_1 + 0x36),
                 (int)param_1[6]);
      }
      bVar3 = *(char *)(lVar11 + 0xb8b) + 1;
      *(byte *)(lVar11 + 0xb8b) = bVar3;
                    /* try { // try from 01048804 to 01148813 has its CatchHandler @ 01048da8 */
      if (bVar3 < 0x5b) {
        uVar2 = *(undefined4 *)(lVar11 + 0xb60);
                    /* try { // try from 0104884c to 01148863 has its CatchHandler @ 01048db4 */
        lVar7 = lVar11 + (ulong)bVar3 * 8;
        *(undefined2 *)(lVar7 + 0x20) = 0;
        *(undefined1 *)(lVar7 + 0x22) = 0;
        *(undefined4 *)(lVar7 + 0x1c) = uVar2;
        *(undefined1 *)((long)param_1 + 0x35) = 0;
        *(undefined1 *)(lVar11 + 0x34c) = *(undefined1 *)(lVar11 + 0xb8b);
        *(undefined4 *)((long)param_1 + 0x24) = 0;
                    /* try { // try from 01048378 to 011483d7 has its CatchHandler @ 01048378
                       catch() { ... } // from try @ 01048378 with catch @ 01048378
                       catch() { ... } // from try @ 010483fc with catch @ 01048378
                       catch() { ... } // from try @ 01048484 with catch @ 01048378
                       catch() { ... } // from try @ 010484d4 with catch @ 01048378
                       catch() { ... } // from try @ 01048cb4 with catch @ 01048378 */
        return 1;
      }
                    /* try { // try from 01048818 to 01148837 has its CatchHandler @ 01048e00 */
      return 3;
    }
                    /* try { // try from 01048774 to 01148783 has its CatchHandler @ 01048dc8 */
    if (uVar9 != *(uint *)(param_1[0x44] + 0xc88)) {
      _lws_log(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds");
      return 0xffffffff;
    }
    _lws_log(1,"Ran out of header data space\n");
                    /* try { // try from 01048788 to 011487a7 has its CatchHandler @ 01048e18 */
    return 0xffffffff;
  }
                    /* try { // try from 01048578 to 0114859b has its CatchHandler @ 01048dd0 */
  return 0;
}

