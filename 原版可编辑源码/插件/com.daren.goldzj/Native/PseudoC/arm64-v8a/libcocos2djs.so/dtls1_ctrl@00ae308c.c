
long dtls1_ctrl(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  timeval local_30;
  
  iVar2 = (int)param_2;
  if (iVar2 < 0x4a) {
    if (iVar2 == 0x11) {
      if (param_3 < 0xd0) {
        return 0;
      }
      *(int *)(*(long *)(param_1 + 0x98) + 0x124) = (int)param_3;
      return param_3;
    }
    if (iVar2 == 0x49) {
                    /* try { // try from 00ae30e4 to 00be30eb has its CatchHandler @ 00ae35e0 */
                    /* try { // try from 00ae30ec to 00be3137 has its CatchHandler @ 00ae2754 */
      if ((*(long *)(*(long *)(param_1 + 0x98) + 0x1e8) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x98) + 0x1f0) == 0)) {
        param_4 = (long *)0x0;
      }
      else {
        gettimeofday(&local_30,(__timezone_ptr_t)0x0);
        lVar4 = *(long *)(param_1 + 0x98);
        if ((local_30.tv_sec <= *(long *)(lVar4 + 0x1e8)) &&
           ((*(long *)(lVar4 + 0x1e8) != local_30.tv_sec ||
            (local_30.tv_usec < *(long *)(lVar4 + 0x1f0))))) {
          lVar3 = *(long *)(lVar4 + 0x1e8);
          param_4[1] = *(long *)(lVar4 + 0x1f0);
          *param_4 = lVar3;
          lVar3 = *param_4 - local_30.tv_sec;
          lVar4 = param_4[1] - local_30.tv_usec;
          *param_4 = lVar3;
          param_4[1] = lVar4;
          if (lVar4 < 0) {
            lVar3 = lVar3 + -1;
            lVar4 = lVar4 + 1000000;
            *param_4 = lVar3;
            param_4[1] = lVar4;
          }
          if ((14999 < lVar4) || (lVar3 != 0)) goto LAB_00ae31c4;
        }
        *param_4 = 0;
        param_4[1] = 0;
      }
LAB_00ae31c4:
      uVar1 = (uint)(param_4 != (long *)0x0);
      goto LAB_00ae31cc;
    }
  }
  else {
    if (iVar2 == 0x4a) {
      uVar1 = dtls1_handle_timeout(param_1);
      goto LAB_00ae31cc;
    }
    if (iVar2 == 0x78) {
                    /* try { // try from 00ae3138 to 00be313f has its CatchHandler @ 00ae35dc */
      if (param_3 < 0x100) {
        return 0;
      }
                    /* try { // try from 00ae3140 to 00be32f7 has its CatchHandler @ 00ae2754 */
      *(int *)(*(long *)(param_1 + 0x98) + 0x120) = (int)param_3;
      return 1;
    }
    if (iVar2 == 0x79) {
      return 0x100;
    }
  }
  uVar1 = ssl3_ctrl(param_1,param_2,param_3,param_4);
LAB_00ae31cc:
  return (long)(int)uVar1;
}

