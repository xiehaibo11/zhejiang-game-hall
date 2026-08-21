
undefined8 speex_lib_get_mode(uint param_1)

{
  if (2 < param_1) {
    return 0;
  }
  return *(undefined8 *)(speex_mode_list + (long)(int)param_1 * 8);
}

