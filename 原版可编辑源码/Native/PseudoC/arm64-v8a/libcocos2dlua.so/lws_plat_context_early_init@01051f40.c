
undefined8 lws_plat_context_early_init(void)

{
  signal(0xd,(__sighandler_t)0x1);
  return 0;
}

