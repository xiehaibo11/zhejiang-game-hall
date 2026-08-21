
void lws_context_destroy2(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104ae30 with catch @ 0104b110
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104b16c with catch @ 0104b114
                       catch(type#1 @ 00000000) { ... } // from try @ 0104b33c with catch @ 0104b114
                        */
  lVar1 = *(long *)(param_1 + 0x830);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x158);
    FUN_0104ad0c();
  }
  while (*(long *)(param_1 + 0x838) != 0) {
    FUN_0104ad0c();
  }
  FUN_0104fdf0(param_1);
  lws_plat_context_late_destroy(param_1);
  if (*(void **)(param_1 + 0x850) != (void *)0x0) {
    free(*(void **)(param_1 + 0x850));
  }
  lws_now_secs();
  puVar2 = *(undefined8 **)(param_1 + 0x848);
  while (puVar2 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x848) = *puVar2;
    _lws_log(4,"deferred vh %p destroy\n",puVar2[2]);
    FUN_0104ad0c(puVar2[2]);
    thunk_FUN_0104b1cc(puVar2,0,"lws_free");
    puVar2 = *(undefined8 **)(param_1 + 0x848);
  }
  thunk_FUN_0104b1cc(param_1,0,"lws_free");
  return;
}

