package com.ss.android.socialbase.appdownloader.pp;

public class rg extends com.ss.android.socialbase.downloader.notification.AbsNotificationItem {
    private final android.content.res.Resources df;
    private java.lang.String pp;
    private java.lang.String pt;
    private java.lang.String q;
    private final android.content.Context rg;

    public rg(android.content.Context r1, int r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r0 = this;
            r0.<init>(r2, r3)
            r0.pt = r4
            r0.q = r5
            r0.pp = r6
            android.content.Context r1 = r1.getApplicationContext()
            r0.rg = r1
            android.content.res.Resources r1 = r1.getResources()
            r0.df = r1
            return
    }

    private android.support.v4.app.NotificationCompat.Builder df() {
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
    }

    private int rg(int r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            java.lang.String r0 = "enable_notification_ui"
            int r2 = r2.optInt(r0)
            r0 = 1
            if (r2 < r0) goto L12
            int r2 = com.ss.android.socialbase.appdownloader.pp.ux()
            return r2
        L12:
            int r2 = com.ss.android.socialbase.appdownloader.pp.fw()
            return r2
    }

    private int rg(int r2, int r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            java.lang.String r0 = "notification_opt_2"
            int r3 = r3.optInt(r0)
            r0 = 1
            if (r3 != r0) goto L12
            int r2 = com.ss.android.socialbase.appdownloader.pp.y()
            return r2
        L12:
            r3 = 0
            if (r2 == r0) goto L29
            r0 = 4
            if (r2 != r0) goto L19
            goto L29
        L19:
            r0 = 2
            if (r2 != r0) goto L21
            int r3 = com.ss.android.socialbase.appdownloader.pp.ou()
            goto L2d
        L21:
            r0 = 3
            if (r2 != r0) goto L2d
            int r3 = com.ss.android.socialbase.appdownloader.pp.y()
            goto L2d
        L29:
            int r3 = com.ss.android.socialbase.appdownloader.pp.n()
        L2d:
            return r3
    }

    private android.app.Notification rg(com.ss.android.socialbase.downloader.exception.BaseException r26, boolean r27) {
            r25 = this;
            r0 = r25
            r1 = r26
            int r2 = r25.getStatus()
            int r3 = com.ss.android.socialbase.appdownloader.q.rg(r2)
            if (r3 != 0) goto L10
            r1 = 0
            return r1
        L10:
            android.support.v4.app.NotificationCompat$Builder r4 = r25.df()
            long r5 = r25.getFirstShowTime()
            r4.setWhen(r5)
            int r5 = r25.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r6 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r5)
            int r7 = android.os.Build.VERSION.SDK_INT
            r8 = 24
            r9 = 1
            r10 = 0
            if (r7 < r8) goto L3b
            java.lang.String r7 = "set_notification_group"
            int r7 = r6.optInt(r7, r10)
            if (r7 != r9) goto L3b
            java.lang.String r7 = "com.ss.android.socialbase.APP_DOWNLOADER"
            r4.setGroup(r7)
            r4.setGroupSummary(r10)
        L3b:
            int r7 = r0.rg(r3, r5)
            if (r7 == 0) goto L44
            r4.setSmallIcon(r7)
        L44:
            r11 = -4
            r12 = 3
            java.lang.String r13 = "android.ss.intent.action.DOWNLOAD_CLICK_CONTENT"
            r14 = 4
            r15 = -1
            r8 = 2
            if (r3 == r9) goto L8f
            if (r3 == r14) goto L8f
            if (r3 != r8) goto L52
            goto L8f
        L52:
            if (r3 != r12) goto La4
            r4.setOngoing(r10)
            r4.setAutoCancel(r9)
            java.lang.String r17 = "android.ss.intent.action.DOWNLOAD_OPEN"
            if (r2 == r15) goto L7e
            if (r2 != r11) goto L61
            goto L7e
        L61:
            r11 = -3
            if (r2 != r11) goto L7c
            java.lang.String r2 = "notification_click_install_auto_cancel"
            int r2 = r6.optInt(r2, r9)
            if (r2 != 0) goto L7c
            r4.setAutoCancel(r10)
            int r2 = r25.getClickInstallTimes()
            if (r2 <= 0) goto L79
            r4.setOngoing(r10)
            goto L7c
        L79:
            r4.setOngoing(r9)
        L7c:
            r13 = r17
        L7e:
            android.app.PendingIntent r2 = r0.rg(r13, r3, r5)
            r4.setContentIntent(r2)
            java.lang.String r2 = "android.ss.intent.action.DOWNLOAD_HIDE"
            android.app.PendingIntent r2 = r0.rg(r2, r3, r5)
            r4.setDeleteIntent(r2)
            goto La4
        L8f:
            android.app.PendingIntent r2 = r0.rg(r13, r3, r5)
            r4.setContentIntent(r2)
            if (r3 == r9) goto L9d
            if (r3 != r14) goto L9b
            goto L9d
        L9b:
            r2 = r10
            goto L9e
        L9d:
            r2 = r9
        L9e:
            r4.setOngoing(r2)
            r4.setAutoCancel(r10)
        La4:
            long r18 = r25.getCurBytes()
            long r20 = r25.getTotalBytes()
            r22 = 0
            int r2 = (r20 > r22 ? 1 : (r20 == r22 ? 0 : -1))
            if (r2 <= 0) goto Lba
            r22 = 100
            long r18 = r18 * r22
            long r12 = r18 / r20
            int r11 = (int) r12
            goto Lbb
        Lba:
            r11 = r10
        Lbb:
            java.lang.String r12 = r25.getTitle()
            boolean r13 = android.text.TextUtils.isEmpty(r12)
            if (r13 == 0) goto Ld1
            java.lang.String r12 = "tt_appdownloader_download_unknown_title"
            int r12 = com.ss.android.socialbase.appdownloader.rz.df(r12)
            android.content.res.Resources r13 = r0.df
            java.lang.String r12 = r13.getString(r12)
        Ld1:
            android.widget.RemoteViews r13 = r25.rg()
            int r2 = com.ss.android.socialbase.appdownloader.pp.b()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r8 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r5)
            java.lang.String r14 = "notification_opt_2"
            int r8 = r8.optInt(r14)
            if (r8 == r9) goto Lee
            java.lang.String r8 = "android.ss.intent.action.DOWNLOAD_CLICK_BTN"
            android.app.PendingIntent r8 = r0.rg(r8, r3, r5)
            r13.setOnClickPendingIntent(r2, r8)
        Lee:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r8 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r5)
            java.lang.String r10 = "enable_notification_ui"
            int r8 = r8.optInt(r10)
            java.lang.String r15 = "setBackgroundResource"
            if (r8 < r9) goto L107
            int r8 = com.ss.android.socialbase.appdownloader.pp.qx()
            r13.setInt(r2, r15, r8)
            r8 = -1
            r13.setTextColor(r2, r8)
        L107:
            int r2 = com.ss.android.socialbase.appdownloader.pp.oh()
            r13.setTextViewText(r2, r12)
            int r2 = r0.rg(r5)
            r8 = 0
            r13.setViewVisibility(r2, r8)
            r8 = 100
            r12 = r27
            r13.setProgressBar(r2, r8, r11, r12)
            int r2 = com.ss.android.socialbase.appdownloader.pp.hq()
            if (r7 == 0) goto L126
            r13.setImageViewResource(r2, r7)
        L126:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r7 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r5)
            int r7 = r7.optInt(r10)
            if (r7 < r9) goto L14b
            com.ss.android.socialbase.appdownloader.pp.q r7 = com.ss.android.socialbase.appdownloader.pp.q.rg()
            android.graphics.Bitmap r7 = r7.rg(r5)
            if (r7 == 0) goto L144
            java.lang.String r8 = "setBackgroundColor"
            r12 = 0
            r13.setInt(r2, r8, r12)
            r13.setImageViewBitmap(r2, r7)
            goto L14b
        L144:
            int r7 = com.ss.android.socialbase.appdownloader.pp.qx()
            r13.setInt(r2, r15, r7)
        L14b:
            java.lang.String r2 = ""
            java.lang.String r7 = "/"
            r8 = 8
            if (r3 == r9) goto L4c7
            r12 = 4
            if (r3 != r12) goto L158
            goto L4c7
        L158:
            java.lang.String r12 = "tt_appdownloader_notification_download_resume"
            r15 = 2
            if (r3 != r15) goto L250
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r2 = r25.getCurBytes()
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.q.rg(r2)
            r1.append(r2)
            r1.append(r7)
            long r2 = r25.getTotalBytes()
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.q.rg(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "tt_appdownloader_notification_pausing"
            int r2 = com.ss.android.socialbase.appdownloader.rz.df(r2)
            android.content.Context r3 = r0.rg
            android.content.res.Resources r3 = r3.getResources()
            java.lang.String r2 = r3.getString(r2)
            int r3 = com.ss.android.socialbase.appdownloader.rz.df(r12)
            android.content.Context r12 = r0.rg
            android.content.res.Resources r12 = r12.getResources()
            java.lang.String r3 = r12.getString(r3)
            int r12 = r6.optInt(r14)
            if (r12 != r9) goto L1ee
            r12 = 70
            java.lang.String r15 = "noti_progress_show_th"
            int r12 = r6.optInt(r15, r12)
            if (r11 < r12) goto L1c4
            int r5 = r0.rg(r5)
            r11 = 0
            r13.setViewVisibility(r5, r11)
            int r5 = com.ss.android.socialbase.appdownloader.pp.bm()
            r13.setViewVisibility(r5, r11)
            int r5 = com.ss.android.socialbase.appdownloader.pp.rz()
            r13.setViewVisibility(r5, r8)
            goto L20f
        L1c4:
            r11 = 0
            int r2 = r0.rg(r5)
            r13.setViewVisibility(r2, r8)
            int r2 = com.ss.android.socialbase.appdownloader.pp.bm()
            r13.setViewVisibility(r2, r8)
            int r2 = com.ss.android.socialbase.appdownloader.pp.rz()
            r13.setViewVisibility(r2, r11)
            int r2 = com.ss.android.socialbase.appdownloader.pp.v()
            r13.setViewVisibility(r2, r8)
            java.lang.String r2 = "tt_appdownloader_notification_download_continue"
            int r2 = com.ss.android.socialbase.appdownloader.rz.df(r2)
            android.content.res.Resources r5 = r0.df
            java.lang.String r2 = r5.getString(r2)
            goto L20f
        L1ee:
            r11 = 0
            int r12 = com.ss.android.socialbase.appdownloader.pp.bm()
            r13.setViewVisibility(r12, r11)
            int r5 = r0.rg(r5)
            int r12 = r6.optInt(r10)
            r15 = 2
            if (r12 < r15) goto L205
            r13.setViewVisibility(r5, r11)
            goto L208
        L205:
            r13.setViewVisibility(r5, r8)
        L208:
            int r5 = com.ss.android.socialbase.appdownloader.pp.rz()
            r13.setViewVisibility(r5, r8)
        L20f:
            int r5 = com.ss.android.socialbase.appdownloader.pp.b()
            java.lang.String r11 = r0.pp
            boolean r11 = com.ss.android.socialbase.appdownloader.q.rg(r11)
            if (r11 == 0) goto L21f
            r13.setViewVisibility(r5, r8)
            goto L24c
        L21f:
            r11 = 0
            r13.setViewVisibility(r5, r11)
            int r5 = r6.optInt(r10)
            r10 = 2
            if (r5 < r10) goto L24c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r8 = r25.getCurBytes()
            java.lang.String r5 = com.ss.android.socialbase.appdownloader.q.rg(r8, r11)
            r1.append(r5)
            r1.append(r7)
            long r7 = r25.getTotalBytes()
            java.lang.String r5 = com.ss.android.socialbase.appdownloader.q.rg(r7, r11)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
        L24c:
            r8 = r2
            r2 = r1
            goto L558
        L250:
            r8 = 3
            if (r3 != r8) goto L4c3
            android.content.Context r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r3 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r3)
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r3.getDownloadInfo(r5)
            int r8 = r25.getStatus()
            r9 = -1
            if (r8 == r9) goto L317
            int r8 = r25.getStatus()
            r9 = -4
            if (r8 != r9) goto L26f
            goto L317
        L26f:
            int r8 = r25.getStatus()
            r9 = -3
            if (r8 != r9) goto L312
            long r8 = r25.getTotalBytes()
            java.lang.String r8 = com.ss.android.socialbase.appdownloader.q.rg(r8)
            if (r3 == 0) goto L2c0
            java.lang.String r9 = r3.getMimeType()
            boolean r9 = android.text.TextUtils.isEmpty(r9)
            if (r9 != 0) goto L2c0
            java.lang.String r9 = r3.getMimeType()
            java.lang.String r11 = "application/vnd.android.package-archive"
            boolean r9 = r9.equals(r11)
            if (r9 == 0) goto L2c0
            java.lang.String r9 = "fix_ui_thread_parser_apk_file"
            r11 = 1
            boolean r9 = r6.optBugFix(r9, r11)
            r9 = r9 ^ r11
            android.content.Context r11 = r0.rg
            boolean r9 = com.ss.android.socialbase.appdownloader.q.rg(r11, r3, r9)
            if (r9 == 0) goto L2b3
            java.lang.String r9 = "tt_appdownloader_notification_install_finished_open"
            int r9 = com.ss.android.socialbase.appdownloader.rz.df(r9)
            java.lang.String r11 = "tt_appdownloader_notification_download_open"
            int r11 = com.ss.android.socialbase.appdownloader.rz.df(r11)
            goto L2d7
        L2b3:
            java.lang.String r9 = "tt_appdownloader_notification_download_complete_with_install"
            int r9 = com.ss.android.socialbase.appdownloader.rz.df(r9)
            java.lang.String r11 = "tt_appdownloader_notification_download_install"
            int r11 = com.ss.android.socialbase.appdownloader.rz.df(r11)
            goto L2d7
        L2c0:
            java.lang.String r9 = "tt_appdownloader_notification_download_complete_without_install"
            int r9 = com.ss.android.socialbase.appdownloader.rz.df(r9)
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r11 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r11 = r11.getNotificationClickCallback(r5)
            if (r11 == 0) goto L2d6
            java.lang.String r9 = "tt_appdownloader_notification_download_complete_open"
            int r9 = com.ss.android.socialbase.appdownloader.rz.df(r9)
        L2d6:
            r11 = 0
        L2d7:
            android.content.res.Resources r12 = r0.df
            java.lang.String r9 = r12.getString(r9)
            r4.setContentText(r9)
            if (r11 == 0) goto L2e8
            android.content.res.Resources r2 = r0.df
            java.lang.String r2 = r2.getString(r11)
        L2e8:
            int r11 = r6.optInt(r14)
            r12 = 1
            if (r11 != r12) goto L300
            int r11 = com.ss.android.socialbase.appdownloader.pp.b()
            r13.setTextViewText(r11, r2)
            int r11 = com.ss.android.socialbase.appdownloader.pp.v()
            r12 = 8
            r13.setViewVisibility(r11, r12)
            goto L309
        L300:
            r12 = 8
            int r11 = com.ss.android.socialbase.appdownloader.pp.b()
            r13.setViewVisibility(r11, r12)
        L309:
            r15 = 0
            r24 = r9
            r9 = r2
            r2 = r8
            r8 = r24
            goto L442
        L312:
            r8 = r2
            r9 = r8
        L314:
            r15 = 0
            goto L442
        L317:
            int r8 = r6.optInt(r10)
            r9 = 2
            if (r8 < r9) goto L353
            int r8 = r25.getStatus()
            r9 = -1
            if (r8 != r9) goto L353
            boolean r8 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkError(r26)
            if (r8 != 0) goto L331
            boolean r8 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isInsufficientSpaceError(r26)
            if (r8 == 0) goto L353
        L331:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            long r8 = r25.getCurBytes()
            java.lang.String r8 = com.ss.android.socialbase.appdownloader.q.rg(r8)
            r2.append(r8)
            r2.append(r7)
            long r8 = r25.getTotalBytes()
            java.lang.String r8 = com.ss.android.socialbase.appdownloader.q.rg(r8)
            r2.append(r8)
            java.lang.String r2 = r2.toString()
        L353:
            int r8 = com.ss.android.socialbase.appdownloader.pp.v()
            r9 = 8
            r13.setViewVisibility(r8, r9)
            if (r1 == 0) goto L377
            int r8 = r26.getErrorCode()
            r9 = 1006(0x3ee, float:1.41E-42)
            if (r8 != r9) goto L377
            java.lang.String r8 = "tt_appdownloader_notification_download_space_failed"
            int r8 = com.ss.android.socialbase.appdownloader.rz.df(r8)
            android.content.Context r9 = r0.rg
            android.content.res.Resources r9 = r9.getResources()
            java.lang.String r8 = r9.getString(r8)
            goto L3b2
        L377:
            boolean r8 = r0.rg(r1, r6, r3)
            if (r8 == 0) goto L3a2
            if (r3 == 0) goto L387
            boolean r8 = r3.isOnlyWifi()
            if (r8 == 0) goto L387
            r8 = 1
            goto L388
        L387:
            r8 = 0
        L388:
            if (r8 == 0) goto L391
            java.lang.String r8 = "tt_appdownloader_notification_download_waiting_wifi"
            int r8 = com.ss.android.socialbase.appdownloader.rz.df(r8)
            goto L397
        L391:
            java.lang.String r8 = "tt_appdownloader_notification_download_waiting_net"
            int r8 = com.ss.android.socialbase.appdownloader.rz.df(r8)
        L397:
            android.content.Context r9 = r0.rg
            android.content.res.Resources r9 = r9.getResources()
            java.lang.String r8 = r9.getString(r8)
            goto L3b2
        L3a2:
            java.lang.String r8 = "tt_appdownloader_notification_download_failed"
            int r8 = com.ss.android.socialbase.appdownloader.rz.df(r8)
            android.content.Context r9 = r0.rg
            android.content.res.Resources r9 = r9.getResources()
            java.lang.String r8 = r9.getString(r8)
        L3b2:
            java.lang.String r9 = "tt_appdownloader_notification_download_restart"
            int r9 = com.ss.android.socialbase.appdownloader.rz.df(r9)
            android.content.Context r11 = r0.rg
            android.content.res.Resources r11 = r11.getResources()
            java.lang.String r9 = r11.getString(r9)
            int r11 = com.ss.android.socialbase.appdownloader.pp.b()
            r15 = 8
            r13.setViewVisibility(r11, r15)
            int r11 = r6.optInt(r10)
            r15 = 2
            if (r11 < r15) goto L314
            int r11 = r25.getStatus()
            r15 = -1
            if (r11 != r15) goto L314
            boolean r11 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkError(r26)
            if (r11 == 0) goto L417
            boolean r8 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isWaitWifiAndInNet(r1, r3)
            if (r8 == 0) goto L405
            java.lang.String r8 = "tt_appdownloader_notification_no_wifi_and_in_net"
            int r8 = com.ss.android.socialbase.appdownloader.rz.df(r8)
            android.content.Context r9 = r0.rg
            android.content.res.Resources r9 = r9.getResources()
            java.lang.String r8 = r9.getString(r8)
            int r9 = com.ss.android.socialbase.appdownloader.rz.df(r12)
            android.content.Context r11 = r0.rg
            android.content.res.Resources r11 = r11.getResources()
            java.lang.String r9 = r11.getString(r9)
            goto L314
        L405:
            java.lang.String r8 = "tt_appdownloader_notification_no_internet_error"
            int r8 = com.ss.android.socialbase.appdownloader.rz.df(r8)
            android.content.Context r11 = r0.rg
            android.content.res.Resources r11 = r11.getResources()
            java.lang.String r8 = r11.getString(r8)
            goto L314
        L417:
            boolean r11 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isInsufficientSpaceError(r26)
            if (r11 == 0) goto L314
            java.lang.String r8 = "tt_appdownloader_notification_insufficient_space_error"
            int r8 = com.ss.android.socialbase.appdownloader.rz.df(r8)
            android.content.Context r11 = r0.rg
            android.content.res.Resources r11 = r11.getResources()
            r12 = 1
            java.lang.Object[] r15 = new java.lang.Object[r12]
            r12 = r15
            long r16 = r25.getTotalBytes()
            long r22 = r25.getCurBytes()
            long r16 = r16 - r22
            java.lang.String r16 = com.ss.android.socialbase.appdownloader.q.df(r16)
            r15 = 0
            r12[r15] = r16
            java.lang.String r8 = r11.getString(r8, r12)
        L442:
            int r11 = r0.rg(r5)
            r12 = 8
            r13.setViewVisibility(r11, r12)
            int r11 = com.ss.android.socialbase.appdownloader.pp.rz()
            r13.setViewVisibility(r11, r15)
            int r11 = com.ss.android.socialbase.appdownloader.pp.bm()
            r13.setViewVisibility(r11, r12)
            int r10 = r6.optInt(r10)
            r11 = 2
            if (r10 < r11) goto L4c0
            int r10 = r25.getStatus()
            r11 = -1
            if (r10 != r11) goto L4c0
            boolean r10 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkError(r26)
            if (r10 != 0) goto L473
            boolean r10 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isInsufficientSpaceError(r26)
            if (r10 == 0) goto L4c0
        L473:
            int r5 = r0.rg(r5)
            r10 = 0
            r13.setViewVisibility(r5, r10)
            int r5 = com.ss.android.socialbase.appdownloader.pp.rz()
            r11 = 8
            r13.setViewVisibility(r5, r11)
            int r5 = com.ss.android.socialbase.appdownloader.pp.bm()
            r13.setViewVisibility(r5, r10)
            int r5 = com.ss.android.socialbase.appdownloader.pp.b()
            boolean r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isWaitWifiAndInNet(r1, r3)
            if (r1 == 0) goto L4bb
            r13.setViewVisibility(r5, r10)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r2 = r25.getCurBytes()
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.q.rg(r2, r10)
            r1.append(r2)
            r1.append(r7)
            long r2 = r25.getTotalBytes()
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.q.rg(r2, r10)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            goto L4c0
        L4bb:
            r1 = 8
            r13.setViewVisibility(r5, r1)
        L4c0:
            r3 = r9
            goto L558
        L4c3:
            r3 = r2
            r8 = r3
            goto L558
        L4c7:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            long r8 = r25.getCurBytes()
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.q.rg(r8)
            r1.append(r2)
            r1.append(r7)
            long r7 = r25.getTotalBytes()
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.q.rg(r7)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            r1 = 1
            if (r3 != r1) goto L502
            int r1 = r25.getStatus()
            r3 = 11
            if (r1 != r3) goto L4fb
            java.lang.String r1 = "tt_appdownloader_notification_waiting_download_complete_handler"
            int r1 = com.ss.android.socialbase.appdownloader.rz.df(r1)
            goto L508
        L4fb:
            java.lang.String r1 = "tt_appdownloader_notification_downloading"
            int r1 = com.ss.android.socialbase.appdownloader.rz.df(r1)
            goto L508
        L502:
            java.lang.String r1 = "tt_appdownloader_notification_prepare"
            int r1 = com.ss.android.socialbase.appdownloader.rz.df(r1)
        L508:
            android.content.Context r3 = r0.rg
            android.content.res.Resources r3 = r3.getResources()
            java.lang.String r1 = r3.getString(r1)
            java.lang.String r3 = "tt_appdownloader_notification_download_pause"
            int r3 = com.ss.android.socialbase.appdownloader.rz.df(r3)
            android.content.Context r7 = r0.rg
            android.content.res.Resources r7 = r7.getResources()
            java.lang.String r3 = r7.getString(r3)
            int r5 = r0.rg(r5)
            r7 = 0
            r13.setViewVisibility(r5, r7)
            int r5 = com.ss.android.socialbase.appdownloader.pp.rz()
            r8 = 8
            r13.setViewVisibility(r5, r8)
            int r5 = com.ss.android.socialbase.appdownloader.pp.bm()
            r13.setViewVisibility(r5, r7)
            int r5 = com.ss.android.socialbase.appdownloader.pp.b()
            java.lang.String r9 = r0.pp
            boolean r9 = com.ss.android.socialbase.appdownloader.q.rg(r9)
            if (r9 == 0) goto L54a
            r13.setViewVisibility(r5, r8)
            goto L54d
        L54a:
            r13.setViewVisibility(r5, r7)
        L54d:
            int r7 = r6.optInt(r10)
            r9 = 2
            if (r7 < r9) goto L557
            r13.setViewVisibility(r5, r8)
        L557:
            r8 = r1
        L558:
            int r1 = com.ss.android.socialbase.appdownloader.pp.f()
            r13.setTextViewText(r1, r2)
            int r1 = com.ss.android.socialbase.appdownloader.pp.un()
            r13.setTextViewText(r1, r8)
            int r1 = com.ss.android.socialbase.appdownloader.pp.v()
            r13.setTextViewText(r1, r2)
            int r1 = com.ss.android.socialbase.appdownloader.pp.z()
            r13.setTextViewText(r1, r8)
            int r1 = com.ss.android.socialbase.appdownloader.pp.b()
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 == 0) goto L584
            r2 = 8
            r13.setViewVisibility(r1, r2)
            goto L587
        L584:
            r13.setTextViewText(r1, r3)
        L587:
            int r1 = r6.optInt(r14)
            r2 = 1
            if (r1 != r2) goto L5a3
            r4.setAutoCancel(r2)
            java.lang.String r1 = "notification_ongoing"
            r8 = 0
            int r1 = r6.optInt(r1, r8)
            if (r1 != r2) goto L59f
            r4.setOngoing(r2)
            r1 = r2
            goto L5a5
        L59f:
            r4.setOngoing(r8)
            goto L5a4
        L5a3:
            r8 = 0
        L5a4:
            r1 = r8
        L5a5:
            android.app.Notification r3 = r4.build()
            if (r1 == 0) goto L5b5
            int r1 = r3.flags
            r4 = 2
            r1 = r1 | r4
            r3.flags = r1
            r0.setOngoing(r2)
            goto L5b8
        L5b5:
            r0.setOngoing(r8)
        L5b8:
            r3.contentView = r13
            return r3
    }

    private android.app.PendingIntent rg(java.lang.String r4, int r5, int r6) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = r3.rg
            java.lang.Class<com.ss.android.socialbase.appdownloader.DownloadHandlerService> r2 = com.ss.android.socialbase.appdownloader.DownloadHandlerService.class
            r0.<init>(r1, r2)
            r0.setAction(r4)
            java.lang.String r4 = "extra_click_download_ids"
            r0.putExtra(r4, r6)
            java.lang.String r4 = "extra_click_download_type"
            r0.putExtra(r4, r5)
            java.lang.String r4 = "extra_from_notification"
            r5 = 1
            r0.putExtra(r4, r5)
            android.content.Context r4 = r3.rg
            r5 = 201326592(0xc000000, float:9.8607613E-32)
            android.app.PendingIntent r4 = android.app.PendingIntent.getService(r4, r6, r0, r5)
            return r4
    }

    private android.widget.RemoteViews rg() {
            r5 = this;
            int r0 = com.ss.android.socialbase.appdownloader.pp.rg()
            android.widget.RemoteViews r1 = new android.widget.RemoteViews
            android.content.Context r2 = r5.rg
            java.lang.String r2 = r2.getPackageName()
            r1.<init>(r2, r0)
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 20
            if (r0 <= r2) goto L34
            android.content.Context r0 = r5.rg     // Catch: java.lang.Throwable -> L34
            boolean r0 = com.ss.android.socialbase.appdownloader.q.rg(r0)     // Catch: java.lang.Throwable -> L34
            if (r0 == 0) goto L34
            int r0 = com.ss.android.socialbase.appdownloader.pp.c()     // Catch: java.lang.Throwable -> L34
            int r2 = com.ss.android.socialbase.appdownloader.pp.r()     // Catch: java.lang.Throwable -> L34
            java.lang.String r3 = "setBackgroundColor"
            android.content.Context r4 = r5.rg     // Catch: java.lang.Throwable -> L34
            android.content.res.Resources r4 = r4.getResources()     // Catch: java.lang.Throwable -> L34
            int r2 = r4.getColor(r2)     // Catch: java.lang.Throwable -> L34
            r1.setInt(r0, r3, r2)     // Catch: java.lang.Throwable -> L34
        L34:
            return r1
    }

    private boolean rg(com.ss.android.socialbase.downloader.exception.BaseException r5, com.ss.android.socialbase.downloader.setting.DownloadSetting r6, com.ss.android.socialbase.downloader.model.DownloadInfo r7) {
            r4 = this;
            r0 = 1
            r1 = 0
            if (r5 == 0) goto L2b
            int r2 = r5.getErrorCode()
            r3 = 1013(0x3f5, float:1.42E-42)
            if (r2 == r3) goto L14
            int r5 = r5.getErrorCode()
            r2 = 1049(0x419, float:1.47E-42)
            if (r5 != r2) goto L2b
        L14:
            if (r7 == 0) goto L2b
            java.lang.String r5 = r7.getMimeType()
            java.lang.String r7 = "application/vnd.android.package-archive"
            boolean r5 = r7.contains(r5)
            if (r5 == 0) goto L2b
            java.lang.String r5 = "notification_text_opt"
            int r5 = r6.optInt(r5, r1)
            if (r5 != r0) goto L2b
            goto L2c
        L2b:
            r0 = r1
        L2c:
            return r0
    }

    @Override
    public void updateNotification(com.ss.android.socialbase.downloader.exception.BaseException r2, boolean r3) {
            r1 = this;
            android.content.Context r0 = r1.rg
            if (r0 != 0) goto L5
            return
        L5:
            android.app.Notification r2 = r1.rg(r2, r3)     // Catch: java.lang.Exception -> L11
            r1.notification = r2     // Catch: java.lang.Exception -> L11
            android.app.Notification r2 = r1.notification     // Catch: java.lang.Exception -> L11
            r1.notify(r2)     // Catch: java.lang.Exception -> L11
            goto L15
        L11:
            r2 = move-exception
            r2.printStackTrace()
        L15:
            return
    }

    @Override
    public void updateNotificationItem(com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r1 = this;
            super.updateNotificationItem(r2)
            java.lang.String r0 = r2.getSavePath()
            r1.pt = r0
            java.lang.String r0 = r2.getName()
            r1.q = r0
            java.lang.String r2 = r2.getExtra()
            r1.pp = r2
            return
    }
}
