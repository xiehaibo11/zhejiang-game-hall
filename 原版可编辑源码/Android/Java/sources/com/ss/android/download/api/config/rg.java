package com.ss.android.download.api.config;

import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.download.DownloadStatusChangeListener;
import com.ss.android.download.api.model.DownloadShortInfo;

public class rg implements DownloadStatusChangeListener {
    @Override
    public void onDownloadActive(DownloadShortInfo downloadShortInfo, int i) {
    }

    @Override
    public void onDownloadFailed(DownloadShortInfo downloadShortInfo) {
    }

    @Override
    public void onDownloadFinished(DownloadShortInfo downloadShortInfo) {
    }

    @Override
    public void onDownloadPaused(DownloadShortInfo downloadShortInfo, int i) {
    }

    @Override
    public void onDownloadStart(DownloadModel downloadModel, DownloadController downloadController) {
    }

    @Override
    public void onIdle() {
    }

    @Override
    public void onInstalled(DownloadShortInfo downloadShortInfo) {
    }
}
