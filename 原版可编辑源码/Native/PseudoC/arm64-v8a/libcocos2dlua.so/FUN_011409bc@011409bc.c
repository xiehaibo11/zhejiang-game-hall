
void FUN_011409bc(void *param_1,void *param_2)

{
  if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) &&
     (memcpy(param_2,param_1,0x78), *(long *)((long)param_1 + 0x70) != 0)) {
    *(undefined4 *)((long)param_2 + 0xc) = 1;
    *(undefined8 *)((long)param_2 + 0x70) = 0;
  }
  return;
}

