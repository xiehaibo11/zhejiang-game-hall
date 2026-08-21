
void png_set_tIME(long param_1,long param_2,undefined8 *param_3)

{
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (undefined8 *)0x0)) &&
     ((*(byte *)(param_1 + 0x165) >> 1 & 1) == 0)) {
    if (((0xb < *(byte *)((long)param_3 + 2) - 1) || (0x1e < *(byte *)((long)param_3 + 3) - 1)) ||
       ((0x17 < *(byte *)((long)param_3 + 4) ||
        ((0x3b < *(byte *)((long)param_3 + 5) || (0x3c < *(byte *)((long)param_3 + 6))))))) {
      png_warning(param_1,"Ignoring invalid time value");
      return;
    }
    *(undefined8 *)(param_2 + 0xa8) = *param_3;
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x200;
  }
  return;
}

