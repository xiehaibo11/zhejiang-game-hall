
/* universe::UnzipTask::err2str(universe::UnzipTask::ErrorCode) */

undefined * universe::UnzipTask::err2str(byte param_1)

{
                    /* try { // try from 00a091b0 to 00b091b7 has its CatchHandler @ 00a09594 */
  if (param_1 < 0xc) {
    return (&PTR_s_SUCCESS_01c6ce38)[(char)param_1];
  }
  return &DAT_0189703a;
}

