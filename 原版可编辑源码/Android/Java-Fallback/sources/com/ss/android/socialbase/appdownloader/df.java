package com.ss.android.socialbase.appdownloader;

public class df {
    private static com.ss.android.socialbase.appdownloader.df.q df;
    private static com.ss.android.socialbase.appdownloader.df.rg q;
    private static final java.lang.String rg = null;



    interface df {
        boolean rg(android.content.Context r1);
    }

    private static class pp implements com.ss.android.socialbase.downloader.thread.WeakDownloadHandler.IHandler {
        private static int df;
        public static int rg;
        private final android.os.Handler c;
        private final long fw;
        private final com.ss.android.socialbase.appdownloader.df.df pp;
        private final android.content.Intent pt;
        private final android.content.Context q;
        private boolean rz;
        private java.util.concurrent.Future<java.lang.Boolean> ux;

        public pp(android.content.Context r2, android.content.Intent r3, int r4, com.ss.android.socialbase.appdownloader.df.df r5, long r6) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.rz = r0
                r1.q = r2
                r1.pt = r3
                com.ss.android.socialbase.appdownloader.df.pp.df = r4
                r1.pp = r5
                com.ss.android.socialbase.downloader.thread.WeakDownloadHandler r2 = new com.ss.android.socialbase.downloader.thread.WeakDownloadHandler
                android.os.Looper r3 = android.os.Looper.getMainLooper()
                r2.<init>(r3, r1)
                r1.c = r2
                r1.fw = r6
                return
        }

        static android.os.Handler df(com.ss.android.socialbase.appdownloader.df.pp r0) {
                android.os.Handler r0 = r0.c
                return r0
        }

        static boolean rg(com.ss.android.socialbase.appdownloader.df.pp r0) {
                boolean r0 = r0.rz
                return r0
        }

        @Override
        public void handleMsg(android.os.Message r8) {
                r7 = this;
                if (r8 == 0) goto L97
                int r0 = r8.what
                r1 = 1
                if (r0 != r1) goto L32
                long r2 = r7.fw
                r4 = 0
                int r8 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r8 <= 0) goto L31
                r4 = 10000(0x2710, double:4.9407E-320)
                int r8 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
                if (r8 <= 0) goto L16
                goto L31
            L16:
                com.ss.android.socialbase.appdownloader.df.pp.rg = r1
                java.util.concurrent.ExecutorService r8 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getCPUThreadExecutor()
                com.ss.android.socialbase.appdownloader.df$pt r6 = new com.ss.android.socialbase.appdownloader.df$pt
                android.os.Handler r1 = r7.c
                android.content.Context r2 = r7.q
                com.ss.android.socialbase.appdownloader.df$df r3 = r7.pp
                long r4 = r7.fw
                r0 = r6
                r0.<init>(r1, r2, r3, r4)
                java.util.concurrent.Future r8 = r8.submit(r6)
                r7.ux = r8
                goto L97
            L31:
                return
            L32:
                int r8 = r8.what
                r0 = 2
                if (r8 != r0) goto L97
                com.ss.android.socialbase.appdownloader.df.pp.rg = r0
                android.os.Handler r8 = r7.c
                r8.removeMessages(r0)
                android.os.Handler r8 = r7.c
                r8.removeMessages(r1)
                java.util.concurrent.Future<java.lang.Boolean> r8 = r7.ux
                if (r8 == 0) goto L4a
                r8.cancel(r1)
            L4a:
                boolean r8 = r7.rz
                r0 = 0
                if (r8 != 0) goto L86
                int r8 = android.os.Build.VERSION.SDK_INT
                r2 = 29
                if (r8 < r2) goto L5f
                com.ss.android.socialbase.downloader.common.AppStatusManager r8 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
                boolean r8 = r8.isAppForeground()
                if (r8 == 0) goto L86
            L5f:
                android.content.Intent r8 = r7.pt
                if (r8 == 0) goto L69
                android.content.Context r2 = r7.q
                com.ss.android.socialbase.appdownloader.df.rg(r2, r8)
                goto L84
            L69:
                android.content.Context r8 = r7.q
                com.ss.android.socialbase.downloader.downloader.Downloader r8 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r8)
                int r2 = com.ss.android.socialbase.appdownloader.df.pp.df
                com.ss.android.socialbase.downloader.model.DownloadInfo r8 = r8.getDownloadInfo(r2)
                if (r8 == 0) goto L84
                boolean r8 = r8.isDownloadOverStatus()
                if (r8 == 0) goto L84
                android.content.Context r8 = r7.q
                int r2 = com.ss.android.socialbase.appdownloader.df.pp.df
                com.ss.android.socialbase.appdownloader.q.df(r8, r2, r0)
            L84:
                r7.rz = r1
            L86:
                android.content.Intent r8 = r7.pt
                if (r8 != 0) goto L8b
                goto L8c
            L8b:
                r1 = r0
            L8c:
                int r8 = com.ss.android.socialbase.appdownloader.df.pp.df
                android.content.Context r0 = r7.q
                boolean r0 = com.ss.android.socialbase.appdownloader.df.rg(r0)
                com.ss.android.socialbase.appdownloader.df.rg(r8, r1, r0)
            L97:
                return
        }
    }

    private static class pt implements java.util.concurrent.Callable<java.lang.Boolean> {
        private final com.ss.android.socialbase.appdownloader.df.df df;
        private final long pt;
        private final android.os.Handler q;
        private final android.content.Context rg;

        public pt(android.os.Handler r1, android.content.Context r2, com.ss.android.socialbase.appdownloader.df.df r3, long r4) {
                r0 = this;
                r0.<init>()
                r0.rg = r2
                r0.df = r3
                r0.q = r1
                r0.pt = r4
                return
        }

        @Override
        public java.lang.Boolean call() throws java.lang.Exception {
                r5 = this;
                r0 = 0
                com.ss.android.socialbase.appdownloader.df$df r1 = r5.df     // Catch: java.lang.Throwable -> L41
                if (r1 == 0) goto L3c
                long r1 = r5.pt     // Catch: java.lang.Throwable -> L41
                r3 = 0
                int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r1 <= 0) goto L3c
                long r1 = r5.pt     // Catch: java.lang.Throwable -> L41
                r3 = 10000(0x2710, double:4.9407E-320)
                int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r1 <= 0) goto L16
                goto L3c
            L16:
                android.content.Context r1 = r5.rg     // Catch: java.lang.Throwable -> L41
                if (r1 == 0) goto L21
                com.ss.android.socialbase.appdownloader.df$df r2 = r5.df     // Catch: java.lang.Throwable -> L41
                boolean r1 = r2.rg(r1)     // Catch: java.lang.Throwable -> L41
                goto L22
            L21:
                r1 = r0
            L22:
                android.os.Message r2 = android.os.Message.obtain()     // Catch: java.lang.Throwable -> L41
                if (r1 == 0) goto L31
                r1 = 2
                r2.what = r1     // Catch: java.lang.Throwable -> L41
                android.os.Handler r1 = r5.q     // Catch: java.lang.Throwable -> L41
                r1.sendMessage(r2)     // Catch: java.lang.Throwable -> L41
                goto L41
            L31:
                r1 = 1
                r2.what = r1     // Catch: java.lang.Throwable -> L41
                android.os.Handler r1 = r5.q     // Catch: java.lang.Throwable -> L41
                long r3 = r5.pt     // Catch: java.lang.Throwable -> L41
                r1.sendMessageDelayed(r2, r3)     // Catch: java.lang.Throwable -> L41
                goto L41
            L3c:
                java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)     // Catch: java.lang.Throwable -> L41
                return r0
            L41:
                java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
                return r0
        }

        @Override
        public java.lang.Boolean call() throws java.lang.Exception {
                r1 = this;
                java.lang.Boolean r0 = r1.call()
                return r0
        }
    }

    public interface q {
        void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r1, com.ss.android.socialbase.appdownloader.rg r2);
    }

    private static class rg implements com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener {
        private final int df;
        private org.json.JSONObject q;
        private final com.ss.android.socialbase.appdownloader.df.pp rg;

        public rg(android.content.Context r9, android.content.Intent r10, int r11, org.json.JSONObject r12, com.ss.android.socialbase.appdownloader.df.df r13) {
                r8 = this;
                r8.<init>()
                r8.q = r12
                java.lang.String r0 = "query_interval"
                r1 = 1000(0x3e8, float:1.401E-42)
                int r12 = r12.optInt(r0, r1)
                r8.df = r12
                com.ss.android.socialbase.appdownloader.df$pp r7 = new com.ss.android.socialbase.appdownloader.df$pp
                long r5 = (long) r12
                r0 = r7
                r1 = r9
                r2 = r10
                r3 = r11
                r4 = r13
                r0.<init>(r1, r2, r3, r4, r5)
                r8.rg = r7
                return
        }

        @Override
        public void onAppBackground() {
                r5 = this;
                org.json.JSONObject r0 = r5.q
                java.lang.String r1 = "time_out_second"
                r2 = 20
                int r0 = r0.optInt(r1, r2)
                android.os.Message r1 = android.os.Message.obtain()
                r2 = 1
                r1.what = r2
                com.ss.android.socialbase.appdownloader.df$pp r2 = r5.rg
                android.os.Handler r2 = com.ss.android.socialbase.appdownloader.df.pp.df(r2)
                r2.sendMessage(r1)
                if (r0 <= 0) goto L33
                r1 = 60
                if (r0 >= r1) goto L33
                android.os.Message r1 = android.os.Message.obtain()
                r2 = 2
                r1.what = r2
                com.ss.android.socialbase.appdownloader.df$pp r2 = r5.rg
                android.os.Handler r2 = com.ss.android.socialbase.appdownloader.df.pp.df(r2)
                int r0 = r0 * 1000
                long r3 = (long) r0
                r2.sendMessageDelayed(r1, r3)
            L33:
                return
        }

        @Override
        public void onAppForeground() {
                r2 = this;
                com.ss.android.socialbase.appdownloader.df$pp r0 = r2.rg
                boolean r0 = com.ss.android.socialbase.appdownloader.df.pp.rg(r0)
                if (r0 != 0) goto L18
                android.os.Message r0 = android.os.Message.obtain()
                r1 = 2
                r0.what = r1
                com.ss.android.socialbase.appdownloader.df$pp r1 = r2.rg
                android.os.Handler r1 = com.ss.android.socialbase.appdownloader.df.pp.df(r1)
                r1.sendMessage(r0)
            L18:
                com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
                r0.unregisterAppSwitchListener(r2)
                r0 = 0
                com.ss.android.socialbase.appdownloader.df.rg(r0)
                return
        }
    }

    static {
            java.lang.Class<com.ss.android.socialbase.appdownloader.df> r0 = com.ss.android.socialbase.appdownloader.df.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.socialbase.appdownloader.df.rg = r0
            return
    }

    public df() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.ss.android.socialbase.appdownloader.rg df(org.json.JSONObject r3, com.ss.android.socialbase.downloader.setting.DownloadSetting r4) {
            com.ss.android.socialbase.appdownloader.rg r0 = new com.ss.android.socialbase.appdownloader.rg
            r0.<init>()
            if (r3 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = "type"
            java.lang.String r1 = r3.optString(r1)
            r0.rg = r1
            java.lang.String r1 = "vbi"
            r0.pp = r1
            android.content.Context r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r3 = com.ss.android.socialbase.appdownloader.rg.pt.rg(r2, r1, r3, r4)
            if (r3 == 0) goto L22
            r3 = 0
            r0.df = r3
            goto L26
        L22:
            r3 = 3
            rg(r0, r3)
        L26:
            return r0
    }

    public static void df(int r3, org.json.JSONObject r4) {
            java.lang.String r0 = "show_unknown_source_on_startup"
            int r4 = r4.optInt(r0)
            r0 = 1
            if (r4 != r0) goto Lb
            r4 = r0
            goto Lc
        Lb:
            r4 = 0
        Lc:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "scene"
            if (r4 == 0) goto L16
            goto L17
        L16:
            r0 = 2
        L17:
            r1.put(r2, r0)     // Catch: java.lang.Exception -> L1b
            goto L1f
        L1b:
            r4 = move-exception
            r4.printStackTrace()
        L1f:
            com.ss.android.socialbase.downloader.monitor.InnerEventListener r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getEventListener()
            java.lang.String r0 = "guide_auth_dialog_cancel"
            r4.onUnityEvent(r3, r0, r1)
            return
    }

    private static void df(int r4, boolean r5, boolean r6) {
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "scene"
            r2 = 1
            r3 = 2
            if (r5 == 0) goto Ld
            r5 = r2
            goto Le
        Ld:
            r5 = r3
        Le:
            r0.put(r1, r5)     // Catch: java.lang.Exception -> L1b
            java.lang.String r5 = "result_code"
            if (r6 == 0) goto L16
            goto L17
        L16:
            r2 = r3
        L17:
            r0.put(r5, r2)     // Catch: java.lang.Exception -> L1b
            goto L1f
        L1b:
            r5 = move-exception
            r5.printStackTrace()
        L1f:
            com.ss.android.socialbase.downloader.monitor.InnerEventListener r5 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getEventListener()
            java.lang.String r6 = "guide_auth_result"
            r5.onUnityEvent(r4, r6, r0)
            return
    }

    static boolean df(android.content.Context r0) {
            boolean r0 = pt(r0)
            return r0
    }

    private static boolean df(android.content.Context r1, android.content.Intent r2) {
            r0 = 1
            boolean r1 = rg(r1, r2, r0)
            return r1
    }

    private static boolean df(android.content.Context r4, com.ss.android.socialbase.downloader.model.DownloadInfo r5, org.json.JSONObject r6, com.ss.android.socialbase.appdownloader.rg r7) {
            r0 = 0
            if (r4 == 0) goto L48
            if (r6 != 0) goto L6
            goto L48
        L6:
            java.lang.String r1 = r5.getSavePath()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 == 0) goto L11
            return r0
        L11:
            java.lang.String r2 = "custom"
            r7.pt = r2
            com.ss.android.socialbase.appdownloader.rg.rg r2 = com.ss.android.socialbase.appdownloader.rg.pt.rg(r4, r2, r6, r5)
            if (r2 == 0) goto L45
            boolean r3 = r2.rg()
            if (r3 != 0) goto L22
            goto L45
        L22:
            android.content.Intent r2 = r2.df()
            if (r2 != 0) goto L29
            return r0
        L29:
            java.io.File r3 = new java.io.File
            r3.<init>(r1)
            boolean r5 = rg(r3, r5, r6)
            if (r5 == 0) goto L41
            boolean r4 = df(r4, r2)
            r5 = 1
            if (r4 == 0) goto L3e
            r7.df = r0
            return r5
        L3e:
            r7.df = r5
            goto L44
        L41:
            r4 = 6
            r7.df = r4
        L44:
            return r0
        L45:
            r4 = 3
            r7.df = r4
        L48:
            return r0
    }

    private static boolean pp(android.content.Context r1) {
            r0 = 1
            if (r1 != 0) goto L4
            return r0
        L4:
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> Ld
            boolean r1 = r1.canRequestPackageInstalls()     // Catch: java.lang.Throwable -> Ld
            return r1
        Ld:
            return r0
    }

    private static void pt(int r3, org.json.JSONObject r4) {
            java.lang.String r0 = "show_unknown_source_on_startup"
            int r4 = r4.optInt(r0)
            r0 = 1
            if (r4 != r0) goto Lb
            r4 = r0
            goto Lc
        Lb:
            r4 = 0
        Lc:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "scene"
            if (r4 == 0) goto L16
            goto L17
        L16:
            r0 = 2
        L17:
            r1.put(r2, r0)     // Catch: java.lang.Exception -> L1b
            goto L1f
        L1b:
            r4 = move-exception
            r4.printStackTrace()
        L1f:
            com.ss.android.socialbase.downloader.monitor.InnerEventListener r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getEventListener()
            java.lang.String r0 = "guide_auth_dialog_show"
            r4.onUnityEvent(r3, r0, r1)
            return
    }

    private static boolean pt(android.content.Context r2) {
            r0 = 1
            if (r2 != 0) goto L4
            return r0
        L4:
            android.content.ContentResolver r2 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L12
            java.lang.String r1 = "install_non_market_apps"
            int r2 = android.provider.Settings.Secure.getInt(r2, r1, r0)     // Catch: java.lang.Throwable -> L12
            if (r2 <= 0) goto L11
            goto L12
        L11:
            r0 = 0
        L12:
            return r0
    }

    public static void q(int r3, org.json.JSONObject r4) {
            java.lang.String r0 = "show_unknown_source_on_startup"
            int r4 = r4.optInt(r0)
            r0 = 1
            if (r4 != r0) goto Lb
            r4 = r0
            goto Lc
        Lb:
            r4 = 0
        Lc:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "scene"
            if (r4 == 0) goto L16
            goto L17
        L16:
            r0 = 2
        L17:
            r1.put(r2, r0)     // Catch: java.lang.Exception -> L1b
            goto L1f
        L1b:
            r4 = move-exception
            r4.printStackTrace()
        L1f:
            com.ss.android.socialbase.downloader.monitor.InnerEventListener r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getEventListener()
            java.lang.String r0 = "guide_auth_open_setting"
            r4.onUnityEvent(r3, r0, r1)
            return
    }

    static boolean q(android.content.Context r0) {
            boolean r0 = pp(r0)
            return r0
    }

    public static int rg(com.ss.android.socialbase.downloader.setting.DownloadSetting r8) {
            java.lang.String r0 = "download_dir"
            org.json.JSONObject r0 = r8.optJSONObject(r0)
            r1 = 0
            if (r0 == 0) goto L16
            java.lang.String r2 = "dir_name"
            java.lang.String r0 = r0.optString(r2)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            goto L17
        L16:
            r0 = r1
        L17:
            if (r0 != 0) goto L1b
            r8 = 5
            return r8
        L1b:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            java.lang.String r2 = "get_download_info_by_list"
            boolean r0 = r0.optBugFix(r2)
            if (r0 != 0) goto L29
            r8 = 4
            return r8
        L29:
            java.lang.String r0 = "ah_plans"
            org.json.JSONArray r0 = r8.optJSONArray(r0)
            r2 = -1
            if (r0 == 0) goto L9d
            int r3 = r0.length()
            r4 = r1
        L37:
            if (r4 >= r3) goto L9d
            org.json.JSONObject r5 = r0.optJSONObject(r4)
            boolean r6 = com.ss.android.socialbase.appdownloader.c.rg.rg(r5)
            if (r6 == 0) goto L9a
            java.lang.String r6 = "type"
            java.lang.String r6 = r5.optString(r6)
            java.lang.String r7 = "plan_a"
            boolean r7 = r7.equals(r6)
            if (r7 != 0) goto L8e
            java.lang.String r7 = "plan_b"
            boolean r7 = r7.equals(r6)
            if (r7 != 0) goto L8e
            java.lang.String r7 = "plan_e"
            boolean r7 = r7.equals(r6)
            if (r7 != 0) goto L8e
            java.lang.String r7 = "plan_f"
            boolean r7 = r7.equals(r6)
            if (r7 == 0) goto L6a
            goto L8e
        L6a:
            java.lang.String r7 = "plan_d"
            boolean r7 = r7.equalsIgnoreCase(r6)
            if (r7 != 0) goto L8d
            java.lang.String r7 = "plan_h"
            boolean r7 = r7.equalsIgnoreCase(r6)
            if (r7 == 0) goto L7b
            goto L8d
        L7b:
            java.lang.String r7 = "plan_g"
            boolean r6 = r7.equalsIgnoreCase(r6)
            if (r6 == 0) goto L9a
            com.ss.android.socialbase.appdownloader.rg r2 = df(r5, r8)
            int r5 = r2.df
            int r2 = r2.df
            if (r2 != 0) goto L99
        L8d:
            return r1
        L8e:
            com.ss.android.socialbase.appdownloader.rg r2 = rg(r5, r8)
            int r5 = r2.df
            int r2 = r2.df
            if (r2 != 0) goto L99
            return r1
        L99:
            r2 = r5
        L9a:
            int r4 = r4 + 1
            goto L37
        L9d:
            return r2
    }

    static com.ss.android.socialbase.appdownloader.df.rg rg(com.ss.android.socialbase.appdownloader.df.rg r0) {
            com.ss.android.socialbase.appdownloader.df.q = r0
            return r0
    }

    public static com.ss.android.socialbase.appdownloader.rg rg(org.json.JSONObject r8, com.ss.android.socialbase.downloader.setting.DownloadSetting r9) {
            com.ss.android.socialbase.appdownloader.rg r0 = new com.ss.android.socialbase.appdownloader.rg
            r0.<init>()
            if (r8 != 0) goto L8
            return r0
        L8:
            java.lang.String r1 = "type"
            java.lang.String r1 = r8.optString(r1)
            r0.rg = r1
            java.lang.String r2 = "plan_b"
            boolean r1 = r2.equals(r1)
            r2 = 3
            r3 = 0
            if (r1 == 0) goto L2f
            java.lang.String r1 = "custom"
            r0.pp = r1
            android.content.Context r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r8 = com.ss.android.socialbase.appdownloader.rg.pt.rg(r4, r1, r8, r9)
            if (r8 == 0) goto L2b
            r0.df = r3
            return r0
        L2b:
            rg(r0, r2)
            goto L5c
        L2f:
            java.lang.String r1 = "device_plans"
            java.lang.String r1 = r8.optString(r1)
            r0.pp = r1
            boolean r4 = android.text.TextUtils.isEmpty(r1)
            if (r4 != 0) goto L5c
            java.lang.String r4 = ","
            java.lang.String[] r1 = r1.split(r4)
            int r4 = r1.length
            r5 = r3
        L45:
            if (r5 >= r4) goto L5c
            r6 = r1[r5]
            android.content.Context r7 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            boolean r6 = com.ss.android.socialbase.appdownloader.rg.pt.rg(r7, r6, r8, r9)
            if (r6 == 0) goto L56
            r0.df = r3
            return r0
        L56:
            rg(r0, r2)
            int r5 = r5 + 1
            goto L45
        L5c:
            return r0
    }

    public static com.ss.android.socialbase.appdownloader.rg rg(org.json.JSONObject r2, java.lang.String r3, android.content.Context r4, com.ss.android.socialbase.downloader.setting.DownloadSetting r5) {
            com.ss.android.socialbase.appdownloader.rg r0 = new com.ss.android.socialbase.appdownloader.rg
            r0.<init>()
            if (r2 == 0) goto L3a
            boolean r1 = com.ss.android.socialbase.appdownloader.c.pt.df()
            if (r1 != 0) goto Le
            goto L3a
        Le:
            java.lang.String r1 = "type"
            java.lang.String r2 = r2.optString(r1)
            r0.rg = r2
            r2 = 0
            java.lang.String r1 = "bi"
            int r5 = r5.optInt(r1, r2)
            r1 = 1
            if (r5 != r1) goto L23
            r0.df = r2
            return r0
        L23:
            boolean r4 = rg(r4)
            if (r4 == 0) goto L2d
            r2 = 2
            r0.df = r2
            goto L3a
        L2d:
            com.ss.android.socialbase.appdownloader.fw$rg r3 = com.ss.android.socialbase.appdownloader.c.rg.rg(r3)
            if (r3 == 0) goto L36
            r0.df = r2
            goto L3a
        L36:
            r2 = 9
            r0.df = r2
        L3a:
            return r0
    }

    public static java.lang.String rg(java.lang.Throwable r2) {
            java.lang.String r2 = r2.toString()
            int r0 = r2.length()
            r1 = 800(0x320, float:1.121E-42)
            if (r0 <= r1) goto L13
            r0 = 0
            r1 = 500(0x1f4, float:7.0E-43)
            java.lang.String r2 = r2.substring(r0, r1)
        L13:
            return r2
    }

    public static void rg(int r3, org.json.JSONObject r4) {
            java.lang.String r0 = "show_unknown_source_on_startup"
            int r4 = r4.optInt(r0)
            r0 = 1
            if (r4 != r0) goto Lb
            r4 = r0
            goto Lc
        Lb:
            r4 = 0
        Lc:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            java.lang.String r2 = "scene"
            if (r4 == 0) goto L16
            goto L17
        L16:
            r0 = 2
        L17:
            r1.put(r2, r0)     // Catch: java.lang.Exception -> L1b
            goto L1f
        L1b:
            r4 = move-exception
            r4.printStackTrace()
        L1f:
            com.ss.android.socialbase.downloader.monitor.InnerEventListener r4 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getEventListener()
            java.lang.String r0 = "guide_auth_dialog_confirm"
            r4.onUnityEvent(r3, r0, r1)
            return
    }

    static void rg(int r0, boolean r1, boolean r2) {
            df(r0, r1, r2)
            return
    }

    private static void rg(android.content.Context r7, android.content.Intent r8, int r9, org.json.JSONObject r10, com.ss.android.socialbase.appdownloader.df.df r11) {
            com.ss.android.socialbase.appdownloader.df$rg r0 = com.ss.android.socialbase.appdownloader.df.q
            if (r0 == 0) goto L10
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            com.ss.android.socialbase.appdownloader.df$rg r1 = com.ss.android.socialbase.appdownloader.df.q
            r0.unregisterAppSwitchListener(r1)
            r0 = 0
            com.ss.android.socialbase.appdownloader.df.q = r0
        L10:
            com.ss.android.socialbase.appdownloader.df$rg r0 = new com.ss.android.socialbase.appdownloader.df$rg
            r1 = r0
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            com.ss.android.socialbase.appdownloader.df.q = r0
            com.ss.android.socialbase.downloader.common.AppStatusManager r7 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            com.ss.android.socialbase.appdownloader.df$rg r8 = com.ss.android.socialbase.appdownloader.df.q
            r7.registerAppSwitchListener(r8)
            return
    }

    public static void rg(com.ss.android.socialbase.appdownloader.df.q r0) {
            com.ss.android.socialbase.appdownloader.df.df = r0
            return
    }

    private static void rg(com.ss.android.socialbase.appdownloader.rg r2, int r3) {
            int r0 = r2.df
            r1 = -1
            if (r0 == r1) goto Ld
            int r0 = r2.df
            int r0 = r0 * 10
            int r0 = r0 + r3
            r2.df = r0
            goto Lf
        Ld:
            r2.df = r3
        Lf:
            return
    }

    public static boolean rg() {
            int r0 = com.ss.android.socialbase.appdownloader.df.pp.rg
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    public static boolean rg(android.content.Context r3) {
            r0 = 1
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = com.ss.android.socialbase.appdownloader.c.pt.df()     // Catch: java.lang.Throwable -> L26
            r2 = 26
            if (r1 == 0) goto L15
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L26
            if (r1 >= r2) goto L15
            boolean r3 = pt(r3)     // Catch: java.lang.Throwable -> L26
            return r3
        L15:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L26
            if (r1 < r2) goto L26
            android.content.pm.ApplicationInfo r1 = r3.getApplicationInfo()     // Catch: java.lang.Throwable -> L26
            int r1 = r1.targetSdkVersion     // Catch: java.lang.Throwable -> L26
            if (r1 < r2) goto L26
            boolean r3 = pp(r3)     // Catch: java.lang.Throwable -> L26
            return r3
        L26:
            return r0
    }

    static boolean rg(android.content.Context r0, android.content.Intent r1) {
            boolean r0 = df(r0, r1)
            return r0
    }

    public static boolean rg(android.content.Context r3, android.content.Intent r4, int r5, org.json.JSONObject r6) {
            r0 = 0
            boolean r1 = com.ss.android.socialbase.appdownloader.c.pt.df()     // Catch: java.lang.Throwable -> L5d
            r2 = 26
            if (r1 == 0) goto L2f
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L5d
            if (r1 >= r2) goto L2f
            boolean r1 = pt(r3)     // Catch: java.lang.Throwable -> L5d
            if (r1 != 0) goto L2f
            com.ss.android.socialbase.appdownloader.rg.c r1 = new com.ss.android.socialbase.appdownloader.rg.c     // Catch: java.lang.Throwable -> L5d
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L5d
            boolean r2 = r1.rg()     // Catch: java.lang.Throwable -> L5d
            if (r2 == 0) goto L5d
            com.ss.android.socialbase.appdownloader.df$1 r2 = new com.ss.android.socialbase.appdownloader.df$1     // Catch: java.lang.Throwable -> L5d
            r2.<init>()     // Catch: java.lang.Throwable -> L5d
            rg(r3, r4, r5, r6, r2)     // Catch: java.lang.Throwable -> L5d
            android.content.Intent r4 = r1.df()     // Catch: java.lang.Throwable -> L5d
            boolean r3 = df(r3, r4)     // Catch: java.lang.Throwable -> L5d
            return r3
        L2f:
            int r1 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L5d
            if (r1 < r2) goto L5d
            android.content.pm.ApplicationInfo r1 = r3.getApplicationInfo()     // Catch: java.lang.Throwable -> L5d
            int r1 = r1.targetSdkVersion     // Catch: java.lang.Throwable -> L5d
            if (r1 < r2) goto L5d
            boolean r1 = pp(r3)     // Catch: java.lang.Throwable -> L5d
            if (r1 != 0) goto L5d
            com.ss.android.socialbase.appdownloader.rg.df r1 = new com.ss.android.socialbase.appdownloader.rg.df     // Catch: java.lang.Throwable -> L5d
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L5d
            boolean r2 = r1.rg()     // Catch: java.lang.Throwable -> L5d
            if (r2 == 0) goto L5d
            com.ss.android.socialbase.appdownloader.df$2 r2 = new com.ss.android.socialbase.appdownloader.df$2     // Catch: java.lang.Throwable -> L5d
            r2.<init>()     // Catch: java.lang.Throwable -> L5d
            rg(r3, r4, r5, r6, r2)     // Catch: java.lang.Throwable -> L5d
            android.content.Intent r4 = r1.df()     // Catch: java.lang.Throwable -> L5d
            boolean r3 = df(r3, r4)     // Catch: java.lang.Throwable -> L5d
            return r3
        L5d:
            return r0
    }

    public static boolean rg(android.content.Context r9, android.content.Intent r10, org.json.JSONObject r11, int r12, com.ss.android.socialbase.appdownloader.rg r13) {
            r0 = 0
            if (r9 == 0) goto La1
            if (r11 != 0) goto L7
            goto La1
        L7:
            r1 = 0
            java.lang.String r3 = "jump_interval"
            long r3 = r11.optLong(r3, r1)
            int r5 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r5 > 0) goto L14
            return r0
        L14:
            java.lang.String r5 = "sp_ah_config"
            android.content.SharedPreferences r5 = r9.getSharedPreferences(r5, r0)
            java.lang.String r6 = "last_jump_unknown_source_time"
            long r1 = r5.getLong(r6, r1)
            long r7 = java.lang.System.currentTimeMillis()
            long r7 = r7 - r1
            r1 = 60000(0xea60, double:2.9644E-319)
            long r7 = r7 / r1
            int r1 = (r7 > r3 ? 1 : (r7 == r3 ? 0 : -1))
            if (r1 >= 0) goto L2e
            return r0
        L2e:
            boolean r1 = rg(r9)
            if (r1 != 0) goto La1
            android.content.SharedPreferences$Editor r1 = r5.edit()
            long r2 = java.lang.System.currentTimeMillis()
            android.content.SharedPreferences$Editor r1 = r1.putLong(r6, r2)
            r1.apply()
            java.lang.String r1 = "show_unknown_source_dialog"
            int r1 = r11.optInt(r1, r0)
            r2 = 1
            if (r1 != r2) goto L4e
            r1 = r2
            goto L4f
        L4e:
            r1 = r0
        L4f:
            if (r1 == 0) goto L97
            android.content.Intent r1 = new android.content.Intent
            java.lang.Class<com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity> r3 = com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity.class
            r1.<init>(r9, r3)
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r1.addFlags(r3)
            java.lang.String r3 = "intent"
            r1.putExtra(r3, r10)
            java.lang.String r10 = r11.toString()
            java.lang.String r3 = "config"
            r1.putExtra(r3, r10)
            java.lang.String r10 = "id"
            r1.putExtra(r10, r12)
            boolean r9 = rg(r9, r1, r0)     // Catch: java.lang.Throwable -> L7a
            if (r9 == 0) goto L79
            pt(r12, r11)     // Catch: java.lang.Throwable -> L7a
        L79:
            return r2
        L7a:
            r9 = move-exception
            if (r13 == 0) goto L96
            r13.df = r2
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r11 = "tryShowUnknownSourceDialog"
            r10.append(r11)
            java.lang.String r9 = rg(r9)
            r10.append(r9)
            java.lang.String r9 = r10.toString()
            r13.q = r9
        L96:
            return r0
        L97:
            boolean r9 = rg(r9, r10, r12, r11)
            if (r9 == 0) goto La0
            q(r12, r11)
        La0:
            return r2
        La1:
            return r0
    }

    public static boolean rg(android.content.Context r3, android.content.Intent r4, boolean r5) {
            r0 = 0
            if (r3 == 0) goto L1a
            if (r4 != 0) goto L6
            goto L1a
        L6:
            java.lang.String r1 = "start_only_for_android"
            r2 = 1
            if (r5 == 0) goto L13
            r4.putExtra(r1, r2)     // Catch: java.lang.Throwable -> L12
            r3.startActivity(r4)     // Catch: java.lang.Throwable -> L12
            return r2
        L12:
            return r0
        L13:
            r4.putExtra(r1, r2)
            r3.startActivity(r4)
            return r2
        L1a:
            return r0
    }

    private static boolean rg(android.content.Context r11, com.ss.android.socialbase.downloader.model.DownloadInfo r12, android.content.Intent r13, org.json.JSONObject r14, boolean r15) {
            r0 = 0
            if (r14 == 0) goto L1a7
            if (r12 != 0) goto L7
            goto L1a7
        L7:
            com.ss.android.socialbase.appdownloader.rg r1 = new com.ss.android.socialbase.appdownloader.rg
            r1.<init>()
            java.lang.String r2 = "type"
            java.lang.String r2 = r14.optString(r2)
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 != 0) goto L1a7
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r12)
            r1.rg = r2
            int r4 = r2.hashCode()
            r5 = 2
            r6 = 4
            java.lang.String r7 = "plan_f"
            java.lang.String r8 = "plan_d"
            r9 = -1
            r10 = 1
            switch(r4) {
                case -985763637: goto L70;
                case -985763636: goto L66;
                case -985763635: goto L5c;
                case -985763634: goto L54;
                case -985763633: goto L4a;
                case -985763632: goto L42;
                case -985763631: goto L38;
                case -985763630: goto L2e;
                default: goto L2d;
            }
        L2d:
            goto L7a
        L2e:
            java.lang.String r4 = "plan_h"
            boolean r4 = r2.equals(r4)
            if (r4 == 0) goto L7a
            r4 = 6
            goto L7b
        L38:
            java.lang.String r4 = "plan_g"
            boolean r4 = r2.equals(r4)
            if (r4 == 0) goto L7a
            r4 = 5
            goto L7b
        L42:
            boolean r4 = r2.equals(r7)
            if (r4 == 0) goto L7a
            r4 = r5
            goto L7b
        L4a:
            java.lang.String r4 = "plan_e"
            boolean r4 = r2.equals(r4)
            if (r4 == 0) goto L7a
            r4 = r10
            goto L7b
        L54:
            boolean r4 = r2.equals(r8)
            if (r4 == 0) goto L7a
            r4 = r6
            goto L7b
        L5c:
            java.lang.String r4 = "plan_c"
            boolean r4 = r2.equals(r4)
            if (r4 == 0) goto L7a
            r4 = 7
            goto L7b
        L66:
            java.lang.String r4 = "plan_b"
            boolean r4 = r2.equals(r4)
            if (r4 == 0) goto L7a
            r4 = 3
            goto L7b
        L70:
            java.lang.String r4 = "plan_a"
            boolean r4 = r2.equals(r4)
            if (r4 == 0) goto L7a
            r4 = r0
            goto L7b
        L7a:
            r4 = r9
        L7b:
            switch(r4) {
                case 0: goto L14f;
                case 1: goto L14f;
                case 2: goto L15c;
                case 3: goto L134;
                case 4: goto L117;
                case 5: goto L107;
                case 6: goto Lb0;
                case 7: goto L80;
                default: goto L7e;
            }
        L7e:
            goto L186
        L80:
            int r2 = android.os.Build.VERSION.SDK_INT
            r3 = 26
            if (r2 >= r3) goto L8c
            boolean r2 = com.ss.android.socialbase.appdownloader.c.pt.df()
            if (r2 == 0) goto L186
        L8c:
            java.lang.String r2 = "enable_for_all"
            int r2 = r14.optInt(r2, r0)
            if (r2 != r10) goto L96
            r2 = r10
            goto L97
        L96:
            r2 = r0
        L97:
            if (r2 != 0) goto L9b
            if (r15 == 0) goto L186
        L9b:
            java.lang.String r15 = "show_unknown_source_on_startup"
            int r15 = r14.optInt(r15)
            if (r15 != r10) goto La4
            goto La5
        La4:
            r10 = r0
        La5:
            if (r10 != 0) goto L186
            int r15 = r12.getId()
            boolean r11 = rg(r11, r13, r14, r15, r1)
            goto L114
        Lb0:
            java.lang.String r15 = "bh"
            java.lang.String r15 = r3.optString(r15)
            java.lang.String r2 = "s"
            java.lang.String r2 = r3.optString(r2)
            java.lang.String r15 = com.ss.android.socialbase.appdownloader.c.q.rg(r15, r2)
            com.ss.android.socialbase.appdownloader.rg r14 = rg(r14, r15, r11, r3)
            int r2 = r14.df
            if (r2 == 0) goto Lcb
            r1 = r14
            goto L186
        Lcb:
            java.lang.String r14 = r11.getPackageName()
            org.json.JSONObject r2 = com.ss.android.socialbase.downloader.setting.DownloadSetting.getGlobalSettings()
            boolean r15 = com.ss.android.socialbase.appdownloader.c.rg.rg(r2, r11, r15)
            if (r15 == 0) goto L101
            com.ss.android.socialbase.appdownloader.q.rg(r11, r13)     // Catch: java.lang.Throwable -> Le6
            r1.df = r0     // Catch: java.lang.Throwable -> Le6
            org.json.JSONObject r15 = com.ss.android.socialbase.downloader.setting.DownloadSetting.getGlobalSettings()
            com.ss.android.socialbase.appdownloader.c.rg.rg(r15, r11, r14)
            goto L128
        Le6:
            r15 = move-exception
            r1.df = r10     // Catch: java.lang.Throwable -> Lf8
            java.lang.String r15 = r15.toString()     // Catch: java.lang.Throwable -> Lf8
            r1.q = r15     // Catch: java.lang.Throwable -> Lf8
            org.json.JSONObject r15 = com.ss.android.socialbase.downloader.setting.DownloadSetting.getGlobalSettings()
            com.ss.android.socialbase.appdownloader.c.rg.rg(r15, r11, r14)
            goto L186
        Lf8:
            r12 = move-exception
            org.json.JSONObject r13 = com.ss.android.socialbase.downloader.setting.DownloadSetting.getGlobalSettings()
            com.ss.android.socialbase.appdownloader.c.rg.rg(r13, r11, r14)
            throw r12
        L101:
            r11 = 11
            r1.df = r11
            goto L186
        L107:
            com.ss.android.socialbase.appdownloader.rg r15 = df(r14, r3)
            int r2 = r15.df
            if (r2 == 0) goto L110
            goto L164
        L110:
            boolean r11 = rg(r11, r12, r14, r1, r3)
        L114:
            r0 = r11
            goto L186
        L117:
            r1.rg = r8
            boolean r14 = com.ss.android.socialbase.appdownloader.c.pt.q()
            if (r14 != 0) goto L123
            r1.df = r5
            goto L186
        L123:
            com.ss.android.socialbase.appdownloader.q.rg(r11, r13)     // Catch: java.lang.Throwable -> L12a
            r1.df = r0     // Catch: java.lang.Throwable -> L12a
        L128:
            r0 = r10
            goto L186
        L12a:
            r11 = move-exception
            r1.df = r6
            java.lang.String r11 = r11.toString()
            r1.q = r11
            goto L186
        L134:
            com.ss.android.socialbase.appdownloader.rg r15 = rg(r14, r3)
            int r2 = r15.df
            if (r2 == 0) goto L13d
            goto L164
        L13d:
            boolean r15 = r12.isSavePathRedirected()
            if (r15 != 0) goto L14a
            int r11 = r12.getAntiHijackErrorCode(r9)
            r1.df = r11
            goto L186
        L14a:
            boolean r11 = df(r11, r12, r14, r1)
            goto L114
        L14f:
            boolean r15 = r12.isSavePathRedirected()
            if (r15 != 0) goto L15c
            int r11 = r12.getAntiHijackErrorCode(r9)
            r1.df = r11
            goto L186
        L15c:
            com.ss.android.socialbase.appdownloader.rg r15 = rg(r14, r3)
            int r3 = r15.df
            if (r3 == 0) goto L166
        L164:
            r1 = r15
            goto L186
        L166:
            boolean r15 = r2.equals(r7)
            if (r15 == 0) goto L181
            java.lang.String r15 = "file_content_uri"
            java.lang.String r15 = r12.getDBJsonString(r15)
            boolean r15 = android.text.TextUtils.isEmpty(r15)
            if (r15 == 0) goto L181
            r11 = 10
            int r11 = r12.getAntiHijackErrorCode(r11)
            r1.df = r11
            goto L186
        L181:
            boolean r11 = rg(r11, r12, r14, r1)
            goto L114
        L186:
            if (r0 == 0) goto L195
            java.util.concurrent.ConcurrentHashMap r11 = r12.getTempCacheData()
            java.lang.String r14 = r1.rg()
            java.lang.String r15 = "ah_attempt"
            r11.put(r15, r14)
        L195:
            com.ss.android.socialbase.appdownloader.df$q r11 = com.ss.android.socialbase.appdownloader.df.df
            if (r11 == 0) goto L1a7
            java.util.concurrent.ConcurrentHashMap r11 = r12.getTempCacheData()
            java.lang.String r14 = "intent"
            r11.put(r14, r13)
            com.ss.android.socialbase.appdownloader.df$q r11 = com.ss.android.socialbase.appdownloader.df.df
            r11.rg(r12, r1)
        L1a7:
            return r0
    }

    public static boolean rg(android.content.Context r6, com.ss.android.socialbase.downloader.model.DownloadInfo r7, android.content.Intent r8, boolean r9) {
            int r0 = r7.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r1 = "ah_plans"
            org.json.JSONArray r0 = r0.optJSONArray(r1)
            r1 = 0
            if (r0 == 0) goto L2d
            int r2 = r0.length()
            r3 = r1
        L16:
            if (r3 >= r2) goto L2d
            org.json.JSONObject r4 = r0.optJSONObject(r3)
            boolean r5 = com.ss.android.socialbase.appdownloader.c.rg.rg(r4)
            if (r5 == 0) goto L2a
            boolean r4 = rg(r6, r7, r8, r4, r9)
            if (r4 == 0) goto L2a
            r1 = 1
            goto L2d
        L2a:
            int r3 = r3 + 1
            goto L16
        L2d:
            return r1
    }

    private static boolean rg(android.content.Context r11, com.ss.android.socialbase.downloader.model.DownloadInfo r12, org.json.JSONObject r13, com.ss.android.socialbase.appdownloader.rg r14) {
            r0 = 0
            if (r11 == 0) goto L93
            if (r13 != 0) goto L7
            goto L93
        L7:
            java.lang.String r1 = "device_plans"
            java.lang.String r1 = r13.optString(r1)
            r14.pp = r1
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L93
            java.lang.String r2 = ","
            java.lang.String[] r1 = r1.split(r2)
            java.lang.String r2 = r12.getSavePath()
            boolean r3 = android.text.TextUtils.isEmpty(r2)
            if (r3 == 0) goto L26
            return r0
        L26:
            java.io.File r3 = new java.io.File
            r3.<init>(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r4 = 0
            int r5 = r1.length
            r6 = r0
        L33:
            r7 = 1
            if (r6 >= r5) goto L84
            r8 = r1[r6]
            com.ss.android.socialbase.appdownloader.rg.rg r9 = com.ss.android.socialbase.appdownloader.rg.pt.rg(r11, r8, r13, r12)
            if (r9 == 0) goto L7c
            android.content.Intent r9 = r9.df()
            if (r9 == 0) goto L70
            boolean r10 = rg(r3, r12, r13)
            if (r10 == 0) goto L63
            rg(r11, r9, r0)     // Catch: java.lang.Throwable -> L4f
            r4 = r8
            goto L85
        L4f:
            r9 = move-exception
            r2.append(r8)
            java.lang.String r8 = " startActivity failed : "
            r2.append(r8)
            java.lang.String r8 = rg(r9)
            r2.append(r8)
            rg(r14, r7)
            goto L7c
        L63:
            r7 = 6
            rg(r14, r7)
            r2.append(r8)
            java.lang.String r7 = " createDescFile failed! "
            r2.append(r7)
            goto L7c
        L70:
            r7 = 3
            rg(r14, r7)
            r2.append(r8)
            java.lang.String r7 = " resolveActivity failed! "
            r2.append(r7)
        L7c:
            java.lang.String r7 = "  "
            r2.append(r7)
            int r6 = r6 + 1
            goto L33
        L84:
            r7 = r0
        L85:
            if (r7 != 0) goto L8e
            java.lang.String r11 = r2.toString()
            r14.q = r11
            goto L92
        L8e:
            r14.pt = r4
            r14.df = r0
        L92:
            return r7
        L93:
            return r0
    }

    private static boolean rg(android.content.Context r2, com.ss.android.socialbase.downloader.model.DownloadInfo r3, org.json.JSONObject r4, com.ss.android.socialbase.appdownloader.rg r5, com.ss.android.socialbase.downloader.setting.DownloadSetting r6) {
            java.lang.String r6 = "type"
            java.lang.String r6 = r4.optString(r6)
            r5.rg = r6
            java.lang.String r0 = "vbi"
            com.ss.android.socialbase.appdownloader.rg.rg r3 = com.ss.android.socialbase.appdownloader.rg.pt.rg(r2, r0, r4, r3)
            android.content.Intent r3 = r3.df()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r0 = 0
            r1 = 1
            boolean r2 = df(r2, r3)     // Catch: java.lang.Throwable -> L1e
            goto L32
        L1e:
            r2 = move-exception
            r4.append(r6)
            java.lang.String r3 = " startActivity failed : "
            r4.append(r3)
            java.lang.String r2 = rg(r2)
            r4.append(r2)
            rg(r5, r1)
            r2 = r0
        L32:
            if (r2 != 0) goto L3b
            java.lang.String r2 = r4.toString()
            r5.q = r2
            goto L3d
        L3b:
            r5.df = r0
        L3d:
            return r1
    }

    private static boolean rg(java.io.File r2, com.ss.android.socialbase.downloader.model.DownloadInfo r3, org.json.JSONObject r4) {
            r4 = 0
            if (r2 != 0) goto L4
            return r4
        L4:
            java.lang.String r2 = r2.getPath()
            int r3 = r3.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            java.lang.String r0 = "download_dir"
            org.json.JSONObject r3 = r3.optJSONObject(r0)
            r0 = 0
            if (r3 == 0) goto L20
            java.lang.String r1 = "ins_desc"
            java.lang.String r3 = r3.optString(r1)
            goto L21
        L20:
            r3 = r0
        L21:
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L46
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L46
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r2)
            java.lang.String r2 = java.io.File.separator
            r1.append(r2)
            r1.append(r3)
            java.lang.String r2 = r1.toString()
            r0.<init>(r2)
        L46:
            if (r0 == 0) goto L53
            boolean r2 = r0.createNewFile()     // Catch: java.io.IOException -> L52
            if (r2 == 0) goto L53
            r0.deleteOnExit()     // Catch: java.io.IOException -> L52
            goto L53
        L52:
            return r4
        L53:
            r2 = 1
            return r2
    }
}
