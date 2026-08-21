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
import com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener;
import com.ss.android.socialbase.downloader.impls.RetryScheduler;
import com.ss.android.socialbase.downloader.logger.Logger;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.AbsNotificationItem;
import com.ss.android.socialbase.downloader.notification.DownloadNotificationManager;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class df implements IDownloadLaunchHandler {
    private BroadcastReceiver df;
    private List<Integer> rg;

    @Override
    public List<String> getResumeMimeTypes() {
        return q.q();
    }

    @Override
    public void onLaunchResume(final List<DownloadInfo> list, final int i) {
        if (DownloadUtils.isMainThread()) {
            DownloadComponentManager.getCPUThreadExecutor().execute(new Runnable() {
                @Override
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

    private void rg(List<DownloadInfo> list, int i) {
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
        this.df = new BroadcastReceiver() {
            @Override
            public void onReceive(Context context, Intent intent) {
                final Context applicationContext = context.getApplicationContext();
                if (DownloadUtils.isWifi(applicationContext)) {
                    Logger.d("LaunchResume", "onReceive : wifi connected !!!");
                    DownloadComponentManager.getCPUThreadExecutor().execute(new Runnable() {
                        @Override
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

    /* JADX WARN: Removed duplicated region for block: B:100:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:102:? A[RETURN, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:27:0x0089  */
    /* JADX WARN: Removed duplicated region for block: B:52:0x0104  */
    /* JADX WARN: Removed duplicated region for block: B:55:0x0138  */
    /* JADX WARN: Removed duplicated region for block: B:74:0x01bb  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void rg(Context context, DownloadInfo downloadInfo, boolean z, int i) {
        String str;
        boolean z2;
        int i2;
        String str2;
        String str3;
        boolean z3;
        boolean z4;
        fw fwVarHq;
        if (downloadInfo == null || !downloadInfo.isShowNotification()) {
            return;
        }
        int realStatus = downloadInfo.getRealStatus();
        if (realStatus == -5 && ("application/ttpatch".equalsIgnoreCase(downloadInfo.getMimeType()) || !downloadInfo.isDownloaded())) {
            DownloadSetting downloadSettingObtain = DownloadSetting.obtain(downloadInfo.getId());
            int iOptInt = downloadSettingObtain.optInt("failed_resume_max_count", 0);
            double dOptDouble = downloadSettingObtain.optDouble("failed_resume_max_hours", 72.0d);
            double dOptDouble2 = downloadSettingObtain.optDouble("failed_resume_min_hours", 12.0d);
            long jCurrentTimeMillis = System.currentTimeMillis();
            if (downloadInfo.getFailedResumeCount() < iOptInt) {
                str2 = ", canShowNotification = ";
                str3 = "LaunchResume";
                if (jCurrentTimeMillis - downloadInfo.getLastDownloadTime() < dOptDouble * 3600000.0d && jCurrentTimeMillis - downloadInfo.getLastFailedResumeTime() > dOptDouble2 * 3600000.0d) {
                    z3 = true;
                }
                if (downloadInfo.isPauseReserveOnWifi() && z) {
                    z3 = true;
                }
                if (z3) {
                    boolean z5 = downloadSettingObtain.optInt("failed_resume_need_wifi", 1) == 1;
                    boolean z6 = downloadSettingObtain.optInt("failed_resume_need_wait_wifi", 0) == 1;
                    if (z || !z5 || !z6) {
                        z4 = true;
                        q.rg(downloadInfo, true, z5);
                        downloadInfo.setLastFailedResumeTime(jCurrentTimeMillis);
                        downloadInfo.setFailedResumeCount(downloadInfo.getFailedResumeCount() + 1);
                        downloadInfo.updateSpData();
                        if (downloadInfo.isPauseReserveOnWifi() && z) {
                            downloadInfo.setDownloadFromReserveWifi(true);
                            IReserveWifiStatusListener iReserveWifiStatusListenerOh = pt.bm().oh();
                            if (iReserveWifiStatusListenerOh != null) {
                                iReserveWifiStatusListenerOh.onStatusChanged(downloadInfo, 5, i);
                            }
                        }
                    } else {
                        if (this.rg == null) {
                            this.rg = new ArrayList();
                        }
                        int id = downloadInfo.getId();
                        if (!this.rg.contains(Integer.valueOf(id))) {
                            this.rg.add(Integer.valueOf(id));
                        }
                        downloadInfo.setOnlyWifi(true);
                        RetryScheduler.getInstance().tryStartScheduleRetry(downloadInfo);
                        z4 = false;
                    }
                } else {
                    z4 = false;
                }
                Logger.i(str3, "launchResume, name = " + downloadInfo.getTitle() + str2 + z3 + ", downloadResumed = " + z4);
                fwVarHq = pt.bm().hq();
                if (fwVarHq == null) {
                    fwVarHq.rg(downloadInfo, z4);
                    return;
                }
                return;
            }
            str2 = ", canShowNotification = ";
            str3 = "LaunchResume";
            z3 = false;
            if (downloadInfo.isPauseReserveOnWifi()) {
                z3 = true;
            }
            if (z3) {
            }
            Logger.i(str3, "launchResume, name = " + downloadInfo.getTitle() + str2 + z3 + ", downloadResumed = " + z4);
            fwVarHq = pt.bm().hq();
            if (fwVarHq == null) {
            }
        } else {
            if (realStatus != -3 || !rg(downloadInfo)) {
                if (realStatus == -2) {
                    if (!downloadInfo.isPauseReserveOnWifi()) {
                        rg(downloadInfo, context);
                        return;
                    }
                    if (z) {
                        q.rg(downloadInfo, true, true);
                        downloadInfo.updateSpData();
                        downloadInfo.setDownloadFromReserveWifi(true);
                        fw fwVarHq2 = pt.bm().hq();
                        if (fwVarHq2 != null) {
                            fwVarHq2.rg(downloadInfo, true);
                        }
                        IReserveWifiStatusListener iReserveWifiStatusListenerOh2 = pt.bm().oh();
                        if (iReserveWifiStatusListenerOh2 != null) {
                            iReserveWifiStatusListenerOh2.onStatusChanged(downloadInfo, 5, i);
                            return;
                        }
                        return;
                    }
                    if (this.rg == null) {
                        this.rg = new ArrayList();
                    }
                    int id2 = downloadInfo.getId();
                    if (!this.rg.contains(Integer.valueOf(id2))) {
                        this.rg.add(Integer.valueOf(id2));
                    }
                    RetryScheduler.getInstance().tryStartScheduleRetry(downloadInfo);
                    rg(downloadInfo, context);
                    return;
                }
                return;
            }
            DownloadSetting downloadSettingObtain2 = DownloadSetting.obtain(downloadInfo.getId());
            if (q.rg(context, downloadInfo)) {
                return;
            }
            int iOptInt2 = downloadSettingObtain2.optInt("uninstall_resume_max_count", 0);
            double dOptDouble3 = downloadSettingObtain2.optDouble("uninstall_resume_max_hours", 72.0d);
            double dOptDouble4 = downloadSettingObtain2.optDouble("uninstall_resume_min_hours", 12.0d);
            long jCurrentTimeMillis2 = System.currentTimeMillis();
            if (downloadInfo.getUninstallResumeCount() < iOptInt2) {
                str = "LaunchResume";
                if (jCurrentTimeMillis2 - downloadInfo.getLastDownloadTime() < dOptDouble3 * 3600000.0d && jCurrentTimeMillis2 - downloadInfo.getLastUninstallResumeTime() > dOptDouble4 * 3600000.0d) {
                    z2 = true;
                }
                Logger.i(str, "uninstallResume, name = " + downloadInfo.getTitle() + ", canShowNotification = " + z2);
                if (z2) {
                    return;
                }
                AbsNotificationItem notificationItem = DownloadNotificationManager.getInstance().getNotificationItem(downloadInfo.getId());
                if (notificationItem == null) {
                    i2 = 1;
                    com.ss.android.socialbase.appdownloader.pp.rg rgVar = new com.ss.android.socialbase.appdownloader.pp.rg(context, downloadInfo.getId(), downloadInfo.getTitle(), downloadInfo.getSavePath(), downloadInfo.getName(), downloadInfo.getExtra());
                    DownloadNotificationManager.getInstance().addNotification(rgVar);
                    notificationItem = rgVar;
                } else {
                    i2 = 1;
                    notificationItem.updateNotificationItem(downloadInfo);
                }
                notificationItem.setTotalBytes(downloadInfo.getTotalBytes());
                notificationItem.setCurBytes(downloadInfo.getTotalBytes());
                notificationItem.refreshStatus(downloadInfo.getStatus(), null, false, false);
                downloadInfo.setLastUninstallResumeTime(jCurrentTimeMillis2);
                downloadInfo.setUninstallResumeCount(downloadInfo.getUninstallResumeCount() + i2);
                downloadInfo.updateSpData();
                return;
            }
            str = "LaunchResume";
            z2 = false;
            Logger.i(str, "uninstallResume, name = " + downloadInfo.getTitle() + ", canShowNotification = " + z2);
            if (z2) {
            }
        }
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
