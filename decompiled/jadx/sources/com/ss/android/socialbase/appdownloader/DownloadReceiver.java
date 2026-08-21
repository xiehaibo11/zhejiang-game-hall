package com.ss.android.socialbase.appdownloader;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.igexin.sdk.PushConsts;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.AbsNotificationItem;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class DownloadReceiver extends BroadcastReceiver {
    private static final String rg = DownloadReceiver.class.getSimpleName();
    private Handler df = new Handler(Looper.getMainLooper());

    @Override // android.content.BroadcastReceiver
    public void onReceive(final Context context, final Intent intent) {
        if (context == null || intent == null) {
            return;
        }
        String action = intent.getAction();
        if (TextUtils.isEmpty(action)) {
            return;
        }
        com.ss.android.socialbase.appdownloader.q.q qVarRg = pt.bm().rg();
        if (action.equals(PushConsts.ACTION_BROADCAST_TO_BOOT) && (qVarRg == null || qVarRg.rg())) {
            if (Logger.debug()) {
                Logger.v(rg, "Received broadcast intent for android.intent.action.BOOT_COMPLETED");
            }
            rg(context, action);
        } else if (action.equals("android.intent.action.MEDIA_MOUNTED")) {
            if (Logger.debug()) {
                Logger.v(rg, "Received broadcast intent for android.intent.action.MEDIA_MOUNTED");
            }
            rg(context, action);
        } else if (action.equals("android.intent.action.PACKAGE_ADDED") || action.equals("android.intent.action.PACKAGE_REPLACED")) {
            DownloadComponentManager.getCPUThreadExecutor().execute(new Runnable() { // from class: com.ss.android.socialbase.appdownloader.DownloadReceiver.1
                @Override // java.lang.Runnable
                public void run() {
                    Uri data = intent.getData();
                    if (data == null) {
                        return;
                    }
                    String schemeSpecificPart = data.getSchemeSpecificPart();
                    com.ss.android.socialbase.appdownloader.q.pt ptVarDf = pt.bm().df();
                    if (ptVarDf != null) {
                        ptVarDf.rg(context, schemeSpecificPart);
                    }
                    List<DownloadInfo> successedDownloadInfosWithMimeType = Downloader.getInstance(context).getSuccessedDownloadInfosWithMimeType(AdBaseConstants.MIME_APK);
                    if (successedDownloadInfosWithMimeType != null) {
                        for (final DownloadInfo downloadInfo : successedDownloadInfosWithMimeType) {
                            if (downloadInfo != null && q.rg(downloadInfo, schemeSpecificPart)) {
                                IDownloadNotificationEventListener downloadNotificationEventListener = Downloader.getInstance(context).getDownloadNotificationEventListener(downloadInfo.getId());
                                if (downloadNotificationEventListener != null && DownloadUtils.isProcessNameSame(downloadNotificationEventListener.getNotifyProcessName())) {
                                    downloadNotificationEventListener.onNotificationEvent(9, downloadInfo, schemeSpecificPart, "");
                                }
                                AbsNotificationItem notificationItem = DownloadNotificationManager.getInstance().getNotificationItem(downloadInfo.getId());
                                if (notificationItem != null) {
                                    notificationItem.updateNotification(null, false);
                                }
                                if (DownloadSetting.obtain(downloadInfo.getId()).optInt("install_queue_enable", 0) == 1) {
                                    ux.rg().rg(downloadInfo, schemeSpecificPart);
                                }
                                DownloadReceiver.this.df.postDelayed(new Runnable() { // from class: com.ss.android.socialbase.appdownloader.DownloadReceiver.1.1
                                    @Override // java.lang.Runnable
                                    public void run() {
                                        DownloadComponentManager.getCPUThreadExecutor().execute(new Runnable() { // from class: com.ss.android.socialbase.appdownloader.DownloadReceiver.1.1.1
                                            @Override // java.lang.Runnable
                                            public void run() {
                                                try {
                                                    if (downloadInfo.isSavePathRedirected()) {
                                                        DownloadUtils.clearAntiHijackDir(downloadInfo);
                                                    }
                                                } catch (Throwable th) {
                                                    th.printStackTrace();
                                                }
                                            }
                                        });
                                    }
                                }, 1000L);
                                return;
                            }
                        }
                    }
                }
            });
        }
    }

    private void rg(final Context context, final String str) {
        if (DownloadComponentManager.needAutoRefreshUnSuccessTask()) {
            this.df.postDelayed(new Runnable() { // from class: com.ss.android.socialbase.appdownloader.DownloadReceiver.2
                @Override // java.lang.Runnable
                public void run() {
                    try {
                        Intent intent = new Intent(context, (Class<?>) DownloadHandlerService.class);
                        intent.setAction(str);
                        context.startService(intent);
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                }
            }, 2000L);
        }
    }
}
