package com.bianfeng.fastvo.action;

public interface DownloadListener {
    void onBegin(com.bianfeng.fastvo.action.DownloadFile r1);

    void onComplete(com.bianfeng.fastvo.action.DownloadFile r1);

    void onError(int r1, com.bianfeng.fastvo.action.DownloadFile r2);

    void onUpdate(com.bianfeng.fastvo.action.DownloadFile r1);
}
