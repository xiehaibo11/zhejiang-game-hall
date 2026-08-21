
/* universe::DownloadTask::onComplete() */

void __thiscall universe::DownloadTask::onComplete(DownloadTask *this)

{
  if (*(Downloader **)(this + 0xe0) != (Downloader *)0x0) {
    Downloader::onResult(*(Downloader **)(this + 0xe0),this);
    return;
  }
  return;
}

