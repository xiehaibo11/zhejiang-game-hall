
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
      if ((*(long *)(*(long *)(param_1 + 0x98) + 0x1e8) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x98) + 0x1f0) == 0)) {
        param_4 = (long *)0x0;
      }
      else {
        gettimeofday(&local_30,(__timezone_ptr_t)0x0);
        lVar4 = *(long *)(param_1 + 0x98);
                    /* catch() { ... } // from try @ 00af1d9c with catch @ 00af1fd4 */
        if ((local_30.tv_sec <= *(long *)(lVar4 + 0x1e8)) &&
           ((*(long *)(lVar4 + 0x1e8) != local_30.tv_sec ||
            (local_30.tv_usec < *(long *)(lVar4 + 0x1f0))))) {
                    /* catch() { ... } // from try @ 00af1e68 with catch @ 00af2030 */
                    /* catch() { ... } // from try @ 00af1948 with catch @ 00af2034 */
          lVar3 = *(long *)(lVar4 + 0x1e8);
                    /* catch() { ... } // from try @ 00af1a04 with catch @ 00af2038 */
          param_4[1] = *(long *)(lVar4 + 0x1f0);
          *param_4 = lVar3;
          lVar3 = *param_4 - local_30.tv_sec;
          lVar4 = param_4[1] - local_30.tv_usec;
          *param_4 = lVar3;
          param_4[1] = lVar4;
                    /* catch() { ... } // from try @ 00af1cd4 with catch @ 00af204c */
          if (lVar4 < 0) {
                    /* catch() { ... } // from try @ 00af1a40 with catch @ 00af2050 */
            lVar3 = lVar3 + -1;
            lVar4 = lVar4 + 1000000;
            *param_4 = lVar3;
            param_4[1] = lVar4;
          }
                    /* catch() { ... } // from try @ 00af1bb8 with catch @ 00af2064 */
                    /* catch() { ... } // from try @ 00af1ce0 with catch @ 00af2068
                       catch() { ... } // from try @ 00af1d88 with catch @ 00af2068 */
                    /* catch() { ... } // from try @ 00af1d48 with catch @ 00af206c */
          if ((14999 < lVar4) || (lVar3 != 0)) goto LAB_00af2078;
        }
        *param_4 = 0;
        param_4[1] = 0;
      }
LAB_00af2078:
      uVar1 = (uint)(param_4 != (long *)0x0);
      goto LAB_00af2080;
    }
  }
  else {
    if (iVar2 == 0x4a) {
      uVar1 = dtls1_handle_timeout(param_1);
      goto LAB_00af2080;
    }
    if (iVar2 == 0x78) {
      if (param_3 < 0x100) {
        return 0;
      }
      *(int *)(*(long *)(param_1 + 0x98) + 0x120) = (int)param_3;
      return 1;
    }
    if (iVar2 == 0x79) {
      return 0x100;
    }
  }
                    /* catch() { ... } // from try @ 00af1e8c with catch @ 00af2018 */
  uVar1 = ssl3_ctrl(param_1,param_2,param_3,param_4);
LAB_00af2080:
                    /* catch() { ... } // from try @ 00af1c80 with catch @ 00af208c */
                    /* catch() { ... } // from try @ 00af1c58 with catch @ 00af2090 */
                    /* catch() { ... } // from try @ 00af1b68 with catch @ 00af2094 */
  return (long)(int)uVar1;
}

