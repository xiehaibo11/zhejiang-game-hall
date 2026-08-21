
int lws_serve_http_file_fragment(long param_1)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined4 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  int local_80;
  undefined4 uStack_7c;
  long local_78;
  int local_70;
  int iStack_6c;
  uint local_68;
  
                    /* catch() { ... } // from try @ 00aa4874 with catch @ 00aa48c8 */
  lVar16 = *(long *)(param_1 + 0x220);
  bVar2 = *(byte *)(param_1 + 0x304);
  iVar5 = lws_send_pipe_choked();
  if (iVar5 == 0) {
    plVar1 = (long *)(param_1 + 0x40);
    do {
      if (*(int *)(param_1 + 0x2e8) == 0) {
        if (*(long *)(param_1 + 0x30) == *(long *)(param_1 + 0x38)) goto LAB_00aa4c48;
        bVar3 = *(byte *)(param_1 + 0xfb);
        lVar9 = *(long *)(lVar16 + (ulong)bVar2 * 0x6f8 + 0x7b8) + 9;
        lVar12 = lVar9;
        if ((bVar3 == 0) || (*(char *)(param_1 + 0xfd) != '\0')) {
          iVar5 = 0;
        }
        else {
          _lws_log(4,"%s: doing range start %llu\n","lws_serve_http_file_fragment",
                   *(undefined8 *)(param_1 + 0x48));
          lVar8 = (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x10))
                            (*(long *)(param_1 + 0x40),
                             *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x30));
          if (lVar8 < 0) goto LAB_00aa4cc8;
          bVar3 = *(byte *)(param_1 + 0xfb);
          lVar8 = *(long *)(param_1 + 0x48);
          *(long *)(param_1 + 0x30) = lVar8;
          if (bVar3 < 2) {
            iVar5 = 0;
          }
          else {
                    /* try { // try from 00aa49e4 to 00ba49eb has its CatchHandler @ 00aa4b54 */
                    /* try { // try from 00aa49ec to 00ba4a6b has its CatchHandler @ 00aa4904 */
            iVar5 = lws_snprintf(lVar9,*(int *)(lVar16 + 0xc84) + -9,
                                 "_lws\r\nContent-Type: %s\r\nContent-Range: bytes %llu-%llu/%llu\r\n\r\n"
                                 ,param_1 + 0x100,lVar8,*(undefined8 *)(param_1 + 0x50),
                                 *(undefined8 *)(param_1 + 0x58));
            lVar8 = *(long *)(param_1 + 0x48);
            bVar3 = *(byte *)(param_1 + 0xfb);
            lVar12 = lVar9 + iVar5;
          }
          *(long *)(param_1 + 0x68) = (*(long *)(param_1 + 0x50) + 1) - lVar8;
          *(undefined1 *)(param_1 + 0xfd) = 1;
        }
        uVar13 = *(ulong *)(*(long *)(param_1 + 0x248) + 0x30);
        uVar15 = (ulong)(uint)((-9 - iVar5) + *(int *)(lVar16 + 0xc84));
        uVar14 = *(ulong *)(param_1 + 0x150);
        if (uVar15 <= *(ulong *)(param_1 + 0x150)) {
          uVar14 = uVar15;
        }
        if (uVar14 <= uVar13 || uVar13 == 0) {
          uVar13 = uVar14;
        }
        uVar14 = uVar13;
        if (bVar3 != 0) {
          if (bVar3 != 1) {
            uVar13 = uVar13 - 7;
          }
                    /* try { // try from 00aa4a6c to 00ba4a73 has its CatchHandler @ 00aa4b44 */
          uVar14 = *(ulong *)(param_1 + 0x68);
          if (uVar13 <= *(ulong *)(param_1 + 0x68)) {
            uVar14 = uVar13;
          }
        }
                    /* try { // try from 00aa4a74 to 00ba4a97 has its CatchHandler @ 00aa4904 */
        if ((*(uint *)(param_1 + 0x2f4) & 0x8000) != 0) {
          uVar14 = uVar14 - 0x8a;
          lVar12 = lVar12 + 10;
        }
                    /* try { // try from 00aa4a98 to 00ba4aab has its CatchHandler @ 00aa4b64 */
        iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x18))
                          (*(long *)(param_1 + 0x40),&local_80,lVar12,uVar14);
        if (iVar5 < 0) goto LAB_00aa4cc8;
                    /* try { // try from 00aa4aac to 00ba4b33 has its CatchHandler @ 00aa4904 */
        if (*(char *)(param_1 + 0x2f5) < '\0') {
          iVar5 = local_80;
          if (local_80 != 0) goto LAB_00aa4ad0;
LAB_00aa4c48:
          bVar4 = false;
          iVar5 = *(int *)(param_1 + 0x2e8);
        }
        else {
          iVar5 = ((int)lVar12 - (int)lVar9) + local_80;
          if (iVar5 == 0) goto LAB_00aa4c48;
LAB_00aa4ad0:
          lws_set_timeout(param_1,10,*(undefined4 *)(lVar16 + 0xc80));
          if (*(char *)(param_1 + 0x2f5) < '\0') {
                    /* try { // try from 00aa4b34 to 00ba4b3b has its CatchHandler @ 00aa4b54 */
            iStack_6c = (int)uVar14 + 0x80;
                    /* try { // try from 00aa4b3c to 00ba4b43 has its CatchHandler @ 00aa4b44 */
                    /* catch() { ... } // from try @ 00aa4a6c with catch @ 00aa4b44
                       catch() { ... } // from try @ 00aa4b3c with catch @ 00aa4b44
                       try { // try from 00aa4b44 to 00ba4bcf has its CatchHandler @ 00aa4904 */
                    /* catch() { ... } // from try @ 00aa49e4 with catch @ 00aa4b54
                       catch() { ... } // from try @ 00aa4b34 with catch @ 00aa4b54 */
            local_68 = (uint)(*(long *)(param_1 + 0x30) + (long)iVar5 == *(long *)(param_1 + 0x38));
                    /* catch() { ... } // from try @ 00aa4a98 with catch @ 00aa4b64 */
            local_78 = lVar12;
            local_70 = iVar5;
            iVar5 = FUN_00aa08a4(*(undefined8 *)
                                  (*(long *)(*(long *)(param_1 + 0x228) + 0x188) +
                                   (ulong)*(byte *)(param_1 + 0x305) * 0x38 + 8),param_1,0x34,
                                 *(undefined8 *)(param_1 + 0x270),&local_78,0);
            if (iVar5 < 0) goto LAB_00aa4cc8;
            uVar10 = (uint)*(byte *)(param_1 + 0xfb);
            lVar12 = local_78;
            iVar5 = local_70;
            if (1 < uVar10) goto LAB_00aa4af8;
          }
          else {
            uVar10 = (uint)*(byte *)(param_1 + 0xfb);
            lVar12 = lVar9;
            if (1 < *(byte *)(param_1 + 0xfb)) {
LAB_00aa4af8:
              if ((*(byte *)(param_1 + 0xfe) + 1 == uVar10) &&
                 (*(long *)(param_1 + 0x68) == CONCAT44(uStack_7c,local_80))) {
                iVar6 = lws_snprintf(lVar9 + iVar5,6,"_lws\r\n");
                iVar5 = iVar6 + iVar5;
              }
            }
          }
          uVar11 = 7;
          if (*(long *)(param_1 + 0x30) != *(long *)(param_1 + 0x38)) {
            uVar11 = 3;
          }
          iVar6 = lws_write(param_1,lVar12,(long)iVar5,uVar11);
          if (iVar6 < 0) goto LAB_00aa4cc8;
          *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + CONCAT44(uStack_7c,local_80);
          if ((*(char *)(param_1 + 0xfb) == '\0') ||
             (lVar9 = *(long *)(param_1 + 0x68) - CONCAT44(uStack_7c,local_80),
             *(long *)(param_1 + 0x68) = lVar9, lVar9 != 0)) {
LAB_00aa4c20:
            if ((iVar6 - iVar5 != 0) &&
               (lVar9 = (**(code **)(*(long *)(*plVar1 + 8) + 0x10))(*plVar1,(long)(iVar6 - iVar5)),
               lVar9 == -1)) {
LAB_00aa4cc8:
              (**(code **)(*(long *)(*plVar1 + 8) + 8))(plVar1);
              return -1;
            }
            goto LAB_00aa4c48;
          }
          _lws_log(4,"range budget exhausted\n");
          *(undefined1 *)(param_1 + 0xfd) = 0;
          *(char *)(param_1 + 0xfe) = *(char *)(param_1 + 0xfe) + '\x01';
          iVar7 = FUN_00ab57b4(param_1 + 0x48);
          if (0 < iVar7) goto LAB_00aa4c20;
          bVar4 = true;
          iVar5 = *(int *)(param_1 + 0x2e8);
        }
        if (iVar5 == 0) {
          if ((bVar4) || (*(ulong *)(param_1 + 0x38) <= *(ulong *)(param_1 + 0x30)))
          goto LAB_00aa4c80;
        }
        else if (bVar4) {
LAB_00aa4c80:
          *(undefined1 *)(param_1 + 0x2ff) = 0;
          (**(code **)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 8))(plVar1);
          lVar16 = *(long *)(*(long *)(param_1 + 0x248) + 8);
          if ((lVar16 != 0) &&
             (iVar5 = FUN_00aa08a4(lVar16,param_1,0xf,*(undefined8 *)(param_1 + 0x270),0,0),
             iVar5 < 0)) {
            return (*(uint *)(param_1 + 0x2f4) & 2) - 1;
          }
          return 1;
        }
      }
      else {
        iVar5 = FUN_00aa408c(param_1,*(long *)(param_1 + 0x288) + (ulong)*(uint *)(param_1 + 0x2e4))
        ;
        if (iVar5 < 0) goto LAB_00aa4cc8;
      }
      iVar5 = lws_send_pipe_choked(param_1);
    } while (iVar5 == 0);
  }
  lws_callback_on_writable(param_1);
                    /* try { // try from 00aa4904 to 00ba49e3 has its CatchHandler @ 00aa4904
                       catch() { ... } // from try @ 00aa4904 with catch @ 00aa4904
                       catch() { ... } // from try @ 00aa49ec with catch @ 00aa4904
                       catch() { ... } // from try @ 00aa4a74 with catch @ 00aa4904
                       catch() { ... } // from try @ 00aa4aac with catch @ 00aa4904
                       catch() { ... } // from try @ 00aa4b44 with catch @ 00aa4904 */
  return 0;
}

