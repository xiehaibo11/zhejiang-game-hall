
void uv__pipe2(undefined8 param_1,ulong param_2)

{
  syscall(0x3b,param_1,param_2 & 0xffffffff);
  return;
}

