package com.mbridge.msdk.foundation.download;

public interface OnDownloadStateListener<T> {
    void onCancelDownload(com.mbridge.msdk.foundation.download.DownloadMessage<T> r1);

    void onDownloadComplete(com.mbridge.msdk.foundation.download.DownloadMessage<T> r1);

    void onDownloadError(com.mbridge.msdk.foundation.download.DownloadMessage<T> r1, com.mbridge.msdk.foundation.download.DownloadError r2);

    void onDownloadStart(com.mbridge.msdk.foundation.download.DownloadMessage<T> r1);
}
