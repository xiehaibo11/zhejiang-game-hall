package com.tkay.china.api;

import com.tkay.core.api.TYEventInterface;

public interface CustomAdapterDownloadListener extends TYEventInterface {
    void onDownloadFail(long j, long j2, String str, String str2);

    void onDownloadFinish(long j, String str, String str2);

    void onDownloadPause(long j, long j2, String str, String str2);

    void onDownloadStart(long j, long j2, String str, String str2);

    void onDownloadUpdate(long j, long j2, String str, String str2);

    void onInstalled(String str, String str2);
}
