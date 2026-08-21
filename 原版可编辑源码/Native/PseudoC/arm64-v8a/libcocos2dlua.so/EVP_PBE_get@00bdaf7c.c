
undefined8 EVP_PBE_get(undefined4 *param_1,undefined4 *param_2,ulong param_3)

{
  if (0x18 < param_3) {
    return 0;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)(&DAT_016c6708 + param_3 * 0x18);
  }
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(&DAT_016c670c + param_3 * 0x18);
  }
  return 1;
}

