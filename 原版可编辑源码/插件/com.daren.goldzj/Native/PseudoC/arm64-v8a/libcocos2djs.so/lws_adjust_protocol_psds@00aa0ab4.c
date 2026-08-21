
long lws_adjust_protocol_psds(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x248);
  *(long *)(lVar2 + 0x10) = param_2;
  lVar1 = *(long *)(param_1 + 0x270);
                    /* try { // try from 00aa0ad8 to 00ba0ae7 has its CatchHandler @ 00aa0b70 */
  if (((lVar2 != 0) && (param_2 != 0)) && (lVar1 == 0)) {
    lVar1 = FUN_00aa8a78(param_2,"user space");
    *(long *)(param_1 + 0x270) = lVar1;
    if (lVar1 == 0) {
      _lws_log(1,"%s: OOM\n","lws_ensure_user_space");
                    /* try { // try from 00aa0b24 to 00ba0b9f has its CatchHandler @ 00aa0a30 */
      return 0;
    }
  }
                    /* try { // try from 00aa0af8 to 00ba0b23 has its CatchHandler @ 00aa0b8c */
  return lVar1;
}

