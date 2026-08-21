
int lws_read(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long local_38;
  
                    /* catch() { ... } // from try @ 0105954c with catch @ 01059514 */
                    /* try { // try from 01059544 to 0115954b has its CatchHandler @ 01059600 */
                    /* try { // try from 0105954c to 0115961b has its CatchHandler @ 01059514 */
  iVar3 = 0;
  local_38 = param_2;
  switch(*(undefined1 *)((long)param_1 + 0x2ff)) {
  case 0:
    *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) & 0xfffffffe;
  case 2:
    if (*param_1 == 0) {
      _lws_log(1,"%s: LWSS_HTTP_HEADERS: NULL ah\n","lws_read");
    }
    lwsl_hexdump(param_2,param_3);
    iVar3 = FUN_0104bef8(param_1,&local_38,param_3);
    lVar2 = local_38;
    if ((iVar3 != 0) || (iVar3 = FUN_01053f9c(param_1,&local_38,param_3), iVar3 != 0))
    goto LAB_0105966c;
                    /* catch() { ... } // from try @ 01059544 with catch @ 01059600 */
    if ((*(char *)((long)param_1 + 0x2fe) != '\f') &&
       (((*(byte *)((long)param_1 + 0x2f4) & 1) != 0 && (*(char *)((long)param_1 + 0x2ff) == '\x03')
        ))) {
                    /* try { // try from 0105961c to 011596fb has its CatchHandler @ 0105961c
                       catch() { ... } // from try @ 0105961c with catch @ 0105961c
                       catch() { ... } // from try @ 01059728 with catch @ 0105961c */
      param_1[0x2c] = param_1[0x2b];
      if (param_1[0x2b] == 0) {
LAB_010596e4:
        lws_set_timeout(param_1,0,0);
                    /* try { // try from 010596fc to 01159727 has its CatchHandler @ 01059780 */
        _lws_log(4,"LWS_CALLBACK_HTTP_BODY_COMPLETION\n");
        iVar3 = (**(code **)(param_1[0x49] + 8))(param_1,0xe,param_1[0x4e],0,0);
        if (iVar3 != 0) {
LAB_0105966c:
          FUN_010417b8(param_1,0);
          return -1;
        }
                    /* try { // try from 01059728 to 011597b7 has its CatchHandler @ 0105961c */
        if ((*(byte *)((long)param_1 + 0x2f4) >> 1 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x2ff) = 0xf;
        }
      }
      else {
        param_3 = (lVar2 + param_3) - local_38;
switchD_01059558_caseD_3:
        if ((param_3 != 0) && (uVar4 = param_1[0x2c], uVar4 != 0)) {
          uVar1 = uVar4;
          if (param_3 <= uVar4) {
            uVar1 = param_3;
          }
          param_1[0x2c] = uVar4 - uVar1;
          iVar3 = (**(code **)(param_1[0x49] + 8))(param_1,0xd,param_1[0x4e],local_38,uVar1);
          if (iVar3 != 0) goto LAB_0105966c;
          local_38 = local_38 + uVar1;
          if (param_1[0x2c] == 0) goto LAB_010596e4;
          lws_set_timeout(param_1,10,*(undefined4 *)(param_1[0x44] + 0xc80));
        }
      }
    }
    break;
  case 1:
    goto switchD_01059558_caseD_1;
  case 3:
    goto switchD_01059558_caseD_3;
  default:
    _lws_log(1,"%s: Unhandled state %d\n","lws_read",*(undefined1 *)((long)param_1 + 0x2ff));
    break;
  case 5:
  case 8:
  case 10:
  case 0xc:
    iVar3 = FUN_0104bef8(param_1,&local_38,param_3,param_2);
    if ((iVar3 != 0) ||
       ((*(char *)((long)param_1 + 0x2fe) == '\x03' &&
        (iVar3 = FUN_01055818(param_1,&local_38,param_3), iVar3 < 0)))) goto LAB_0105966c;
    break;
  case 6:
    break;
  }
  iVar3 = (int)local_38 - (int)param_2;
switchD_01059558_caseD_1:
  return iVar3;
}

