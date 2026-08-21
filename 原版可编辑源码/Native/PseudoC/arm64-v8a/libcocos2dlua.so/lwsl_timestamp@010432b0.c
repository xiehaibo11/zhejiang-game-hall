
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
  ptVar1 = (tm *)0x0;
  if (ptVar2 != (tm *)0x0) {
    ptVar1 = &local_78;
  }
  *param_2 = 0;
  if (param_1 < 0x80) {
    lVar5 = 0;
    switch(param_1) {
    case 1:
      break;
    case 2:
      lVar5 = 1;
      break;
    default:
      goto switchD_0104332c_caseD_3;
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
  else {
                    /* try { // try from 01043338 to 0114333b has its CatchHandler @ 010433f0 */
                    /* try { // try from 0104333c to 011433e3 has its CatchHandler @ 010431c8 */
    if (param_1 < 0x200) {
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
  }
  uVar3 = FUN_01051848(0);
  uVar4 = uVar3 / 100;
  if (ptVar2 == (tm *)0x0) {
                    /* try { // try from 01043460 to 01143467 has its CatchHandler @ 0104351c */
                    /* try { // try from 01043468 to 01143537 has its CatchHandler @ 01043418 */
    lws_snprintf(param_2,(long)param_3,"[%llu:%04d] %s: ",uVar3 / 1000000,
                 (int)uVar4 + (int)(uVar4 / 10000) * -10000,(&PTR_DAT_01727bf8)[lVar5]);
  }
  else {
                    /* try { // try from 010433e4 to 011433ef has its CatchHandler @ 010433f0 */
                    /* catch() { ... } // from try @ 01043338 with catch @ 010433f0
                       catch() { ... } // from try @ 010433e4 with catch @ 010433f0
                       try { // try from 010433f0 to 01143407 has its CatchHandler @ 010431c8 */
                    /* catch() { ... } // from try @ 01043468 with catch @ 01043418 */
    lws_snprintf(param_2,(long)param_3,"[%04d/%02d/%02d %02d:%02d:%02d:%04d] %s: ",
                 ptVar1->tm_year + 0x76c,ptVar1->tm_mon + 1,ptVar1->tm_mday,ptVar1->tm_hour,
                 ptVar1->tm_min,ptVar1->tm_sec,(int)uVar4 + (int)(uVar4 / 10000) * -10000,
                 (&PTR_DAT_01727bf8)[lVar5]);
  }
switchD_0104332c_caseD_3:
  return;
}

