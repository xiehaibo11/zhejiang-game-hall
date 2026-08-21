package com.ss.android.socialbase.downloader.depend;

public interface ITempFileSaveCompleteCallback {
    void onFailed(com.ss.android.socialbase.downloader.exception.BaseException r1);

    void onSuccess();
}
