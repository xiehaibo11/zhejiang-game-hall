
void lws_serve_http_file(long param_1,undefined8 param_2,char *param_3,void *param_4,int param_5)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 *puVar8;
  char *pcVar9;
  long lVar10;
  size_t sVar11;
  undefined8 uVar12;
  uint uVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_b8;
  uint local_ac;
  void *local_a8;
  char acStack_9c [52];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar7 = lws_get_context();
  pvVar1 = (void *)(*(long *)(lVar7 + (ulong)*(byte *)(param_1 + 0x304) * 0x6f8 + 0x7b8) + 0x10);
  uVar2 = *(uint *)(lVar7 + 0xc84);
  local_ac = 0;
  plVar15 = (long *)(param_1 + 0x40);
  local_a8 = pvVar1;
  if (*plVar15 == 0) {
    puVar8 = (undefined8 *)
             FUN_01042c90(*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x18),param_2,&local_b8);
    iVar4 = lws_hdr_total_length(param_1,0x15);
    if (iVar4 == 0) {
      uVar13 = 0;
    }
    else {
      pcVar9 = (char *)FUN_01047fa0(param_1,0x15);
      pcVar9 = strstr(pcVar9,"gzip");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010552cc with catch @ 010553b4
                        */
      uVar13 = 0;
      if (pcVar9 != (char *)0x0) {
        uVar13 = 0x1000000;
      }
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105526c with catch @ 010553cc
                        */
    local_ac = local_ac | uVar13;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0105525c with catch @ 010553e4
                        */
    lVar7 = (*(code *)*puVar8)(*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x18),param_2,local_b8,
                               &local_ac);
    *(long *)(param_1 + 0x40) = lVar7;
    if (lVar7 != 0) goto LAB_010553f8;
                    /* catch() { ... } // from try @ 010554a4 with catch @ 01055514 */
                    /* catch() { ... } // from try @ 01055490 with catch @ 01055524 */
    _lws_log(1,"Unable to open \'%s\'\n",param_2);
    goto LAB_01055658;
  }
LAB_010553f8:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010550f8 with catch @ 010553f8
                        */
  lVar7 = param_1 + 0x48;
  lVar10 = lws_vfs_get_length();
  *(long *)(param_1 + 0x38) = lVar10;
  iVar4 = FUN_01058110(param_1,lVar7,lVar10);
                    /* try { // try from 01055424 to 01155447 has its CatchHandler @ 01055424
                       catch() { ... } // from try @ 01055424 with catch @ 01055424
                       catch() { ... } // from try @ 010554e0 with catch @ 01055424 */
  if (iVar4 < 0) {
    lws_return_http_status(param_1,0x1a0,0);
                    /* try { // try from 010554e0 to 0115556f has its CatchHandler @ 01055424 */
    iVar4 = lws_http_transaction_completed(param_1);
    if (iVar4 != 0) goto LAB_01055658;
    (**(code **)(*(long *)(*plVar15 + 8) + 8))(plVar15);
LAB_010554fc:
    uVar12 = 0;
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_01055510;
  }
  else {
    lVar14 = (long)pvVar1 + ((ulong)uVar2 - 0x10);
    uVar6 = 200;
    if (iVar4 != 0) {
      uVar6 = 0xce;
    }
                    /* try { // try from 01055448 to 0115544f has its CatchHandler @ 0105552c */
    iVar5 = lws_add_http_header_status(param_1,uVar6,&local_a8,lVar14);
    if ((iVar5 == 0) &&
       (((~*(uint *)(*plVar15 + 0x28) & 0x3000000) != 0 ||
        (iVar5 = lws_add_http_header_by_token(param_1,0x2e,"gzip",4,&local_a8,lVar14), iVar5 == 0)))
       ) {
                    /* try { // try from 01055490 to 0115549f has its CatchHandler @ 01055524 */
      if ((param_3 == (char *)0x0) || (1 < iVar4)) {
                    /* catch() { ... } // from try @ 01055448 with catch @ 0105552c */
        if (1 < iVar4) {
                    /* catch() { ... } // from try @ 010554b8 with catch @ 01055534 */
          strncpy((char *)(param_1 + 0x100),param_3,0x3f);
          *(undefined1 *)(param_1 + 0x13f) = 0;
          iVar5 = lws_add_http_header_by_token
                            (param_1,0x1c,"multipart/byteranges; boundary=_lws",0x14,&local_a8,
                             lVar14);
          if (iVar5 != 0) goto LAB_01055658;
          lVar10 = *(long *)(param_1 + 0x60) + 6;
          FUN_010580f8(lVar7);
          iVar5 = FUN_01057f38(lVar7);
          while (iVar5 != 0) {
            iVar5 = lws_snprintf(acStack_9c,0x32,"bytes %llu-%llu/%llu",
                                 *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                                 *(undefined8 *)(param_1 + 0x58));
            sVar11 = strlen(param_3);
            lVar10 = lVar10 + sVar11 + (long)iVar5 + 0x29;
            iVar5 = FUN_01057f38(lVar7);
          }
          FUN_010580f8(lVar7);
          FUN_01057f38(lVar7);
        }
      }
      else if (*param_3 != '\0') {
                    /* try { // try from 010554a4 to 011554b3 has its CatchHandler @ 01055514 */
        sVar11 = strlen(param_3);
                    /* try { // try from 010554b8 to 011554df has its CatchHandler @ 01055534 */
        iVar5 = lws_add_http_header_by_token(param_1,0x1c,param_3,sVar11,&local_a8,lVar14);
        if (iVar5 != 0) goto LAB_01055658;
      }
      if (iVar4 == 1) {
        lVar10 = *(long *)(param_1 + 0x60);
        uVar6 = lws_snprintf(acStack_9c,0x32,"bytes %llu-%llu/%llu",*(undefined8 *)(param_1 + 0x48),
                             *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
        iVar4 = lws_add_http_header_by_token(param_1,0x31,acStack_9c,uVar6,&local_a8,lVar14);
        if (iVar4 != 0) goto LAB_01055658;
      }
      *(undefined1 *)(param_1 + 0xfd) = 0;
      iVar4 = lws_add_http_header_by_token(param_1,0x29,"bytes",5,&local_a8,lVar14);
      if (iVar4 == 0) {
        if (*(char *)(param_1 + 0x2f5) < '\0') {
                    /* catch() { ... } // from try @ 0105570c with catch @ 010556b0
                       catch() { ... } // from try @ 0105574c with catch @ 010556b0 */
          iVar4 = lws_add_http_header_by_token(param_1,0x44,"chunked",7,&local_a8,lVar14);
        }
        else {
          iVar4 = lws_add_http_header_content_length(param_1,lVar10,&local_a8,lVar14);
        }
        if (iVar4 == 0) {
          if ((*(int *)(param_1 + 0x2f0) == 0) ||
             (uVar2 = *(uint *)(param_1 + 0x2f4), (uVar2 >> 0xb & 1) == 0)) {
            pcVar9 = "no-store";
LAB_010556ec:
            iVar4 = 8;
          }
          else {
                    /* catch() { ... } // from try @ 01055704 with catch @ 010557c4 */
            if ((uVar2 >> 0xc & 1) == 0) {
              pcVar9 = "no-cache";
              goto LAB_010556ec;
            }
                    /* catch() { ... } // from try @ 01055720 with catch @ 010557e0 */
            pcVar9 = acStack_9c;
            iVar4 = sprintf(acStack_9c,"%s max-age: %u",
                            *(undefined8 *)(&DAT_01728130 + (ulong)(uVar2 >> 0xd & 1) * 8));
          }
                    /* try { // try from 01055704 to 0115570b has its CatchHandler @ 010557c4 */
          iVar4 = lws_add_http_header_by_token(param_1,0x18,pcVar9,iVar4,&local_a8,lVar14);
                    /* try { // try from 0105570c to 0115571f has its CatchHandler @ 010556b0 */
                    /* try { // try from 01055720 to 0115574b has its CatchHandler @ 010557e0 */
          if ((iVar4 == 0) &&
             ((*(int *)(param_1 + 0x144) != 1 ||
              (iVar4 = lws_add_http_header_by_token(param_1,4,"keep-alive",10,&local_a8,lVar14),
              iVar4 == 0)))) {
            if (param_4 != (void *)0x0) {
              sVar11 = (size_t)param_5;
                    /* try { // try from 0105574c to 01155803 has its CatchHandler @ 010556b0 */
              if (lVar14 - (long)local_a8 < (long)sVar11) goto LAB_01055658;
              memcpy(local_a8,param_4,sVar11);
              local_a8 = (void *)((long)local_a8 + sVar11);
            }
            iVar4 = lws_finalize_http_header(param_1,&local_a8,lVar14);
            if (iVar4 == 0) {
              iVar4 = lws_write(param_1,pvVar1,(long)local_a8 - (long)pvVar1,8);
              if ((long)local_a8 - (long)pvVar1 == (long)iVar4) {
                *(undefined8 *)(param_1 + 0x30) = 0;
                *(undefined1 *)(param_1 + 0x2ff) = 1;
                lws_callback_on_writable(param_1);
                goto LAB_010554fc;
              }
              _lws_log(1,"_write returned %d from %ld\n",iVar4);
            }
          }
        }
      }
    }
LAB_01055658:
    uVar12 = 0xffffffff;
    if (*(long *)(lVar3 + 0x28) != local_68) {
LAB_01055510:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar12);
    }
  }
  return;
}

