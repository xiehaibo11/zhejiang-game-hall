
/* universe::network::AUpdates::copy(char const*, unsigned long) */

void __thiscall universe::network::AUpdates::copy(AUpdates *this,char *param_1,ulong param_2)

{
  void *__dest;
  
  if (*(void **)this != (void *)0x0) {
    free(*(void **)this);
    *(undefined8 *)this = 0;
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  if (param_2 != 0) {
                    /* try { // try from 00a05464 to 00b0546b has its CatchHandler @ 00a05480 */
    *(ulong *)(this + 8) = param_2;
    *(undefined8 *)(this + 0x10) = 0;
                    /* try { // try from 00a0546c to 00b0558b has its CatchHandler @ 00a05194 */
    __dest = malloc(param_2);
    *(void **)this = __dest;
                    /* catch() { ... } // from try @ 00a052a4 with catch @ 00a05480
                       catch() { ... } // from try @ 00a05464 with catch @ 00a05480 */
                    /* catch() { ... } // from try @ 00a05288 with catch @ 00a05484 */
    memcpy(__dest,param_1,param_2);
    return;
  }
  return;
}

