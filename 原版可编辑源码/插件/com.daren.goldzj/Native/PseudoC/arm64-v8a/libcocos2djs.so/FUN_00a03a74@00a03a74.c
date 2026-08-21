
undefined8 FUN_00a03a74(double param_1,DownloadJob *param_2)

{
  if (0.0 < param_1) {
    universe::Downloader2::DownloadJob::onProgress(param_2,(long)param_1);
  }
  return 0;
}

