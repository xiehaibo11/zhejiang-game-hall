
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */

long lws_create_context(int *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  long lVar6;
  time_t tVar7;
  long lVar8;
  char *pcVar9;
  size_t sVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  rlimit local_50;
  
  FUN_010573b4();
  iVar5 = lws_plat_context_early_init();
  if (iVar5 != 0) {
    return 0;
  }
                    /* try { // try from 0104a5f0 to 0114a5fb has its CatchHandler @ 0104a758 */
  lVar6 = FUN_0104b1fc(0xcb8,"context");
  if (lVar6 == 0) {
    _lws_log(1,"No memory for websocket context\n");
    return 0;
  }
  iVar3 = param_1[0x36];
  *(undefined8 *)(lVar6 + 0x20) = _lws_plat_file_open;
  *(code **)(lVar6 + 0x28) = _lws_plat_file_close;
  *(code **)(lVar6 + 0x30) = _lws_plat_file_seek_cur;
  *(undefined8 *)(lVar6 + 0x48) = 0;
  *(undefined8 **)(lVar6 + 0x18) = (undefined8 *)(lVar6 + 0x20);
  iVar5 = 0x1000;
                    /* try { // try from 0104a658 to 0114a65f has its CatchHandler @ 0104a740 */
  if (iVar3 != 0) {
    iVar5 = iVar3;
  }
                    /* try { // try from 0104a660 to 0114a76f has its CatchHandler @ 0104a444 */
  *(code **)(lVar6 + 0x40) = _lws_plat_file_write;
  *(code **)(lVar6 + 0x38) = _lws_plat_file_read;
  *(int *)(lVar6 + 0xc84) = iVar5;
  memcpy((void *)(lVar6 + 0x80),&PTR_FUN_0177ed08,0x60);
  *(void **)(lVar6 + 0x78) = (void *)(lVar6 + 0x80);
  if (*(long *)(param_1 + 0x4e) != 0) {
    *(long *)(lVar6 + 0xd8) = *(long *)(param_1 + 0x4e);
  }
  *(undefined8 *)(lVar6 + 0x870) = *(undefined8 *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x42) != 0) {
    *(long *)(lVar6 + 0x850) = *(long *)(param_1 + 0x42);
  }
  tVar7 = time((time_t *)0x0);
  *(time_t *)(lVar6 + 0x10) = tVar7;
  *(int *)(lVar6 + 0xc8c) = param_1[0x50];
  iVar5 = getrlimit(RLIMIT_NOFILE,&local_50);
  if (iVar5 == -1) {
    pcVar9 = "Get RLIMIT_NOFILE failed!\n";
    goto LAB_0104a8fc;
  }
  *(undefined4 *)(lVar6 + 0xc58) = (undefined4)local_50.rlim_cur;
  iVar5 = param_1[0x23];
  if (iVar5 == 0) {
    iVar5 = 1;
  }
  sVar4 = (short)iVar5;
  sVar2 = sVar4;
  if (0 < sVar4) {
    sVar2 = 1;
  }
  *(short *)(lVar6 + 0xca6) = sVar2;
  *(undefined8 *)(lVar6 + 0x858) = *(undefined8 *)(param_1 + 8);
  *(int *)(lVar6 + 0xc78) = param_1[0x19];
  iVar5 = 0x14;
  if (param_1[0x25] != 0) {
    iVar5 = param_1[0x25];
  }
  *(int *)(lVar6 + 0xc80) = iVar5;
  *(short *)(lVar6 + 0xcae) = (short)param_1[0x3c];
  iVar5 = (int)(short)param_1[0x22];
  if ((short)param_1[0x22] == 0) {
    iVar5 = 0x1000;
    if (param_1[0x37] != 0) {
      iVar5 = param_1[0x37];
    }
  }
  *(int *)(lVar6 + 0xc88) = iVar5;
  sVar1 = 4;
  if (*(short *)((long)param_1 + 0x8a) != 0) {
    sVar1 = *(short *)((long)param_1 + 0x8a);
  }
  *(short *)(lVar6 + 0xca4) = sVar1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104a658 with catch @ 0104a740
                        */
  if (sVar4 < 1) {
    uVar12 = (ulong)(uint)(int)sVar2;
    iVar5 = param_1[0x24];
    if (iVar5 != 0) goto LAB_0104a798;
LAB_0104a7e8:
    iVar5 = 0;
    iVar11 = (int)uVar12;
    if (iVar11 != 0) {
      iVar5 = *(int *)(lVar6 + 0xc58) / iVar11;
    }
    *(int *)(lVar6 + 0xc7c) = iVar5;
    iVar3 = param_1[0x1e];
  }
  else {
    lVar13 = 0;
    lVar14 = lVar6;
    do {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104a5f0 with catch @ 0104a758
                        */
      lVar8 = thunk_FUN_0104b1cc(0,*(undefined4 *)(lVar6 + 0xc84),"pt_serv_buf");
      *(long *)(lVar14 + 0x7b8) = lVar8;
      if (lVar8 == 0) {
        pcVar9 = "OOM\n";
        goto LAB_0104a8fc;
      }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104a494 with catch @ 0104a76c
                        */
      *(long *)(lVar14 + 0x100) = lVar6;
      *(char *)(lVar14 + 0x7d2) = (char)lVar13;
      *(undefined8 *)(lVar14 + 0x110) = 0;
      *(undefined4 *)(lVar14 + 0x7cc) = 0;
      uVar12 = (ulong)*(short *)(lVar6 + 0xca6);
      lVar13 = lVar13 + 1;
      lVar14 = lVar14 + 0x6f8;
    } while (lVar13 < (long)uVar12);
    iVar5 = param_1[0x24];
    if (iVar5 == 0) goto LAB_0104a7e8;
LAB_0104a798:
    iVar11 = (int)uVar12;
    *(int *)(lVar6 + 0xc7c) = iVar5;
    iVar3 = param_1[0x1e];
  }
  if ((iVar3 == 0) && (0 < param_1[0x1c])) {
    pcVar9 = "info->ka_interval can\'t be 0 if ka_time used\n";
LAB_0104a8fc:
    _lws_log(1,pcVar9);
    return 0;
  }
  *(undefined4 *)(lVar6 + 0xc5c) = 1;
  *(code **)(lVar6 + 0x880) = lws_uv_sigint_cb;
  lVar13 = FUN_0104b1fc((long)(iVar11 * iVar5 * 8),"fds table");
  *(long *)(lVar6 + 0xe0) = lVar13;
  if (lVar13 == 0) {
    _lws_log(1,"OOM allocating %d fds\n",*(undefined4 *)(lVar6 + 0xc58));
  }
  else {
    pcVar9 = *(char **)(param_1 + 0x34);
    if (pcVar9 != (char *)0x0) {
      *(char **)(lVar6 + 0x868) = pcVar9;
      sVar10 = strlen(pcVar9);
      *(short *)(lVar6 + 0xcac) = (short)sVar10;
    }
    iVar5 = lws_plat_init(lVar6,param_1);
    if (iVar5 == 0) {
      FUN_0104f294(param_1);
      *(undefined8 *)(lVar6 + 0x860) = *(undefined8 *)(param_1 + 0x1a);
      if (((*(byte *)((long)param_1 + 0x65) >> 5 & 1) == 0) &&
         (lVar13 = lws_create_vhost(lVar6,param_1), lVar13 == 0)) {
        pcVar9 = "Failed to create default vhost\n";
        goto LAB_0104a8fc;
      }
      lws_context_init_extensions(param_1,lVar6);
      *(undefined8 *)(lVar6 + 0xbd8) = 0x6e776f6e6b6e75;
      lws_server_get_canonical_hostname(lVar6,param_1);
      *(int *)(lVar6 + 0xc64) = param_1[0x18];
      *(int *)(lVar6 + 0xc68) = param_1[0x17];
      if ((*(byte *)((long)param_1 + 0x65) >> 5 & 1) == 0) {
        lws_plat_drop_app_privileges(param_1);
      }
      if (*param_1 == -1) {
        iVar5 = FUN_010567dc(lVar6,0,1,0,0);
      }
      else {
        iVar5 = FUN_010567dc(lVar6,0,0,0,0);
      }
      if (-1 < iVar5) {
        return lVar6;
      }
    }
  }
  lws_context_destroy(lVar6);
  return 0;
}

