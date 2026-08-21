
/* universe::HttpTask::err2str(universe::HttpTask::ErrorCode) */

undefined * universe::HttpTask::err2str(byte param_1)

{
  if (param_1 < 3) {
    return (&PTR_s_SUCCESS_01275ecf_0x3c_016a11b8)[(char)param_1];
  }
  return &DAT_013c996e;
}

