
/* universe::DecompressTask::err2str(universe::DecompressTask::ErrorCode) */

undefined * universe::DecompressTask::err2str(byte param_1)

{
  if (param_1 < 4) {
    return (&PTR_s_success_016a0ec8)[(char)param_1];
  }
  return &DAT_013c996e;
}

