package com.ss.android.downloadlib.activity;

public class TTDelegateActivity extends android.app.Activity implements android.support.v4.app.ActivityCompat.OnRequestPermissionsResultCallback {
    private static com.ss.android.downloadlib.guide.install.rg pt;
    private boolean df;
    private com.ss.android.downloadad.api.rg.df q;
    protected android.content.Intent rg;



    @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
    public @interface IntentType {
        public static final int AD_LP_APPINFO_DIALOG = 10;
        public static final int APK_INSTALL = 9;
        public static final int APK_SIZE_RETAIN = 8;
        public static final int DOWNLOAD_PERCENT_RETAIN = 7;
        public static final int INSTALL_GUIDE = 6;
        public static final int INTENT_CLEAN_DISK_SPACE = 3;
        public static final int OPEN_APP_DIALOG = 4;
        public static final int OPEN_URL = 2;
        public static final int OPEN_V1_MARKET = 12;
        public static final int PACKAGE_NAME = 11;
        public static final int REQUEST_PERMISSION = 1;
        public static final int REVERSE_WIFI_DIALOG = 5;
    }

    public TTDelegateActivity() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.rg = r0
            return
    }

    private void df() {
            r3 = this;
            android.view.Window r0 = r3.getWindow()
            android.view.WindowManager$LayoutParams r1 = r0.getAttributes()
            r2 = 0
            r1.alpha = r2
            r0.setAttributes(r1)
            return
    }

    private void df(long r7) {
            r6 = this;
            com.ss.android.downloadlib.addownload.rg.q r0 = com.ss.android.downloadlib.addownload.hq.rg()
            if (r0 != 0) goto L7
            return
        L7:
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r7 = r0.pt(r7)
            if (r7 == 0) goto L81
            android.content.Context r8 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r8 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r8)
            int r0 = r7.qx()
            com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r8.getDownloadInfo(r0)
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "time_after_click"
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L74
            long r4 = r7.s()     // Catch: java.lang.Exception -> L74
            long r2 = r2 - r4
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L74
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "click_download_size"
            long r2 = r7.su()     // Catch: java.lang.Exception -> L74
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L74
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L74
            if (r8 == 0) goto L78
            java.lang.String r1 = "download_length"
            long r2 = r8.getCurBytes()     // Catch: java.lang.Exception -> L74
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L74
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "download_percent"
            long r2 = r8.getCurBytes()     // Catch: java.lang.Exception -> L74
            long r4 = r8.getTotalBytes()     // Catch: java.lang.Exception -> L74
            long r2 = r2 / r4
            java.lang.Long r2 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L74
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L74
            java.lang.String r1 = "download_apk_size"
            long r2 = r8.getTotalBytes()     // Catch: java.lang.Exception -> L74
            java.lang.Long r8 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L74
            r0.putOpt(r1, r8)     // Catch: java.lang.Exception -> L74
            goto L78
        L74:
            r8 = move-exception
            r8.printStackTrace()
        L78:
            com.ss.android.downloadlib.event.AdEventHandler r8 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r1 = "pause_reserve_wifi_dialog_show"
            r8.df(r1, r0, r7)
        L81:
            com.ss.android.downloadlib.addownload.rg.pt$rg r8 = new com.ss.android.downloadlib.addownload.rg.pt$rg
            r8.<init>(r6)
            r0 = 0
            com.ss.android.downloadlib.addownload.rg.pt$rg r8 = r8.rg(r0)
            com.ss.android.downloadlib.addownload.rg.q r0 = com.ss.android.downloadlib.addownload.hq.rg()
            com.ss.android.downloadlib.addownload.rg.pt$rg r8 = r8.rg(r0)
            com.ss.android.downloadlib.addownload.rg.pt r8 = r8.rg()
            r8.show()
            r8 = 1
            r6.df = r8
            r6.q = r7
            return
    }

    public static void df(com.ss.android.downloadad.api.rg.rg r2) {
            java.lang.String r0 = ""
            r1 = 5
            rg(r2, r1, r0, r0, r0)
            return
    }

    public static void df(com.ss.android.downloadad.api.rg.rg r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = 7
            rg(r1, r0, r2, r3, r4)
            return
    }

    private void df(java.lang.String r3) {
            r2 = this;
            android.content.Intent r3 = com.ss.android.downloadlib.utils.b.c(r2, r3)
            if (r3 != 0) goto La
            com.ss.android.socialbase.appdownloader.q.rg(r2)
            return
        La:
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r3.addFlags(r0)     // Catch: java.lang.Throwable -> L19 java.lang.Exception -> L1b
            java.lang.String r0 = "start_only_for_android"
            r1 = 1
            r3.putExtra(r0, r1)     // Catch: java.lang.Throwable -> L19 java.lang.Exception -> L1b
            r2.startActivity(r3)     // Catch: java.lang.Throwable -> L19 java.lang.Exception -> L1b
            goto L1f
        L19:
            r3 = move-exception
            goto L23
        L1b:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L19
        L1f:
            com.ss.android.socialbase.appdownloader.q.rg(r2)
            return
        L23:
            com.ss.android.socialbase.appdownloader.q.rg(r2)
            throw r3
    }

    public static void df(java.lang.String r2, com.ss.android.downloadad.api.rg.rg r3) {
            android.content.Intent r3 = q(r3)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r3.addFlags(r0)
            java.lang.String r0 = "type"
            r1 = 11
            r3.putExtra(r0, r1)
            java.lang.String r0 = "package_name"
            r3.putExtra(r0, r2)
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            if (r2 == 0) goto L22
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            r2.startActivity(r3)
        L22:
            return
    }

    private void df(java.lang.String r3, java.lang.String[] r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L31
            if (r4 == 0) goto L31
            int r0 = r4.length
            if (r0 > 0) goto Lc
            goto L31
        Lc:
            com.ss.android.downloadlib.activity.TTDelegateActivity$1 r0 = new com.ss.android.downloadlib.activity.TTDelegateActivity$1
            r0.<init>(r2, r3)
            int r3 = android.os.Build.VERSION.SDK_INT
            r1 = 23
            if (r3 < r1) goto L2d
            com.ss.android.download.api.config.rz r3 = com.ss.android.downloadlib.addownload.bm.pp()     // Catch: java.lang.Exception -> L1f
            r3.rg(r2, r4, r0)     // Catch: java.lang.Exception -> L1f
            goto L30
        L1f:
            r3 = move-exception
            com.ss.android.download.api.df.rg r4 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r1 = "requestPermission"
            r4.rg(r3, r1)
            r0.rg()
            goto L30
        L2d:
            r0.rg()
        L30:
            return
        L31:
            com.ss.android.socialbase.appdownloader.q.rg(r2)
            return
    }

    private void pt(long r2) {
            r1 = this;
            com.ss.android.downloadlib.addownload.compliance.rg r0 = new com.ss.android.downloadlib.addownload.compliance.rg
            r0.<init>(r1, r2)
            r0.show()
            return
    }

    private static android.content.Intent q(com.ss.android.downloadad.api.rg.rg r2) {
            android.content.Intent r2 = new android.content.Intent
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.Class<com.ss.android.downloadlib.activity.TTDelegateActivity> r1 = com.ss.android.downloadlib.activity.TTDelegateActivity.class
            r2.<init>(r0, r1)
            return r2
    }

    private void q() {
            r8 = this;
            android.content.Intent r0 = r8.rg
            java.lang.String r1 = "model_id"
            r2 = 0
            long r0 = r0.getLongExtra(r1, r2)
            android.content.Intent r2 = r8.rg
            java.lang.String r3 = "message_text"
            java.lang.String r2 = r2.getStringExtra(r3)
            android.content.Intent r3 = r8.rg
            java.lang.String r4 = "positive_button_text"
            java.lang.String r3 = r3.getStringExtra(r4)
            android.content.Intent r4 = r8.rg
            java.lang.String r5 = "negative_button_text"
            java.lang.String r4 = r4.getStringExtra(r5)
            android.content.Intent r5 = r8.rg
            r6 = 0
            java.lang.String r7 = "type"
            int r5 = r5.getIntExtra(r7, r6)
            com.ss.android.downloadlib.addownload.model.c r7 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r7.pt(r0)
            com.ss.android.downloadlib.addownload.rg.pt$rg r1 = new com.ss.android.downloadlib.addownload.rg.pt$rg
            r1.<init>(r8)
            com.ss.android.downloadlib.addownload.rg.pt$rg r1 = r1.rg(r6)
            com.ss.android.downloadlib.addownload.rg.pt$rg r1 = r1.rg(r2)
            com.ss.android.downloadlib.addownload.rg.pt$rg r1 = r1.df(r3)
            com.ss.android.downloadlib.addownload.rg.pt$rg r1 = r1.q(r4)
            r2 = 7
            if (r5 != r2) goto L63
            com.ss.android.downloadlib.addownload.rg.q r2 = com.ss.android.downloadlib.addownload.q.df.rg()
            if (r2 != 0) goto L52
            return
        L52:
            com.ss.android.downloadlib.addownload.rg.q r2 = com.ss.android.downloadlib.addownload.q.df.rg()
            r1.rg(r2)
            com.ss.android.downloadlib.addownload.rg.pt r1 = r1.rg()
            r1.show()
            java.lang.String r1 = "download_percent"
            goto L81
        L63:
            r2 = 8
            if (r5 != r2) goto L7f
            com.ss.android.downloadlib.addownload.rg.q r2 = com.ss.android.downloadlib.addownload.q.rg.rg()
            if (r2 != 0) goto L6e
            return
        L6e:
            com.ss.android.downloadlib.addownload.rg.q r2 = com.ss.android.downloadlib.addownload.q.rg.rg()
            r1.rg(r2)
            com.ss.android.downloadlib.addownload.rg.pt r1 = r1.rg()
            r1.show()
            java.lang.String r1 = "apk_size"
            goto L81
        L7f:
            java.lang.String r1 = ""
        L81:
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Lab
            r2 = 1
            r8.df = r2
            r8.q = r0
            org.json.JSONObject r2 = new org.json.JSONObject
            r2.<init>()
            java.lang.String r3 = "pause_optimise_type"
            r2.putOpt(r3, r1)     // Catch: org.json.JSONException -> L9e
            java.lang.String r1 = "pause_optimise_action"
            java.lang.String r3 = "show_dialog"
            r2.putOpt(r1, r3)     // Catch: org.json.JSONException -> L9e
            goto La2
        L9e:
            r1 = move-exception
            r1.printStackTrace()
        La2:
            com.ss.android.downloadlib.event.AdEventHandler r1 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r3 = "pause_optimise"
            r1.rg(r3, r2, r0)
        Lab:
            return
    }

    private void q(long r5) {
            r4 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r5 = r0.pt(r5)
            if (r5 != 0) goto L17
            com.ss.android.downloadlib.exception.q r5 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r6 = "showOpenAppDialogInner nativeModel null"
            r5.rg(r6)
            com.ss.android.socialbase.appdownloader.q.rg(r4)
            return
        L17:
            com.ss.android.download.api.config.hq r6 = com.ss.android.downloadlib.addownload.bm.q()
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r0 = new com.ss.android.download.api.model.DownloadAlertDialogInfo$rg
            r0.<init>(r4)
            java.lang.String r1 = "已安装完成"
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r0 = r0.rg(r1)
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.String r2 = r5.ms()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L36
            java.lang.String r2 = "刚刚下载的应用"
            goto L3a
        L36:
            java.lang.String r2 = r5.ms()
        L3a:
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = "%1$s已安装完成，是否立即打开？"
            java.lang.String r1 = java.lang.String.format(r2, r1)
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r0 = r0.df(r1)
            java.lang.String r1 = "打开"
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r0 = r0.q(r1)
            java.lang.String r1 = "取消"
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r0 = r0.pt(r1)
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r0 = r0.rg(r3)
            java.lang.String r1 = r5.pp()
            android.graphics.drawable.Drawable r1 = com.ss.android.downloadlib.utils.b.q(r4, r1)
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r0 = r0.rg(r1)
            com.ss.android.downloadlib.activity.TTDelegateActivity$2 r1 = new com.ss.android.downloadlib.activity.TTDelegateActivity$2
            r1.<init>(r4, r5)
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r0 = r0.rg(r1)
            r1 = 2
            com.ss.android.download.api.model.DownloadAlertDialogInfo$rg r0 = r0.rg(r1)
            com.ss.android.download.api.model.DownloadAlertDialogInfo r0 = r0.rg()
            r6.df(r0)
            com.ss.android.downloadlib.event.AdEventHandler r6 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r0 = "market_openapp_window_show"
            r6.df(r0, r5)
            return
    }

    public static void rg(long r3) {
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.Class<com.ss.android.downloadlib.activity.TTDelegateActivity> r2 = com.ss.android.downloadlib.activity.TTDelegateActivity.class
            r0.<init>(r1, r2)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            java.lang.String r1 = "type"
            r2 = 10
            r0.putExtra(r1, r2)
            java.lang.String r1 = "app_info_id"
            r0.putExtra(r1, r3)
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            if (r3 == 0) goto L29
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            r3.startActivity(r0)
        L29:
            return
    }

    public static void rg(com.ss.android.downloadad.api.rg.rg r3) {
            android.content.Intent r0 = q(r3)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            java.lang.String r1 = "type"
            r2 = 4
            r0.putExtra(r1, r2)
            long r1 = r3.df()
            java.lang.String r3 = "model_id"
            r0.putExtra(r3, r1)
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            if (r3 == 0) goto L25
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            r3.startActivity(r0)
        L25:
            return
    }

    private static void rg(com.ss.android.downloadad.api.rg.rg r2, int r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            android.content.Intent r0 = q(r2)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            java.lang.String r1 = "type"
            r0.putExtra(r1, r3)
            boolean r3 = android.text.TextUtils.isEmpty(r5)
            if (r3 != 0) goto L19
            java.lang.String r3 = "positive_button_text"
            r0.putExtra(r3, r5)
        L19:
            boolean r3 = android.text.TextUtils.isEmpty(r6)
            if (r3 != 0) goto L24
            java.lang.String r3 = "negative_button_text"
            r0.putExtra(r3, r6)
        L24:
            boolean r3 = android.text.TextUtils.isEmpty(r4)
            if (r3 != 0) goto L2f
            java.lang.String r3 = "message_text"
            r0.putExtra(r3, r4)
        L2f:
            long r2 = r2.df()
            java.lang.String r4 = "model_id"
            r0.putExtra(r4, r2)
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            if (r2 == 0) goto L45
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            r2.startActivity(r0)
        L45:
            return
    }

    public static void rg(com.ss.android.downloadad.api.rg.rg r2, com.ss.android.downloadlib.guide.install.rg r3) {
            android.content.Intent r2 = q(r2)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r2.addFlags(r0)
            java.lang.String r0 = "type"
            r1 = 9
            r2.putExtra(r0, r1)
            com.ss.android.downloadlib.activity.TTDelegateActivity.pt = r3
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            if (r3 == 0) goto L1f
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            r3.startActivity(r2)
        L1f:
            return
    }

    public static void rg(com.ss.android.downloadad.api.rg.rg r1, java.lang.String r2, java.lang.String r3, java.lang.String r4) {
            r0 = 8
            rg(r1, r0, r2, r3, r4)
            return
    }

    private void rg(java.lang.String r4) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto La
            com.ss.android.socialbase.appdownloader.q.rg(r3)
            return
        La:
            android.net.Uri r0 = android.net.Uri.parse(r4)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            java.lang.String r2 = "android.intent.action.VIEW"
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            r1.setData(r0)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            java.lang.String r0 = "open_url"
            r1.putExtra(r0, r4)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            r4 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r4)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            java.lang.String r0 = "fix_app_link_flag"
            boolean r4 = r4.optBugFix(r0)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            if (r4 == 0) goto L33
            r4 = 67108864(0x4000000, float:1.5046328E-36)
            r1.addFlags(r4)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
        L33:
            java.lang.String r4 = "start_only_for_android"
            r0 = 1
            r1.putExtra(r4, r0)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            r3.startActivity(r1)     // Catch: java.lang.Throwable -> L3d java.lang.Exception -> L3f
            goto L43
        L3d:
            r4 = move-exception
            goto L47
        L3f:
            r4 = move-exception
            r4.printStackTrace()     // Catch: java.lang.Throwable -> L3d
        L43:
            com.ss.android.socialbase.appdownloader.q.rg(r3)
            return
        L47:
            com.ss.android.socialbase.appdownloader.q.rg(r3)
            throw r4
    }

    public static void rg(java.lang.String r3, long r4, java.lang.String r6, org.json.JSONObject r7) {
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.Class<com.ss.android.downloadlib.activity.TTDelegateActivity> r2 = com.ss.android.downloadlib.activity.TTDelegateActivity.class
            r0.<init>(r1, r2)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            java.lang.String r1 = "type"
            r2 = 12
            r0.putExtra(r1, r2)
            java.lang.String r1 = "package_name"
            r0.putExtra(r1, r3)
            java.lang.String r3 = "model_id"
            r0.putExtra(r3, r4)
            java.lang.String r3 = "param"
            r0.putExtra(r3, r6)
            java.lang.String r3 = r7.toString()
            java.lang.String r4 = "ext_json"
            r0.putExtra(r4, r3)
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            if (r3 == 0) goto L3c
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            r3.startActivity(r0)
        L3c:
            return
    }

    public static void rg(java.lang.String r2, com.ss.android.downloadad.api.rg.rg r3) {
            android.content.Intent r3 = q(r3)
            r0 = 268435456(0x10000000, float:2.524355E-29)
            r3.addFlags(r0)
            java.lang.String r0 = "type"
            r1 = 2
            r3.putExtra(r0, r1)
            java.lang.String r0 = "open_url"
            r3.putExtra(r0, r2)
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            if (r2 == 0) goto L21
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            r2.startActivity(r3)
        L21:
            return
    }

    public static void rg(java.lang.String r3, java.lang.String[] r4) {
            android.content.Intent r0 = new android.content.Intent
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            java.lang.Class<com.ss.android.downloadlib.activity.TTDelegateActivity> r2 = com.ss.android.downloadlib.activity.TTDelegateActivity.class
            r0.<init>(r1, r2)
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.addFlags(r1)
            java.lang.String r1 = "type"
            r2 = 1
            r0.putExtra(r1, r2)
            java.lang.String r1 = "permission_id_key"
            r0.putExtra(r1, r3)
            java.lang.String r3 = "permission_content_key"
            r0.putExtra(r3, r4)
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            if (r3 == 0) goto L2d
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            r3.startActivity(r0)
        L2d:
            return
    }

    @Override
    protected void onCreate(android.os.Bundle r1) {
            r0 = this;
            super.onCreate(r1)
            r0.df()
            android.content.Intent r1 = r0.getIntent()
            r0.rg = r1
            com.ss.android.downloadlib.addownload.bm.df(r0)
            r0.rg()
            return
    }

    @Override
    protected void onNewIntent(android.content.Intent r1) {
            r0 = this;
            super.onNewIntent(r1)
            r0.setIntent(r1)
            r0.rg = r1
            com.ss.android.downloadlib.addownload.bm.df(r0)
            r0.rg()
            return
    }

    @Override
    public void onRequestPermissionsResult(int r2, java.lang.String[] r3, int[] r4) {
            r1 = this;
            super.onRequestPermissionsResult(r2, r3, r4)
            com.ss.android.download.api.config.rz r0 = com.ss.android.downloadlib.addownload.bm.pp()
            r0.rg(r1, r2, r3, r4)
            return
    }

    @Override
    protected void onStop() {
            r5 = this;
            super.onStop()
            boolean r0 = r5.df
            if (r0 == 0) goto L31
            com.ss.android.downloadad.api.rg.df r0 = r5.q
            if (r0 == 0) goto L31
            r0 = 0
            com.ss.android.downloadlib.ux r0 = com.ss.android.downloadlib.ux.rg(r0)
            com.ss.android.downloadad.api.rg.df r1 = r5.q
            java.lang.String r1 = r1.rg()
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.df(r1)
            if (r0 == 0) goto L31
            long r1 = r0.getCurBytes()
            long r3 = r0.getTotalBytes()
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 < 0) goto L31
            boolean r0 = r5.isFinishing()
            if (r0 != 0) goto L31
            r5.finish()
        L31:
            return
    }

    protected void rg() {
            r11 = this;
            android.content.Intent r0 = r11.rg
            if (r0 != 0) goto L6
            goto L9a
        L6:
            r1 = 0
            java.lang.String r2 = "type"
            int r0 = r0.getIntExtra(r2, r1)
            java.lang.String r1 = "package_name"
            java.lang.String r2 = "model_id"
            r3 = 0
            switch(r0) {
                case 1: goto L84;
                case 2: goto L78;
                case 3: goto L16;
                case 4: goto L6e;
                case 5: goto L64;
                case 6: goto L16;
                case 7: goto L60;
                case 8: goto L60;
                case 9: goto L55;
                case 10: goto L49;
                case 11: goto L3f;
                case 12: goto L1b;
                default: goto L16;
            }
        L16:
            com.ss.android.socialbase.appdownloader.q.rg(r11)
            goto L97
        L1b:
            android.content.Intent r0 = r11.rg
            java.lang.String r6 = r0.getStringExtra(r1)
            android.content.Intent r0 = r11.rg
            long r7 = r0.getLongExtra(r2, r3)
            android.content.Intent r0 = r11.rg
            java.lang.String r1 = "param"
            java.lang.String r9 = r0.getStringExtra(r1)
            android.content.Intent r0 = r11.rg
            java.lang.String r1 = "ext_json"
            java.lang.String r10 = r0.getStringExtra(r1)
            r5 = r11
            com.ss.android.downloadlib.utils.fw.rg(r5, r6, r7, r9, r10)
            com.ss.android.socialbase.appdownloader.q.rg(r11)
            goto L97
        L3f:
            android.content.Intent r0 = r11.rg
            java.lang.String r0 = r0.getStringExtra(r1)
            r11.df(r0)
            goto L97
        L49:
            android.content.Intent r0 = r11.rg
            java.lang.String r1 = "app_info_id"
            long r0 = r0.getLongExtra(r1, r3)
            r11.pt(r0)
            goto L97
        L55:
            com.ss.android.downloadlib.guide.install.rg r0 = com.ss.android.downloadlib.activity.TTDelegateActivity.pt
            if (r0 == 0) goto L5c
            r0.rg()
        L5c:
            com.ss.android.socialbase.appdownloader.q.rg(r11)
            goto L97
        L60:
            r11.q()
            goto L97
        L64:
            android.content.Intent r0 = r11.rg
            long r0 = r0.getLongExtra(r2, r3)
            r11.df(r0)
            goto L97
        L6e:
            android.content.Intent r0 = r11.rg
            long r0 = r0.getLongExtra(r2, r3)
            r11.q(r0)
            goto L97
        L78:
            android.content.Intent r0 = r11.rg
            java.lang.String r1 = "open_url"
            java.lang.String r0 = r0.getStringExtra(r1)
            r11.rg(r0)
            goto L97
        L84:
            android.content.Intent r0 = r11.rg
            java.lang.String r1 = "permission_id_key"
            java.lang.String r0 = r0.getStringExtra(r1)
            android.content.Intent r1 = r11.rg
            java.lang.String r2 = "permission_content_key"
            java.lang.String[] r1 = r1.getStringArrayExtra(r2)
            r11.df(r0, r1)
        L97:
            r0 = 0
            r11.rg = r0
        L9a:
            return
    }
}
