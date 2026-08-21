
/* universe::DownloadTask::err2str(universe::DownloadTask::ErrorCode) */

undefined * universe::DownloadTask::err2str(byte param_1)

{
                    /* try { // try from 00a05d78 to 00b05d7b has its CatchHandler @ 00a05d94 */
  if (param_1 < 10) {
                    /* try { // try from 00a05d7c to 00b05da7 has its CatchHandler @ 00a05d4c */
    return (&PTR_s_success_01c6cb68)[(char)param_1];
  }
                    /* catch() { ... } // from try @ 00a05d78 with catch @ 00a05d94 */
  return &DAT_0189703a;
}

