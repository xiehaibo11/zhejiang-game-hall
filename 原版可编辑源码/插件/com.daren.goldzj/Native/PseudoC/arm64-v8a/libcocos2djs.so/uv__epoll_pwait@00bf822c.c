
void uv__epoll_pwait(uint param_1,undefined8 param_2,ulong param_3,uint param_4,undefined8 param_5)

{
  undefined8 local_8;
  
  local_8 = param_5;
  syscall(0x16,(ulong)param_1,param_2,param_3 & 0xffffffff,(ulong)param_4,&local_8,8);
  return;
}

