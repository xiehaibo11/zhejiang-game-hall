package com.tkay.china.api;

public interface CustomAdapterDownloadListener extends com.tkay.core.api.TYEventInterface {
    void onDownloadFail(long r1, long r3, java.lang.String r5, java.lang.String r6);

    void onDownloadFinish(long r1, java.lang.String r3, java.lang.String r4);

    void onDownloadPause(long r1, long r3, java.lang.String r5, java.lang.String r6);

    void onDownloadStart(long r1, long r3, java.lang.String r5, java.lang.String r6);

    void onDownloadUpdate(long r1, long r3, java.lang.String r5, java.lang.String r6);

    void onInstalled(java.lang.String r1, java.lang.String r2);
}
