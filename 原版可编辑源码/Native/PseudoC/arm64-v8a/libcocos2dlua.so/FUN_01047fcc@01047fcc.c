
undefined8 FUN_01047fcc(long *param_1)

{
  if (*(uint *)(*param_1 + 0xb60) < *(uint *)(param_1[0x44] + 0xc88)) {
    return 0;
  }
  if (*(uint *)(*param_1 + 0xb60) == *(uint *)(param_1[0x44] + 0xc88)) {
                    /* try { // try from 01048014 to 0114801b has its CatchHandler @ 010481d4 */
    _lws_log(1,"Ran out of header data space\n");
                    /* try { // try from 0104801c to 0114807b has its CatchHandler @ 010481e4 */
    return 1;
  }
  _lws_log(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds");
  return 1;
}

