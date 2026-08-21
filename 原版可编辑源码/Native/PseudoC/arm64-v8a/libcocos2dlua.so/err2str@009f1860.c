
/* universe::UnzipTask::err2str(universe::UnzipTask::ErrorCode) */

undefined * universe::UnzipTask::err2str(byte param_1)

{
  if (param_1 < 0xc) {
    return (&PTR_s_SUCCESS_01275ecf_0x3c_016a1300)[(char)param_1];
  }
  return &DAT_013c996e;
}

