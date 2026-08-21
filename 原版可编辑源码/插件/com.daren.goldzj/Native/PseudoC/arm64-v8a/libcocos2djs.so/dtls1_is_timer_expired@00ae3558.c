
bool dtls1_is_timer_expired(long param_1)

{
  long lVar1;
  long lVar2;
  timeval local_30;
  
                    /* try { // try from 00ae356c to 00be357b has its CatchHandler @ 00ae3648 */
                    /* try { // try from 00ae357c to 00be358b has its CatchHandler @ 00ae3628 */
  if ((*(long *)(*(long *)(param_1 + 0x98) + 0x1e8) == 0) &&
     (*(long *)(*(long *)(param_1 + 0x98) + 0x1f0) == 0)) {
    return false;
  }
  gettimeofday(&local_30,(__timezone_ptr_t)0x0);
                    /* try { // try from 00ae358c to 00be359b has its CatchHandler @ 00ae3624 */
  lVar1 = *(long *)(param_1 + 0x98);
                    /* try { // try from 00ae359c to 00be35ab has its CatchHandler @ 00ae35e8 */
                    /* try { // try from 00ae35ac to 00be35b3 has its CatchHandler @ 00ae35e4 */
  if ((local_30.tv_sec <= *(long *)(lVar1 + 0x1e8)) &&
     ((*(long *)(lVar1 + 0x1e8) != local_30.tv_sec || (local_30.tv_usec < *(long *)(lVar1 + 0x1f0)))
     )) {
                    /* try { // try from 00ae35cc to 00be35db has its CatchHandler @ 00ae35dc */
    lVar2 = *(long *)(lVar1 + 0x1e8) - local_30.tv_sec;
    lVar1 = *(long *)(lVar1 + 0x1f0) - local_30.tv_usec;
                    /* catch() { ... } // from try @ 00ae3138 with catch @ 00ae35dc
                       catch() { ... } // from try @ 00ae35cc with catch @ 00ae35dc
                       try { // try from 00ae35dc to 00be372f has its CatchHandler @ 00ae2754 */
    if (lVar1 < 0) {
                    /* catch() { ... } // from try @ 00ae30e4 with catch @ 00ae35e0
                       catch() { ... } // from try @ 00ae35b4 with catch @ 00ae35e0 */
                    /* catch() { ... } // from try @ 00ae2dec with catch @ 00ae35e4
                       catch() { ... } // from try @ 00ae35ac with catch @ 00ae35e4 */
                    /* catch() { ... } // from try @ 00ae34a8 with catch @ 00ae35e8
                       catch() { ... } // from try @ 00ae359c with catch @ 00ae35e8 */
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 1000000;
    }
    if ((14999 < lVar1) || (lVar2 != 0)) {
      if (0 < lVar2) {
        return false;
      }
      goto LAB_00ae360c;
    }
  }
  lVar1 = 0;
LAB_00ae360c:
                    /* catch() { ... } // from try @ 00ae32f8 with catch @ 00ae3624
                       catch() { ... } // from try @ 00ae358c with catch @ 00ae3624 */
                    /* catch() { ... } // from try @ 00ae2ca8 with catch @ 00ae3628
                       catch() { ... } // from try @ 00ae357c with catch @ 00ae3628 */
  return lVar1 < 1;
}

