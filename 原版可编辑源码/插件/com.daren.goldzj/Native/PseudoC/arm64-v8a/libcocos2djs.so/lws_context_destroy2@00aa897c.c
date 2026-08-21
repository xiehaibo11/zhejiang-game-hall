
void lws_context_destroy2(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(long *)(param_1 + 0x830);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x158);
    FUN_00aa8588();
  }
                    /* catch() { ... } // from try @ 00aa88e8 with catch @ 00aa89b0 */
  while (*(long *)(param_1 + 0x838) != 0) {
    FUN_00aa8588();
  }
  FUN_00aad66c(param_1);
  lws_plat_context_late_destroy(param_1);
  if (*(void **)(param_1 + 0x850) != (void *)0x0) {
    free(*(void **)(param_1 + 0x850));
  }
  lws_now_secs();
  puVar2 = *(undefined8 **)(param_1 + 0x848);
  while (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x848) = *puVar2;
    _lws_log(4,"deferred vh %p destroy\n",puVar2[2]);
    FUN_00aa8588(puVar2[2]);
    thunk_FUN_00aa8a48(puVar2,0,"lws_free");
    puVar2 = *(undefined8 **)(param_1 + 0x848);
  }
  thunk_FUN_00aa8a48(param_1,0,"lws_free");
  return;
}

