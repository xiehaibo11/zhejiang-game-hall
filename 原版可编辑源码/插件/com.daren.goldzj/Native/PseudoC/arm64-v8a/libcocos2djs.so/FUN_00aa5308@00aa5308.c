
void FUN_00aa5308(long *param_1)

{
  if (*param_1 != 0) {
    *(undefined2 *)(*param_1 + 0xb5c) = 0xffff;
    *(undefined2 *)(*param_1 + 0xb5e) = 0xffff;
    *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 1;
  }
  return;
}

