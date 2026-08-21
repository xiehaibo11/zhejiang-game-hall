
undefined8 socket_open(void)

{
  signal(0xd,(__sighandler_t)0x1);
  return 1;
}

