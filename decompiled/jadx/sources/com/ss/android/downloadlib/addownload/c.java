package com.ss.android.downloadlib.addownload;

import android.content.Context;
import com.ss.android.download.api.config.IDownloadButtonClickListener;
import com.ss.android.download.api.config.OnItemClickListener;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.download.DownloadStatusChangeListener;

/* JADX INFO: loaded from: classes3.dex */
public interface c {
    c df(int i, DownloadStatusChangeListener downloadStatusChangeListener);

    c df(Context context);

    c df(DownloadController downloadController);

    c df(DownloadEventConfig downloadEventConfig);

    c df(DownloadModel downloadModel);

    void df(int i);

    boolean df();

    long pt();

    c rg(long j);

    c rg(IDownloadButtonClickListener iDownloadButtonClickListener);

    c rg(OnItemClickListener onItemClickListener);

    void rg();

    void rg(boolean z);

    boolean rg(int i);

    void ux();
}
