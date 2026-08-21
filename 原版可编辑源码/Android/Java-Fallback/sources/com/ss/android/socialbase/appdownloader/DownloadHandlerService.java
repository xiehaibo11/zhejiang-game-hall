package com.ss.android.socialbase.appdownloader;

public class DownloadHandlerService extends android.app.Service {
    private static final java.lang.String rg = null;



    static {
            java.lang.Class<com.ss.android.socialbase.appdownloader.DownloadHandlerService> r0 = com.ss.android.socialbase.appdownloader.DownloadHandlerService.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.appdownloader.DownloadHandlerService.rg = r0
            return
    }

    public DownloadHandlerService() {
            r0 = this;
            r0.<init>()
            return
    }

    private void df(com.ss.android.socialbase.downloader.model.DownloadInfo r8, com.ss.android.socialbase.appdownloader.q.pt r9, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r10) {
            r7 = this;
            int r1 = r8.getId()
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity> r2 = com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity.class
            r0.<init>(r7, r2)
            java.lang.String r2 = "extra_click_download_ids"
            r0.putExtra(r2, r1)
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r2)
            r7.startActivity(r0)
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r0.hideNotification(r1)
            r8.updateDownloadTime()
            if (r9 == 0) goto L33
            r2 = 7
            int r4 = r8.getStatus()
            long r5 = r8.getDownloadTime()
            java.lang.String r3 = ""
            r0 = r9
            r0.rg(r1, r2, r3, r4, r5)
        L33:
            if (r10 == 0) goto L3b
            r9 = 7
            java.lang.String r0 = ""
            r10.onNotificationEvent(r9, r8, r0, r0)
        L3b:
            return
    }

    private static void rg(android.content.Context r2, int r3, boolean r4) {
            r0 = 0
            if (r4 == 0) goto L20
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r4 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r4 = r4.getNotificationClickCallback(r3)
            if (r4 == 0) goto L20
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r2)     // Catch: java.lang.Throwable -> L1c
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r1.getDownloadInfo(r3)     // Catch: java.lang.Throwable -> L1c
            if (r1 == 0) goto L20
            boolean r4 = r4.onClickWhenSuccess(r1)     // Catch: java.lang.Throwable -> L1c
            goto L21
        L1c:
            r4 = move-exception
            r4.printStackTrace()
        L20:
            r4 = r0
        L21:
            if (r4 == 0) goto L24
            return
        L24:
            r4 = 1
            int r3 = com.ss.android.socialbase.appdownloader.q.rg(r2, r3, r4)
            if (r3 != 0) goto L34
            java.lang.String r3 = "Open Fail!"
            android.widget.Toast r2 = android.widget.Toast.makeText(r2, r3, r0)
            r2.show()
        L34:
            return
    }

    private static void rg(android.content.Context r2, com.ss.android.socialbase.appdownloader.q.pt r3, com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            if (r4 != 0) goto L3
            return
        L3:
            com.ss.android.socialbase.downloader.downloader.Downloader r2 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r2)
            int r0 = r4.getId()
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r2 = r2.getDownloadNotificationEventListener(r0)
            if (r3 != 0) goto L14
            if (r2 != 0) goto L14
            return
        L14:
            java.util.concurrent.ExecutorService r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            com.ss.android.socialbase.appdownloader.DownloadHandlerService$2 r1 = new com.ss.android.socialbase.appdownloader.DownloadHandlerService$2
            r1.<init>(r4, r3, r2)
            r0.execute(r1)
            return
    }

    private static void rg(android.content.Context r0, com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            android.content.Context r0 = r0.getApplicationContext()
            boolean r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isWifi(r0)
            if (r0 == 0) goto L13
            boolean r0 = r1.isPauseReserveOnWifi()
            if (r0 == 0) goto L13
            r1.stopPauseReserveOnWifi()
        L13:
            return
    }

    public static void rg(android.content.Context r8, com.ss.android.socialbase.downloader.model.DownloadInfo r9, com.ss.android.socialbase.appdownloader.q.pt r10, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r11) {
            int r1 = r9.getId()
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r0 = r0.getNotificationClickCallback(r1)
            java.lang.String r2 = r9.getMimeType()
            java.lang.String r3 = "application/vnd.android.package-archive"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L27
            if (r0 == 0) goto L27
            boolean r2 = com.ss.android.socialbase.appdownloader.q.rg(r8, r9)
            if (r2 == 0) goto L27
            boolean r0 = r0.onClickWhenInstalled(r9)
            if (r0 == 0) goto L27
            return
        L27:
            int r0 = r9.getStatus()
            java.lang.String r7 = ""
            r2 = 0
            r3 = 1
            switch(r0) {
                case -4: goto Lb8;
                case -3: goto L84;
                case -2: goto L57;
                case -1: goto Lb8;
                case 0: goto L32;
                case 1: goto L34;
                case 2: goto L34;
                case 3: goto L34;
                case 4: goto L34;
                case 5: goto L34;
                default: goto L32;
            }
        L32:
            goto Ld5
        L34:
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r8)
            r0.pause(r1)
            rg(r8, r9)
            if (r10 == 0) goto L4f
            r2 = 5
            int r4 = r9.getStatus()
            long r5 = r9.getDownloadTime()
            java.lang.String r3 = ""
            r0 = r10
            r0.rg(r1, r2, r3, r4, r5)
        L4f:
            if (r11 == 0) goto Ld5
            r8 = 5
            r11.onNotificationEvent(r8, r9, r7, r7)
            goto Ld5
        L57:
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            boolean r0 = r0.canResume(r1)
            if (r0 == 0) goto L69
            com.ss.android.socialbase.downloader.downloader.Downloader r8 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r8)
            r8.resume(r1)
            goto L6c
        L69:
            com.ss.android.socialbase.appdownloader.q.rg(r9, r3, r2)
        L6c:
            if (r10 == 0) goto L7d
            r2 = 6
            int r4 = r9.getStatus()
            long r5 = r9.getDownloadTime()
            java.lang.String r3 = ""
            r0 = r10
            r0.rg(r1, r2, r3, r4, r5)
        L7d:
            if (r11 == 0) goto Ld5
            r8 = 6
            r11.onNotificationEvent(r8, r9, r7, r7)
            goto Ld5
        L84:
            android.content.Context r11 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            rg(r11, r1, r3)
            rg(r8, r10, r9)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r8 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            java.lang.String r9 = "notification_click_install_auto_cancel"
            int r8 = r8.optInt(r9, r3)
            if (r8 != 0) goto Lad
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r8 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r8 = r8.getNotificationItem(r1)
            if (r8 == 0) goto Lad
            r8.recordClickInstall()
            r9 = -3
            r10 = 0
            r8.refreshStatus(r9, r10, r2, r3)
            goto Lae
        Lad:
            r2 = r3
        Lae:
            if (r2 == 0) goto Ld5
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r8 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r8.hideNotification(r1)
            goto Ld5
        Lb8:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r10 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            java.lang.String r11 = "enable_notification_ui"
            int r10 = r10.optInt(r11)
            r11 = 2
            if (r10 < r11) goto Lce
            boolean r10 = r9.isOnlyWifi()
            if (r10 == 0) goto Lce
            r9.setOnlyWifi(r2)
        Lce:
            com.ss.android.socialbase.downloader.downloader.Downloader r8 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r8)
            r8.restart(r1)
        Ld5:
            return
    }

    private void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r8, com.ss.android.socialbase.appdownloader.q.pt r9, com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r10) {
            r7 = this;
            int r1 = r8.getId()
            com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher r0 = com.ss.android.socialbase.downloader.downloader.DownloadProcessDispatcher.getInstance()
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r0 = r0.getNotificationClickCallback(r1)
            if (r0 == 0) goto L17
            boolean r0 = r0.onClickWhenUnSuccess(r8)     // Catch: java.lang.Throwable -> L13
            goto L18
        L13:
            r0 = move-exception
            r0.printStackTrace()
        L17:
            r0 = 0
        L18:
            if (r0 != 0) goto L51
            android.content.Intent r0 = new android.content.Intent
            java.lang.Class<com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity> r2 = com.ss.android.socialbase.appdownloader.view.DownloadTaskDeleteActivity.class
            r0.<init>(r7, r2)
            java.lang.String r2 = "extra_click_download_ids"
            r0.putExtra(r2, r1)
            r2 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r2)
            r7.startActivity(r0)
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r0.hideNotification(r1)
            r8.updateDownloadTime()
            if (r9 == 0) goto L49
            r2 = 7
            int r4 = r8.getStatus()
            long r5 = r8.getDownloadTime()
            java.lang.String r3 = ""
            r0 = r9
            r0.rg(r1, r2, r3, r4, r5)
        L49:
            if (r10 == 0) goto L51
            r9 = 7
            java.lang.String r0 = ""
            r10.onNotificationEvent(r9, r8, r0, r0)
        L51:
            return
    }

    private boolean rg(android.content.Intent r8) {
            r7 = this;
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r8.getAction()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto Lf
            return r0
        Lf:
            java.lang.String r2 = "extra_click_download_ids"
            int r2 = r8.getIntExtra(r2, r0)
            java.lang.String r3 = "extra_click_download_type"
            r8.getIntExtra(r3, r0)
            com.ss.android.socialbase.appdownloader.pt r3 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.pt r3 = r3.df()
            com.ss.android.socialbase.downloader.downloader.Downloader r4 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r7)
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r4 = r4.getDownloadNotificationEventListener(r2)
            java.lang.String r5 = "extra_from_notification"
            boolean r8 = r8.getBooleanExtra(r5, r0)
            r5 = 1
            if (r8 == 0) goto L46
            com.ss.android.socialbase.downloader.setting.DownloadSetting r8 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            java.lang.String r6 = "notification_opt_2"
            int r8 = r8.optInt(r6)
            if (r8 != r5) goto L46
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r8 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r8.cancelNotification(r2)
        L46:
            com.ss.android.socialbase.downloader.downloader.Downloader r8 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r7)
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r8.getDownloadInfo(r2)
            if (r8 != 0) goto L51
            return r0
        L51:
            java.lang.String r6 = "android.ss.intent.action.DOWNLOAD_CLICK_CONTENT"
            boolean r6 = r1.equals(r6)
            if (r6 == 0) goto L5e
            r7.rg(r8, r3, r4)
            goto Le3
        L5e:
            java.lang.String r6 = "android.ss.intent.action.DOWNLOAD_OPEN"
            boolean r6 = r1.equals(r6)
            if (r6 == 0) goto L6b
            rg(r7, r8, r3, r4)
            goto Le3
        L6b:
            java.lang.String r6 = "android.ss.intent.action.DOWNLOAD_CLICK_BTN"
            boolean r6 = r1.equals(r6)
            if (r6 == 0) goto Lb6
            int r1 = r8.getStatus()
            if (r1 != 0) goto L7a
            return r0
        L7a:
            rg(r7, r8, r3, r4)
            boolean r1 = r8.isDownloadOverStatus()
            if (r1 == 0) goto Le3
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            java.lang.String r3 = "no_hide_notification"
            int r1 = r1.optInt(r3, r0)
            if (r1 != 0) goto Le3
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r2)
            java.lang.String r3 = "enable_notification_ui"
            int r1 = r1.optInt(r3)
            r3 = 2
            if (r1 < r3) goto La4
            int r8 = r8.getStatus()
            r1 = -1
            if (r8 != r1) goto La4
            goto La5
        La4:
            r5 = r0
        La5:
            if (r5 != 0) goto Le3
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r8 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r8.hideNotification(r2)
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r8 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r8.cancelNotification(r2)
            goto Le3
        Lb6:
            java.lang.String r6 = "android.ss.intent.action.DOWNLOAD_DELETE"
            boolean r6 = r1.equals(r6)
            if (r6 == 0) goto Lc2
            r7.df(r8, r3, r4)
            goto Le3
        Lc2:
            java.lang.String r8 = "android.ss.intent.action.DOWNLOAD_HIDE"
            boolean r8 = r1.equals(r8)
            if (r8 == 0) goto Ld2
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r8 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r8.hideNotification(r2)
            goto Le3
        Ld2:
            java.lang.String r8 = "android.intent.action.BOOT_COMPLETED"
            boolean r8 = r1.equals(r8)
            if (r8 != 0) goto Le4
            java.lang.String r8 = "android.intent.action.MEDIA_MOUNTED"
            boolean r8 = r1.equals(r8)
            if (r8 == 0) goto Le3
            goto Le4
        Le3:
            return r0
        Le4:
            java.util.concurrent.ExecutorService r8 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
            com.ss.android.socialbase.appdownloader.DownloadHandlerService$1 r0 = new com.ss.android.socialbase.appdownloader.DownloadHandlerService$1
            r0.<init>(r7)
            r8.execute(r0)
            return r5
    }

    @Override
    public android.os.IBinder onBind(android.content.Intent r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public void onCreate() {
            r0 = this;
            super.onCreate()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setAppContext(r0)
            return
    }

    @Override
    public int onStartCommand(android.content.Intent r1, int r2, int r3) {
            r0 = this;
            super.onStartCommand(r1, r2, r3)
            boolean r2 = com.ss.android.socialbase.downloader.logger.Logger.debug()
            if (r2 == 0) goto L10
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.DownloadHandlerService.rg
            java.lang.String r3 = "onStartCommand"
            com.ss.android.socialbase.downloader.logger.Logger.d(r2, r3)
        L10:
            r0.rg(r1)
            r0.stopSelf()
            r1 = 2
            return r1
    }
}
