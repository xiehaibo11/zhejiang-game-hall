
int lws_read(long *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long local_38;
  
                    /* try { // try from 00ab6dac to 00bb6db3 has its CatchHandler @ 00ab73c4 */
                    /* try { // try from 00ab6dc8 to 00bb6e2b has its CatchHandler @ 00ab73d0 */
  iVar3 = 0;
  local_38 = param_2;
  switch(*(undefined1 *)((long)param_1 + 0x2ff)) {
  case 0:
    *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) & 0xfffffffe;
  case 2:
    if (*param_1 == 0) {
                    /* try { // try from 00ab6e2c to 00bb6edf has its CatchHandler @ 00ab6b94 */
      _lws_log(1,"%s: LWSS_HTTP_HEADERS: NULL ah\n","lws_read");
    }
    lwsl_hexdump(param_2,param_3);
    iVar3 = FUN_00aa9774(param_1,&local_38,param_3);
    lVar2 = local_38;
    if ((iVar3 != 0) || (iVar3 = FUN_00ab1818(param_1,&local_38,param_3), iVar3 != 0))
    goto LAB_00ab6ee8;
    if ((*(char *)((long)param_1 + 0x2fe) != '\f') &&
       (((*(byte *)((long)param_1 + 0x2f4) & 1) != 0 && (*(char *)((long)param_1 + 0x2ff) == '\x03')
        ))) {
      param_1[0x2c] = param_1[0x2b];
      if (param_1[0x2b] == 0) {
LAB_00ab6f60:
        lws_set_timeout(param_1,0,0);
        _lws_log(4,"LWS_CALLBACK_HTTP_BODY_COMPLETION\n");
                    /* try { // try from 00ab6f8c to 00bb6f93 has its CatchHandler @ 00ab73b4 */
                    /* try { // try from 00ab6f94 to 00bb6fd3 has its CatchHandler @ 00ab6b94 */
        iVar3 = (**(code **)(param_1[0x49] + 8))(param_1,0xe,param_1[0x4e],0,0);
        if (iVar3 != 0) {
LAB_00ab6ee8:
          FUN_00a9f034(param_1,0);
          return -1;
        }
        if ((*(byte *)((long)param_1 + 0x2f4) >> 1 & 1) != 0) {
          *(undefined1 *)((long)param_1 + 0x2ff) = 0xf;
        }
      }
      else {
        param_3 = (lVar2 + param_3) - local_38;
switchD_00ab6dd4_caseD_3:
        if ((param_3 != 0) && (uVar4 = param_1[0x2c], uVar4 != 0)) {
          uVar1 = uVar4;
          if (param_3 <= uVar4) {
            uVar1 = param_3;
          }
          param_1[0x2c] = uVar4 - uVar1;
                    /* try { // try from 00ab6ee0 to 00bb6eff has its CatchHandler @ 00ab73bc */
          iVar3 = (**(code **)(param_1[0x49] + 8))(param_1,0xd,param_1[0x4e],local_38,uVar1);
          if (iVar3 != 0) goto LAB_00ab6ee8;
          local_38 = local_38 + uVar1;
                    /* try { // try from 00ab6f40 to 00bb6f4b has its CatchHandler @ 00ab73c8 */
          if (param_1[0x2c] == 0) goto LAB_00ab6f60;
          lws_set_timeout(param_1,10,*(undefined4 *)(param_1[0x44] + 0xc80));
        }
      }
    }
    break;
  case 1:
    goto switchD_00ab6dd4_caseD_1;
  case 3:
    goto switchD_00ab6dd4_caseD_3;
  default:
    _lws_log(1,"%s: Unhandled state %d\n","lws_read",*(undefined1 *)((long)param_1 + 0x2ff));
    break;
  case 5:
  case 8:
  case 10:
  case 0xc:
    iVar3 = FUN_00aa9774(param_1,&local_38,param_3,param_2);
    if ((iVar3 != 0) ||
       ((*(char *)((long)param_1 + 0x2fe) == '\x03' &&
        (iVar3 = FUN_00ab3094(param_1,&local_38,param_3), iVar3 < 0)))) goto LAB_00ab6ee8;
    break;
  case 6:
    break;
  }
  iVar3 = (int)local_38 - (int)param_2;
switchD_00ab6dd4_caseD_1:
  return iVar3;
}

