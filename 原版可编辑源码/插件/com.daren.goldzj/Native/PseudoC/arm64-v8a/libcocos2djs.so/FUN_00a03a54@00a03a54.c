
undefined8 FUN_00a03a54(DownloadJob *param_1,long param_2)

{
  if (0 < param_2) {
    universe::Downloader2::DownloadJob::onProgress(param_1,param_2);
  }
  return 0;
}

