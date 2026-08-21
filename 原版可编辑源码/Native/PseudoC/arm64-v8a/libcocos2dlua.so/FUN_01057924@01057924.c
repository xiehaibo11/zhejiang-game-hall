
void FUN_01057924(long param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010578c8 with catch @ 0105792c
                        */
  if ((*(byte *)(*(long *)(param_1 + -0x4f8) + 0xc94) >> 3 & 1) == 0) {
    lws_service_fd_tsi(*(long *)(param_1 + -0x4f8),0,*(undefined1 *)(param_1 + 0x1da));
    return;
  }
  return;
}

