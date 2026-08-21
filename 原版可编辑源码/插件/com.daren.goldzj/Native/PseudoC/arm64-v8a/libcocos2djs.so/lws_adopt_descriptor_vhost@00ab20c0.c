
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
  
                    /* try { // try from 00ab20c0 to 00bb20c7 has its CatchHandler @ 00ab20e8 */
                    /* try { // try from 00ab20c8 to 00bb2173 has its CatchHandler @ 00ab2004 */
  lVar6 = *(long *)(param_1 + 0x150);
                    /* catch() { ... } // from try @ 00ab20c0 with catch @ 00ab20e8 */
  lVar4 = FUN_00ab1f74();
  if (lVar4 == 0) {
    if ((param_2 & 10) != 2) {
      return 0;
    }
    goto LAB_00ab2220;
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
                    /* try { // try from 00ab21b4 to 00bb21bf has its CatchHandler @ 00ab22cc */
                    /* try { // try from 00ab21c0 to 00bb2257 has its CatchHandler @ 00ab2174 */
      _lws_log(1,"Protocol %s not enabled on vhost %s\n",param_4,
               *(undefined8 *)(*(long *)(lVar4 + 0x228) + 0x170));
    }
    else {
      iVar3 = FUN_00a9fbb0(lVar4);
      if (iVar3 == 0) {
        if ((param_2 >> 3 & 1) != 0) {
          *(undefined4 *)(lVar4 + 0x2d0) = 0xffffffff;
          FUN_00a9fa04(lVar4,*(undefined8 *)(lVar4 + 0x248));
          lws_union_transition(lVar4,3);
          FUN_00ab1e6c(lVar4);
          return lVar4;
        }
        uVar8 = param_2 & 1;
        goto LAB_00ab224c;
      }
      _lws_log(4,"OOM trying to get user_space\n");
    }
    _lws_log(4,"%s: exiting on bail\n","lws_adopt_descriptor_vhost");
    if (param_5 != 0) {
      *(undefined8 *)(param_5 + 0x238) = *(undefined8 *)(lVar4 + 0x240);
    }
    if (*(long *)(lVar4 + 0x270) != 0) {
      thunk_FUN_00aa8a48(*(long *)(lVar4 + 0x270),0,"lws_free");
    }
    thunk_FUN_00aa8a48(lVar4,0,"lws_free");
LAB_00ab2220:
    close(param_3);
    return 0;
  }
                    /* try { // try from 00ab2174 to 00bb21b3 has its CatchHandler @ 00ab2174
                       catch() { ... } // from try @ 00ab2174 with catch @ 00ab2174
                       catch() { ... } // from try @ 00ab21c0 with catch @ 00ab2174
                       catch() { ... } // from try @ 00ab2270 with catch @ 00ab2174 */
  if ((param_2 & 1) == 0) {
    FUN_00a9fa04(lVar4,*(long *)(param_1 + 0x188) + (ulong)*(byte *)(param_1 + 0x202) * 0x38);
    lws_union_transition(lVar4,0xc);
    bVar2 = (param_2 & 2) == 0;
    uVar8 = 0;
    uVar7 = param_2 >> 1 & 1;
  }
  else {
    uVar8 = 1;
    *(ulong *)(lVar4 + 0x248) =
         *(long *)(param_1 + 0x188) + (ulong)*(byte *)(param_1 + 0x201) * 0x38;
LAB_00ab224c:
    bVar2 = (param_2 & 2) == 0;
    uVar7 = param_2 >> 1 & 1;
                    /* try { // try from 00ab2258 to 00bb226f has its CatchHandler @ 00ab22c8 */
    if ((uVar8 != 0) && (!bVar2)) {
                    /* try { // try from 00ab2270 to 00bb22e7 has its CatchHandler @ 00ab2174 */
      lws_set_timeout(lVar4,3,*(undefined4 *)(lVar6 + 0xc80));
      uVar8 = 1;
    }
  }
  uVar1 = 0x13;
  if (uVar8 == 0) {
    uVar1 = (param_2 & 2) >> 1 ^ 0x3f;
  }
  if ((((param_2 >> 2 & 1) == 0) || (*(int *)(*(long *)(lVar4 + 0x228) + 0x1f8) == 0)) || (bVar2)) {
    if (uVar8 == 0) {
      *(char *)(lVar4 + 0x2fe) = '\r' - (char)((param_2 & 2) >> 1);
    }
    FUN_00ab53b0(lVar4,*(undefined4 *)(lVar4 + 0x2d0));
    iVar3 = FUN_00aa3824(lVar6,lVar4);
    if (iVar3 != 0) {
      _lws_log(1,"%s: fail inserting socket\n","lws_adopt_descriptor_vhost");
      goto joined_r0x00ab2314;
    }
  }
  else {
    *(byte *)(lVar4 + 0x2fe) = ((byte)(uVar8 << 1) ^ 2) + 7;
    FUN_00ab53b0(lVar4,*(undefined4 *)(lVar4 + 0x2d0));
    iVar3 = lws_server_socket_service_ssl(lVar4,param_3);
                    /* catch() { ... } // from try @ 00ab2258 with catch @ 00ab22c8 */
    if (iVar3 != 0) goto joined_r0x00ab2314;
  }
  iVar3 = (**(code **)(*(long *)(lVar4 + 0x248) + 8))
                    (lVar4,uVar1,*(undefined8 *)(lVar4 + 0x270),0,0);
  if (iVar3 == 0) {
    if (uVar8 != 0) {
      FUN_00aa50ac(lVar4,0);
      return lVar4;
    }
    return lVar4;
  }
joined_r0x00ab2314:
  if (uVar7 == 0) {
    return 0;
  }
  FUN_00a9f034(lVar4,0);
  return 0;
}

