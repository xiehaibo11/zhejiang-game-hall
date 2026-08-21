
/* universe::DownloadTask::err2str(universe::DownloadTask::ErrorCode) */

undefined * universe::DownloadTask::err2str(byte param_1)

{
  if (param_1 < 10) {
    return (&PTR_s_success_016a1068)[(char)param_1];
  }
  return &DAT_013c996e;
}

