
void FUN_01047a8c(long *param_1)

{
  if (*param_1 != 0) {
                    /* try { // try from 01047a94 to 01147ac7 has its CatchHandler @ 01047a34 */
    *(undefined2 *)(*param_1 + 0xb5c) = 0xffff;
    *(undefined2 *)(*param_1 + 0xb5e) = 0xffff;
    *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 1;
  }
  return;
}

