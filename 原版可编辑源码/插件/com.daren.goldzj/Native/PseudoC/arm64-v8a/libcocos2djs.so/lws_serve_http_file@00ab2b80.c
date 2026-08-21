
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
             FUN_00aa050c(*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x18),param_2,&local_b8);
    iVar4 = lws_hdr_total_length(param_1,0x15);
    if (iVar4 == 0) {
      uVar13 = 0;
    }
    else {
      pcVar9 = (char *)FUN_00aa581c(param_1,0x15);
      pcVar9 = strstr(pcVar9,"gzip");
      uVar13 = 0;
      if (pcVar9 != (char *)0x0) {
        uVar13 = 0x1000000;
      }
    }
                    /* try { // try from 00ab2c44 to 00bb2d93 has its CatchHandler @ 00ab2a1c */
    local_ac = local_ac | uVar13;
    lVar7 = (*(code *)*puVar8)(*(undefined8 *)(*(long *)(param_1 + 0x220) + 0x18),param_2,local_b8,
                               &local_ac);
    *(long *)(param_1 + 0x40) = lVar7;
    if (lVar7 != 0) goto LAB_00ab2c74;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab2a74 with catch @ 00ab2d90
                        */
                    /* try { // try from 00ab2d94 to 00bb2e2b has its CatchHandler @ 00ab2d94
                       catch() { ... } // from try @ 00ab2d94 with catch @ 00ab2d94
                       catch() { ... } // from try @ 00ab2e34 with catch @ 00ab2d94
                       catch() { ... } // from try @ 00ab2e88 with catch @ 00ab2d94 */
    _lws_log(1,"Unable to open \'%s\'\n",param_2);
    goto LAB_00ab2ed4;
  }
LAB_00ab2c74:
  lVar7 = param_1 + 0x48;
  lVar10 = lws_vfs_get_length();
  *(long *)(param_1 + 0x38) = lVar10;
  iVar4 = FUN_00ab598c(param_1,lVar7,lVar10);
  if (iVar4 < 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ab2c3c with catch @ 00ab2d4c
                        */
    lws_return_http_status(param_1,0x1a0,0);
    iVar4 = lws_http_transaction_completed(param_1);
    if (iVar4 != 0) goto LAB_00ab2ed4;
    (**(code **)(*(long *)(*plVar15 + 8) + 8))(plVar15);
LAB_00ab2d78:
    uVar12 = 0;
    if (*(long *)(lVar3 + 0x28) != local_68) goto LAB_00ab2d8c;
  }
  else {
    lVar14 = (long)pvVar1 + ((ulong)uVar2 - 0x10);
    uVar6 = 200;
    if (iVar4 != 0) {
      uVar6 = 0xce;
    }
    iVar5 = lws_add_http_header_status(param_1,uVar6,&local_a8,lVar14);
    if ((iVar5 == 0) &&
       (((~*(uint *)(*plVar15 + 0x28) & 0x3000000) != 0 ||
        (iVar5 = lws_add_http_header_by_token(param_1,0x2e,"gzip",4,&local_a8,lVar14), iVar5 == 0)))
       ) {
      if ((param_3 == (char *)0x0) || (1 < iVar4)) {
        if (1 < iVar4) {
          strncpy((char *)(param_1 + 0x100),param_3,0x3f);
          *(undefined1 *)(param_1 + 0x13f) = 0;
          iVar5 = lws_add_http_header_by_token
                            (param_1,0x1c,"multipart/byteranges; boundary=_lws",0x14,&local_a8,
                             lVar14);
          if (iVar5 != 0) goto LAB_00ab2ed4;
          lVar10 = *(long *)(param_1 + 0x60) + 6;
          FUN_00ab5974(lVar7);
          iVar5 = FUN_00ab57b4(lVar7);
          while (iVar5 != 0) {
            iVar5 = lws_snprintf(acStack_9c,0x32,"bytes %llu-%llu/%llu",
                                 *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                                 *(undefined8 *)(param_1 + 0x58));
                    /* try { // try from 00ab2e2c to 00bb2e33 has its CatchHandler @ 00ab2e88 */
            sVar11 = strlen(param_3);
                    /* try { // try from 00ab2e34 to 00bb2e83 has its CatchHandler @ 00ab2d94 */
            lVar10 = lVar10 + sVar11 + (long)iVar5 + 0x29;
            iVar5 = FUN_00ab57b4(lVar7);
          }
          FUN_00ab5974(lVar7);
          FUN_00ab57b4(lVar7);
        }
      }
      else if (*param_3 != '\0') {
        sVar11 = strlen(param_3);
        iVar5 = lws_add_http_header_by_token(param_1,0x1c,param_3,sVar11,&local_a8,lVar14);
        if (iVar5 != 0) goto LAB_00ab2ed4;
      }
      if (iVar4 == 1) {
        lVar10 = *(long *)(param_1 + 0x60);
                    /* try { // try from 00ab2e84 to 00bb2e87 has its CatchHandler @ 00ab2e88 */
                    /* catch() { ... } // from try @ 00ab2e2c with catch @ 00ab2e88
                       catch() { ... } // from try @ 00ab2e84 with catch @ 00ab2e88
                       try { // try from 00ab2e88 to 00bb2e9f has its CatchHandler @ 00ab2d94 */
        uVar6 = lws_snprintf(acStack_9c,0x32,"bytes %llu-%llu/%llu",*(undefined8 *)(param_1 + 0x48),
                             *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
        iVar4 = lws_add_http_header_by_token(param_1,0x31,acStack_9c,uVar6,&local_a8,lVar14);
        if (iVar4 != 0) goto LAB_00ab2ed4;
      }
      *(undefined1 *)(param_1 + 0xfd) = 0;
      iVar4 = lws_add_http_header_by_token(param_1,0x29,"bytes",5,&local_a8,lVar14);
      if (iVar4 == 0) {
        if (*(char *)(param_1 + 0x2f5) < '\0') {
          iVar4 = lws_add_http_header_by_token(param_1,0x44,"chunked",7,&local_a8,lVar14);
        }
        else {
          iVar4 = lws_add_http_header_content_length(param_1,lVar10,&local_a8,lVar14);
        }
        if (iVar4 == 0) {
          if ((*(int *)(param_1 + 0x2f0) == 0) ||
             (uVar2 = *(uint *)(param_1 + 0x2f4), (uVar2 >> 0xb & 1) == 0)) {
            pcVar9 = "no-store";
LAB_00ab2f68:
            iVar4 = 8;
          }
          else {
            if ((uVar2 >> 0xc & 1) == 0) {
              pcVar9 = "no-cache";
              goto LAB_00ab2f68;
            }
            pcVar9 = acStack_9c;
            iVar4 = sprintf(acStack_9c,"%s max-age: %u",
                            (&PTR_s_private_01999ab3_0x15_01c6fdd8)[uVar2 >> 0xd & 1]);
          }
          iVar4 = lws_add_http_header_by_token(param_1,0x18,pcVar9,iVar4,&local_a8,lVar14);
          if ((iVar4 == 0) &&
             ((*(int *)(param_1 + 0x144) != 1 ||
              (iVar4 = lws_add_http_header_by_token(param_1,4,"keep-alive",10,&local_a8,lVar14),
              iVar4 == 0)))) {
            if (param_4 != (void *)0x0) {
              sVar11 = (size_t)param_5;
              if (lVar14 - (long)local_a8 < (long)sVar11) goto LAB_00ab2ed4;
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
                goto LAB_00ab2d78;
              }
              _lws_log(1,"_write returned %d from %ld\n",iVar4);
            }
          }
        }
      }
    }
LAB_00ab2ed4:
    uVar12 = 0xffffffff;
    if (*(long *)(lVar3 + 0x28) != local_68) {
LAB_00ab2d8c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar12);
    }
  }
  return;
}

