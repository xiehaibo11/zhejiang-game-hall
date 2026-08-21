package com.bytedance.pangle.download;

public interface IZeusDownloadListener {
    void onFailed(java.lang.Throwable r1, int r2, java.lang.String r3);

    void onProgress(long r1, long r3);

    void onStart();

    void onSuccess(java.lang.String r1, java.lang.String r2, long r3);
}
