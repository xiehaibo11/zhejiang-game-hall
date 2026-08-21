package com.bianfeng.fastvo.action;

public interface DownloadListener {
    void onBegin(DownloadFile downloadFile);

    void onComplete(DownloadFile downloadFile);

    void onError(int i, DownloadFile downloadFile);

    void onUpdate(DownloadFile downloadFile);
}
