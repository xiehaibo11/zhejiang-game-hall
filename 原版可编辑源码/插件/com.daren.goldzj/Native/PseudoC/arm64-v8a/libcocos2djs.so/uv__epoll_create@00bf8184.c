
undefined8 uv__epoll_create(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)__errno();
  *puVar1 = 0x26;
  return 0xffffffff;
}

