package com.ss.android.socialbase.appdownloader.pt;

import android.content.BroadcastReceiver;
import android.content.Context;
import android.content.Intent;
import android.content.IntentFilter;
import com.ss.android.socialbase.appdownloader.pt;
import com.ss.android.socialbase.appdownloader.q;
import com.ss.android.socialbase.appdownloader.q.fw;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.AbsNotificationItem;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.util.Iterator;
import java.util.List;

/* JADX INFO: loaded from: classes3.dex */
public class df implements IDownloadLaunchHandler {
    private BroadcastReceiver df;
    private List<Integer> rg;

    @Override // com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler
    public List<String> getResumeMimeTypes() {
        return q.q();
    }

    @Override // com.ss.android.socialbase.downloader.downloader.IDownloadLaunchHandler
    public void onLaunchResume(final List<DownloadInfo> list, final int i) {
        if (DownloadUtils.isMainThread()) {
            DownloadComponentManager.getCPUThreadExecutor().execute(new Runnable() { // from class: com.ss.android.socialbase.appdownloader.pt.df.1
                @Override // java.lang.Runnable
                public void run() {
                    try {
                        df.this.rg((List<DownloadInfo>) list, i);
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            });
        } else {
            rg(list, i);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void rg(List<DownloadInfo> list, int i) {
        if (list == null || list.isEmpty()) {
            return;
        }
        fw fwVarHq = pt.bm().hq();
        if (fwVarHq != null) {
            fwVarHq.rg(list);
        }
        Context appContext = DownloadComponentManager.getAppContext();
        if (appContext == null) {
            return;
        }
        boolean zIsWifi = DownloadUtils.isWifi(appContext);
        Iterator<DownloadInfo> it = list.iterator();
        while (it.hasNext()) {
            rg(appContext, it.next(), zIsWifi, i);
        }
        List<Integer> list2 = this.rg;
        if (list2 == null || list2.isEmpty() || this.df != null) {
            return;
        }
        this.df = new BroadcastReceiver() { // from class: com.ss.android.socialbase.appdownloader.pt.df.2
            @Override // android.content.BroadcastReceiver
            public void onReceive(Context context, Intent intent) {
                final Context applicationContext = context.getApplicationContext();
                if (DownloadUtils.isWifi(applicationContext)) {
                    Logger.d("LaunchResume", "onReceive : wifi connected !!!");
                    DownloadComponentManager.getCPUThreadExecutor().execute(new Runnable() { // from class: com.ss.android.socialbase.appdownloader.pt.df.2.1
                        @Override // java.lang.Runnable
                        public void run() {
                            try {
                                if (df.this.rg != null && !df.this.rg.isEmpty()) {
                                    int size = df.this.rg.size();
                                    Integer[] numArr = new Integer[size];
                                    df.this.rg.toArray(numArr);
                                    df.this.rg.clear();
                                    for (int i2 = 0; i2 < size; i2++) {
                                        DownloadInfo downloadInfo = Downloader.getInstance(applicationContext).getDownloadInfo(numArr[i2].intValue());
                                        if (downloadInfo != null && (downloadInfo.getRealStatus() == -5 || (downloadInfo.getRealStatus() == -2 && downloadInfo.isPauseReserveOnWifi()))) {
                                            df.this.rg(applicationContext, downloadInfo, true, 2);
                                        }
                                    }
                                }
                            } catch (Exception e) {
                                e.printStackTrace();
                            }
                        }
                    });
                    try {
                        applicationContext.unregisterReceiver(df.this.df);
                    } catch (Throwable th) {
                        th.printStackTrace();
                    }
                    df.this.df = null;
                }
            }
        };
        try {
            IntentFilter intentFilter = new IntentFilter();
            intentFilter.addAction("android.net.conn.CONNECTIVITY_CHANGE");
            appContext.registerReceiver(this.df, intentFilter);
        } catch (Throwable th) {
            th.printStackTrace();
            this.df = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Removed duplicated region for block: B:100:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:102:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0089  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x0104  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0138  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x01bb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void rg(android.content.Context r21, com.ss.android.socialbase.downloader.model.DownloadInfo r22, boolean r23, int r24) {
        /*
            Method dump skipped, instruction units count: 637
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ss.android.socialbase.appdownloader.pt.df.rg(android.content.Context, com.ss.android.socialbase.downloader.model.DownloadInfo, boolean, int):void");
    }

    private void rg(DownloadInfo downloadInfo, Context context) {
        DownloadSetting downloadSettingObtain = DownloadSetting.obtain(downloadInfo.getId());
        int iOptInt = downloadSettingObtain.optInt("paused_resume_max_count", 0);
        double dOptDouble = downloadSettingObtain.optDouble("paused_resume_max_hours", 72.0d);
        int pausedResumeCount = downloadInfo.getPausedResumeCount();
        if (pausedResumeCount < iOptInt && ((double) (System.currentTimeMillis() - downloadInfo.getLastDownloadTime())) < dOptDouble * 3600000.0d) {
            AbsNotificationItem notificationItem = DownloadNotificationManager.getInstance().getNotificationItem(downloadInfo.getId());
            if (notificationItem == null) {
                notificationItem = new com.ss.android.socialbase.appdownloader.pp.rg(context, downloadInfo.getId(), downloadInfo.getTitle(), downloadInfo.getSavePath(), downloadInfo.getName(), downloadInfo.getExtra());
                DownloadNotificationManager.getInstance().addNotification(notificationItem);
            } else {
                notificationItem.updateNotificationItem(downloadInfo);
            }
            notificationItem.setTotalBytes(downloadInfo.getTotalBytes());
            notificationItem.setCurBytes(downloadInfo.getCurBytes());
            notificationItem.refreshStatus(downloadInfo.getStatus(), null, false, false);
            downloadInfo.setPausedResumeCount(pausedResumeCount + 1);
            downloadInfo.updateSpData();
        }
    }

    private boolean rg(DownloadInfo downloadInfo) {
        if (DownloadSetting.obtain(downloadInfo.getId()).optBugFix("uninstall_can_not_resume_for_force_task", false)) {
            return DownloadUtils.isFileDownloaded(downloadInfo, false, downloadInfo.getMd5());
        }
        return downloadInfo.isDownloaded();
    }
}
