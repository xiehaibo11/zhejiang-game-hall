package com.ss.android.socialbase.downloader.network;

public interface IDownloadHeadHttpConnection {
    void cancel();

    int getResponseCode() throws java.io.IOException;

    java.lang.String getResponseHeaderField(java.lang.String r1);
}
