
void lwsl_timestamp(int param_1,undefined1 *param_2,int param_3)

{
  tm *ptVar1;
  tm *ptVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  tm local_78;
  time_t local_38;
  
  local_38 = time((time_t *)0x0);
  ptVar2 = localtime_r(&local_38,&local_78);
                    /* catch() { ... } // from try @ 00aa0ad8 with catch @ 00aa0b70 */
  ptVar1 = (tm *)0x0;
  if (ptVar2 != (tm *)0x0) {
    ptVar1 = &local_78;
  }
  *param_2 = 0;
  if (param_1 < 0x80) {
                    /* catch() { ... } // from try @ 00aa0af8 with catch @ 00aa0b8c */
    lVar5 = 0;
    switch(param_1) {
    case 1:
      break;
    case 2:
      lVar5 = 1;
      break;
    default:
      goto switchD_00aa0ba8_caseD_3;
    case 4:
      lVar5 = 2;
      break;
    case 8:
      lVar5 = 3;
      break;
    case 0x10:
      lVar5 = 4;
      break;
    case 0x20:
      lVar5 = 5;
      break;
    case 0x40:
      lVar5 = 6;
    }
  }
  else if (param_1 < 0x200) {
    if (param_1 == 0x80) {
      lVar5 = 7;
    }
    else {
      if (param_1 != 0x100) {
        return;
      }
      lVar5 = 8;
    }
  }
  else if (param_1 == 0x200) {
    lVar5 = 9;
  }
  else {
    if (param_1 != 0x400) {
      return;
    }
    lVar5 = 10;
  }
  uVar3 = FUN_00aaf0c4(0);
  uVar4 = uVar3 / 100;
  if (ptVar2 == (tm *)0x0) {
    lws_snprintf(param_2,(long)param_3,"[%llu:%04d] %s: ",uVar3 / 1000000,
                 (int)uVar4 + (int)(uVar4 / 10000) * -10000,(&PTR_DAT_01c6f8a0)[lVar5]);
  }
  else {
    lws_snprintf(param_2,(long)param_3,"[%04d/%02d/%02d %02d:%02d:%02d:%04d] %s: ",
                 ptVar1->tm_year + 0x76c,ptVar1->tm_mon + 1,ptVar1->tm_mday,ptVar1->tm_hour,
                 ptVar1->tm_min,ptVar1->tm_sec,(int)uVar4 + (int)(uVar4 / 10000) * -10000,
                 (&PTR_DAT_01c6f8a0)[lVar5]);
  }
switchD_00aa0ba8_caseD_3:
  return;
}

