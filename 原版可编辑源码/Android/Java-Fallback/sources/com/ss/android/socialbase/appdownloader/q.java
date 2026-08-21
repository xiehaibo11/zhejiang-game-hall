package com.ss.android.socialbase.appdownloader;

public class q {
    private static android.app.NotificationChannel df;
    private static int rg;



    static {
            return
    }

    static int df(int r0) {
            com.ss.android.socialbase.appdownloader.q.rg = r0
            return r0
    }

    public static int df(android.content.Context r7, int r8, boolean r9) {
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r7)
            com.ss.android.socialbase.downloader.model.DownloadInfo r5 = r0.getDownloadInfo(r8)
            if (r5 == 0) goto L4c
            java.lang.String r0 = r5.getMimeType()
            java.lang.String r1 = "application/vnd.android.package-archive"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L4c
            java.lang.String r0 = r5.getSavePath()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4c
            java.lang.String r0 = r5.getName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4c
            java.io.File r6 = new java.io.File
            java.lang.String r0 = r5.getSavePath()
            java.lang.String r1 = r5.getName()
            r6.<init>(r0, r1)
            boolean r0 = r6.exists()
            if (r0 != 0) goto L3e
            goto L4c
        L3e:
            com.ss.android.socialbase.appdownloader.q$2 r0 = new com.ss.android.socialbase.appdownloader.q$2
            r1 = r0
            r2 = r7
            r3 = r8
            r4 = r9
            r1.<init>(r2, r3, r4, r5, r6)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.submitIOTask(r0)
            r7 = 1
            return r7
        L4c:
            r7 = 2
            df(r5, r9, r7)
            return r7
    }

    public static int df(android.content.Context r3, com.ss.android.socialbase.downloader.model.DownloadInfo r4) {
            r0 = 0
            if (r3 == 0) goto L35
            if (r4 == 0) goto L35
            java.lang.String r1 = r4.getSavePath()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L35
            java.lang.String r1 = r4.getName()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L1a
            goto L35
        L1a:
            int r1 = r4.getAppVersionCode()
            if (r1 <= 0) goto L21
            return r1
        L21:
            java.lang.String r1 = r4.getSavePath()     // Catch: java.lang.Throwable -> L35
            java.lang.String r2 = r4.getName()     // Catch: java.lang.Throwable -> L35
            android.content.pm.PackageInfo r3 = rg(r3, r4, r1, r2)     // Catch: java.lang.Throwable -> L35
            if (r3 == 0) goto L35
            int r3 = r3.versionCode     // Catch: java.lang.Throwable -> L35
            r4.setAppVersionCode(r3)     // Catch: java.lang.Throwable -> L35
            return r3
        L35:
            return r0
    }

    public static java.lang.String df() {
            java.lang.String r0 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getDownloadPath()
            return r0
    }

    public static java.lang.String df(long r8) {
            r0 = 5
            long[] r1 = new long[r0]
            r1 = {x0044: FILL_ARRAY_DATA , data: [1099511627776, 1073741824, 1048576, 1024, 1} // fill-array
            java.lang.String r2 = "TB"
            java.lang.String r3 = "GB"
            java.lang.String r4 = "MB"
            java.lang.String r5 = "KB"
            java.lang.String r6 = "B"
            java.lang.String[] r2 = new java.lang.String[]{r2, r3, r4, r5, r6}
            r3 = 1
            int r3 = (r8 > r3 ? 1 : (r8 == r3 ? 0 : -1))
            if (r3 >= 0) goto L2f
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "0 "
            r8.append(r9)
            r9 = 4
            r9 = r2[r9]
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            return r8
        L2f:
            r3 = 0
            r4 = 0
        L31:
            if (r4 >= r0) goto L43
            r5 = r1[r4]
            int r7 = (r8 > r5 ? 1 : (r8 == r5 ? 0 : -1))
            if (r7 < 0) goto L40
            r0 = r2[r4]
            java.lang.String r3 = rg(r8, r5, r0)
            goto L43
        L40:
            int r4 = r4 + 1
            goto L31
        L43:
            return r3
    }

    public static java.lang.String df(android.content.Context r4) {
            java.lang.String r0 = "111111"
            android.app.NotificationChannel r1 = com.ss.android.socialbase.appdownloader.q.df     // Catch: java.lang.Throwable -> L28
            if (r1 != 0) goto L2c
            android.app.NotificationChannel r1 = new android.app.NotificationChannel     // Catch: java.lang.Throwable -> L28
            java.lang.String r2 = "channel_appdownloader"
            r3 = 3
            r1.<init>(r0, r2, r3)     // Catch: java.lang.Throwable -> L28
            com.ss.android.socialbase.appdownloader.q.df = r1     // Catch: java.lang.Throwable -> L28
            r2 = 0
            r1.setSound(r2, r2)     // Catch: java.lang.Throwable -> L28
            android.app.NotificationChannel r1 = com.ss.android.socialbase.appdownloader.q.df     // Catch: java.lang.Throwable -> L28
            r2 = 0
            r1.setShowBadge(r2)     // Catch: java.lang.Throwable -> L28
            java.lang.String r1 = "notification"
            java.lang.Object r4 = r4.getSystemService(r1)     // Catch: java.lang.Throwable -> L28
            android.app.NotificationManager r4 = (android.app.NotificationManager) r4     // Catch: java.lang.Throwable -> L28
            android.app.NotificationChannel r1 = com.ss.android.socialbase.appdownloader.q.df     // Catch: java.lang.Throwable -> L28
            r4.createNotificationChannel(r1)     // Catch: java.lang.Throwable -> L28
            goto L2c
        L28:
            r4 = move-exception
            r4.printStackTrace()
        L2c:
            return r0
    }

    private static void df(com.ss.android.socialbase.downloader.model.DownloadInfo r2, boolean r3, int r4) {
            if (r2 != 0) goto L3
            return
        L3:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "by_user"
            if (r3 == 0) goto Le
            r3 = 1
            goto Lf
        Le:
            r3 = 2
        Lf:
            r0.put(r1, r3)     // Catch: java.lang.Exception -> L21
            java.lang.String r3 = "view_result"
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L21
            java.lang.String r3 = "real_package_name"
            java.lang.String r4 = r2.getFilePackageName()     // Catch: java.lang.Exception -> L21
            r0.put(r3, r4)     // Catch: java.lang.Exception -> L21
            goto L25
        L21:
            r3 = move-exception
            r3.printStackTrace()
        L25:
            com.ss.android.socialbase.downloader.monitor.InnerEventListener r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getEventListener()
            int r2 = r2.getId()
            java.lang.String r4 = "install_view_result"
            r3.onEvent(r2, r4, r0)
            return
    }

    public static boolean df(android.content.Context r1, com.ss.android.socialbase.downloader.model.DownloadInfo r2, android.content.pm.PackageInfo r3) {
            r0 = 0
            boolean r1 = rg(r1, r2, r3, r0)
            return r1
    }

    public static boolean df(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L1f
            r0.<init>(r3)     // Catch: org.json.JSONException -> L1f
            java.lang.String r3 = "bind_app"
            boolean r3 = r0.optBoolean(r3, r1)     // Catch: org.json.JSONException -> L1f
            r2 = 1
            if (r3 != 0) goto L1e
            java.lang.String r3 = "auto_install_with_notification"
            boolean r3 = r0.optBoolean(r3, r2)     // Catch: org.json.JSONException -> L1f
            if (r3 != 0) goto L23
        L1e:
            return r2
        L1f:
            r3 = move-exception
            r3.printStackTrace()
        L23:
            return r1
    }

    private static int pt(android.content.Context r4, int r5, boolean r6) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r5)
            java.lang.String r1 = "notification_opt_2"
            int r0 = r0.optInt(r1)
            r1 = 1
            if (r0 != r1) goto L14
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r0 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()
            r0.cancelNotification(r5)
        L14:
            com.ss.android.socialbase.appdownloader.ux r0 = com.ss.android.socialbase.appdownloader.ux.rg()
            com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity r0 = r0.df()
            rg(r0)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r5)
            r2 = 0
            java.lang.String r3 = "install_queue_enable"
            int r0 = r0.optInt(r3, r2)
            if (r0 != r1) goto L2d
            goto L2e
        L2d:
            r1 = r2
        L2e:
            if (r1 == 0) goto L39
            com.ss.android.socialbase.appdownloader.ux r0 = com.ss.android.socialbase.appdownloader.ux.rg()
            int r4 = r0.rg(r4, r5, r6)
            return r4
        L39:
            int r4 = df(r4, r5, r6)
            return r4
    }

    private static org.json.JSONObject pt(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto Lc
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Lc
            return r0
        Lc:
            r1 = 0
            return r1
    }

    static int q(android.content.Context r0, int r1, boolean r2) {
            int r0 = pt(r0, r1, r2)
            return r0
    }

    public static java.util.List<java.lang.String> q() {
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 2
            r0.<init>(r1)
            java.lang.String r1 = "application/vnd.android.package-archive"
            r0.add(r1)
            java.lang.String r1 = "application/ttpatch"
            r0.add(r1)
            return r0
    }

    public static boolean q(android.content.Context r2, com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            if (r2 == 0) goto L2a
            if (r3 == 0) goto L2a
            java.lang.String r0 = r3.getSavePath()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2a
            java.lang.String r0 = r3.getName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L19
            goto L2a
        L19:
            java.lang.String r0 = r3.getSavePath()
            java.lang.String r1 = r3.getName()
            android.content.pm.PackageInfo r0 = rg(r2, r3, r0, r1)
            boolean r2 = df(r2, r3, r0)
            return r2
        L2a:
            r2 = 0
            return r2
    }

    public static boolean q(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L10
            java.lang.String r0 = "application/vnd.android.package-archive"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L10
            r1 = 1
            goto L11
        L10:
            r1 = 0
        L11:
            return r1
    }

    public static int rg() {
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            boolean r0 = r0.c()
            if (r0 == 0) goto Ld
            r0 = 16384(0x4000, float:2.2959E-41)
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    public static int rg(int r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            r1 = -2
            if (r3 != r1) goto L9
            r3 = 2
            return r3
        L9:
            r1 = 1
            if (r3 != r1) goto Le
            r3 = 4
            return r3
        Le:
            boolean r2 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isDownloading(r3)
            if (r2 != 0) goto L22
            r2 = 11
            if (r3 != r2) goto L19
            goto L22
        L19:
            boolean r3 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isDownloadOver(r3)
            if (r3 == 0) goto L21
            r3 = 3
            return r3
        L21:
            return r0
        L22:
            return r1
    }

    public static int rg(android.content.Context r0, float r1) {
            android.content.res.Resources r0 = r0.getResources()
            android.util.DisplayMetrics r0 = r0.getDisplayMetrics()
            float r0 = r0.density
            float r1 = r1 * r0
            r0 = 1056964608(0x3f000000, float:0.5)
            float r1 = r1 + r0
            int r0 = (int) r1
            return r0
    }

    public static int rg(android.content.Context r3, int r4, boolean r5) {
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.bm r0 = r0.fw()
            if (r0 != 0) goto Lf
            int r3 = pt(r3, r4, r5)
            return r3
        Lf:
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r3)
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r1.getDownloadInfo(r4)
            r2 = 1
            com.ss.android.socialbase.appdownloader.q.rg = r2
            com.ss.android.socialbase.appdownloader.q$1 r2 = new com.ss.android.socialbase.appdownloader.q$1
            r2.<init>(r3, r4, r5)
            r0.rg(r1, r2)
            int r3 = com.ss.android.socialbase.appdownloader.q.rg
            return r3
    }

    public static int rg(android.content.Context r5, int r6, boolean r7, com.ss.android.socialbase.downloader.model.DownloadInfo r8, java.io.File r9) {
            java.lang.String r0 = r9.getPath()
            java.io.File r1 = android.os.Environment.getDataDirectory()
            java.lang.String r1 = r1.getAbsolutePath()
            boolean r0 = r0.startsWith(r1)
            r1 = 0
            if (r0 == 0) goto L4a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L38
            r0.<init>()     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = "chmod 555 "
            r0.append(r2)     // Catch: java.lang.Throwable -> L38
            java.lang.String r2 = r9.getAbsolutePath()     // Catch: java.lang.Throwable -> L38
            r0.append(r2)     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L38
            java.lang.Runtime r2 = java.lang.Runtime.getRuntime()     // Catch: java.lang.Throwable -> L38
            java.lang.Process r0 = r2.exec(r0)     // Catch: java.lang.Throwable -> L38
            r0.waitFor()     // Catch: java.lang.Throwable -> L36
            if (r0 == 0) goto L4a
            goto L3f
        L36:
            r2 = move-exception
            goto L3a
        L38:
            r2 = move-exception
            r0 = r1
        L3a:
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L43
            if (r0 == 0) goto L4a
        L3f:
            r0.destroy()
            goto L4a
        L43:
            r5 = move-exception
            if (r0 == 0) goto L49
            r0.destroy()
        L49:
            throw r5
        L4a:
            android.content.pm.PackageInfo r0 = rg(r8, r9)     // Catch: java.lang.Throwable -> L5a
            if (r0 == 0) goto L58
            java.lang.String r2 = r0.packageName     // Catch: java.lang.Throwable -> L56
            r8.setFilePackageName(r2)     // Catch: java.lang.Throwable -> L56
            goto L58
        L56:
            r2 = move-exception
            goto L5c
        L58:
            r2 = r1
            goto L5c
        L5a:
            r2 = move-exception
            r0 = r1
        L5c:
            com.ss.android.socialbase.appdownloader.pt r3 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.ux r3 = r3.q()
            if (r3 == 0) goto L8c
            if (r0 != 0) goto L7f
            com.ss.android.socialbase.downloader.exception.BaseException r1 = new com.ss.android.socialbase.downloader.exception.BaseException
            r3 = 2001(0x7d1, float:2.804E-42)
            r1.<init>(r3, r2)
            com.ss.android.socialbase.appdownloader.pt r2 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.ux r2 = r2.q()
            int r3 = r1.getErrorCode()
            r2.rg(r8, r1, r3)
            goto L8c
        L7f:
            com.ss.android.socialbase.appdownloader.pt r2 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.ux r2 = r2.q()
            r3 = 11
            r2.rg(r8, r1, r3)
        L8c:
            boolean r1 = rg(r5, r8, r0)
            r2 = 2
            if (r1 == 0) goto L94
            return r2
        L94:
            if (r0 == 0) goto Lc0
            int r1 = r8.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)
            java.lang.String r3 = "install_callback_error"
            boolean r1 = r1.optBugFix(r3)
            if (r1 == 0) goto Lc0
            java.util.concurrent.ConcurrentHashMap r1 = r8.getTempCacheData()
            java.lang.String r3 = r0.packageName
            java.lang.String r4 = "extra_apk_package_name"
            r1.put(r4, r3)
            java.util.concurrent.ConcurrentHashMap r1 = r8.getTempCacheData()
            int r3 = r0.versionCode
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r4 = "extra_apk_version_code"
            r1.put(r4, r3)
        Lc0:
            r1 = 1
            int[] r3 = new int[r1]
            boolean r4 = df(r5, r8, r0)
            if (r4 == 0) goto Ld4
            java.lang.String r6 = r0.packageName
            android.content.pm.PackageManager r9 = r5.getPackageManager()
            android.content.Intent r6 = r9.getLaunchIntentForPackage(r6)
            goto Lee
        Ld4:
            if (r7 != 0) goto Lea
            boolean r6 = rg(r5, r6, r9)
            if (r6 == 0) goto Lea
            java.util.concurrent.ConcurrentHashMap r5 = r8.getTempCacheData()
            java.lang.Boolean r6 = java.lang.Boolean.valueOf(r1)
            java.lang.String r7 = "extra_silent_install_succeed"
            r5.put(r7, r6)
            return r1
        Lea:
            android.content.Intent r6 = rg(r5, r8, r9, r7, r3)
        Lee:
            r9 = 0
            if (r6 != 0) goto Lf8
            r5 = r3[r9]
            if (r5 != r1) goto Lf6
            goto Lf7
        Lf6:
            r2 = r9
        Lf7:
            return r2
        Lf8:
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r6.addFlags(r0)
            int r0 = r8.getLinkMode()
            if (r0 <= 0) goto L118
            int r0 = r8.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r2 = "app_install_return_result"
            int r0 = r0.optInt(r2, r9)
            if (r0 != r1) goto L118
            java.lang.String r0 = "android.intent.extra.RETURN_RESULT"
            r6.putExtra(r0, r1)
        L118:
            r9 = r3[r9]
            if (r9 != 0) goto L123
            boolean r7 = com.ss.android.socialbase.appdownloader.df.rg(r5, r8, r6, r7)
            if (r7 == 0) goto L123
            return r1
        L123:
            int r5 = rg(r5, r6)
            return r5
    }

    public static int rg(android.content.Context r2, android.content.Intent r3) {
            r0 = 1
            com.ss.android.socialbase.appdownloader.pt r1 = com.ss.android.socialbase.appdownloader.pt.bm()     // Catch: java.lang.Throwable -> L1a
            com.ss.android.socialbase.downloader.depend.IInstallAppHandler r1 = r1.f()     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L1a
            com.ss.android.socialbase.appdownloader.pt r1 = com.ss.android.socialbase.appdownloader.pt.bm()     // Catch: java.lang.Throwable -> L1a
            com.ss.android.socialbase.downloader.depend.IInstallAppHandler r1 = r1.f()     // Catch: java.lang.Throwable -> L1a
            boolean r1 = r1.installApp(r3)     // Catch: java.lang.Throwable -> L1a
            if (r1 == 0) goto L1a
            return r0
        L1a:
            r2.startActivity(r3)     // Catch: java.lang.Throwable -> L1e
            return r0
        L1e:
            r2 = 0
            return r2
    }

    private static android.content.Intent rg(android.content.Context r4, com.ss.android.socialbase.downloader.model.DownloadInfo r5, java.io.File r6, boolean r7, int[] r8) {
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r4)
            int r1 = r5.getId()
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r0 = r0.getDownloadFileUriProvider(r1)
            com.ss.android.socialbase.appdownloader.pt r1 = com.ss.android.socialbase.appdownloader.pt.bm()
            java.lang.String r1 = r1.pt()
            int r2 = r5.getId()
            android.net.Uri r6 = rg(r2, r0, r4, r1, r6)
            r0 = 0
            if (r6 != 0) goto L20
            return r0
        L20:
            android.content.Intent r1 = new android.content.Intent
            java.lang.String r2 = "android.intent.action.VIEW"
            r1.<init>(r2)
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 24
            if (r2 < r3) goto L31
            r2 = 1
            r1.addFlags(r2)
        L31:
            java.lang.String r2 = "application/vnd.android.package-archive"
            r1.setDataAndType(r6, r2)
            com.ss.android.socialbase.appdownloader.pt r6 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.pt r6 = r6.df()
            r2 = 0
            if (r6 == 0) goto L4a
            int r3 = r5.getId()
            boolean r6 = r6.rg(r3, r7)
            goto L4b
        L4a:
            r6 = r2
        L4b:
            com.ss.android.socialbase.downloader.downloader.Downloader r4 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r4)
            int r5 = r5.getId()
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r4 = r4.getDownloadNotificationEventListener(r5)
            if (r4 == 0) goto L5d
            boolean r6 = r4.interceptAfterNotificationSuccess(r7)
        L5d:
            r8[r2] = r6
            if (r6 == 0) goto L62
            return r0
        L62:
            return r1
    }

    public static android.content.pm.PackageInfo rg(android.content.Context r2, com.ss.android.socialbase.downloader.model.DownloadInfo r3, java.lang.String r4, java.lang.String r5) {
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            r0 = 0
            if (r2 != 0) goto L45
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 == 0) goto Le
            goto L45
        Le:
            java.io.File r2 = new java.io.File
            r2.<init>(r4, r5)
            boolean r4 = r2.exists()
            if (r4 != 0) goto L1a
            return r0
        L1a:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "isApkInstalled apkFileSize：fileName:"
            r4.append(r5)
            java.lang.String r5 = r2.getPath()
            r4.append(r5)
            java.lang.String r5 = " apkFileSize"
            r4.append(r5)
            long r0 = r2.length()
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "AppDownloadUtils"
            android.util.Log.e(r5, r4)
            android.content.pm.PackageInfo r2 = rg(r3, r2)
            return r2
        L45:
            return r0
    }

    public static android.content.pm.PackageInfo rg(com.ss.android.socialbase.downloader.model.DownloadInfo r2, java.io.File r3) {
            if (r2 != 0) goto Lf
            android.content.Context r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            int r0 = rg()
            android.content.pm.PackageInfo r2 = com.ss.android.socialbase.appdownloader.c.rg.pp.rg(r2, r3, r0)
            return r2
        Lf:
            android.content.pm.PackageInfo r0 = r2.getPackageInfo()
            if (r0 != 0) goto L24
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            int r1 = rg()
            android.content.pm.PackageInfo r0 = com.ss.android.socialbase.appdownloader.c.rg.pp.rg(r0, r3, r1)
            r2.setPackageInfo(r0)
        L24:
            return r0
    }

    public static android.net.Uri rg(int r1, com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r2, android.content.Context r3, java.lang.String r4, java.io.File r5) {
            if (r2 == 0) goto Lb
            java.lang.String r1 = r5.getAbsolutePath()     // Catch: java.lang.Throwable -> L1e
            android.net.Uri r1 = r2.getUriForFile(r4, r1)     // Catch: java.lang.Throwable -> L1e
            goto L1f
        Lb:
            com.ss.android.socialbase.appdownloader.pt r2 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.c r2 = r2.pp()
            if (r2 == 0) goto L1e
            java.lang.String r0 = r5.getAbsolutePath()     // Catch: java.lang.Throwable -> L1e
            android.net.Uri r1 = r2.rg(r1, r4, r0)     // Catch: java.lang.Throwable -> L1e
            goto L1f
        L1e:
            r1 = 0
        L1f:
            if (r1 != 0) goto L3b
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L37
            r0 = 24
            if (r2 < r0) goto L32
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L37
            if (r2 != 0) goto L32
            android.net.Uri r1 = android.support.v4.content.FileProvider.getUriForFile(r3, r4, r5)     // Catch: java.lang.Throwable -> L37
            goto L3b
        L32:
            android.net.Uri r1 = android.net.Uri.fromFile(r5)     // Catch: java.lang.Throwable -> L37
            goto L3b
        L37:
            r2 = move-exception
            r2.printStackTrace()
        L3b:
            return r1
    }

    public static java.lang.String rg(long r1) {
            r0 = 1
            java.lang.String r1 = rg(r1, r0)
            return r1
    }

    private static java.lang.String rg(long r2, long r4, java.lang.String r6) {
            r0 = 1
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            double r2 = (double) r2
            if (r0 <= 0) goto L9
            double r4 = (double) r4
            double r2 = r2 / r4
        L9:
            java.lang.String r4 = "MB"
            boolean r4 = r4.equals(r6)
            if (r4 == 0) goto L2c
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.text.DecimalFormat r5 = new java.text.DecimalFormat
            java.lang.String r0 = "#"
            r5.<init>(r0)
            java.lang.String r2 = r5.format(r2)
            r4.append(r2)
            r4.append(r6)
            java.lang.String r2 = r4.toString()
            return r2
        L2c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.text.DecimalFormat r5 = new java.text.DecimalFormat
            java.lang.String r0 = "#.##"
            r5.<init>(r0)
            java.lang.String r2 = r5.format(r2)
            r4.append(r2)
            r4.append(r6)
            java.lang.String r2 = r4.toString()
            return r2
    }

    private static java.lang.String rg(long r2, long r4, java.lang.String r6, boolean r7) {
            r0 = 1
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            double r2 = (double) r2
            if (r0 <= 0) goto L9
            double r4 = (double) r4
            double r2 = r2 / r4
        L9:
            java.lang.String r4 = " "
            if (r7 != 0) goto L3c
            java.lang.String r5 = "GB"
            boolean r5 = r5.equals(r6)
            if (r5 != 0) goto L3c
            java.lang.String r5 = "TB"
            boolean r5 = r5.equals(r6)
            if (r5 == 0) goto L1e
            goto L3c
        L1e:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.text.DecimalFormat r7 = new java.text.DecimalFormat
            java.lang.String r0 = "#"
            r7.<init>(r0)
            java.lang.String r2 = r7.format(r2)
            r5.append(r2)
            r5.append(r4)
            r5.append(r6)
            java.lang.String r2 = r5.toString()
            return r2
        L3c:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.text.DecimalFormat r7 = new java.text.DecimalFormat
            java.lang.String r0 = "#.##"
            r7.<init>(r0)
            java.lang.String r2 = r7.format(r2)
            r5.append(r2)
            r5.append(r4)
            r5.append(r6)
            java.lang.String r2 = r5.toString()
            return r2
    }

    public static java.lang.String rg(long r11, boolean r13) {
            r0 = 5
            long[] r1 = new long[r0]
            r1 = {x0046: FILL_ARRAY_DATA , data: [1099511627776, 1073741824, 1048576, 1024, 1} // fill-array
            java.lang.String r2 = "TB"
            java.lang.String r3 = "GB"
            java.lang.String r4 = "MB"
            java.lang.String r5 = "KB"
            java.lang.String r6 = "B"
            java.lang.String[] r2 = new java.lang.String[]{r2, r3, r4, r5, r6}
            r3 = 1
            int r3 = (r11 > r3 ? 1 : (r11 == r3 ? 0 : -1))
            if (r3 >= 0) goto L2f
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r12 = "0 "
            r11.append(r12)
            r12 = 4
            r12 = r2[r12]
            r11.append(r12)
            java.lang.String r11 = r11.toString()
            return r11
        L2f:
            r3 = 0
            r4 = 0
        L31:
            if (r4 >= r0) goto L45
            r7 = r1[r4]
            int r5 = (r11 > r7 ? 1 : (r11 == r7 ? 0 : -1))
            if (r5 < 0) goto L42
            r9 = r2[r4]
            r5 = r11
            r10 = r13
            java.lang.String r3 = rg(r5, r7, r9, r10)
            goto L45
        L42:
            int r4 = r4 + 1
            goto L31
        L45:
            return r3
    }

    public static java.lang.String rg(java.lang.String r2, com.ss.android.socialbase.downloader.setting.DownloadSetting r3) {
            if (r3 == 0) goto L5e
            java.lang.String r0 = "download_dir"
            org.json.JSONObject r3 = r3.optJSONObject(r0)
            if (r3 == 0) goto L5e
            java.lang.String r0 = "dir_name"
            java.lang.String r3 = r3.optString(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 1
            if (r0 != 0) goto L23
            java.lang.String r0 = "/"
            boolean r0 = r3.startsWith(r0)
            if (r0 == 0) goto L23
            java.lang.String r3 = r3.substring(r1)
        L23:
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L60
            java.lang.String r0 = "%s"
            boolean r0 = r3.contains(r0)
            if (r0 != 0) goto L42
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
        L40:
            r3 = r2
            goto L4c
        L42:
            java.lang.Object[] r0 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L4c
            r1 = 0
            r0[r1] = r2     // Catch: java.lang.Throwable -> L4c
            java.lang.String r2 = java.lang.String.format(r3, r0)     // Catch: java.lang.Throwable -> L4c
            goto L40
        L4c:
            int r2 = r3.length()
            r0 = 255(0xff, float:3.57E-43)
            if (r2 <= r0) goto L60
            int r2 = r3.length()
            int r2 = r2 - r0
            java.lang.String r3 = r3.substring(r2)
            goto L60
        L5e:
            java.lang.String r3 = ""
        L60:
            return r3
    }

    public static java.lang.String rg(java.lang.String r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L9
            java.lang.String r1 = ""
            return r1
        L9:
            android.net.Uri r1 = android.net.Uri.parse(r1)
            java.lang.String r0 = "default.apk"
            if (r4 == 0) goto L26
            boolean r4 = android.text.TextUtils.isEmpty(r2)
            if (r4 == 0) goto L3a
            java.lang.String r2 = r1.getLastPathSegment()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L37
            java.lang.String r2 = r1.getLastPathSegment()
            goto L3a
        L26:
            java.lang.String r1 = r1.getLastPathSegment()
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 == 0) goto L39
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto L37
            goto L3a
        L37:
            r2 = r0
            goto L3a
        L39:
            r2 = r1
        L3a:
            boolean r1 = q(r3)
            if (r1 == 0) goto L57
            java.lang.String r1 = ".apk"
            boolean r3 = r2.endsWith(r1)
            if (r3 != 0) goto L57
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            r3.append(r1)
            java.lang.String r2 = r3.toString()
        L57:
            return r2
    }

    public static void rg(android.app.Activity r1) {
            if (r1 == 0) goto L10
            boolean r0 = r1.isFinishing()     // Catch: java.lang.Exception -> Lc
            if (r0 != 0) goto L10
            r1.finish()     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r1 = move-exception
            r1.printStackTrace()
        L10:
            return
    }

    static void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r0, boolean r1, int r2) {
            df(r0, r1, r2)
            return
    }

    public static void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r3, boolean r4, boolean r5) {
            com.ss.android.socialbase.appdownloader.c r0 = new com.ss.android.socialbase.appdownloader.c
            android.content.Context r1 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            java.lang.String r2 = r3.getUrl()
            r0.<init>(r1, r2)
            java.lang.String r1 = r3.getTitle()
            com.ss.android.socialbase.appdownloader.c r0 = r0.rg(r1)
            java.lang.String r1 = r3.getName()
            com.ss.android.socialbase.appdownloader.c r0 = r0.df(r1)
            java.lang.String r1 = r3.getSavePath()
            com.ss.android.socialbase.appdownloader.c r0 = r0.q(r1)
            boolean r1 = r3.isShowNotification()
            com.ss.android.socialbase.appdownloader.c r0 = r0.rg(r1)
            boolean r1 = r3.isAutoInstallWithoutNotification()
            com.ss.android.socialbase.appdownloader.c r0 = r0.df(r1)
            boolean r1 = r3.isOnlyWifi()
            r2 = 1
            if (r1 != 0) goto L41
            if (r5 == 0) goto L3f
            goto L41
        L3f:
            r5 = 0
            goto L42
        L41:
            r5 = r2
        L42:
            com.ss.android.socialbase.appdownloader.c r5 = r0.q(r5)
            java.lang.String r0 = r3.getExtra()
            com.ss.android.socialbase.appdownloader.c r5 = r5.pt(r0)
            java.lang.String r0 = r3.getMimeType()
            com.ss.android.socialbase.appdownloader.c r5 = r5.pp(r0)
            java.util.List r0 = r3.getExtraHeaders()
            com.ss.android.socialbase.appdownloader.c r5 = r5.rg(r0)
            com.ss.android.socialbase.appdownloader.c r5 = r5.pp(r2)
            int r0 = r3.getRetryCount()
            com.ss.android.socialbase.appdownloader.c r5 = r5.df(r0)
            int r0 = r3.getBackUpUrlRetryCount()
            com.ss.android.socialbase.appdownloader.c r5 = r5.q(r0)
            java.util.List r0 = r3.getBackUpUrls()
            com.ss.android.socialbase.appdownloader.c r5 = r5.df(r0)
            int r0 = r3.getMinProgressTimeMsInterval()
            com.ss.android.socialbase.appdownloader.c r5 = r5.pt(r0)
            int r0 = r3.getMaxProgressCount()
            com.ss.android.socialbase.appdownloader.c r5 = r5.pp(r0)
            com.ss.android.socialbase.appdownloader.c r4 = r5.c(r4)
            boolean r5 = r3.isNeedHttpsToHttpRetry()
            com.ss.android.socialbase.appdownloader.c r4 = r4.pt(r5)
            java.lang.String r5 = r3.getPackageName()
            com.ss.android.socialbase.appdownloader.c r4 = r4.c(r5)
            java.lang.String r5 = r3.getMd5()
            com.ss.android.socialbase.appdownloader.c r4 = r4.fw(r5)
            long r0 = r3.getExpectFileLength()
            com.ss.android.socialbase.appdownloader.c r4 = r4.rg(r0)
            boolean r5 = r3.isNeedDefaultHttpServiceBackUp()
            com.ss.android.socialbase.appdownloader.c r4 = r4.rz(r5)
            boolean r5 = r3.isNeedReuseFirstConnection()
            com.ss.android.socialbase.appdownloader.c r4 = r4.bm(r5)
            boolean r5 = r3.isNeedIndependentProcess()
            com.ss.android.socialbase.appdownloader.c r4 = r4.hq(r5)
            com.ss.android.socialbase.downloader.constants.EnqueueType r5 = r3.getEnqueueType()
            com.ss.android.socialbase.appdownloader.c r4 = r4.rg(r5)
            boolean r5 = r3.isForce()
            com.ss.android.socialbase.appdownloader.c r4 = r4.f(r5)
            boolean r5 = r3.isHeadConnectionAvailable()
            com.ss.android.socialbase.appdownloader.c r4 = r4.oh(r5)
            boolean r5 = r3.isNeedRetryDelay()
            com.ss.android.socialbase.appdownloader.c r4 = r4.fw(r5)
            java.lang.String r5 = r3.getRetryDelayTimeArray()
            com.ss.android.socialbase.appdownloader.c r4 = r4.ux(r5)
            java.lang.String r5 = r3.getDownloadSettingString()
            org.json.JSONObject r5 = pt(r5)
            com.ss.android.socialbase.appdownloader.c r4 = r4.rg(r5)
            java.lang.String r5 = r3.getIconUrl()
            com.ss.android.socialbase.appdownloader.c r4 = r4.bm(r5)
            int r5 = r3.getExecutorGroup()
            com.ss.android.socialbase.appdownloader.c r4 = r4.c(r5)
            boolean r3 = r3.isAutoInstall()
            com.ss.android.socialbase.appdownloader.c r3 = r4.un(r3)
            com.ss.android.socialbase.appdownloader.pt r4 = com.ss.android.socialbase.appdownloader.pt.bm()
            r4.rg(r3)
            return
    }

    public static boolean rg(android.content.Context r6) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 0
            r2 = 20
            if (r0 <= r2) goto L44
            if (r6 != 0) goto La
            goto L44
        La:
            r0 = 0
            int r2 = com.ss.android.socialbase.appdownloader.pp.df()     // Catch: java.lang.Throwable -> L41
            android.content.res.Resources r3 = r6.getResources()     // Catch: java.lang.Throwable -> L41
            int r2 = r3.getColor(r2)     // Catch: java.lang.Throwable -> L41
            int r3 = com.ss.android.socialbase.appdownloader.pp.q()     // Catch: java.lang.Throwable -> L41
            int r4 = com.ss.android.socialbase.appdownloader.pp.pt()     // Catch: java.lang.Throwable -> L41
            r5 = 2
            int[] r5 = new int[r5]     // Catch: java.lang.Throwable -> L41
            r5[r1] = r3     // Catch: java.lang.Throwable -> L41
            r3 = 1
            r5[r3] = r4     // Catch: java.lang.Throwable -> L41
            int r4 = com.ss.android.socialbase.appdownloader.pp.pp()     // Catch: java.lang.Throwable -> L41
            android.content.res.TypedArray r0 = r6.obtainStyledAttributes(r4, r5)     // Catch: java.lang.Throwable -> L41
            int r6 = r0.getColor(r1, r1)     // Catch: java.lang.Throwable -> L41
            if (r2 != r6) goto L3b
            if (r0 == 0) goto L3a
            r0.recycle()     // Catch: java.lang.Throwable -> L3a
        L3a:
            return r3
        L3b:
            if (r0 == 0) goto L44
        L3d:
            r0.recycle()     // Catch: java.lang.Throwable -> L44
            goto L44
        L41:
            if (r0 == 0) goto L44
            goto L3d
        L44:
            return r1
    }

    public static boolean rg(android.content.Context r6, int r7, java.io.File r8) {
            com.ss.android.socialbase.downloader.setting.DownloadSetting r7 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r7)
            r0 = 1
            java.lang.String r1 = "back_miui_silent_install"
            int r7 = r7.optInt(r1, r0)
            r1 = 0
            if (r7 != r0) goto Lf
            return r1
        Lf:
            boolean r7 = com.ss.android.socialbase.appdownloader.c.pt.hq()
            if (r7 != 0) goto L1c
            boolean r7 = com.ss.android.socialbase.appdownloader.c.pt.oh()
            if (r7 != 0) goto L1c
            return r1
        L1c:
            java.lang.String r7 = "com.miui.enterprise.service.EntInstallService"
            java.lang.String r2 = "com.miui.securitycore"
            boolean r3 = com.ss.android.socialbase.downloader.utils.SystemUtils.checkServiceExists(r6, r2, r7)
            if (r3 == 0) goto L5d
            android.content.Intent r3 = new android.content.Intent
            r3.<init>()
            android.content.ComponentName r4 = new android.content.ComponentName
            r4.<init>(r2, r7)
            r3.setComponent(r4)
            android.os.Bundle r7 = new android.os.Bundle
            r7.<init>()
            java.lang.String r4 = "userId"
            r7.putInt(r4, r1)
            r4 = 256(0x100, float:3.59E-43)
            java.lang.String r5 = "flag"
            r7.putInt(r5, r4)
            java.lang.String r8 = r8.getPath()
            java.lang.String r4 = "apkPath"
            r7.putString(r4, r8)
            java.lang.String r8 = "installerPkg"
            r7.putString(r8, r2)
            r3.putExtras(r7)
            r6.startService(r3)     // Catch: java.lang.Exception -> L59
            return r0
        L59:
            r6 = move-exception
            r6.printStackTrace()
        L5d:
            return r1
    }

    public static boolean rg(android.content.Context r1, com.ss.android.socialbase.downloader.model.DownloadInfo r2) {
            r0 = 1
            boolean r1 = rg(r1, r2, r0)
            return r1
    }

    public static boolean rg(android.content.Context r8, com.ss.android.socialbase.downloader.model.DownloadInfo r9, android.content.pm.PackageInfo r10) {
            if (r10 == 0) goto L5e
            java.lang.String r0 = r10.packageName
            java.lang.String r1 = r9.getPackageName()
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L5e
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.pt r0 = r0.df()
            r7 = 1
            if (r0 == 0) goto L32
            int r2 = r9.getId()
            r3 = 8
            java.lang.String r4 = r9.getPackageName()
            java.lang.String r5 = r10.packageName
            java.lang.String r6 = ""
            r1 = r0
            r1.rg(r2, r3, r4, r5, r6)
            boolean r0 = r0.rg()
            if (r0 == 0) goto L32
            return r7
        L32:
            com.ss.android.socialbase.downloader.downloader.Downloader r8 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r8)
            int r0 = r9.getId()
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r8 = r8.getDownloadNotificationEventListener(r0)
            if (r8 == 0) goto L5e
            r0 = 8
            java.lang.String r10 = r10.packageName
            java.lang.String r1 = ""
            r8.onNotificationEvent(r0, r9, r10, r1)
            com.ss.android.socialbase.appdownloader.pt r8 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.socialbase.appdownloader.q.q r8 = r8.rg()
            boolean r9 = r8 instanceof com.ss.android.socialbase.appdownloader.q.rg
            if (r9 == 0) goto L5e
            com.ss.android.socialbase.appdownloader.q.rg r8 = (com.ss.android.socialbase.appdownloader.q.rg) r8
            boolean r8 = r8.q()
            if (r8 == 0) goto L5e
            return r7
        L5e:
            r8 = 0
            return r8
    }

    public static boolean rg(android.content.Context r3, com.ss.android.socialbase.downloader.model.DownloadInfo r4, android.content.pm.PackageInfo r5, boolean r6) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r5.packageName
            int r5 = r5.versionCode
            if (r4 == 0) goto Ld
            r4.setAppVersionCode(r5)
        Ld:
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            int r2 = rg()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L1a
            goto L1b
        L1a:
            r3 = 0
        L1b:
            if (r3 != 0) goto L1e
            return r0
        L1e:
            int r3 = r3.versionCode
            r1 = 1
            if (r6 == 0) goto L27
            if (r5 >= r3) goto L26
            r0 = r1
        L26:
            return r0
        L27:
            if (r4 == 0) goto L3d
            int r4 = r4.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r4)
            java.lang.String r6 = "install_with_same_version_code"
            int r4 = r4.optInt(r6, r0)
            if (r4 != r1) goto L3d
            if (r5 >= r3) goto L3c
            r0 = r1
        L3c:
            return r0
        L3d:
            if (r5 > r3) goto L40
            r0 = r1
        L40:
            return r0
    }

    public static boolean rg(android.content.Context r8, com.ss.android.socialbase.downloader.model.DownloadInfo r9, java.lang.String r10) {
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            java.io.File r1 = new java.io.File     // Catch: java.lang.Exception -> Lc3
            java.lang.String r2 = r9.getSavePath()     // Catch: java.lang.Exception -> Lc3
            java.lang.String r3 = r9.getName()     // Catch: java.lang.Exception -> Lc3
            r1.<init>(r2, r3)     // Catch: java.lang.Exception -> Lc3
            boolean r2 = r1.exists()     // Catch: java.lang.Exception -> Lc3
            r3 = 1
            r4 = 0
            if (r2 == 0) goto L72
            java.lang.String r2 = "AppDownloadUtils"
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc3
            r5.<init>()     // Catch: java.lang.Exception -> Lc3
            java.lang.String r6 = "isPackageNameEqualsWithApk fileName:"
            r5.append(r6)     // Catch: java.lang.Exception -> Lc3
            java.lang.String r6 = r9.getName()     // Catch: java.lang.Exception -> Lc3
            r5.append(r6)     // Catch: java.lang.Exception -> Lc3
            java.lang.String r6 = " apkFileSize："
            r5.append(r6)     // Catch: java.lang.Exception -> Lc3
            long r6 = r1.length()     // Catch: java.lang.Exception -> Lc3
            r5.append(r6)     // Catch: java.lang.Exception -> Lc3
            java.lang.String r6 = " fileUrl："
            r5.append(r6)     // Catch: java.lang.Exception -> Lc3
            java.lang.String r6 = r9.getUrl()     // Catch: java.lang.Exception -> Lc3
            r5.append(r6)     // Catch: java.lang.Exception -> Lc3
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> Lc3
            android.util.Log.e(r2, r5)     // Catch: java.lang.Exception -> Lc3
            android.content.pm.PackageInfo r9 = rg(r9, r1)     // Catch: java.lang.Exception -> Lc3
            if (r9 != 0) goto L52
            return r0
        L52:
            java.lang.String r1 = r9.packageName     // Catch: java.lang.Exception -> Lc3
            boolean r1 = r1.equals(r10)     // Catch: java.lang.Exception -> Lc3
            if (r1 != 0) goto L5b
            return r0
        L5b:
            int r9 = r9.versionCode     // Catch: java.lang.Exception -> Lc3
            android.content.pm.PackageManager r8 = r8.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L69 java.lang.Exception -> Lc3
            int r1 = rg()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L69 java.lang.Exception -> Lc3
            android.content.pm.PackageInfo r4 = r8.getPackageInfo(r10, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L69 java.lang.Exception -> Lc3
        L69:
            if (r4 != 0) goto L6c
            goto Lc7
        L6c:
            int r8 = r4.versionCode     // Catch: java.lang.Exception -> Lc3
            if (r9 != r8) goto Lc7
        L70:
            r0 = r3
            goto Lc7
        L72:
            int r1 = r9.getId()     // Catch: java.lang.Exception -> Lc3
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)     // Catch: java.lang.Exception -> Lc3
            java.lang.String r2 = "install_callback_error"
            boolean r1 = r1.optBugFix(r2)     // Catch: java.lang.Exception -> Lc3
            if (r1 == 0) goto Lc7
            java.util.concurrent.ConcurrentHashMap r1 = r9.getTempCacheData()     // Catch: java.lang.Exception -> Lc3
            java.lang.String r2 = "extra_apk_package_name"
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Exception -> Lc3
            java.lang.String r1 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getString(r1, r4)     // Catch: java.lang.Exception -> Lc3
            java.util.concurrent.ConcurrentHashMap r9 = r9.getTempCacheData()     // Catch: java.lang.Exception -> Lc3
            java.lang.String r2 = "extra_apk_version_code"
            java.lang.Object r9 = r9.get(r2)     // Catch: java.lang.Exception -> Lc3
            int r9 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getInt(r9, r0)     // Catch: java.lang.Exception -> Lc3
            if (r1 == 0) goto Lc2
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> Lc3
            if (r2 == 0) goto La7
            goto Lc2
        La7:
            boolean r1 = r1.equals(r10)     // Catch: java.lang.Exception -> Lc3
            if (r1 != 0) goto Lae
            return r0
        Lae:
            android.content.pm.PackageManager r8 = r8.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lba java.lang.Exception -> Lc3
            int r1 = rg()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lba java.lang.Exception -> Lc3
            android.content.pm.PackageInfo r4 = r8.getPackageInfo(r10, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> Lba java.lang.Exception -> Lc3
        Lba:
            if (r4 != 0) goto Lbd
            goto Lc7
        Lbd:
            int r8 = r4.versionCode     // Catch: java.lang.Exception -> Lc3
            if (r9 != r8) goto Lc7
            goto L70
        Lc2:
            return r0
        Lc3:
            r8 = move-exception
            r8.printStackTrace()
        Lc7:
            return r0
    }

    public static boolean rg(android.content.Context r4, com.ss.android.socialbase.downloader.model.DownloadInfo r5, boolean r6) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = r5.getPackageName()
            int r2 = r5.getAppVersionCode()
            if (r2 > 0) goto L16
            if (r6 != 0) goto L11
            goto L16
        L11:
            boolean r4 = q(r4, r5)
            return r4
        L16:
            r6 = 0
            android.content.pm.PackageManager r4 = r4.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L23
            int r3 = rg()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L23
            android.content.pm.PackageInfo r6 = r4.getPackageInfo(r1, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L23
        L23:
            if (r6 != 0) goto L26
            return r0
        L26:
            int r4 = r5.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r4)
            java.lang.String r5 = "install_with_same_version_code"
            int r4 = r4.optInt(r5, r0)
            r5 = 1
            if (r4 != r5) goto L3d
            int r4 = r6.versionCode
            if (r2 >= r4) goto L3c
            r0 = r5
        L3c:
            return r0
        L3d:
            int r4 = r6.versionCode
            if (r2 > r4) goto L42
            r0 = r5
        L42:
            return r0
    }

    public static boolean rg(com.ss.android.socialbase.downloader.model.DownloadInfo r3, java.lang.String r4) {
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = r3.getPackageName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r2 = 1
            if (r0 != 0) goto L1e
            java.lang.String r0 = r3.getPackageName()
            boolean r0 = r4.equals(r0)
            if (r0 == 0) goto L1e
            return r2
        L1e:
            java.lang.String r0 = r3.getName()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L33
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r3 = rg(r0, r3, r4)
            if (r3 == 0) goto L33
            return r2
        L33:
            return r1
    }

    public static boolean rg(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L17
            r0.<init>(r2)     // Catch: org.json.JSONException -> L17
            java.lang.String r2 = "bind_app"
            boolean r2 = r0.optBoolean(r2, r1)     // Catch: org.json.JSONException -> L17
            if (r2 == 0) goto L1b
            r2 = 1
            return r2
        L17:
            r2 = move-exception
            r2.printStackTrace()
        L1b:
            return r1
    }
}
