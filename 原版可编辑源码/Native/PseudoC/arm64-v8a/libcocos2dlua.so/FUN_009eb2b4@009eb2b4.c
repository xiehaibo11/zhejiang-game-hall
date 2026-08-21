
undefined8 FUN_009eb2b4(double param_1,DownloadJob *param_2)

{
  if (0.0 < param_1) {
                    /* try { // try from 009eb2bc to 00aeb2c3 has its CatchHandler @ 009eb2d8 */
                    /* try { // try from 009eb2c4 to 00aeb2f7 has its CatchHandler @ 009eb1cc */
    universe::Downloader2::DownloadJob::onProgress(param_2,(long)param_1);
  }
  return 0;
}

