
void FUN_00a5ef7c(uint param_1,uint param_2,int param_3,undefined1 *param_4,undefined8 param_5,
                 undefined8 param_6,long *param_7)

{
  char *pcVar1;
  long lVar2;
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
  
                    /* try { // try from 00a5ef84 to 00b5efbb has its CatchHandler @ 00a5f274 */
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 00a5efcc to 00b5efff has its CatchHandler @ 00a5f288 */
  if ((((param_7 == (long *)0x0) || (lVar9 = *param_7, lVar9 == 0)) ||
      (*(long *)(lVar9 + 0x2e8) == 0)) || (1 < param_1)) goto LAB_00a5f140;
  pcVar10 = "SSLv3";
  switch(param_2) {
  case 0x300:
    break;
  case 0x301:
    pcVar10 = "TLSv1.0";
                    /* try { // try from 00a5f008 to 00b5f017 has its CatchHandler @ 00a5f258 */
    break;
  case 0x302:
                    /* try { // try from 00a5f030 to 00b5f047 has its CatchHandler @ 00a5f250 */
    pcVar10 = "TLSv1.1";
    break;
  case 0x303:
    pcVar10 = "TLSv1.2";
    break;
  default:
    if (param_2 != 0) {
      if (param_2 != 2) {
        pcVar10 = acStack_488;
        FUN_00a241ac(acStack_488,0x20,&DAT_013ca05b,param_2);
        break;
      }
                    /* try { // try from 00a5f018 to 00b5f027 has its CatchHandler @ 00a5f254 */
      uVar7 = *param_4;
      pcVar10 = "SSLv2";
      pcVar4 = "";
      goto switchD_00a5f1b8_caseD_3;
    }
    goto LAB_00a5f120;
  }
                    /* try { // try from 00a5f068 to 00b5f07b has its CatchHandler @ 00a5f248 */
  pcVar4 = "";
  if (((param_2 & 0xffffff00) == 0x300) && (param_3 != 0)) {
                    /* try { // try from 00a5f07c to 00b5f0a7 has its CatchHandler @ 00a5ecf8 */
    pcVar4 = "TLS alert";
    switch(param_3) {
    case 0x14:
                    /* try { // try from 00a5f0a8 to 00b5f0bb has its CatchHandler @ 00a5f278 */
      pcVar4 = "TLS change cipher";
      break;
    case 0x15:
      break;
    case 0x16:
      pcVar4 = "TLS handshake";
      break;
    case 0x17:
      pcVar4 = "TLS app data";
      break;
    default:
      if (param_3 == 0x100) {
        pcVar4 = "TLS header";
        goto LAB_00a5f0c0;
      }
      pcVar4 = "TLS Unknown";
    }
    uVar7 = *param_4;
LAB_00a5f194:
    pcVar5 = "Hello request";
    uVar6 = 0;
    switch(uVar7) {
    case 0:
      break;
    case 1:
      pcVar5 = "Client hello";
      uVar6 = uVar7;
                    /* try { // try from 00a5f1c4 to 00b5f1cb has its CatchHandler @ 00a5f24c */
      break;
    case 2:
      pcVar5 = "Server hello";
      uVar6 = uVar7;
      break;
    default:
      goto switchD_00a5f1b8_caseD_3;
    case 4:
      pcVar5 = "Newsession Ticket";
      uVar6 = uVar7;
      break;
    case 0xb:
      pcVar5 = "Certificate";
      uVar6 = uVar7;
      break;
    case 0xc:
      pcVar5 = "Server key exchange";
      uVar6 = uVar7;
      break;
    case 0xd:
                    /* try { // try from 00a5f1f8 to 00b5f1ff has its CatchHandler @ 00a5f248 */
      pcVar5 = "Request CERT";
      uVar6 = uVar7;
      break;
    case 0xe:
      pcVar5 = "Server finished";
      uVar6 = uVar7;
      break;
    case 0xf:
                    /* try { // try from 00a5f210 to 00b5f217 has its CatchHandler @ 00a5f244 */
      pcVar5 = "CERT verify";
      uVar6 = uVar7;
      break;
    case 0x10:
      pcVar5 = "Client key exchange";
      uVar6 = uVar7;
      break;
    case 0x14:
                    /* try { // try from 00a5f228 to 00b5f22f has its CatchHandler @ 00a5f274 */
      pcVar5 = "Finished";
      uVar6 = uVar7;
                    /* try { // try from 00a5f230 to 00b5f307 has its CatchHandler @ 00a5ecf8 */
      break;
    case 0x16:
      pcVar5 = "Certificate Status";
      uVar6 = uVar7;
    }
  }
  else {
LAB_00a5f0c0:
    uVar7 = *param_4;
    if ((param_2 & 0xffffff00) == 0x300) goto LAB_00a5f194;
switchD_00a5f1b8_caseD_3:
                    /* try { // try from 00a5f0cc to 00b5f0df has its CatchHandler @ 00a5f288 */
    pcVar5 = "Unknown";
    uVar6 = uVar7;
  }
  pcVar1 = "OUT";
                    /* try { // try from 00a5f0f0 to 00b5f103 has its CatchHandler @ 00a5f298 */
  if (param_1 == 0) {
    pcVar1 = "IN";
  }
  iVar3 = FUN_00a241ac(auStack_468,0x400,"%s (%s), %s, %s (%d):\n",pcVar10,pcVar1,pcVar4,pcVar5,
                       uVar6);
                    /* try { // try from 00a5f114 to 00b5f127 has its CatchHandler @ 00a5f2d4 */
  FUN_00a38860(lVar9,0,auStack_468,(long)iVar3,0);
LAB_00a5f120:
  uVar8 = 5;
  if (param_1 == 1) {
    uVar8 = 6;
  }
  FUN_00a38860(lVar9,uVar8,param_4,param_5,0);
LAB_00a5f140:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

