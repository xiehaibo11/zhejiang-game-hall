package com.ss.android.socialbase.appdownloader.pp;

import android.app.PendingIntent;
import android.content.Context;
import android.content.Intent;
import android.content.res.Resources;
import android.os.Build;
import android.widget.RemoteViews;
import com.ss.android.downloadad.api.constant.AdBaseConstants;
import com.ss.android.socialbase.appdownloader.DownloadHandlerService;
import com.ss.android.socialbase.appdownloader.pp;
import com.ss.android.socialbase.downloader.exception.BaseException;
import com.ss.android.socialbase.downloader.model.DownloadInfo;
import com.ss.android.socialbase.downloader.notification.AbsNotificationItem;
import com.ss.android.socialbase.downloader.setting.DownloadSetting;
import com.ss.android.socialbase.downloader.setting.DownloadSettingKeys;

/* JADX INFO: loaded from: classes3.dex */
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

    @Override // com.ss.android.socialbase.downloader.notification.AbsNotificationItem
    public void updateNotificationItem(DownloadInfo downloadInfo) {
        super.updateNotificationItem(downloadInfo);
        this.pt = downloadInfo.getSavePath();
        this.q = downloadInfo.getName();
        this.pp = downloadInfo.getExtra();
    }

    @Override // com.ss.android.socialbase.downloader.notification.AbsNotificationItem
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
        To view partially-correct add '--show-bad-code' argument
    */
    private android.app.Notification rg(com.ss.android.socialbase.downloader.exception.BaseException r26, boolean r27) {
        /*
            Method dump skipped, instruction units count: 1467
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.ss.android.socialbase.appdownloader.pp.rg.rg(com.ss.android.socialbase.downloader.exception.BaseException, boolean):android.app.Notification");
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
