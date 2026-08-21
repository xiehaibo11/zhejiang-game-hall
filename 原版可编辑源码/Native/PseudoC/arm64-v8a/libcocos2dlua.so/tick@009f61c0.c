
/* universe::network::Network::tick(float) */

void universe::network::Network::tick(float param_1)

{
  int iVar1;
  float extraout_s0;
  
  if (((DAT_01782328 & 1) == 0) &&
     (iVar1 = __cxa_guard_acquire(&DAT_01782328), param_1 = extraout_s0, iVar1 != 0)) {
    DAT_01782320 = uv_default_loop();
    param_1 = (float)__cxa_guard_release(&DAT_01782328);
  }
  uv_run(param_1,DAT_01782320,2);
  return;
}

