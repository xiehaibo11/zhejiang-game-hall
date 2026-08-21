
undefined8 FUN_00aa5848(long *param_1)

{
  if (*(uint *)(*param_1 + 0xb60) < *(uint *)(param_1[0x44] + 0xc88)) {
    return 0;
  }
  if (*(uint *)(*param_1 + 0xb60) == *(uint *)(param_1[0x44] + 0xc88)) {
    _lws_log(1,"Ran out of header data space\n");
    return 1;
  }
  _lws_log(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds");
  return 1;
}

