package com.mbridge.msdk.foundation.download;

public interface OnProgressStateListener<T> {
    void onProgress(com.mbridge.msdk.foundation.download.DownloadMessage<T> r1, com.mbridge.msdk.foundation.download.DownloadProgress r2);
}
