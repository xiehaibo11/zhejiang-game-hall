package com.bianfeng.fastvo.action;

/* JADX INFO: loaded from: classes.dex */
public interface DownloadListener {
    void onBegin(DownloadFile downloadFile);

    void onComplete(DownloadFile downloadFile);

    void onError(int i, DownloadFile downloadFile);

    void onUpdate(DownloadFile downloadFile);
}
