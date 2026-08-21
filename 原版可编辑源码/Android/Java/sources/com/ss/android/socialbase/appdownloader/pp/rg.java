package com.ss.android.socialbase.appdownloader.pp;

import android.app.Notification;
import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.graphics.Bitmap;
import android.os.Build;
import android.support.v4.app.NotificationCompat;
import android.text.TextUtils;
import android.widget.RemoteViews;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.appdownloader.DownloadHandlerService;
import com.ss.android.socialbase.appdownloader.pp;
import com.ss.android.socialbase.appdownloader.rz;
import com.ss.android.socialbase.downloader.downloader.DownloadComponentManager;
import com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher;
import com.ss.android.socialbase.downloader.downloader.Downloader;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.AbsNotificationItem;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;
import com.ss.android.socialbase.downloader.utils.DownloadUtils;

public class rg extends AbsNotificationItem {
    private final Resources df;
    private String pp;
    private String pt;
    private String q;
    private final Context rg;

    public rg(Context context, int i, String str, String str2, String str3, String str4) {
        super(i, str);
        this.pt = str2;
        this.q = str3;
        this.pp = str4;
        Context applicationContext = context.getApplicationContext();
        this.rg = applicationContext;
        this.df = applicationContext.getResources();
    }

    @Override
    public void updateNotificationItem(DownloadInfo downloadInfo) {
        super.updateNotificationItem(downloadInfo);
        this.pt = downloadInfo.getSavePath();
        this.q = downloadInfo.getName();
        this.pp = downloadInfo.getExtra();
    }

    @Override
    public void updateNotification(BaseException baseException, boolean z) {
        if (this.rg == null) {
            return;
        }
        try {
            this.notification = rg(baseException, z);
            notify(this.notification);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:162:0x0460  */
    /* JADX WARN: Removed duplicated region for block: B:170:0x0495  */
    /* JADX WARN: Removed duplicated region for block: B:171:0x04bb  */
    /* JADX WARN: Removed duplicated region for block: B:203:0x05ab  */
    /* JADX WARN: Removed duplicated region for block: B:204:0x05b5  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private Notification rg(BaseException baseException, boolean z) {
        String string;
        int iDf;
        String string2;
        String string3;
        boolean z2;
        boolean z3;
        int iDf2;
        String string4;
        int i;
        int iDf3;
        int iDf4;
        int status = getStatus();
        int iRg = com.ss.android.socialbase.appdownloader.q.rg(status);
        if (iRg == 0) {
            return null;
        }
        NotificationCompat.Builder builderDf = df();
        builderDf.setWhen(getFirstShowTime());
        int id = getId();
        DownloadSetting downloadSettingObtain = DownloadSetting.obtain(id);
        if (Build.VERSION.SDK_INT >= 24 && downloadSettingObtain.optInt(DownloadSettingKeys.KEY_SET_NOTIFICATION_GROUP, 0) == 1) {
            builderDf.setGroup("com.ss.android.socialbase.APP_DOWNLOADER");
            builderDf.setGroupSummary(false);
        }
        int iRg2 = rg(iRg, id);
        if (iRg2 != 0) {
            builderDf.setSmallIcon(iRg2);
        }
        String str = "android.ss.intent.action.DOWNLOAD_CLICK_CONTENT";
        if (iRg == 1 || iRg == 4 || iRg == 2) {
            builderDf.setContentIntent(rg("android.ss.intent.action.DOWNLOAD_CLICK_CONTENT", iRg, id));
            builderDf.setOngoing(iRg == 1 || iRg == 4);
            builderDf.setAutoCancel(false);
        } else if (iRg == 3) {
            builderDf.setOngoing(false);
            builderDf.setAutoCancel(true);
            if (status != -1 && status != -4) {
                if (status == -3 && downloadSettingObtain.optInt("notification_click_install_auto_cancel", 1) == 0) {
                    builderDf.setAutoCancel(false);
                    if (getClickInstallTimes() > 0) {
                        builderDf.setOngoing(false);
                    } else {
                        builderDf.setOngoing(true);
                    }
                }
                str = "android.ss.intent.action.DOWNLOAD_OPEN";
            }
            builderDf.setContentIntent(rg(str, iRg, id));
            builderDf.setDeleteIntent(rg("android.ss.intent.action.DOWNLOAD_HIDE", iRg, id));
        }
        long curBytes = getCurBytes();
        long totalBytes = getTotalBytes();
        int i2 = totalBytes > 0 ? (int) ((curBytes * 100) / totalBytes) : 0;
        String title = getTitle();
        if (TextUtils.isEmpty(title)) {
            title = this.df.getString(rz.df("tt_appdownloader_download_unknown_title"));
        }
        RemoteViews remoteViewsRg = rg();
        int iB = pp.b();
        if (DownloadSetting.obtain(id).optInt("notification_opt_2") != 1) {
            remoteViewsRg.setOnClickPendingIntent(iB, rg("android.ss.intent.action.DOWNLOAD_CLICK_BTN", iRg, id));
        }
        if (DownloadSetting.obtain(id).optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 1) {
            remoteViewsRg.setInt(iB, "setBackgroundResource", pp.qx());
            remoteViewsRg.setTextColor(iB, -1);
        }
        remoteViewsRg.setTextViewText(pp.oh(), title);
        int iRg3 = rg(id);
        remoteViewsRg.setViewVisibility(iRg3, 0);
        remoteViewsRg.setProgressBar(iRg3, 100, i2, z);
        int iHq = pp.hq();
        if (iRg2 != 0) {
            remoteViewsRg.setImageViewResource(iHq, iRg2);
        }
        if (DownloadSetting.obtain(id).optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 1) {
            Bitmap bitmapRg = q.rg().rg(id);
            if (bitmapRg != null) {
                remoteViewsRg.setInt(iHq, "setBackgroundColor", 0);
                remoteViewsRg.setImageViewBitmap(iHq, bitmapRg);
            } else {
                remoteViewsRg.setInt(iHq, "setBackgroundResource", pp.qx());
            }
        }
        string = "";
        if (iRg == 1 || iRg == 4) {
            string = com.ss.android.socialbase.appdownloader.q.rg(getCurBytes()) + "/" + com.ss.android.socialbase.appdownloader.q.rg(getTotalBytes());
            if (iRg == 1) {
                if (getStatus() == 11) {
                    iDf = rz.df("tt_appdownloader_notification_waiting_download_complete_handler");
                } else {
                    iDf = rz.df("tt_appdownloader_notification_downloading");
                }
            } else {
                iDf = rz.df("tt_appdownloader_notification_prepare");
            }
            String string5 = this.rg.getResources().getString(iDf);
            string2 = this.rg.getResources().getString(rz.df("tt_appdownloader_notification_download_pause"));
            remoteViewsRg.setViewVisibility(rg(id), 0);
            remoteViewsRg.setViewVisibility(pp.rz(), 8);
            remoteViewsRg.setViewVisibility(pp.bm(), 0);
            int iB2 = pp.b();
            if (com.ss.android.socialbase.appdownloader.q.rg(this.pp)) {
                remoteViewsRg.setViewVisibility(iB2, 8);
            } else {
                remoteViewsRg.setViewVisibility(iB2, 0);
            }
            if (downloadSettingObtain.optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2) {
                remoteViewsRg.setViewVisibility(iB2, 8);
            }
            string3 = string5;
        } else if (iRg == 2) {
            String str2 = com.ss.android.socialbase.appdownloader.q.rg(getCurBytes()) + "/" + com.ss.android.socialbase.appdownloader.q.rg(getTotalBytes());
            String string6 = this.rg.getResources().getString(rz.df("tt_appdownloader_notification_pausing"));
            string2 = this.rg.getResources().getString(rz.df("tt_appdownloader_notification_download_resume"));
            if (downloadSettingObtain.optInt("notification_opt_2") == 1) {
                if (i2 >= downloadSettingObtain.optInt("noti_progress_show_th", 70)) {
                    remoteViewsRg.setViewVisibility(rg(id), 0);
                    remoteViewsRg.setViewVisibility(pp.bm(), 0);
                    remoteViewsRg.setViewVisibility(pp.rz(), 8);
                } else {
                    remoteViewsRg.setViewVisibility(rg(id), 8);
                    remoteViewsRg.setViewVisibility(pp.bm(), 8);
                    remoteViewsRg.setViewVisibility(pp.rz(), 0);
                    remoteViewsRg.setViewVisibility(pp.v(), 8);
                    string6 = this.df.getString(rz.df("tt_appdownloader_notification_download_continue"));
                }
            } else {
                remoteViewsRg.setViewVisibility(pp.bm(), 0);
                int iRg4 = rg(id);
                if (downloadSettingObtain.optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2) {
                    remoteViewsRg.setViewVisibility(iRg4, 0);
                } else {
                    remoteViewsRg.setViewVisibility(iRg4, 8);
                }
                remoteViewsRg.setViewVisibility(pp.rz(), 8);
            }
            int iB3 = pp.b();
            if (com.ss.android.socialbase.appdownloader.q.rg(this.pp)) {
                remoteViewsRg.setViewVisibility(iB3, 8);
            } else {
                remoteViewsRg.setViewVisibility(iB3, 0);
                if (downloadSettingObtain.optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2) {
                    str2 = com.ss.android.socialbase.appdownloader.q.rg(getCurBytes(), false) + "/" + com.ss.android.socialbase.appdownloader.q.rg(getTotalBytes(), false);
                }
            }
            string3 = string6;
            string = str2;
        } else if (iRg == 3) {
            DownloadInfo downloadInfo = Downloader.getInstance(DownloadComponentManager.getAppContext()).getDownloadInfo(id);
            if (getStatus() == -1 || getStatus() == -4) {
                if (downloadSettingObtain.optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2 && getStatus() == -1 && (DownloadUtils.isNetworkError(baseException) || DownloadUtils.isInsufficientSpaceError(baseException))) {
                    string = com.ss.android.socialbase.appdownloader.q.rg(getCurBytes()) + "/" + com.ss.android.socialbase.appdownloader.q.rg(getTotalBytes());
                }
                remoteViewsRg.setViewVisibility(pp.v(), 8);
                if (baseException != null && baseException.getErrorCode() == 1006) {
                    string3 = this.rg.getResources().getString(rz.df("tt_appdownloader_notification_download_space_failed"));
                } else if (rg(baseException, downloadSettingObtain, downloadInfo)) {
                    if (downloadInfo != null && downloadInfo.isOnlyWifi()) {
                        iDf2 = rz.df("tt_appdownloader_notification_download_waiting_wifi");
                    } else {
                        iDf2 = rz.df("tt_appdownloader_notification_download_waiting_net");
                    }
                    string3 = this.rg.getResources().getString(iDf2);
                } else {
                    string3 = this.rg.getResources().getString(rz.df("tt_appdownloader_notification_download_failed"));
                }
                string4 = this.rg.getResources().getString(rz.df("tt_appdownloader_notification_download_restart"));
                remoteViewsRg.setViewVisibility(pp.b(), 8);
                if (downloadSettingObtain.optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2 && getStatus() == -1) {
                    if (DownloadUtils.isNetworkError(baseException)) {
                        if (DownloadUtils.isWaitWifiAndInNet(baseException, downloadInfo)) {
                            string3 = this.rg.getResources().getString(rz.df("tt_appdownloader_notification_no_wifi_and_in_net"));
                            string4 = this.rg.getResources().getString(rz.df("tt_appdownloader_notification_download_resume"));
                        } else {
                            string3 = this.rg.getResources().getString(rz.df("tt_appdownloader_notification_no_internet_error"));
                        }
                    } else {
                        if (DownloadUtils.isInsufficientSpaceError(baseException)) {
                            i = 0;
                            string3 = this.rg.getResources().getString(rz.df("tt_appdownloader_notification_insufficient_space_error"), com.ss.android.socialbase.appdownloader.q.df(getTotalBytes() - getCurBytes()));
                        }
                        remoteViewsRg.setViewVisibility(rg(id), 8);
                        remoteViewsRg.setViewVisibility(pp.rz(), i);
                        remoteViewsRg.setViewVisibility(pp.bm(), 8);
                        if (downloadSettingObtain.optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2) {
                            remoteViewsRg.setViewVisibility(rg(id), 0);
                            remoteViewsRg.setViewVisibility(pp.rz(), 8);
                            remoteViewsRg.setViewVisibility(pp.bm(), 0);
                            int iB4 = pp.b();
                            if (!DownloadUtils.isWaitWifiAndInNet(baseException, downloadInfo)) {
                            }
                        }
                        string2 = string4;
                    }
                    i = 0;
                    remoteViewsRg.setViewVisibility(rg(id), 8);
                    remoteViewsRg.setViewVisibility(pp.rz(), i);
                    remoteViewsRg.setViewVisibility(pp.bm(), 8);
                    if (downloadSettingObtain.optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2) {
                    }
                    string2 = string4;
                } else {
                    i = 0;
                    remoteViewsRg.setViewVisibility(rg(id), 8);
                    remoteViewsRg.setViewVisibility(pp.rz(), i);
                    remoteViewsRg.setViewVisibility(pp.bm(), 8);
                    if (downloadSettingObtain.optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2 && getStatus() == -1 && (DownloadUtils.isNetworkError(baseException) || DownloadUtils.isInsufficientSpaceError(baseException))) {
                        remoteViewsRg.setViewVisibility(rg(id), 0);
                        remoteViewsRg.setViewVisibility(pp.rz(), 8);
                        remoteViewsRg.setViewVisibility(pp.bm(), 0);
                        int iB42 = pp.b();
                        if (!DownloadUtils.isWaitWifiAndInNet(baseException, downloadInfo)) {
                            remoteViewsRg.setViewVisibility(iB42, 0);
                            string = com.ss.android.socialbase.appdownloader.q.rg(getCurBytes(), false) + "/" + com.ss.android.socialbase.appdownloader.q.rg(getTotalBytes(), false);
                        } else {
                            remoteViewsRg.setViewVisibility(iB42, 8);
                        }
                    }
                    string2 = string4;
                }
            } else if (getStatus() == -3) {
                String strRg = com.ss.android.socialbase.appdownloader.q.rg(getTotalBytes());
                if (downloadInfo != null && !TextUtils.isEmpty(downloadInfo.getMimeType()) && downloadInfo.getMimeType().equals(AdBaseConstants.MIME_APK)) {
                    if (com.ss.android.socialbase.appdownloader.q.rg(this.rg, downloadInfo, !downloadSettingObtain.optBugFix("fix_ui_thread_parser_apk_file", true))) {
                        iDf3 = rz.df("tt_appdownloader_notification_install_finished_open");
                        iDf4 = rz.df("tt_appdownloader_notification_download_open");
                    } else {
                        iDf3 = rz.df("tt_appdownloader_notification_download_complete_with_install");
                        iDf4 = rz.df("tt_appdownloader_notification_download_install");
                    }
                } else {
                    iDf3 = rz.df("tt_appdownloader_notification_download_complete_without_install");
                    if (DownloadProcessDispatcher.getInstance().getNotificationClickCallback(id) != null) {
                        iDf3 = rz.df("tt_appdownloader_notification_download_complete_open");
                    }
                    iDf4 = 0;
                }
                String string7 = this.df.getString(iDf3);
                builderDf.setContentText(string7);
                string = iDf4 != 0 ? this.df.getString(iDf4) : "";
                if (downloadSettingObtain.optInt("notification_opt_2") == 1) {
                    remoteViewsRg.setTextViewText(pp.b(), string);
                    remoteViewsRg.setViewVisibility(pp.v(), 8);
                } else {
                    remoteViewsRg.setViewVisibility(pp.b(), 8);
                }
                i = 0;
                string4 = string;
                string = strRg;
                string3 = string7;
                remoteViewsRg.setViewVisibility(rg(id), 8);
                remoteViewsRg.setViewVisibility(pp.rz(), i);
                remoteViewsRg.setViewVisibility(pp.bm(), 8);
                if (downloadSettingObtain.optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2) {
                }
                string2 = string4;
            } else {
                string3 = "";
                string4 = string3;
                i = 0;
                remoteViewsRg.setViewVisibility(rg(id), 8);
                remoteViewsRg.setViewVisibility(pp.rz(), i);
                remoteViewsRg.setViewVisibility(pp.bm(), 8);
                if (downloadSettingObtain.optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 2) {
                }
                string2 = string4;
            }
        } else {
            string2 = "";
            string3 = string2;
        }
        remoteViewsRg.setTextViewText(pp.f(), string);
        remoteViewsRg.setTextViewText(pp.un(), string3);
        remoteViewsRg.setTextViewText(pp.v(), string);
        remoteViewsRg.setTextViewText(pp.z(), string3);
        int iB5 = pp.b();
        if (TextUtils.isEmpty(string2)) {
            remoteViewsRg.setViewVisibility(iB5, 8);
        } else {
            remoteViewsRg.setTextViewText(iB5, string2);
        }
        if (downloadSettingObtain.optInt("notification_opt_2") == 1) {
            builderDf.setAutoCancel(true);
            z2 = false;
            if (downloadSettingObtain.optInt("notification_ongoing", 0) == 1) {
                builderDf.setOngoing(true);
                z3 = true;
                Notification notificationBuild = builderDf.build();
                if (!z3) {
                    notificationBuild.flags |= 2;
                    setOngoing(true);
                } else {
                    setOngoing(z2);
                }
                notificationBuild.contentView = remoteViewsRg;
                return notificationBuild;
            }
            builderDf.setOngoing(false);
        } else {
            z2 = false;
        }
        z3 = z2;
        Notification notificationBuild2 = builderDf.build();
        if (!z3) {
        }
        notificationBuild2.contentView = remoteViewsRg;
        return notificationBuild2;
    }

    private boolean rg(BaseException baseException, DownloadSetting downloadSetting, DownloadInfo downloadInfo) {
        return baseException != null && (baseException.getErrorCode() == 1013 || baseException.getErrorCode() == 1049) && downloadInfo != null && AdBaseConstants.MIME_APK.contains(downloadInfo.getMimeType()) && downloadSetting.optInt(DownloadSettingKeys.NOTIFICATION_TEXT_OPT, 0) == 1;
    }

    private RemoteViews rg() {
        RemoteViews remoteViews = new RemoteViews(this.rg.getPackageName(), pp.rg());
        if (Build.VERSION.SDK_INT > 20) {
            try {
                if (com.ss.android.socialbase.appdownloader.q.rg(this.rg)) {
                    remoteViews.setInt(pp.c(), "setBackgroundColor", this.rg.getResources().getColor(pp.r()));
                }
            } catch (Throwable unused) {
            }
        }
        return remoteViews;
    }

    private int rg(int i, int i2) {
        if (DownloadSetting.obtain(i2).optInt("notification_opt_2") == 1) {
            return pp.y();
        }
        if (i == 1 || i == 4) {
            return pp.n();
        }
        if (i == 2) {
            return pp.ou();
        }
        if (i == 3) {
            return pp.y();
        }
        return 0;
    }

    private PendingIntent rg(String str, int i, int i2) {
        Intent intent = new Intent(this.rg, (Class<?>) DownloadHandlerService.class);
        intent.setAction(str);
        intent.putExtra("extra_click_download_ids", i2);
        intent.putExtra("extra_click_download_type", i);
        intent.putExtra("extra_from_notification", true);
        return PendingIntent.getService(this.rg, i2, intent, 201326592);
    }

    /*  JADX ERROR: JadxRuntimeException in pass: RegionMakerVisitor
        jadx.core.utils.exceptions.JadxRuntimeException: Can't find top splitter block for handler:B:13:0x0044
        	at jadx.core.utils.BlockUtils.getTopSplitterForHandler(BlockUtils.java:1182)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.collectHandlerRegions(ExcHandlersRegionMaker.java:53)
        	at jadx.core.dex.visitors.regions.maker.ExcHandlersRegionMaker.process(ExcHandlersRegionMaker.java:38)
        	at jadx.core.dex.visitors.regions.RegionMakerVisitor.visit(RegionMakerVisitor.java:27)
        */
    private android.support.v4.app.NotificationCompat.Builder df() {
        /*
            r3 = this;
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            java.lang.String r0 = r0.rz()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 26
            if (r1 >= r2) goto L16
            android.support.v4.app.NotificationCompat$Builder r0 = new android.support.v4.app.NotificationCompat$Builder
            android.content.Context r1 = r3.rg
            r0.<init>(r1)
            goto L4b
        L16:
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L22
            android.content.Context r0 = r3.rg
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.q.df(r0)
        L22:
            com.ss.android.socialbase.appdownloader.pt r1 = com.ss.android.socialbase.appdownloader.pt.bm()     // Catch: java.lang.NoSuchMethodError -> L44
            com.ss.android.socialbase.appdownloader.q.oh r1 = r1.b()     // Catch: java.lang.NoSuchMethodError -> L44
            if (r1 == 0) goto L3b
            com.ss.android.socialbase.appdownloader.pt r1 = com.ss.android.socialbase.appdownloader.pt.bm()     // Catch: java.lang.NoSuchMethodError -> L44
            com.ss.android.socialbase.appdownloader.q.oh r1 = r1.b()     // Catch: java.lang.NoSuchMethodError -> L44
            android.content.Context r2 = r3.rg     // Catch: java.lang.NoSuchMethodError -> L44
            android.support.v4.app.NotificationCompat$Builder r0 = r1.rg(r2, r0)     // Catch: java.lang.NoSuchMethodError -> L44
            goto L4b
        L3b:
            android.support.v4.app.NotificationCompat$Builder r1 = new android.support.v4.app.NotificationCompat$Builder     // Catch: java.lang.NoSuchMethodError -> L44
            android.content.Context r2 = r3.rg     // Catch: java.lang.NoSuchMethodError -> L44
            r1.<init>(r2, r0)     // Catch: java.lang.NoSuchMethodError -> L44
            r0 = r1
            goto L4b
        L44:
            android.support.v4.app.NotificationCompat$Builder r0 = new android.support.v4.app.NotificationCompat$Builder
            android.content.Context r1 = r3.rg
            r0.<init>(r1)
        L4b:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ss.android.socialbase.appdownloader.pp.rg.df():android.support.v4.app.NotificationCompat$Builder");
    }

    private int rg(int i) {
        if (DownloadSetting.obtain(i).optInt(DownloadSettingKeys.OPT_NOTIFICATION_UI) >= 1) {
            return pp.ux();
        }
        return pp.fw();
    }
}
