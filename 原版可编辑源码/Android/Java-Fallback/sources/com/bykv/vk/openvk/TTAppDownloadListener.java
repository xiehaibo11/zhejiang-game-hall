package com.bykv.vk.openvk;

public interface TTAppDownloadListener {
    void onDownloadActive(long r1, long r3, java.lang.String r5, java.lang.String r6);

    void onDownloadFailed(long r1, long r3, java.lang.String r5, java.lang.String r6);

    void onDownloadFinished(long r1, java.lang.String r3, java.lang.String r4);

    void onDownloadPaused(long r1, long r3, java.lang.String r5, java.lang.String r6);

    void onIdle();

    void onInstalled(java.lang.String r1, java.lang.String r2);
}
