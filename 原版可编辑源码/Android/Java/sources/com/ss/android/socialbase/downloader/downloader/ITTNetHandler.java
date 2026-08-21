package com.ss.android.socialbase.downloader.downloader;

import com.ss.android.socialbase.downloader.exception.DownloadTTNetException;
import com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService;
import com.ss.android.socialbase.downloader.network.IDownloadHttpService;

public interface ITTNetHandler {

    public static class DefaultTTNetHandler implements ITTNetHandler {
        @Override
        public IDownloadHeadHttpService getTTNetDownloadHeadHttpService() {
            return null;
        }

        @Override
        public IDownloadHttpService getTTNetDownloadHttpService() {
            return null;
        }

        @Override
        public boolean isResponseCode304Error(Throwable th) {
            return false;
        }

        @Override
        public boolean isTTNetEnable() {
            return false;
        }

        @Override
        public DownloadTTNetException translateTTNetException(Throwable th, String str) {
            return null;
        }
    }

    IDownloadHeadHttpService getTTNetDownloadHeadHttpService();

    IDownloadHttpService getTTNetDownloadHttpService();

    boolean isResponseCode304Error(Throwable th);

    boolean isTTNetEnable();

    DownloadTTNetException translateTTNetException(Throwable th, String str);
}
