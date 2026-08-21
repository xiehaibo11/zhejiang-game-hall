package com.tkay.china.api;

import com.tkay.core.api.TYAdInfo;
import com.tkay.core.api.TYEventInterface;

public interface TYAppDownloadListener extends TYEventInterface {
    void onDownloadFail(TYAdInfo tYAdInfo, long j, long j2, String str, String str2);

    void onDownloadFinish(TYAdInfo tYAdInfo, long j, String str, String str2);

    void onDownloadPause(TYAdInfo tYAdInfo, long j, long j2, String str, String str2);

    void onDownloadStart(TYAdInfo tYAdInfo, long j, long j2, String str, String str2);

    void onDownloadUpdate(TYAdInfo tYAdInfo, long j, long j2, String str, String str2);

    void onInstalled(TYAdInfo tYAdInfo, String str, String str2);
}
