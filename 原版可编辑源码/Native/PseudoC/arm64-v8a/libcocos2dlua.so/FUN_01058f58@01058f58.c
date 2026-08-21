
void FUN_01058f58(long *param_1)

{
  long lVar1;
  
  while (param_1 != (long *)0x0) {
                    /* try { // try from 01058f80 to 01158f8f has its CatchHandler @ 01058fa8 */
    thunk_FUN_0104b1cc(param_1[1],0,"lws_free");
    thunk_FUN_0104b1cc(param_1[3],0,"lws_free");
    thunk_FUN_0104b1cc(param_1[5],0,"lws_free");
                    /* catch(type#1 @ 00000000) { ... } // from try @ 01058f80 with catch @ 01058fa8
                        */
    thunk_FUN_0104b1cc(param_1[4],0,"lws_free");
                    /* catch() { ... } // from try @ 01058ff4 with catch @ 01058fbc */
    thunk_FUN_0104b1cc(param_1[6],0,"lws_free");
    lVar1 = *param_1;
    thunk_FUN_0104b1cc(param_1,0,"lws_free");
    param_1 = (long *)lVar1;
  }
                    /* try { // try from 01058fec to 01158ff3 has its CatchHandler @ 010590a0 */
  return;
}

