package com.ss.android.socialbase.downloader.downloader;

public interface ITTNetHandler {

    public static class DefaultTTNetHandler implements com.ss.android.socialbase.downloader.downloader.ITTNetHandler {
        public DefaultTTNetHandler() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService getTTNetDownloadHeadHttpService() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.network.IDownloadHttpService getTTNetDownloadHttpService() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public boolean isResponseCode304Error(java.lang.Throwable r1) {
                r0 = this;
                r1 = 0
                return r1
        }

        @Override
        public boolean isTTNetEnable() {
                r1 = this;
                r0 = 0
                return r0
        }

        @Override
        public com.ss.android.socialbase.downloader.exception.DownloadTTNetException translateTTNetException(java.lang.Throwable r1, java.lang.String r2) {
                r0 = this;
                r1 = 0
                return r1
        }
    }

    com.ss.android.socialbase.downloader.network.IDownloadHeadHttpService getTTNetDownloadHeadHttpService();

    com.ss.android.socialbase.downloader.network.IDownloadHttpService getTTNetDownloadHttpService();

    boolean isResponseCode304Error(java.lang.Throwable r1);

    boolean isTTNetEnable();

    com.ss.android.socialbase.downloader.exception.DownloadTTNetException translateTTNetException(java.lang.Throwable r1, java.lang.String r2);
}
