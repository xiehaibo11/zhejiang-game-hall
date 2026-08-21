package com.kwad.sdk.export.proxy;

public interface AdDownloadProxy {
    void cancelDownload(android.content.Context r1, java.lang.String r2, com.kwad.sdk.core.download.DownloadParams r3);

    java.lang.String getDownloadFilePath(com.kwad.sdk.core.download.DownloadParams r1);

    void pauseDownload(android.content.Context r1, java.lang.String r2, com.kwad.sdk.core.download.DownloadParams r3);

    void startDownload(android.content.Context r1, java.lang.String r2, com.kwad.sdk.core.download.DownloadParams r3);
}
