package com.ss.android.downloadad.api;

import android.app.Dialog;
import android.content.Context;
import android.net.Uri;
import com.ss.android.download.api.config.IDownloadButtonClickListener;
import com.ss.android.download.api.download.DownloadController;
import com.ss.android.download.api.download.DownloadEventConfig;
import com.ss.android.download.api.download.DownloadModel;
import com.ss.android.download.api.download.DownloadStatusChangeListener;

public interface df {
    Dialog rg(Context context, String str, boolean z, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController, DownloadStatusChangeListener downloadStatusChangeListener, int i);

    Dialog rg(Context context, String str, boolean z, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController, DownloadStatusChangeListener downloadStatusChangeListener, int i, IDownloadButtonClickListener iDownloadButtonClickListener);

    boolean rg(long j);

    boolean rg(long j, int i);

    boolean rg(Context context, long j, String str, DownloadStatusChangeListener downloadStatusChangeListener, int i);

    boolean rg(Context context, Uri uri, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController);

    boolean rg(Context context, Uri uri, DownloadModel downloadModel, DownloadEventConfig downloadEventConfig, DownloadController downloadController, IDownloadButtonClickListener iDownloadButtonClickListener);
}
