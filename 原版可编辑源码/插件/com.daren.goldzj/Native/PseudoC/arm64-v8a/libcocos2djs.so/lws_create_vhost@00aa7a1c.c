
/* WARNING: Type propagation algorithm not settling */

undefined1 * lws_create_vhost(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  void *__dest;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  
  puVar4 = (undefined1 *)FUN_00aa8a78(0x208,"create vhost");
  if (puVar4 != (undefined1 *)0x0) {
    ppuVar7 = *(undefined ***)(param_2 + 4);
    if (ppuVar7 == (undefined **)0x0) {
      ppuVar7 = &PTR_s_http_only_01c6f960;
      *(undefined ***)(param_2 + 4) = &PTR_s_http_only_01c6f960;
    }
    *(long *)(puVar4 + 0x150) = param_1;
    pcVar6 = "default";
    if (*(char **)(param_2 + 0x28) != (char *)0x0) {
      pcVar6 = *(char **)(param_2 + 0x28);
    }
    *(char **)(puVar4 + 0x170) = pcVar6;
    *(undefined8 *)(puVar4 + 0x178) = *(undefined8 *)(param_2 + 2);
    *(undefined4 *)(puVar4 + 0x180) = param_2[0x55];
    ppuVar7 = ppuVar7 + 1;
    iVar3 = 0;
    do {
      iVar2 = iVar3;
      puVar9 = *ppuVar7;
      iVar3 = iVar2 + 1;
      ppuVar7 = ppuVar7 + 7;
    } while (puVar9 != (undefined *)0x0);
    *(int *)(puVar4 + 0x1dc) = iVar2;
    *(undefined4 *)(puVar4 + 0x1d8) = param_2[0x19];
    *(undefined8 *)(puVar4 + 0x198) = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(puVar4 + 0x1a0) = *(undefined8 *)(param_2 + 0x3e);
    *(undefined8 *)(puVar4 + 0x1c8) = *(undefined8 *)(param_2 + 0x1a);
    *(undefined4 *)(puVar4 + 500) = param_2[0x56];
    iVar2 = 5;
    if (param_2[0x2e] != 0) {
      iVar2 = param_2[0x2e];
    }
    *(int *)(puVar4 + 0x1ec) = iVar2;
    iVar2 = 10;
    if (param_2[0x57] != 0) {
      iVar2 = param_2[0x57];
    }
    *(int *)(puVar4 + 0x1f0) = iVar2;
    __dest = (void *)FUN_00aa8a78((long)(*(short *)(param_1 + 0xca8) + iVar3) * 0x38,
                                  "vhost-specific plugin table");
    if (__dest == (void *)0x0) {
      _lws_log(1,"OOM\n");
    }
    else {
      memcpy(__dest,*(void **)(param_2 + 4),(long)*(int *)(puVar4 + 0x1dc) * 0x38);
      if ((*(byte *)(param_1 + 0xc79) >> 5 & 1) == 0) {
        *(undefined8 *)(puVar4 + 0x188) = *(undefined8 *)(param_2 + 4);
        thunk_FUN_00aa8a48(__dest,0,"lws_free");
      }
      else {
        *(void **)(puVar4 + 0x188) = __dest;
      }
      uVar5 = FUN_00aa8a78((long)*(int *)(puVar4 + 0x1dc) << 3,"same vh list");
      *(undefined8 *)(puVar4 + 0x1a8) = uVar5;
                    /* try { // try from 00aa7bb4 to 00ba7bc7 has its CatchHandler @ 00aa7c28 */
      *(undefined8 *)(puVar4 + 0x160) = *(undefined8 *)(param_2 + 0x32);
                    /* try { // try from 00aa7bc8 to 00ba7c23 has its CatchHandler @ 00aa79dc */
      pcVar6 = "off";
      if (((*(byte *)(*(long *)(puVar4 + 0x150) + 0xc78) >> 5 & 1) == 0) &&
         (pcVar6 = "on", (puVar4[0x1d8] & 0x20) != 0)) {
        pcVar6 = "off";
      }
      _lws_log(4,"Creating Vhost \'%s\' port %d, %d protocols, IPv6 %s\n",
               *(undefined8 *)(puVar4 + 0x170),*param_2,*(undefined4 *)(puVar4 + 0x1dc),pcVar6);
      for (plVar10 = *(long **)(param_2 + 0x32); plVar10 != (long *)0x0; plVar10 = (long *)*plVar10)
      {
        _lws_log(4,"   mounting %s%s to %s\n",
                 (&PTR_s_http____01c6f9d0)[*(byte *)((long)plVar10 + 0x4d)],plVar10[2],plVar10[1]);
        for (plVar12 = (long *)plVar10[7]; plVar12 != (long *)0x0; plVar12 = (long *)*plVar12) {
          iVar3 = *(int *)(puVar4 + 0x1dc);
          if (iVar3 < 1) {
            if (iVar3 == 0) goto LAB_00aa7c70;
          }
          else {
            pcVar6 = (char *)plVar12[3];
            puVar11 = *(undefined8 **)(puVar4 + 0x188);
            lVar8 = 0;
            do {
              iVar2 = strcmp(pcVar6,(char *)*puVar11);
              if (iVar2 == 0) {
                plVar12[3] = lVar8;
                iVar2 = (int)lVar8;
                    /* try { // try from 00aa7c24 to 00ba7c27 has its CatchHandler @ 00aa7c28 */
                goto joined_r0x00aa7c28;
              }
              lVar8 = lVar8 + 1;
              puVar11 = puVar11 + 7;
            } while (lVar8 < iVar3);
            iVar2 = (int)lVar8;
joined_r0x00aa7c28:
                    /* catch() { ... } // from try @ 00aa7bb4 with catch @ 00aa7c28
                       catch() { ... } // from try @ 00aa7c24 with catch @ 00aa7c28
                       try { // try from 00aa7c28 to 00ba7c43 has its CatchHandler @ 00aa79dc */
            if (iVar2 == iVar3) {
LAB_00aa7c70:
              _lws_log(1,"ignoring unknown interpret protocol %s\n",plVar12[3]);
            }
          }
        }
      }
      *(undefined8 *)(puVar4 + 0x1c0) = *(undefined8 *)(param_2 + 6);
      uVar1 = *param_2;
      *(undefined4 *)(puVar4 + 0x1d4) = 0;
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 0x1d0) = uVar1;
      if (*(long *)(param_2 + 0x14) == 0) {
        pcVar6 = getenv("http_proxy");
        if (pcVar6 != (char *)0x0) {
          lws_set_proxy(puVar4,pcVar6);
        }
      }
      else {
        if (param_2[0x16] != 0) {
          *(undefined4 *)(puVar4 + 0x1d4) = param_2[0x16];
        }
        lws_set_proxy(puVar4);
      }
      *(undefined4 *)(puVar4 + 0x1e8) = param_2[0x1e];
      *(undefined8 *)(puVar4 + 0x1e0) = *(undefined8 *)(param_2 + 0x1c);
      if ((char)puVar4[0x1d9] < '\0') {
        _lws_log(4,"   STS enabled\n");
      }
      iVar3 = lws_context_init_server_ssl(param_2,puVar4);
      if ((iVar3 == 0) && (iVar3 = FUN_00aae1b8(param_2,puVar4), iVar3 == 0)) {
        iVar3 = FUN_00aafdb8(param_2,puVar4);
        plVar10 = (long *)(param_1 + 0x830);
        if (iVar3 == 0) {
          do {
            plVar12 = plVar10;
            lVar8 = *plVar12;
            plVar10 = (long *)(lVar8 + 0x158);
          } while (lVar8 != 0);
          *plVar12 = (long)puVar4;
          if ((*(byte *)(param_1 + 0xc94) >> 4 & 1) != 0) {
            lws_protocol_init(param_1);
            return puVar4;
          }
          return puVar4;
        }
        _lws_log(1,"init server failed\n");
      }
                    /* try { // try from 00aa7d84 to 00ba7ecf has its CatchHandler @ 00aa7d84
                       catch() { ... } // from try @ 00aa7d84 with catch @ 00aa7d84
                       catch() { ... } // from try @ 00aa7fa0 with catch @ 00aa7d84 */
      thunk_FUN_00aa8a48(puVar4,0,"lws_free");
    }
  }
  return (undefined1 *)0x0;
}

