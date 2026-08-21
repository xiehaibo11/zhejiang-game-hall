
long lws_adopt_descriptor_vhost(long param_1,uint param_2,int param_3,long param_4,long param_5)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  
                    /* catch() { ... } // from try @ 010543d8 with catch @ 01054844 */
  lVar6 = *(long *)(param_1 + 0x150);
  lVar4 = FUN_010546f8();
  if (lVar4 == 0) {
    if ((param_2 & 10) != 2) {
      return 0;
    }
    goto LAB_010549a4;
  }
  if (param_5 != 0) {
    *(long *)(lVar4 + 0x230) = param_5;
    *(undefined8 *)(lVar4 + 0x240) = *(undefined8 *)(param_5 + 0x238);
    *(long *)(param_5 + 0x238) = lVar4;
    if ((param_2 >> 3 & 1) != 0) {
      *(uint *)(lVar4 + 0x2f4) = *(uint *)(lVar4 + 0x2f4) | 0x100000;
    }
  }
  *(int *)(lVar4 + 0x2d0) = param_3;
  if (param_4 != 0) {
    lVar5 = lws_vhost_name_to_protocol(*(undefined8 *)(lVar4 + 0x228),param_4);
    *(long *)(lVar4 + 0x248) = lVar5;
    if (lVar5 == 0) {
      _lws_log(1,"Protocol %s not enabled on vhost %s\n",param_4,
               *(undefined8 *)(*(long *)(lVar4 + 0x228) + 0x170));
    }
    else {
      iVar3 = FUN_01042334(lVar4);
      if (iVar3 == 0) {
        if ((param_2 >> 3 & 1) != 0) {
          *(undefined4 *)(lVar4 + 0x2d0) = 0xffffffff;
          FUN_01042188(lVar4,*(undefined8 *)(lVar4 + 0x248));
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01054b70 with catch @ 01054b14
                       catch(type#1 @ 00000000) { ... } // from try @ 01054d44 with catch @ 01054b14
                        */
          lws_union_transition(lVar4,3);
          FUN_010545f0(lVar4);
          return lVar4;
        }
        uVar8 = param_2 & 1;
        goto LAB_010549d0;
      }
      _lws_log(4,"OOM trying to get user_space\n");
    }
    _lws_log(4,"%s: exiting on bail\n","lws_adopt_descriptor_vhost");
    if (param_5 != 0) {
      *(undefined8 *)(param_5 + 0x238) = *(undefined8 *)(lVar4 + 0x240);
    }
    if (*(long *)(lVar4 + 0x270) != 0) {
      thunk_FUN_0104b1cc(*(long *)(lVar4 + 0x270),0,"lws_free");
    }
    thunk_FUN_0104b1cc(lVar4,0,"lws_free");
LAB_010549a4:
                    /* try { // try from 010549a4 to 011549d7 has its CatchHandler @ 010549a4
                       catch() { ... } // from try @ 010549a4 with catch @ 010549a4
                       catch() { ... } // from try @ 01054a74 with catch @ 010549a4 */
    close(param_3);
                    /* catch() { ... } // from try @ 01054a38 with catch @ 01054ae0 */
    return 0;
  }
  if ((param_2 & 1) == 0) {
    FUN_01042188(lVar4,*(long *)(param_1 + 0x188) + (ulong)*(byte *)(param_1 + 0x202) * 0x38);
    lws_union_transition(lVar4,0xc);
    bVar2 = (param_2 & 2) == 0;
    uVar8 = 0;
    uVar7 = param_2 >> 1 & 1;
  }
  else {
    uVar8 = 1;
    *(ulong *)(lVar4 + 0x248) =
         *(long *)(param_1 + 0x188) + (ulong)*(byte *)(param_1 + 0x201) * 0x38;
LAB_010549d0:
    bVar2 = (param_2 & 2) == 0;
                    /* try { // try from 010549d8 to 011549ef has its CatchHandler @ 01054acc */
    uVar7 = param_2 >> 1 & 1;
    if ((uVar8 != 0) && (!bVar2)) {
      lws_set_timeout(lVar4,3,*(undefined4 *)(lVar6 + 0xc80));
      uVar8 = 1;
    }
  }
  uVar1 = 0x13;
                    /* try { // try from 01054a0c to 01154a17 has its CatchHandler @ 01054abc */
  if (uVar8 == 0) {
    uVar1 = (param_2 & 2) >> 1 ^ 0x3f;
  }
  if ((((param_2 >> 2 & 1) == 0) || (*(int *)(*(long *)(lVar4 + 0x228) + 0x1f8) == 0)) || (bVar2)) {
    if (uVar8 == 0) {
      *(char *)(lVar4 + 0x2fe) = '\r' - (char)((param_2 & 2) >> 1);
    }
    FUN_01057b34(lVar4,*(undefined4 *)(lVar4 + 0x2d0));
                    /* try { // try from 01054a74 to 01154b0b has its CatchHandler @ 010549a4 */
    iVar3 = FUN_01045fa8(lVar6,lVar4);
    if (iVar3 != 0) {
      _lws_log(1,"%s: fail inserting socket\n","lws_adopt_descriptor_vhost");
      goto joined_r0x01054a98;
    }
  }
  else {
                    /* try { // try from 01054a38 to 01154a73 has its CatchHandler @ 01054ae0 */
    *(byte *)(lVar4 + 0x2fe) = ((byte)(uVar8 << 1) ^ 2) + 7;
    FUN_01057b34(lVar4,*(undefined4 *)(lVar4 + 0x2d0));
    iVar3 = lws_server_socket_service_ssl(lVar4,param_3);
    if (iVar3 != 0) goto joined_r0x01054a98;
  }
                    /* catch() { ... } // from try @ 01054a0c with catch @ 01054abc */
  iVar3 = (**(code **)(*(long *)(lVar4 + 0x248) + 8))
                    (lVar4,uVar1,*(undefined8 *)(lVar4 + 0x270),0,0);
  if (iVar3 == 0) {
    if (uVar8 != 0) {
      FUN_01047830(lVar4,0);
      return lVar4;
    }
    return lVar4;
  }
joined_r0x01054a98:
  if (uVar7 == 0) {
    return 0;
  }
                    /* catch() { ... } // from try @ 010549d8 with catch @ 01054acc */
  FUN_010417b8(lVar4,0);
  return 0;
}

