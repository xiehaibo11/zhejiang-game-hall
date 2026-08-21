package com.ss.android.downloadlib.event;

public class AdEventHandler {

    static class 1 {
    }

    public @interface EventType {
        public static final int CLICK_CONTINUE = 4;
        public static final int CLICK_INSTALL = 5;
        public static final int CLICK_PAUSE = 3;
        public static final int CLICK_START = 2;
        public static final int STORAGE_DENY = 1;
    }

    private static class rg {
        private static com.ss.android.downloadlib.event.AdEventHandler rg;

        static {
                com.ss.android.downloadlib.event.AdEventHandler r0 = new com.ss.android.downloadlib.event.AdEventHandler
                r1 = 0
                r0.<init>(r1)
                com.ss.android.downloadlib.event.AdEventHandler.rg.rg = r0
                return
        }

        static com.ss.android.downloadlib.event.AdEventHandler rg() {
                com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg.rg
                return r0
        }
    }

    private AdEventHandler() {
            r0 = this;
            r0.<init>()
            return
    }

    AdEventHandler(com.ss.android.downloadlib.event.AdEventHandler.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ss.android.downloadlib.event.AdEventHandler rg() {
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg.rg()
            return r0
    }

    private org.json.JSONObject rg(com.ss.android.downloadad.api.rg.rg r4) {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            org.json.JSONObject r1 = r4.fw()     // Catch: java.lang.Exception -> L64
            com.ss.android.downloadlib.utils.b.rg(r1, r0)     // Catch: java.lang.Exception -> L64
            org.json.JSONObject r1 = r4.un()     // Catch: java.lang.Exception -> L64
            com.ss.android.downloadlib.utils.b.rg(r1, r0)     // Catch: java.lang.Exception -> L64
            java.lang.String r1 = "download_url"
            java.lang.String r2 = r4.rg()     // Catch: java.lang.Exception -> L64
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L64
            java.lang.String r1 = "package_name"
            java.lang.String r2 = r4.pp()     // Catch: java.lang.Exception -> L64
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L64
            java.lang.String r1 = "android_int"
            int r2 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Exception -> L64
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L64
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L64
            java.lang.String r1 = "rom_name"
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.c.pt.fw()     // Catch: java.lang.Exception -> L64
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L64
            java.lang.String r1 = "rom_version"
            java.lang.String r2 = com.ss.android.socialbase.appdownloader.c.pt.ux()     // Catch: java.lang.Exception -> L64
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L64
            java.lang.String r1 = "ttdownloader"
            r2 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L64
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L64
            java.lang.String r1 = "funnel_type"
            int r2 = r4.ux()     // Catch: java.lang.Exception -> L64
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L64
            r0.putOpt(r1, r2)     // Catch: java.lang.Exception -> L64
            int r1 = r4.ux()     // Catch: java.lang.Exception -> L64
            r2 = 2
            if (r1 != r2) goto L6e
            com.ss.android.downloadlib.utils.pp.df(r0, r4)     // Catch: java.lang.Exception -> L64
            goto L6e
        L64:
            r4 = move-exception
            com.ss.android.download.api.df.rg r1 = com.ss.android.downloadlib.addownload.bm.qx()
            java.lang.String r2 = "getBaseJson"
            r1.rg(r4, r2)
        L6e:
            return r0
    }

    private void rg(com.ss.android.download.api.model.df r2) {
            r1 = this;
            com.ss.android.download.api.config.fw r0 = com.ss.android.downloadlib.addownload.bm.rg()
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r2.oh()
            if (r0 == 0) goto L15
            com.ss.android.download.api.config.fw r0 = com.ss.android.downloadlib.addownload.bm.rg()
            r0.rg(r2)
            goto L1c
        L15:
            com.ss.android.download.api.config.fw r0 = com.ss.android.downloadlib.addownload.bm.rg()
            r0.df(r2)
        L1c:
            return
    }

    private void rg(java.lang.String r6, java.lang.String r7, org.json.JSONObject r8, long r9, int r11, com.ss.android.downloadad.api.rg.rg r12) {
            r5 = this;
            if (r12 != 0) goto Lc
            com.ss.android.downloadlib.exception.q r6 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r7 = "onEvent data null"
            r6.rg(r7)
            return
        Lc:
            boolean r0 = r12 instanceof com.ss.android.downloadlib.addownload.model.pp
            if (r0 == 0) goto L23
            r0 = r12
            com.ss.android.downloadlib.addownload.model.pp r0 = (com.ss.android.downloadlib.addownload.model.pp) r0
            boolean r0 = r0.re()
            if (r0 == 0) goto L23
            com.ss.android.downloadlib.exception.q r6 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r7 = "onEvent ModelBox notValid"
            r6.rg(r7)
            return
        L23:
            com.ss.android.download.api.model.df$rg r0 = new com.ss.android.download.api.model.df$rg     // Catch: java.lang.Exception -> Lb7
            r0.<init>()     // Catch: java.lang.Exception -> Lb7
            r1 = 3
            java.lang.String[] r1 = new java.lang.String[r1]     // Catch: java.lang.Exception -> Lb7
            r2 = 0
            r1[r2] = r6     // Catch: java.lang.Exception -> Lb7
            java.lang.String r6 = r12.bm()     // Catch: java.lang.Exception -> Lb7
            r3 = 1
            r1[r3] = r6     // Catch: java.lang.Exception -> Lb7
            java.lang.String r6 = "embeded_ad"
            r4 = 2
            r1[r4] = r6     // Catch: java.lang.Exception -> Lb7
            java.lang.String r6 = com.ss.android.downloadlib.utils.b.rg(r1)     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df$rg r6 = r0.rg(r6)     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df$rg r6 = r6.df(r7)     // Catch: java.lang.Exception -> Lb7
            boolean r7 = r12.q()     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df$rg r6 = r6.df(r7)     // Catch: java.lang.Exception -> Lb7
            long r0 = r12.df()     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df$rg r6 = r6.rg(r0)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r7 = r12.pt()     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df$rg r6 = r6.q(r7)     // Catch: java.lang.Exception -> Lb7
            r0 = 0
            int r7 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r7 <= 0) goto L65
            goto L69
        L65:
            long r9 = r12.hq()     // Catch: java.lang.Exception -> Lb7
        L69:
            com.ss.android.download.api.model.df$rg r6 = r6.df(r9)     // Catch: java.lang.Exception -> Lb7
            java.lang.String r7 = r12.rz()     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df$rg r6 = r6.pt(r7)     // Catch: java.lang.Exception -> Lb7
            java.util.List r7 = r12.f()     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df$rg r6 = r6.rg(r7)     // Catch: java.lang.Exception -> Lb7
            org.json.JSONObject[] r7 = new org.json.JSONObject[r4]     // Catch: java.lang.Exception -> Lb7
            org.json.JSONObject r9 = r5.rg(r12)     // Catch: java.lang.Exception -> Lb7
            r7[r2] = r9     // Catch: java.lang.Exception -> Lb7
            r7[r3] = r8     // Catch: java.lang.Exception -> Lb7
            org.json.JSONObject r7 = com.ss.android.downloadlib.utils.b.rg(r7)     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df$rg r6 = r6.rg(r7)     // Catch: java.lang.Exception -> Lb7
            org.json.JSONObject r7 = r12.b()     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df$rg r6 = r6.df(r7)     // Catch: java.lang.Exception -> Lb7
            java.lang.Object r7 = r12.v()     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df$rg r6 = r6.rg(r7)     // Catch: java.lang.Exception -> Lb7
            if (r11 <= 0) goto La2
            goto La3
        La2:
            r11 = r4
        La3:
            com.ss.android.download.api.model.df$rg r6 = r6.rg(r11)     // Catch: java.lang.Exception -> Lb7
            boolean r7 = r12.oh()     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df$rg r6 = r6.rg(r7)     // Catch: java.lang.Exception -> Lb7
            com.ss.android.download.api.model.df r6 = r6.rg()     // Catch: java.lang.Exception -> Lb7
            r5.rg(r6)     // Catch: java.lang.Exception -> Lb7
            goto Lc1
        Lb7:
            r6 = move-exception
            com.ss.android.downloadlib.exception.q r7 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r8 = "onEvent"
            r7.rg(r6, r8)
        Lc1:
            return
    }

    public void df(long r2, int r4) {
            r1 = this;
            r0 = 0
            r1.rg(r2, r4, r0)
            return
    }

    public void df(com.ss.android.socialbase.downloader.model.DownloadInfo r7, com.ss.android.socialbase.downloader.exception.BaseException r8) {
            r6 = this;
            if (r7 != 0) goto L3
            return
        L3:
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r7)
            if (r0 != 0) goto L17
            com.ss.android.downloadlib.exception.q r7 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r8 = "sendDownloadFailedEvent nativeModel null"
            r7.rg(r8)
            return
        L17:
            java.util.concurrent.atomic.AtomicBoolean r1 = r0.q
            boolean r1 = r1.get()
            if (r1 == 0) goto L20
            return
        L20:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            com.ss.android.downloadlib.utils.pp.q(r7, r1)     // Catch: org.json.JSONException -> L9a
            com.ss.android.downloadlib.rg.rg(r1, r7)     // Catch: org.json.JSONException -> L9a
            if (r8 == 0) goto L51
            java.lang.String r2 = "fail_status"
            int r3 = r8.getErrorCode()     // Catch: org.json.JSONException -> L9a
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: org.json.JSONException -> L9a
            r1.putOpt(r2, r3)     // Catch: org.json.JSONException -> L9a
            java.lang.String r2 = "fail_msg"
            java.lang.String r3 = r8.getErrorMessage()     // Catch: org.json.JSONException -> L9a
            r1.putOpt(r2, r3)     // Catch: org.json.JSONException -> L9a
            int r2 = r8.getErrorCode()     // Catch: org.json.JSONException -> L9a
            r0.pt(r2)     // Catch: org.json.JSONException -> L9a
            java.lang.String r8 = r8.getErrorMessage()     // Catch: org.json.JSONException -> L9a
            r0.rg(r8)     // Catch: org.json.JSONException -> L9a
        L51:
            r0.l()     // Catch: org.json.JSONException -> L9a
            java.lang.String r8 = "download_failed_times"
            int r2 = r0.re()     // Catch: org.json.JSONException -> L9a
            r1.put(r8, r2)     // Catch: org.json.JSONException -> L9a
            long r2 = r7.getTotalBytes()     // Catch: org.json.JSONException -> L9a
            r4 = 0
            int r8 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r8 <= 0) goto L77
            java.lang.String r8 = "download_percent"
            long r2 = r7.getCurBytes()     // Catch: org.json.JSONException -> L9a
            double r2 = (double) r2     // Catch: org.json.JSONException -> L9a
            long r4 = r7.getTotalBytes()     // Catch: org.json.JSONException -> L9a
            double r4 = (double) r4     // Catch: org.json.JSONException -> L9a
            double r2 = r2 / r4
            r1.put(r8, r2)     // Catch: org.json.JSONException -> L9a
        L77:
            java.lang.String r7 = "has_send_download_failed_finally"
            java.util.concurrent.atomic.AtomicBoolean r8 = r0.pt     // Catch: org.json.JSONException -> L9a
            boolean r8 = r8.get()     // Catch: org.json.JSONException -> L9a
            r2 = 1
            r3 = 2
            if (r8 == 0) goto L85
            r8 = r2
            goto L86
        L85:
            r8 = r3
        L86:
            r1.put(r7, r8)     // Catch: org.json.JSONException -> L9a
            com.ss.android.downloadlib.utils.pp.rg(r0, r1)     // Catch: org.json.JSONException -> L9a
            java.lang.String r7 = "is_update_download"
            boolean r8 = r0.fl()     // Catch: org.json.JSONException -> L9a
            if (r8 == 0) goto L95
            goto L96
        L95:
            r2 = r3
        L96:
            r1.put(r7, r2)     // Catch: org.json.JSONException -> L9a
            goto L9e
        L9a:
            r7 = move-exception
            r7.printStackTrace()
        L9e:
            java.lang.String r7 = r0.bm()
            java.lang.String r8 = "download_failed"
            r6.rg(r7, r8, r1, r0)
            com.ss.android.downloadlib.addownload.model.ux r7 = com.ss.android.downloadlib.addownload.model.ux.rg()
            r7.rg(r0)
            return
    }

    public void df(java.lang.String r2, com.ss.android.downloadad.api.rg.rg r3) {
            r1 = this;
            r0 = 0
            r1.rg(r0, r2, r3)
            return
    }

    public void df(java.lang.String r2, org.json.JSONObject r3, com.ss.android.downloadad.api.rg.rg r4) {
            r1 = this;
            r0 = 0
            r1.rg(r0, r2, r3, r4)
            return
    }

    public void rg(long r9, int r11) {
            r8 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r0 = r0.pp(r9)
            boolean r1 = r0.re()
            if (r1 == 0) goto L18
            com.ss.android.downloadlib.exception.q r9 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r10 = "sendClickEvent ModelBox notValid"
            r9.rg(r10)
            return
        L18:
            com.ss.android.download.api.download.DownloadEventConfig r1 = r0.q
            boolean r1 = r1.isEnableClickEvent()
            if (r1 != 0) goto L21
            return
        L21:
            r1 = 1
            com.ss.android.download.api.download.DownloadEventConfig r2 = r0.q
            if (r11 != r1) goto L2b
            java.lang.String r2 = r2.getClickItemTag()
            goto L2f
        L2b:
            java.lang.String r2 = r2.getClickButtonTag()
        L2f:
            r3 = 2
            java.lang.String[] r4 = new java.lang.String[r3]
            r5 = 0
            com.ss.android.download.api.download.DownloadEventConfig r6 = r0.q
            java.lang.String r6 = r6.getClickLabel()
            r4[r5] = r6
            java.lang.String r5 = "click"
            r4[r1] = r5
            java.lang.String r4 = com.ss.android.downloadlib.utils.b.rg(r4)
            org.json.JSONObject r6 = new org.json.JSONObject
            r6.<init>()
            java.lang.String r7 = "download_click_type"
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)     // Catch: org.json.JSONException -> L79
            r6.putOpt(r7, r11)     // Catch: org.json.JSONException -> L79
            java.lang.String r11 = "permission_notification"
            boolean r7 = com.ss.android.socialbase.appdownloader.pp.pt.rg()     // Catch: org.json.JSONException -> L79
            if (r7 == 0) goto L5b
            r7 = r1
            goto L5c
        L5b:
            r7 = r3
        L5c:
            java.lang.Integer r7 = java.lang.Integer.valueOf(r7)     // Catch: org.json.JSONException -> L79
            r6.putOpt(r11, r7)     // Catch: org.json.JSONException -> L79
            java.lang.String r11 = "network_available"
            android.content.Context r7 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: org.json.JSONException -> L79
            boolean r7 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkConnected(r7)     // Catch: org.json.JSONException -> L79
            if (r7 == 0) goto L70
            goto L71
        L70:
            r1 = r3
        L71:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: org.json.JSONException -> L79
            r6.putOpt(r11, r1)     // Catch: org.json.JSONException -> L79
            goto L7d
        L79:
            r11 = move-exception
            r11.printStackTrace()
        L7d:
            r8.rg(r2, r4, r6, r0)
            boolean r11 = r5.equals(r4)
            if (r11 == 0) goto L97
            com.ss.android.download.api.download.DownloadModel r11 = r0.df
            if (r11 == 0) goto L97
            com.ss.android.downloadlib.event.df r11 = com.ss.android.downloadlib.event.df.rg()
            com.ss.android.download.api.download.DownloadModel r0 = r0.df
            java.lang.String r0 = r0.getLogExtra()
            r11.rg(r9, r0)
        L97:
            return
    }

    public void rg(long r10, int r12, com.ss.android.socialbase.downloader.model.DownloadInfo r13) {
            r9 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r8 = r0.pp(r10)
            boolean r10 = r8.re()
            if (r10 == 0) goto L18
            com.ss.android.downloadlib.exception.q r10 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r11 = "sendEvent ModelBox notValid"
            r10.rg(r11)
            return
        L18:
            r10 = 0
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            int r11 = r8.n()
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            java.lang.String r0 = "download_scene"
            com.ss.android.downloadlib.utils.b.rg(r4, r0, r11)
            r7 = 1
            r11 = 0
            r0 = 2
            r1 = 1
            if (r12 == r1) goto La0
            if (r12 == r0) goto L8a
            r2 = 3
            if (r12 == r2) goto L74
            r2 = 4
            if (r12 == r2) goto L5e
            r2 = 5
            if (r12 == r2) goto L3f
        L3c:
            r3 = r10
            goto Lb3
        L3f:
            if (r13 == 0) goto L4b
            int r10 = r13.getId()     // Catch: java.lang.Throwable -> L4b
            com.ss.android.downloadlib.utils.pp.rg(r4, r10)     // Catch: java.lang.Throwable -> L4b
            com.ss.android.downloadlib.rg.df(r4, r13)     // Catch: java.lang.Throwable -> L4b
        L4b:
            java.lang.String[] r10 = new java.lang.String[r0]
            com.ss.android.download.api.download.DownloadEventConfig r12 = r8.q
            java.lang.String r12 = r12.getClickInstallLabel()
            r10[r11] = r12
            java.lang.String r11 = "click_install"
            r10[r1] = r11
            java.lang.String r10 = com.ss.android.downloadlib.utils.b.rg(r10)
            goto L3c
        L5e:
            java.lang.String[] r10 = new java.lang.String[r0]
            com.ss.android.download.api.download.DownloadEventConfig r12 = r8.q
            java.lang.String r12 = r12.getClickContinueLabel()
            r10[r11] = r12
            java.lang.String r11 = "click_continue"
            r10[r1] = r11
            java.lang.String r10 = com.ss.android.downloadlib.utils.b.rg(r10)
            com.ss.android.downloadlib.utils.pp.q(r13, r4)
            goto L3c
        L74:
            java.lang.String[] r10 = new java.lang.String[r0]
            com.ss.android.download.api.download.DownloadEventConfig r12 = r8.q
            java.lang.String r12 = r12.getClickPauseLabel()
            r10[r11] = r12
            java.lang.String r11 = "click_pause"
            r10[r1] = r11
            java.lang.String r10 = com.ss.android.downloadlib.utils.b.rg(r10)
            com.ss.android.downloadlib.utils.pp.df(r13, r4)
            goto L3c
        L8a:
            java.lang.String[] r10 = new java.lang.String[r0]
            com.ss.android.download.api.download.DownloadEventConfig r12 = r8.q
            java.lang.String r12 = r12.getClickStartLabel()
            r10[r11] = r12
            java.lang.String r11 = "click_start"
            r10[r1] = r11
            java.lang.String r10 = com.ss.android.downloadlib.utils.b.rg(r10)
            com.ss.android.downloadlib.utils.pp.rg(r13, r4)
            goto L3c
        La0:
            java.lang.String[] r10 = new java.lang.String[r0]
            com.ss.android.download.api.download.DownloadEventConfig r12 = r8.q
            java.lang.String r12 = r12.getStorageDenyLabel()
            r10[r11] = r12
            java.lang.String r11 = "storage_deny"
            r10[r1] = r11
            java.lang.String r10 = com.ss.android.downloadlib.utils.b.rg(r10)
            goto L3c
        Lb3:
            r2 = 0
            r5 = 0
            r1 = r9
            r1.rg(r2, r3, r4, r5, r7, r8)
            return
    }

    public void rg(long r3, com.ss.android.socialbase.downloader.exception.BaseException r5) {
            r2 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r3 = r0.pp(r3)
            org.json.JSONObject r4 = new org.json.JSONObject
            r4.<init>()
            java.lang.String r0 = "download_time"
            r1 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: org.json.JSONException -> L30
            r4.putOpt(r0, r1)     // Catch: org.json.JSONException -> L30
            if (r5 == 0) goto L34
            java.lang.String r0 = "fail_status"
            int r1 = r5.getErrorCode()     // Catch: org.json.JSONException -> L30
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: org.json.JSONException -> L30
            r4.putOpt(r0, r1)     // Catch: org.json.JSONException -> L30
            java.lang.String r0 = "fail_msg"
            java.lang.String r5 = r5.getErrorMessage()     // Catch: org.json.JSONException -> L30
            r4.putOpt(r0, r5)     // Catch: org.json.JSONException -> L30
            goto L34
        L30:
            r5 = move-exception
            r5.printStackTrace()
        L34:
            java.lang.String r5 = "download_failed"
            r2.df(r5, r4, r3)
            return
    }

    public void rg(long r2, boolean r4, int r5) {
            r1 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r2 = r0.pp(r2)
            boolean r3 = r2.re()
            if (r3 == 0) goto L18
            com.ss.android.downloadlib.exception.q r2 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r3 = "sendQuickAppEvent ModelBox notValid"
            r2.rg(r3)
            return
        L18:
            com.ss.android.download.api.download.DownloadModel r3 = r2.df
            com.ss.android.download.api.model.q r3 = r3.getQuickAppModel()
            if (r3 != 0) goto L21
            return
        L21:
            com.ss.android.download.api.download.DownloadModel r3 = r2.df
            boolean r3 = r3 instanceof com.ss.android.downloadad.api.download.AdDownloadModel
            if (r3 == 0) goto L2f
            com.ss.android.download.api.download.DownloadModel r3 = r2.df
            com.ss.android.downloadad.api.download.AdDownloadModel r3 = (com.ss.android.downloadad.api.download.AdDownloadModel) r3
            r0 = 3
            r3.setFunnelType(r0)
        L2f:
            org.json.JSONObject r3 = new org.json.JSONObject
            r3.<init>()
            java.lang.String r0 = "download_click_type"
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: org.json.JSONException -> L3e
            r3.putOpt(r0, r5)     // Catch: org.json.JSONException -> L3e
            goto L42
        L3e:
            r5 = move-exception
            r5.printStackTrace()
        L42:
            if (r4 == 0) goto L47
            java.lang.String r4 = "deeplink_quickapp_success"
            goto L49
        L47:
            java.lang.String r4 = "deeplink_quickapp_failed"
        L49:
            r1.df(r4, r3, r2)
            return
    }

    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r5) {
            r4 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r5)
            if (r0 != 0) goto Lb
            return
        Lb:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L2b
            r1.<init>()     // Catch: java.lang.Throwable -> L2b
            com.ss.android.downloadlib.utils.pp.q(r5, r1)     // Catch: java.lang.Throwable -> L2b
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L2b
            r0.rg(r2)     // Catch: java.lang.Throwable -> L2b
            java.lang.String r5 = r0.bm()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r2 = "download_resume"
            r4.rg(r5, r2, r1, r0)     // Catch: java.lang.Throwable -> L2b
            com.ss.android.downloadlib.addownload.model.ux r5 = com.ss.android.downloadlib.addownload.model.ux.rg()     // Catch: java.lang.Throwable -> L2b
            r5.rg(r0)     // Catch: java.lang.Throwable -> L2b
            goto L2f
        L2b:
            r5 = move-exception
            r5.printStackTrace()
        L2f:
            return
    }

    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r10, com.ss.android.socialbase.downloader.exception.BaseException r11) {
            r9 = this;
            if (r10 != 0) goto L3
            return
        L3:
            com.ss.android.downloadlib.addownload.model.c r11 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r11 = r11.rg(r10)
            if (r11 != 0) goto Le
            return
        Le:
            java.util.concurrent.atomic.AtomicBoolean r0 = r11.q
            boolean r0 = r0.get()
            if (r0 == 0) goto L17
            return
        L17:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            com.ss.android.downloadlib.rg.rg(r0, r10)     // Catch: org.json.JSONException -> Lb8
            java.lang.String r1 = "fail_status"
            int r2 = r11.go()     // Catch: org.json.JSONException -> Lb8
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: org.json.JSONException -> Lb8
            r0.putOpt(r1, r2)     // Catch: org.json.JSONException -> Lb8
            java.lang.String r1 = "fail_msg"
            java.lang.String r2 = r11.k()     // Catch: org.json.JSONException -> Lb8
            r0.putOpt(r1, r2)     // Catch: org.json.JSONException -> Lb8
            java.lang.String r1 = "download_failed_times"
            int r2 = r11.re()     // Catch: org.json.JSONException -> Lb8
            r0.put(r1, r2)     // Catch: org.json.JSONException -> Lb8
            long r1 = r10.getTotalBytes()     // Catch: org.json.JSONException -> Lb8
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L58
            java.lang.String r1 = "download_percent"
            long r5 = r10.getCurBytes()     // Catch: org.json.JSONException -> Lb8
            double r5 = (double) r5     // Catch: org.json.JSONException -> Lb8
            long r7 = r10.getTotalBytes()     // Catch: org.json.JSONException -> Lb8
            double r7 = (double) r7     // Catch: org.json.JSONException -> Lb8
            double r5 = r5 / r7
            r0.put(r1, r5)     // Catch: org.json.JSONException -> Lb8
        L58:
            java.lang.String r1 = "download_status"
            int r10 = r10.getRealStatus()     // Catch: org.json.JSONException -> Lb8
            r0.put(r1, r10)     // Catch: org.json.JSONException -> Lb8
            long r1 = java.lang.System.currentTimeMillis()     // Catch: org.json.JSONException -> Lb8
            long r5 = r11.bj()     // Catch: org.json.JSONException -> Lb8
            int r10 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r10 <= 0) goto L78
            java.lang.String r10 = "time_from_start_download"
            long r5 = r11.bj()     // Catch: org.json.JSONException -> Lb8
            long r5 = r1 - r5
            r0.put(r10, r5)     // Catch: org.json.JSONException -> Lb8
        L78:
            long r5 = r11.lc()     // Catch: org.json.JSONException -> Lb8
            int r10 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r10 <= 0) goto L8a
            java.lang.String r10 = "time_from_download_resume"
            long r3 = r11.lc()     // Catch: org.json.JSONException -> Lb8
            long r1 = r1 - r3
            r0.put(r10, r1)     // Catch: org.json.JSONException -> Lb8
        L8a:
            java.lang.String r10 = "is_update_download"
            boolean r1 = r11.fl()     // Catch: org.json.JSONException -> Lb8
            r2 = 1
            r3 = 2
            if (r1 == 0) goto L96
            r1 = r2
            goto L97
        L96:
            r1 = r3
        L97:
            r0.put(r10, r1)     // Catch: org.json.JSONException -> Lb8
            java.lang.String r10 = "can_show_notification"
            boolean r1 = com.ss.android.socialbase.appdownloader.pp.pt.rg()     // Catch: org.json.JSONException -> Lb8
            if (r1 == 0) goto La4
            r1 = r2
            goto La5
        La4:
            r1 = r3
        La5:
            r0.put(r10, r1)     // Catch: org.json.JSONException -> Lb8
            java.lang.String r10 = "has_send_download_failed_finally"
            java.util.concurrent.atomic.AtomicBoolean r1 = r11.pt     // Catch: org.json.JSONException -> Lb8
            boolean r1 = r1.get()     // Catch: org.json.JSONException -> Lb8
            if (r1 == 0) goto Lb3
            goto Lb4
        Lb3:
            r2 = r3
        Lb4:
            r0.put(r10, r2)     // Catch: org.json.JSONException -> Lb8
            goto Lbc
        Lb8:
            r10 = move-exception
            r10.printStackTrace()
        Lbc:
            java.lang.String r10 = r11.bm()
            java.lang.String r1 = "download_cancel"
            r9.rg(r10, r1, r0, r11)
            return
    }

    public void rg(java.lang.String r9, int r10, com.ss.android.downloadlib.addownload.model.pp r11) {
            r8 = this;
            long r4 = (long) r10
            r1 = 0
            r3 = 0
            r6 = 0
            r0 = r8
            r2 = r9
            r7 = r11
            r0.rg(r1, r2, r3, r4, r6, r7)
            return
    }

    public void rg(java.lang.String r2, long r3) {
            r1 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.pt(r3)
            if (r0 == 0) goto Le
            r1.df(r2, r0)
            goto L19
        Le:
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r3 = r0.pp(r3)
            r1.df(r2, r3)
        L19:
            return
    }

    public void rg(java.lang.String r8, com.ss.android.download.api.download.DownloadModel r9, com.ss.android.download.api.download.DownloadEventConfig r10, com.ss.android.download.api.download.DownloadController r11) {
            r7 = this;
            com.ss.android.downloadlib.addownload.model.pp r6 = new com.ss.android.downloadlib.addownload.model.pp
            long r1 = r9.getId()
            r0 = r6
            r3 = r9
            r4 = r10
            r5 = r11
            r0.<init>(r1, r3, r4, r5)
            r7.df(r8, r6)
            return
    }

    public void rg(java.lang.String r2, com.ss.android.downloadad.api.rg.rg r3) {
            r1 = this;
            r0 = 0
            r1.rg(r2, r0, r3)
            return
    }

    public void rg(java.lang.String r2, java.lang.String r3, com.ss.android.downloadad.api.rg.rg r4) {
            r1 = this;
            r0 = 0
            r1.rg(r2, r3, r0, r4)
            return
    }

    public void rg(java.lang.String r9, java.lang.String r10, org.json.JSONObject r11, com.ss.android.downloadad.api.rg.rg r12) {
            r8 = this;
            r4 = 0
            r6 = 0
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r7 = r12
            r0.rg(r1, r2, r3, r4, r6, r7)
            return
    }

    public void rg(java.lang.String r2, org.json.JSONObject r3, long r4) {
            r1 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.pt(r4)
            if (r0 == 0) goto Le
            r1.rg(r2, r3, r0)
            goto L29
        Le:
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadlib.addownload.model.pp r4 = r0.pp(r4)
            boolean r5 = r4.re()
            if (r5 == 0) goto L26
            com.ss.android.downloadlib.exception.q r2 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r3 = "sendUnityEvent ModelBox notValid"
            r2.rg(r3)
            goto L29
        L26:
            r1.rg(r2, r3, r4)
        L29:
            return
    }

    public void rg(java.lang.String r3, org.json.JSONObject r4, com.ss.android.downloadad.api.rg.rg r5) {
            r2 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "unity_label"
            com.ss.android.downloadlib.utils.b.rg(r0, r1, r3)
            org.json.JSONObject r3 = com.ss.android.downloadlib.utils.b.rg(r4, r0)
            java.lang.String r4 = "embeded_ad"
            java.lang.String r0 = "ttdownloader_unity"
            r2.rg(r4, r0, r3, r5)
            return
    }

    public void rg(org.json.JSONObject r3, com.ss.android.downloadad.api.rg.df r4) {
            r2 = this;
            java.lang.String r0 = r4.bm()
            java.lang.String r1 = "install_finish"
            r2.rg(r0, r1, r3, r4)
            return
    }
}
