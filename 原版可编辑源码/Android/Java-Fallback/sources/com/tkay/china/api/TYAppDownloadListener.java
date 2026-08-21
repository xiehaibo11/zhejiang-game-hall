package com.tkay.china.api;

public interface TYAppDownloadListener extends com.tkay.core.api.TYEventInterface {
    void onDownloadFail(com.tkay.core.api.TYAdInfo r1, long r2, long r4, java.lang.String r6, java.lang.String r7);

    void onDownloadFinish(com.tkay.core.api.TYAdInfo r1, long r2, java.lang.String r4, java.lang.String r5);

    void onDownloadPause(com.tkay.core.api.TYAdInfo r1, long r2, long r4, java.lang.String r6, java.lang.String r7);

    void onDownloadStart(com.tkay.core.api.TYAdInfo r1, long r2, long r4, java.lang.String r6, java.lang.String r7);

    void onDownloadUpdate(com.tkay.core.api.TYAdInfo r1, long r2, long r4, java.lang.String r6, java.lang.String r7);

    void onInstalled(com.tkay.core.api.TYAdInfo r1, java.lang.String r2, java.lang.String r3);
}
