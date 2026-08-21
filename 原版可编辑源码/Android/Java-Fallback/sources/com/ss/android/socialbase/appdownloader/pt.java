package com.ss.android.socialbase.appdownloader;

public class pt {
    private static boolean c;
    private static volatile com.ss.android.socialbase.appdownloader.pt df;
    private static boolean fw;
    private static final java.lang.String rg = null;
    private com.ss.android.socialbase.appdownloader.q.ux b;
    private com.ss.android.socialbase.appdownloader.q.pt bm;
    private com.ss.android.socialbase.appdownloader.q.c f;
    private com.ss.android.socialbase.appdownloader.q.fw hq;
    private com.ss.android.socialbase.appdownloader.q.oh oh;
    private com.ss.android.socialbase.appdownloader.DownloadReceiver pp;
    private java.lang.String pt;
    private java.lang.String q;
    private com.ss.android.socialbase.appdownloader.q.q rz;
    private com.ss.android.socialbase.downloader.depend.IInstallAppHandler un;
    private boolean ux;
    private com.ss.android.socialbase.appdownloader.q.bm v;
    private com.ss.android.socialbase.downloader.depend.IOpenInstallerListener z;





    static {
            java.lang.Class<com.ss.android.socialbase.appdownloader.pt> r0 = com.ss.android.socialbase.appdownloader.pt.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.appdownloader.pt.rg = r0
            r0 = 0
            com.ss.android.socialbase.appdownloader.pt.df = r0
            r0 = 0
            com.ss.android.socialbase.appdownloader.pt.c = r0
            com.ss.android.socialbase.appdownloader.pt.fw = r0
            return
    }

    private pt() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.ux = r0
            return
    }

    public static com.ss.android.socialbase.appdownloader.pt bm() {
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.df
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.socialbase.appdownloader.pt> r0 = com.ss.android.socialbase.appdownloader.pt.class
            monitor-enter(r0)
            com.ss.android.socialbase.appdownloader.pt r1 = com.ss.android.socialbase.appdownloader.pt.df     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.socialbase.appdownloader.pt r1 = new com.ss.android.socialbase.appdownloader.pt     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.socialbase.appdownloader.pt.df = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.df
            return r0
    }

    private com.ss.android.socialbase.downloader.model.DownloadInfo df(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.Downloader r2 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r2)
            java.util.List r2 = r2.getDownloadInfoList(r3)
            if (r2 == 0) goto L23
            java.util.Iterator r2 = r2.iterator()
        Le:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L23
            java.lang.Object r3 = r2.next()
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r3
            if (r3 == 0) goto Le
            boolean r0 = r3.isSavePathRedirected()
            if (r0 == 0) goto Le
            return r3
        L23:
            r2 = 0
            return r2
    }

    private void q(android.content.Context r2) {
            r1 = this;
            if (r2 == 0) goto L1f
            boolean r0 = com.ss.android.socialbase.appdownloader.pt.c
            if (r0 != 0) goto L1f
            java.lang.String r0 = "application/vnd.android.package-archive"
            com.ss.android.socialbase.downloader.constants.DownloadConstants.setMimeApk(r0)
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setAppContext(r2)
            com.ss.android.socialbase.appdownloader.pt.df r2 = new com.ss.android.socialbase.appdownloader.pt.df
            r2.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setDownloadLaunchHandler(r2)
            r1.z()
            r1.r()
            r2 = 1
            com.ss.android.socialbase.appdownloader.pt.c = r2
        L1f:
            return
    }

    private void r() {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Le
            com.ss.android.socialbase.appdownloader.pt$1 r0 = new com.ss.android.socialbase.appdownloader.pt$1
            r0.<init>(r2)
            com.ss.android.socialbase.downloader.impls.RetryScheduler.setRetryScheduleHandler(r0)
        Le:
            return
    }

    static com.ss.android.socialbase.appdownloader.q.ux rg(com.ss.android.socialbase.appdownloader.pt r0) {
            com.ss.android.socialbase.appdownloader.q.ux r0 = r0.b
            return r0
    }

    private com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener rg(com.ss.android.socialbase.appdownloader.q.pp r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            com.ss.android.socialbase.appdownloader.pt$4 r0 = new com.ss.android.socialbase.appdownloader.pt$4
            r0.<init>(r1, r2)
            return r0
    }

    private com.ss.android.socialbase.downloader.model.DownloadInfo rg(android.content.Context r2, java.lang.String r3, java.io.File r4) {
            r1 = this;
            if (r2 == 0) goto L18
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L18
            if (r4 != 0) goto Lb
            goto L18
        Lb:
            com.ss.android.socialbase.downloader.downloader.Downloader r2 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r2)
            java.lang.String r4 = r4.getAbsolutePath()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r2.getDownloadInfo(r3, r4)
            return r2
        L18:
            r2 = 0
            return r2
    }

    private java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> rg(java.util.List<com.ss.android.socialbase.downloader.model.HttpHeader> r7) {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.lang.String r1 = "User-Agent"
            r2 = 0
            if (r7 == 0) goto L52
            int r3 = r7.size()
            if (r3 <= 0) goto L52
            java.util.Iterator r7 = r7.iterator()
        L14:
            boolean r3 = r7.hasNext()
            if (r3 == 0) goto L52
            java.lang.Object r3 = r7.next()
            com.ss.android.socialbase.downloader.model.HttpHeader r3 = (com.ss.android.socialbase.downloader.model.HttpHeader) r3
            if (r3 == 0) goto L14
            java.lang.String r4 = r3.getName()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L14
            java.lang.String r4 = r3.getValue()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 != 0) goto L14
            java.lang.String r4 = r3.getName()
            boolean r4 = r4.equals(r1)
            if (r4 == 0) goto L41
            r2 = 1
        L41:
            com.ss.android.socialbase.downloader.model.HttpHeader r4 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r5 = r3.getName()
            java.lang.String r3 = r3.getValue()
            r4.<init>(r5, r3)
            r0.add(r4)
            goto L14
        L52:
            if (r2 != 0) goto L5e
            com.ss.android.socialbase.downloader.model.HttpHeader r7 = new com.ss.android.socialbase.downloader.model.HttpHeader
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.df.rg.rg
            r7.<init>(r1, r2)
            r0.add(r7)
        L5e:
            return r0
    }

    static void rg(com.ss.android.socialbase.appdownloader.pt r0, com.ss.android.socialbase.downloader.model.DownloadTask r1, int r2, boolean r3) {
            r0.rg(r1, r2, r3)
            return
    }

    private void rg(com.ss.android.socialbase.downloader.model.DownloadTask r1, int r2, boolean r3) {
            r0 = this;
            if (r1 != 0) goto L3
            return
        L3:
            r1.download()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r1.getDownloadInfo()
            if (r1 == 0) goto Lf
            r1.setAntiHijackErrorCode(r2)
        Lf:
            if (r1 == 0) goto L16
            if (r3 == 0) goto L16
            r1.setSavePathRedirected(r3)
        L16:
            return
    }

    public static boolean rg(android.content.Context r1, int r2) {
            r0 = 1
            int r1 = com.ss.android.socialbase.appdownloader.q.rg(r1, r2, r0)
            if (r1 != r0) goto L8
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    static java.lang.String un() {
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.pt.rg
            return r0
    }

    private void z() {
            r5 = this;
            boolean r0 = com.ss.android.socialbase.appdownloader.pt.fw
            if (r0 == 0) goto L5
            return
        L5:
            com.ss.android.socialbase.appdownloader.DownloadReceiver r0 = r5.pp
            if (r0 != 0) goto L10
            com.ss.android.socialbase.appdownloader.DownloadReceiver r0 = new com.ss.android.socialbase.appdownloader.DownloadReceiver
            r0.<init>()
            r5.pp = r0
        L10:
            android.content.IntentFilter r0 = new android.content.IntentFilter     // Catch: java.lang.Exception -> L66
            r0.<init>()     // Catch: java.lang.Exception -> L66
            java.lang.String r1 = "android.net.conn.CONNECTIVITY_CHANGE"
            r0.addAction(r1)     // Catch: java.lang.Exception -> L66
            java.lang.String r1 = "android.intent.action.BOOT_COMPLETED"
            r0.addAction(r1)     // Catch: java.lang.Exception -> L66
            java.lang.String r1 = "android.ss.intent.action.DOWNLOAD_COMPLETE"
            r0.addAction(r1)     // Catch: java.lang.Exception -> L66
            android.content.IntentFilter r1 = new android.content.IntentFilter     // Catch: java.lang.Exception -> L66
            r1.<init>()     // Catch: java.lang.Exception -> L66
            java.lang.String r2 = "android.intent.action.PACKAGE_ADDED"
            r1.addAction(r2)     // Catch: java.lang.Exception -> L66
            java.lang.String r2 = "android.intent.action.PACKAGE_REPLACED"
            r1.addAction(r2)     // Catch: java.lang.Exception -> L66
            java.lang.String r2 = "package"
            r1.addDataScheme(r2)     // Catch: java.lang.Exception -> L66
            android.content.IntentFilter r2 = new android.content.IntentFilter     // Catch: java.lang.Exception -> L66
            r2.<init>()     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "android.intent.action.MEDIA_MOUNTED"
            r2.addAction(r3)     // Catch: java.lang.Exception -> L66
            java.lang.String r3 = "file"
            r2.addDataScheme(r3)     // Catch: java.lang.Exception -> L66
            android.content.Context r3 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Exception -> L66
            com.ss.android.socialbase.appdownloader.DownloadReceiver r4 = r5.pp     // Catch: java.lang.Exception -> L66
            r3.registerReceiver(r4, r0)     // Catch: java.lang.Exception -> L66
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Exception -> L66
            com.ss.android.socialbase.appdownloader.DownloadReceiver r3 = r5.pp     // Catch: java.lang.Exception -> L66
            r0.registerReceiver(r3, r1)     // Catch: java.lang.Exception -> L66
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Exception -> L66
            com.ss.android.socialbase.appdownloader.DownloadReceiver r1 = r5.pp     // Catch: java.lang.Exception -> L66
            r0.registerReceiver(r1, r2)     // Catch: java.lang.Exception -> L66
            r0 = 1
            com.ss.android.socialbase.appdownloader.pt.fw = r0     // Catch: java.lang.Exception -> L66
            goto L6a
        L66:
            r0 = move-exception
            r0.printStackTrace()
        L6a:
            return
    }

    public com.ss.android.socialbase.appdownloader.q.oh b() {
            r1 = this;
            com.ss.android.socialbase.appdownloader.q.oh r0 = r1.oh
            return r0
    }

    public boolean c() {
            r3 = this;
            org.json.JSONObject r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.getGlobalSettings()
            r1 = 1
            java.lang.String r2 = "package_flag_config"
            int r0 = r0.optInt(r2, r1)
            if (r0 != r1) goto Le
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    public com.ss.android.socialbase.appdownloader.q.pt df() {
            r1 = this;
            com.ss.android.socialbase.appdownloader.q.pt r0 = r1.bm
            return r0
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> df(android.content.Context r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.Downloader r2 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r2)
            java.lang.String r0 = "application/vnd.android.package-archive"
            java.util.List r2 = r2.getDownloadingDownloadInfosWithMimeType(r0)
            return r2
    }

    public void df(java.lang.String r2) {
            r1 = this;
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            r0.setDefaultSavePath(r2)
            return
    }

    public com.ss.android.socialbase.downloader.depend.IInstallAppHandler f() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IInstallAppHandler r0 = r1.un
            return r0
    }

    public com.ss.android.socialbase.appdownloader.q.bm fw() {
            r1 = this;
            com.ss.android.socialbase.appdownloader.q.bm r0 = r1.v
            return r0
    }

    public com.ss.android.socialbase.appdownloader.q.fw hq() {
            r1 = this;
            com.ss.android.socialbase.appdownloader.q.fw r0 = r1.hq
            return r0
    }

    public com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener oh() {
            r1 = this;
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r0 = r0.getReserveWifiStatusListener()
            return r0
    }

    public com.ss.android.socialbase.appdownloader.q.c pp() {
            r1 = this;
            com.ss.android.socialbase.appdownloader.q.c r0 = r1.f
            return r0
    }

    public java.lang.String pt() {
            r1 = this;
            java.lang.String r0 = r1.pt
            return r0
    }

    public com.ss.android.socialbase.appdownloader.q.ux q() {
            r1 = this;
            com.ss.android.socialbase.appdownloader.q.ux r0 = r1.b
            return r0
    }

    public int rg(com.ss.android.socialbase.appdownloader.c r23) {
            r22 = this;
            r7 = r22
            r8 = r23
            r9 = 0
            if (r8 == 0) goto L3b0
            android.content.Context r0 = r23.getContext()
            if (r0 != 0) goto Lf
            goto L3b0
        Lf:
            r11 = 1
            java.util.List r0 = r23.pt()     // Catch: java.lang.Throwable -> L388
            java.util.List r0 = r7.rg(r0)     // Catch: java.lang.Throwable -> L388
            java.lang.String r1 = r23.rg()     // Catch: java.lang.Throwable -> L388
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L388
            if (r2 == 0) goto L23
            return r9
        L23:
            int r5 = r23.qx()     // Catch: java.lang.Throwable -> L388
            if (r5 != 0) goto L2b
            r6 = r11
            goto L2c
        L2b:
            r6 = r9
        L2c:
            java.lang.String r2 = r23.cd()     // Catch: java.lang.Throwable -> L388
            java.lang.String r3 = r23.df()     // Catch: java.lang.Throwable -> L388
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L388
            if (r4 == 0) goto L42
            java.lang.String r2 = r23.hq()     // Catch: java.lang.Throwable -> L388
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.q.rg(r1, r3, r2, r6)     // Catch: java.lang.Throwable -> L388
        L42:
            int r4 = r2.length()     // Catch: java.lang.Throwable -> L388
            r12 = 255(0xff, float:3.57E-43)
            if (r4 <= r12) goto L53
            int r4 = r2.length()     // Catch: java.lang.Throwable -> L388
            int r4 = r4 - r12
            java.lang.String r2 = r2.substring(r4)     // Catch: java.lang.Throwable -> L388
        L53:
            boolean r4 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L388
            if (r4 == 0) goto L5a
            r3 = r2
        L5a:
            java.lang.String r4 = r23.hq()     // Catch: java.lang.Throwable -> L388
            java.lang.String r12 = ".apk"
            boolean r12 = r2.endsWith(r12)     // Catch: java.lang.Throwable -> L388
            if (r12 == 0) goto L72
            java.lang.String r12 = r23.hq()     // Catch: java.lang.Throwable -> L388
            boolean r12 = com.ss.android.socialbase.appdownloader.q.q(r12)     // Catch: java.lang.Throwable -> L388
            if (r12 != 0) goto L72
            java.lang.String r4 = "application/vnd.android.package-archive"
        L72:
            java.lang.String r12 = r23.q()     // Catch: java.lang.Throwable -> L388
            java.lang.String r13 = r23.q()     // Catch: java.lang.Throwable -> L388
            boolean r13 = android.text.TextUtils.isEmpty(r13)     // Catch: java.lang.Throwable -> L388
            if (r13 == 0) goto L84
            java.lang.String r12 = com.ss.android.socialbase.appdownloader.q.df()     // Catch: java.lang.Throwable -> L388
        L84:
            r15 = r12
            boolean r12 = android.text.TextUtils.isEmpty(r15)     // Catch: java.lang.Throwable -> L388
            if (r12 != 0) goto L386
            boolean r12 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L388
            if (r12 == 0) goto L93
            goto L386
        L93:
            int r14 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadId(r1, r15)     // Catch: java.lang.Throwable -> L388
            org.json.JSONObject r12 = r23.vd()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.setting.DownloadSetting r12 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r12)     // Catch: java.lang.Throwable -> L388
            java.lang.String r13 = "resume_task_override_settings"
            boolean r12 = r12.optBugFix(r13)     // Catch: java.lang.Throwable -> L388
            if (r12 == 0) goto Lc1
            android.content.Context r12 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.downloader.Downloader r12 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r12)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadInfo r12 = r12.getDownloadInfo(r14)     // Catch: java.lang.Throwable -> L388
            if (r12 == 0) goto Lc1
            org.json.JSONObject r13 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Lc1
            java.lang.String r12 = r12.getDownloadSettingString()     // Catch: java.lang.Throwable -> Lc1
            r13.<init>(r12)     // Catch: java.lang.Throwable -> Lc1
            r8.rg(r13)     // Catch: java.lang.Throwable -> Lc1
        Lc1:
            org.json.JSONObject r12 = r23.vd()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.setting.DownloadSetting.addTaskDownloadSetting(r14, r12)     // Catch: java.lang.Throwable -> L388
            boolean r12 = r23.ev()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.setting.DownloadSetting r13 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r14)     // Catch: java.lang.Throwable -> L388
            java.lang.String r10 = "modify_force"
            int r10 = r13.optInt(r10, r11)     // Catch: java.lang.Throwable -> L388
            if (r10 != r11) goto Lf0
            if (r12 != 0) goto Lf0
            boolean r10 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isFileExist(r15, r2)     // Catch: java.lang.Throwable -> L388
            if (r10 == 0) goto Lf0
            android.content.Context r10 = r23.getContext()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.downloader.Downloader r10 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r10)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadInfo r10 = r10.getDownloadInfo(r14)     // Catch: java.lang.Throwable -> L388
            if (r10 != 0) goto Lf0
            r10 = r11
            goto Lf1
        Lf0:
            r10 = r12
        Lf1:
            com.ss.android.socialbase.downloader.depend.IDownloadListener r12 = r23.bm()     // Catch: java.lang.Throwable -> L388
            if (r12 != 0) goto L112
            boolean r13 = r23.pp()     // Catch: java.lang.Throwable -> L388
            if (r13 != 0) goto L103
            boolean r13 = r23.c()     // Catch: java.lang.Throwable -> L388
            if (r13 == 0) goto L112
        L103:
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r12 = r23.f()     // Catch: java.lang.Throwable -> L388
            if (r12 == 0) goto L117
            com.ss.android.socialbase.appdownloader.pp.df r12 = new com.ss.android.socialbase.appdownloader.pp.df     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.notification.AbsNotificationItem r13 = r23.f()     // Catch: java.lang.Throwable -> L388
            r12.<init>(r13)     // Catch: java.lang.Throwable -> L388
        L112:
            r20 = r14
            r21 = r15
            goto L131
        L117:
            com.ss.android.socialbase.appdownloader.pp.df r19 = new com.ss.android.socialbase.appdownloader.pp.df     // Catch: java.lang.Throwable -> L388
            android.content.Context r13 = r23.getContext()     // Catch: java.lang.Throwable -> L388
            java.lang.String r18 = r23.b()     // Catch: java.lang.Throwable -> L388
            r12 = r19
            r20 = r14
            r21 = r15
            r15 = r3
            r16 = r21
            r17 = r2
            r12.<init>(r13, r14, r15, r16, r17, r18)     // Catch: java.lang.Throwable -> L388
            r12 = r19
        L131:
            com.ss.android.socialbase.downloader.depend.IDownloadDepend r13 = r23.ms()     // Catch: java.lang.Throwable -> L388
            if (r13 != 0) goto L13c
            com.ss.android.socialbase.appdownloader.pt$2 r13 = new com.ss.android.socialbase.appdownloader.pt$2     // Catch: java.lang.Throwable -> L388
            r13.<init>(r7)     // Catch: java.lang.Throwable -> L388
        L13c:
            java.util.List r14 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getDownloadCompleteHandlers()     // Catch: java.lang.Throwable -> L388
            boolean r15 = r14.isEmpty()     // Catch: java.lang.Throwable -> L388
            if (r15 != 0) goto L15a
            java.util.Iterator r14 = r14.iterator()     // Catch: java.lang.Throwable -> L388
        L14a:
            boolean r15 = r14.hasNext()     // Catch: java.lang.Throwable -> L388
            if (r15 == 0) goto L15a
            java.lang.Object r15 = r14.next()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler r15 = (com.ss.android.socialbase.downloader.depend.IDownloadCompleteHandler) r15     // Catch: java.lang.Throwable -> L388
            r8.rg(r15)     // Catch: java.lang.Throwable -> L388
            goto L14a
        L15a:
            java.lang.String r14 = r23.b()     // Catch: java.lang.Throwable -> L388
            boolean r15 = android.text.TextUtils.isEmpty(r14)     // Catch: java.lang.Throwable -> L185
            if (r15 != 0) goto L16a
            org.json.JSONObject r15 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L185
            r15.<init>(r14)     // Catch: java.lang.Throwable -> L185
            goto L16f
        L16a:
            org.json.JSONObject r15 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L185
            r15.<init>()     // Catch: java.lang.Throwable -> L185
        L16f:
            java.lang.String r9 = "auto_install_with_notification"
            boolean r11 = r23.fw()     // Catch: java.lang.Throwable -> L185
            r15.put(r9, r11)     // Catch: java.lang.Throwable -> L185
            java.lang.String r9 = "auto_install_without_notification"
            boolean r11 = r23.c()     // Catch: java.lang.Throwable -> L185
            r15.put(r9, r11)     // Catch: java.lang.Throwable -> L185
            java.lang.String r14 = r15.toString()     // Catch: java.lang.Throwable -> L185
        L185:
            boolean r9 = r23.pp()     // Catch: java.lang.Throwable -> L388
            if (r9 != 0) goto L194
            boolean r9 = r23.c()     // Catch: java.lang.Throwable -> L388
            if (r9 == 0) goto L192
            goto L194
        L192:
            r9 = 0
            goto L195
        L194:
            r9 = 1
        L195:
            if (r9 == 0) goto L1b2
            com.ss.android.socialbase.downloader.setting.DownloadSetting r11 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r20)     // Catch: java.lang.Throwable -> L388
            java.lang.String r15 = "enable_notification_ui"
            int r11 = r11.optInt(r15)     // Catch: java.lang.Throwable -> L388
            r15 = 1
            if (r11 < r15) goto L1b2
            com.ss.android.socialbase.appdownloader.pp.q r11 = com.ss.android.socialbase.appdownloader.pp.q.rg()     // Catch: java.lang.Throwable -> L388
            java.lang.String r15 = r23.fg()     // Catch: java.lang.Throwable -> L388
            r8 = r20
            r11.rg(r8, r15)     // Catch: java.lang.Throwable -> L388
            goto L1b4
        L1b2:
            r8 = r20
        L1b4:
            android.content.Context r11 = r23.getContext()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r11 = com.ss.android.socialbase.downloader.downloader.Downloader.with(r11)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = r11.url(r1)     // Catch: java.lang.Throwable -> L388
            java.util.List r11 = r23.xv()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = r1.backUpUrls(r11)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = r1.name(r2)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = r1.title(r3)     // Catch: java.lang.Throwable -> L388
            r2 = r21
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = r1.savePath(r2)     // Catch: java.lang.Throwable -> L388
            boolean r2 = r23.ux()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r1 = r1.onlyWifi(r2)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r1.extraHeaders(r0)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.depend(r13)     // Catch: java.lang.Throwable -> L388
            int r1 = r23.fo()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.retryCount(r1)     // Catch: java.lang.Throwable -> L388
            int r1 = r23.re()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.backUpUrlRetryCount(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.showNotification(r9)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.extra(r14)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.mimeType(r4)     // Catch: java.lang.Throwable -> L388
            int r1 = r23.dj()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.minProgressTimeMsInterval(r1)     // Catch: java.lang.Throwable -> L388
            int r1 = r23.go()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.maxProgressCount(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.depend.IDownloadListener r1 = r23.rz()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.mainThreadListener(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.notificationListener(r12)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.appdownloader.q.pp r1 = r23.om()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.depend.IDownloadNotificationEventListener r1 = r7.rg(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.notificationEventListener(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.force(r10)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.z()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.autoResumed(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.r()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.showNotificationForAutoResumed(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.downloader.IChunkCntCalculator r1 = r23.v()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.chunkStategy(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.downloader.IChunkAdjustCalculator r1 = r23.un()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.chunkAdjustCalculator(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.oh()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.needHttpsToHttpRetry(r1)     // Catch: java.lang.Throwable -> L388
            java.lang.String r1 = r23.n()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.packageName(r1)     // Catch: java.lang.Throwable -> L388
            java.lang.String r1 = r23.ou()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.md5(r1)     // Catch: java.lang.Throwable -> L388
            long r1 = r23.y()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.expectFileLength(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.l()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.needRetryDelay(r1)     // Catch: java.lang.Throwable -> L388
            java.lang.String r1 = r23.p()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.retryDelayTimeArray(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.i()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.needDefaultHttpServiceBackUp(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.lc()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.needReuseFirstConnection(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.k()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.needReuseChunkRunnable(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.lu()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.needIndependentProcess(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.constants.EnqueueType r1 = r23.oy()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.enqueueType(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r1 = r23.ax()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.monitorDepend(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.downloader.IRetryDelayTimeCalculator r1 = r23.d()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.retryDelayTimeCalculator(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.bj()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.headConnectionAvailable(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.depend.IDownloadFileUriProvider r1 = r23.m()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.fileUriProvider(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.depend.IDownloadDiskSpaceHandler r1 = r23.t()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.diskSpaceHandler(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.g()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.needChunkDowngradeRetry(r1)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.depend.INotificationClickCallback r1 = r23.mc()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.notificationClickCallback(r1)     // Catch: java.lang.Throwable -> L388
            org.json.JSONObject r1 = r23.vd()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.downloadSetting(r1)     // Catch: java.lang.Throwable -> L388
            java.lang.String r1 = r23.fg()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.iconUrl(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.fl()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.needSDKMonitor(r1)     // Catch: java.lang.Throwable -> L388
            java.lang.String r1 = r23.h()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.monitorScene(r1)     // Catch: java.lang.Throwable -> L388
            int[] r1 = r23.j()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.extraMonitorStatus(r1)     // Catch: java.lang.Throwable -> L388
            int r1 = r23.s()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.executorGroup(r1)     // Catch: java.lang.Throwable -> L388
            long r1 = r23.su()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.throttleNetSpeed(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.ka()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r0 = r0.distinctDirectory(r1)     // Catch: java.lang.Throwable -> L388
            boolean r1 = r23.ey()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.model.DownloadTask r4 = r0.setAutoInstall(r1)     // Catch: java.lang.Throwable -> L388
            if (r4 == 0) goto L339
            java.util.List r0 = r23.bl()     // Catch: java.lang.Throwable -> L388
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L388
            if (r0 != 0) goto L339
            java.util.List r0 = r23.bl()     // Catch: java.lang.Throwable -> L388
            r4.setDownloadCompleteHandlers(r0)     // Catch: java.lang.Throwable -> L388
        L339:
            if (r4 == 0) goto L385
            if (r9 == 0) goto L369
            boolean r0 = r23.gk()     // Catch: java.lang.Throwable -> L388
            if (r0 == 0) goto L369
            android.app.Activity r0 = r23.getActivity()     // Catch: java.lang.Throwable -> L388
            if (r0 == 0) goto L369
            android.app.Activity r0 = r23.getActivity()     // Catch: java.lang.Throwable -> L388
            boolean r0 = r0.isFinishing()     // Catch: java.lang.Throwable -> L388
            if (r0 != 0) goto L369
            boolean r0 = com.ss.android.socialbase.appdownloader.pp.pt.rg()     // Catch: java.lang.Throwable -> L388
            if (r0 != 0) goto L369
            android.app.Activity r0 = r23.getActivity()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.appdownloader.pt$3 r9 = new com.ss.android.socialbase.appdownloader.pt$3     // Catch: java.lang.Throwable -> L388
            r1 = r9
            r2 = r22
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.appdownloader.pp.pt.rg(r0, r9)     // Catch: java.lang.Throwable -> L388
            goto L385
        L369:
            java.lang.String r0 = com.ss.android.socialbase.appdownloader.pt.rg     // Catch: java.lang.Throwable -> L388
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L388
            r1.<init>()     // Catch: java.lang.Throwable -> L388
            java.lang.String r2 = "notification permission need not request, start download :"
            r1.append(r2)     // Catch: java.lang.Throwable -> L388
            r1.append(r3)     // Catch: java.lang.Throwable -> L388
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L388
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)     // Catch: java.lang.Throwable -> L388
            r7.rg(r4, r5, r6)     // Catch: java.lang.Throwable -> L388
            r4.getDownloadInfo()     // Catch: java.lang.Throwable -> L388
        L385:
            return r8
        L386:
            r1 = r9
            return r1
        L388:
            r0 = move-exception
            com.ss.android.socialbase.downloader.depend.IDownloadMonitorDepend r1 = r23.ax()
            com.ss.android.socialbase.downloader.exception.BaseException r2 = new com.ss.android.socialbase.downloader.exception.BaseException
            r3 = 1003(0x3eb, float:1.406E-42)
            java.lang.String r4 = "addDownloadTask"
            java.lang.String r4 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getErrorMsgWithTagPrefix(r0, r4)
            r2.<init>(r3, r4)
            r3 = 0
            r4 = 0
            com.ss.android.socialbase.downloader.monitor.DownloadMonitorHelper.monitorSendWithTaskMonitor(r1, r3, r2, r4)
            java.lang.String r1 = com.ss.android.socialbase.appdownloader.pt.rg
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r2[r4] = r0
            java.lang.String r0 = "add download task error:%s"
            java.lang.String r0 = java.lang.String.format(r0, r2)
            com.ss.android.socialbase.downloader.logger.Logger.e(r1, r0)
            return r4
        L3b0:
            r4 = r9
            return r4
    }

    public com.ss.android.socialbase.appdownloader.q.q rg() {
            r1 = this;
            com.ss.android.socialbase.appdownloader.q.q r0 = r1.rz
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadInfo rg(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 != 0) goto L5d
            if (r5 != 0) goto La
            goto L5d
        La:
            java.io.File r0 = r4.ux()     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.rg(r5, r6, r0)     // Catch: java.lang.Throwable -> L47
            if (r0 != 0) goto L1e
            java.lang.String r0 = android.os.Environment.DIRECTORY_DOWNLOADS     // Catch: java.lang.Throwable -> L47
            java.io.File r0 = r5.getExternalFilesDir(r0)     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.rg(r5, r6, r0)     // Catch: java.lang.Throwable -> L47
        L1e:
            if (r0 != 0) goto L2a
            java.lang.String r0 = android.os.Environment.DIRECTORY_DOWNLOADS     // Catch: java.lang.Throwable -> L47
            java.io.File r0 = android.os.Environment.getExternalStoragePublicDirectory(r0)     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.rg(r5, r6, r0)     // Catch: java.lang.Throwable -> L47
        L2a:
            if (r0 != 0) goto L34
            java.io.File r0 = r5.getFilesDir()     // Catch: java.lang.Throwable -> L47
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.rg(r5, r6, r0)     // Catch: java.lang.Throwable -> L47
        L34:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()     // Catch: java.lang.Throwable -> L47
            java.lang.String r3 = "get_download_info_by_list"
            boolean r2 = r2.optBugFix(r3)     // Catch: java.lang.Throwable -> L47
            if (r0 != 0) goto L46
            if (r2 == 0) goto L46
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r4.df(r5, r6)     // Catch: java.lang.Throwable -> L47
        L46:
            return r0
        L47:
            r5 = move-exception
            java.lang.String r6 = com.ss.android.socialbase.appdownloader.pt.rg
            r0 = 1
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r2 = 0
            java.lang.String r5 = r5.getMessage()
            r0[r2] = r5
            java.lang.String r5 = "getAppDownloadInfo error:%s"
            java.lang.String r5 = java.lang.String.format(r5, r0)
            com.ss.android.socialbase.downloader.logger.Logger.d(r6, r5)
        L5d:
            return r1
    }

    public java.lang.String rg(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L16
            java.lang.String r0 = ".apk"
            boolean r2 = r2.endsWith(r0)
            if (r2 == 0) goto L16
            boolean r2 = com.ss.android.socialbase.appdownloader.q.q(r3)
            if (r2 != 0) goto L16
            java.lang.String r3 = "application/vnd.android.package-archive"
        L16:
            return r3
    }

    public java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> rg(android.content.Context r2) {
            r1 = this;
            com.ss.android.socialbase.downloader.downloader.Downloader r2 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r2)
            java.lang.String r0 = "application/vnd.android.package-archive"
            java.util.List r2 = r2.getUnCompletedDownloadInfosWithMimeType(r0)
            return r2
    }

    public void rg(android.content.Context r1, int r2, int r3) {
            r0 = this;
            switch(r3) {
                case -4: goto L19;
                case -3: goto L14;
                case -2: goto Lc;
                case -1: goto L19;
                case 0: goto L3;
                case 1: goto L4;
                case 2: goto L4;
                case 3: goto L4;
                case 4: goto L4;
                case 5: goto L4;
                case 6: goto L3;
                case 7: goto L4;
                case 8: goto L4;
                default: goto L3;
            }
        L3:
            goto L25
        L4:
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r1)     // Catch: java.lang.Exception -> L21
            r1.pause(r2)     // Catch: java.lang.Exception -> L21
            goto L25
        Lc:
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r1)     // Catch: java.lang.Exception -> L21
            r1.resume(r2)     // Catch: java.lang.Exception -> L21
            goto L25
        L14:
            r3 = 1
            com.ss.android.socialbase.appdownloader.q.rg(r1, r2, r3)     // Catch: java.lang.Exception -> L21
            goto L25
        L19:
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r1)     // Catch: java.lang.Exception -> L21
            r1.restart(r2)     // Catch: java.lang.Exception -> L21
            goto L25
        L21:
            r1 = move-exception
            r1.printStackTrace()
        L25:
            return
    }

    @java.lang.Deprecated
    public void rg(android.content.Context r1, java.lang.String r2, com.ss.android.socialbase.appdownloader.q.q r3, com.ss.android.socialbase.appdownloader.q.pt r4, com.ss.android.socialbase.appdownloader.q.ux r5) {
            r0 = this;
            if (r3 == 0) goto L4
            r0.rz = r3
        L4:
            if (r4 == 0) goto L8
            r0.bm = r4
        L8:
            if (r5 == 0) goto Lc
            r0.b = r5
        Lc:
            r0.q(r1)
            return
    }

    public void rg(com.ss.android.socialbase.appdownloader.q.bm r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public void rg(com.ss.android.socialbase.appdownloader.q.fw r1) {
            r0 = this;
            r0.hq = r1
            return
    }

    public void rg(com.ss.android.socialbase.downloader.depend.IInstallAppHandler r1) {
            r0 = this;
            r0.un = r1
            return
    }

    public void rg(com.ss.android.socialbase.downloader.depend.IOpenInstallerListener r1) {
            r0 = this;
            r0.z = r1
            return
    }

    public void rg(com.ss.android.socialbase.downloader.downloader.IReserveWifiStatusListener r2) {
            r1 = this;
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            r0.setReserveWifiStatusListener(r2)
            return
    }

    public void rg(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            r1.pt = r2
            return
    }

    public java.lang.String rz() {
            r1 = this;
            java.lang.String r0 = r1.q
            return r0
    }

    public java.io.File ux() {
            r1 = this;
            android.content.Context r0 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            java.io.File r0 = r0.getGlobalSaveDir()
            return r0
    }

    public com.ss.android.socialbase.downloader.depend.IOpenInstallerListener v() {
            r1 = this;
            com.ss.android.socialbase.downloader.depend.IOpenInstallerListener r0 = r1.z
            return r0
    }
}
