
void FUN_00a48594(uint param_1,uint param_2,int param_3,undefined1 *param_4,undefined8 param_5,
                 undefined8 param_6,long *param_7)

{
  long lVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  long lVar9;
  char *pcVar10;
  char acStack_488 [32];
  undefined1 auStack_468 [1024];
  long local_68;
  
                    /* try { // try from 00a485b4 to 00b48607 has its CatchHandler @ 00a485b4
                       catch() { ... } // from try @ 00a485b4 with catch @ 00a485b4
                       catch() { ... } // from try @ 00a48788 with catch @ 00a485b4 */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if ((((param_7 == (long *)0x0) || (lVar9 = *param_7, lVar9 == 0)) ||
      (*(long *)(lVar9 + 0x2e8) == 0)) || (1 < param_1)) goto LAB_00a48758;
                    /* try { // try from 00a48608 to 00b4861f has its CatchHandler @ 00a48814 */
  pcVar10 = "SSLv3";
  switch(param_2) {
  case 0x300:
    break;
  case 0x301:
    pcVar10 = "TLSv1.0";
    break;
  case 0x302:
    pcVar10 = "TLSv1.1";
    break;
  case 0x303:
    pcVar10 = "TLSv1.2";
    break;
  default:
    if (param_2 != 0) {
                    /* try { // try from 00a48628 to 00b48633 has its CatchHandler @ 00a48810 */
      if (param_2 != 2) {
        pcVar10 = acStack_488;
        FUN_00a0e7c4(acStack_488,0x20,&DAT_01897723,param_2);
        break;
      }
      uVar7 = *param_4;
                    /* try { // try from 00a48634 to 00b4863f has its CatchHandler @ 00a4880c */
      pcVar10 = "SSLv2";
                    /* try { // try from 00a48640 to 00b486db has its CatchHandler @ 00a48824 */
      pcVar4 = "";
      goto switchD_00a487d0_caseD_3;
    }
    goto LAB_00a48738;
  }
  pcVar4 = "";
  if (((param_2 & 0xffffff00) == 0x300) && (param_3 != 0)) {
    pcVar4 = "TLS alert";
    switch(param_3) {
    case 0x14:
      pcVar4 = "TLS change cipher";
      break;
    case 0x15:
      break;
    case 0x16:
                    /* try { // try from 00a48788 to 00b4887b has its CatchHandler @ 00a485b4 */
      pcVar4 = "TLS handshake";
      break;
    case 0x17:
      pcVar4 = "TLS app data";
      break;
    default:
      if (param_3 == 0x100) {
        pcVar4 = "TLS header";
        goto LAB_00a486d8;
      }
      pcVar4 = "TLS Unknown";
    }
    uVar7 = *param_4;
LAB_00a487ac:
    pcVar5 = "Hello request";
    uVar6 = 0;
    switch(uVar7) {
    case 0:
      break;
    case 1:
      pcVar5 = "Client hello";
      uVar6 = uVar7;
      break;
    case 2:
      pcVar5 = "Server hello";
      uVar6 = uVar7;
      break;
    default:
      goto switchD_00a487d0_caseD_3;
    case 4:
      pcVar5 = "Newsession Ticket";
      uVar6 = uVar7;
      break;
    case 0xb:
                    /* catch() { ... } // from try @ 00a486dc with catch @ 00a487fc */
      pcVar5 = "Certificate";
      uVar6 = uVar7;
      break;
    case 0xc:
      pcVar5 = "Server key exchange";
      uVar6 = uVar7;
                    /* catch() { ... } // from try @ 00a48634 with catch @ 00a4880c */
      break;
    case 0xd:
                    /* catch() { ... } // from try @ 00a48628 with catch @ 00a48810 */
                    /* catch() { ... } // from try @ 00a48608 with catch @ 00a48814 */
      pcVar5 = "Request CERT";
      uVar6 = uVar7;
      break;
    case 0xe:
      pcVar5 = "Server finished";
      uVar6 = uVar7;
                    /* catch() { ... } // from try @ 00a48640 with catch @ 00a48824
                       catch() { ... } // from try @ 00a4874c with catch @ 00a48824 */
      break;
    case 0xf:
      pcVar5 = "CERT verify";
      uVar6 = uVar7;
      break;
    case 0x10:
      pcVar5 = "Client key exchange";
      uVar6 = uVar7;
      break;
    case 0x14:
      pcVar5 = "Finished";
      uVar6 = uVar7;
      break;
    case 0x16:
      pcVar5 = "Certificate Status";
      uVar6 = uVar7;
    }
  }
  else {
LAB_00a486d8:
    uVar7 = *param_4;
                    /* try { // try from 00a486dc to 00b48743 has its CatchHandler @ 00a487fc */
    if ((param_2 & 0xffffff00) == 0x300) goto LAB_00a487ac;
switchD_00a487d0_caseD_3:
    pcVar5 = "Unknown";
    uVar6 = uVar7;
  }
  pcVar2 = "LOGOUT";
  if (param_1 == 0) {
    pcVar2 = "PLAIN";
  }
  iVar3 = FUN_00a0e7c4(auStack_468,0x400,"%s (%s), %s, %s (%d):\n",pcVar10,pcVar2 + 3,pcVar4,pcVar5,
                       uVar6);
  FUN_00a22e78(lVar9,0,auStack_468,(long)iVar3,0);
LAB_00a48738:
  uVar8 = 5;
  if (param_1 == 1) {
    uVar8 = 6;
  }
                    /* try { // try from 00a4874c to 00b48787 has its CatchHandler @ 00a48824 */
  FUN_00a22e78(lVar9,uVar8,param_4,param_5,0);
LAB_00a48758:
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

