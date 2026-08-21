package com.ss.android.downloadlib;

public class rg implements com.ss.android.downloadad.api.rg, com.ss.android.socialbase.appdownloader.df.q, com.ss.android.socialbase.downloader.common.AppStatusManager.AppStatusChangeListener, com.ss.android.socialbase.downloader.depend.IOpenInstallerListener {
    private static volatile com.ss.android.downloadlib.rg pt;
    private static java.lang.String rg;
    private long df;
    private com.ss.android.downloadlib.rg.df q;





    private static class df implements java.lang.Runnable {
        private int df;
        private long pp;
        private int pt;
        private long q;
        private long rg;

        private df(long r1, int r3, long r4, int r6) {
                r0 = this;
                r0.<init>()
                r0.rg = r1
                r0.df = r3
                r0.q = r4
                r0.pt = r6
                return
        }

        df(long r1, int r3, long r4, int r6, com.ss.android.downloadlib.rg.1 r7) {
                r0 = this;
                r0.<init>(r1, r3, r4, r6)
                return
        }

        private void df() {
                r2 = this;
                long r0 = java.lang.System.currentTimeMillis()
                r2.pp = r0
                return
        }

        private int rg(boolean r9, com.ss.android.downloadad.api.rg.df r10, com.ss.android.socialbase.downloader.model.DownloadInfo r11, boolean r12, org.json.JSONObject r13) {
                r8 = this;
                int r0 = r11.getId()
                com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
                r1 = 1
                java.lang.String r2 = "install_failed_check_ttmd5"
                int r2 = r0.optInt(r2, r1)
                if (r2 != r1) goto L23
                int r2 = r11.checkMd5Status()
                java.lang.String r3 = "ttmd5_status"
                r13.put(r3, r2)     // Catch: java.lang.Throwable -> L1a
            L1a:
                boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isMd5Valid(r2)
                if (r2 != 0) goto L23
                r9 = 2005(0x7d5, float:2.81E-42)
                return r9
            L23:
                int r2 = r8.pt
                r3 = 2000(0x7d0, float:2.803E-42)
                if (r2 == r3) goto L2a
                return r2
            L2a:
                java.lang.String r2 = "install_failed_check_signature"
                int r0 = r0.optInt(r2, r1)
                if (r0 != r1) goto L61
                android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
                java.lang.String r2 = r10.pp()
                boolean r0 = com.ss.android.downloadlib.utils.b.pt(r0, r2)
                if (r0 == 0) goto L61
                android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
                java.lang.String r2 = r10.pp()
                android.content.pm.Signature[] r0 = com.ss.android.downloadlib.utils.b.fw(r0, r2)
                android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
                java.lang.String r11 = r11.getTargetFilePath()
                android.content.pm.Signature[] r11 = com.ss.android.downloadlib.utils.b.ux(r2, r11)
                boolean r11 = com.ss.android.downloadlib.utils.b.rg(r11, r0)
                if (r11 != 0) goto L61
                r9 = 2006(0x7d6, float:2.811E-42)
                return r9
            L61:
                if (r9 != 0) goto L66
                r9 = 2002(0x7d2, float:2.805E-42)
                return r9
            L66:
                long r4 = r8.pp
                long r6 = r8.q
                int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
                if (r9 <= 0) goto L8d
                java.lang.String r9 = "install_time"
                long r4 = r4 - r6
                r13.put(r9, r4)     // Catch: java.lang.Throwable -> L85
                java.lang.String r9 = "install_again"
                long r10 = r10.d()     // Catch: java.lang.Throwable -> L85
                long r2 = r8.q     // Catch: java.lang.Throwable -> L85
                int r10 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
                if (r10 <= 0) goto L81
                goto L82
            L81:
                r1 = 0
            L82:
                r13.put(r9, r1)     // Catch: java.lang.Throwable -> L85
            L85:
                if (r12 != 0) goto L8a
                r9 = 2003(0x7d3, float:2.807E-42)
                return r9
            L8a:
                r9 = 2004(0x7d4, float:2.808E-42)
                return r9
            L8d:
                return r3
        }

        static void rg(com.ss.android.downloadlib.rg.df r0) {
                r0.df()
                return
        }

        boolean rg() {
                r21 = this;
                r7 = r21
                com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
                long r1 = r7.rg
                com.ss.android.downloadad.api.rg.df r8 = r0.pt(r1)
                r0 = 0
                if (r8 == 0) goto L103
                boolean r1 = com.ss.android.downloadlib.utils.b.df(r8)
                if (r1 != 0) goto L103
                java.util.concurrent.atomic.AtomicBoolean r1 = r8.q
                boolean r1 = r1.get()
                if (r1 == 0) goto L1f
                goto L103
            L1f:
                android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
                com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r1)
                int r2 = r8.qx()
                com.ss.android.socialbase.downloader.model.DownloadInfo r4 = r1.getDownloadInfo(r2)
                if (r4 != 0) goto L32
                return r0
            L32:
                long r9 = r8.ax()
                java.io.File r1 = android.os.Environment.getDataDirectory()
                long r11 = com.ss.android.downloadlib.utils.b.rg(r1)
                r1 = 524288000(0x1f400000, double:2.590326893E-315)
                r5 = 10
                long r5 = r11 / r5
                long r1 = java.lang.Math.min(r1, r5)
                long r13 = r4.getTotalBytes()
                double r1 = (double) r1
                double r5 = (double) r13
                r15 = 4612811918334230528(0x4004000000000000, double:2.5)
                double r15 = r15 * r5
                double r1 = r1 + r15
                r15 = -1
                int r3 = (r9 > r15 ? 1 : (r9 == r15 ? 0 : -1))
                r17 = 1
                if (r3 <= 0) goto L66
                int r3 = (r13 > r15 ? 1 : (r13 == r15 ? 0 : -1))
                if (r3 <= 0) goto L66
                r15 = r5
                double r5 = (double) r9
                int r1 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
                if (r1 >= 0) goto L67
                goto L69
            L66:
                r15 = r5
            L67:
                r0 = r17
            L69:
                android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
                boolean r18 = com.ss.android.socialbase.appdownloader.df.rg(r1)
                org.json.JSONObject r6 = new org.json.JSONObject
                r6.<init>()
                r1 = r21
                r2 = r0
                r3 = r8
                r5 = r18
                r19 = r6
                int r1 = r1.rg(r2, r3, r4, r5, r6)
                r7.pt = r1
                java.lang.String r2 = "fail_status"
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> Lf3
                r3 = r19
                r3.putOpt(r2, r1)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r1 = "available_space"
                r4 = 1048576(0x100000, double:5.180654E-318)
                long r19 = r9 / r4
                java.lang.Long r2 = java.lang.Long.valueOf(r19)     // Catch: java.lang.Exception -> Lf1
                r3.putOpt(r1, r2)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r1 = "total_space"
                long r11 = r11 / r4
                java.lang.Long r2 = java.lang.Long.valueOf(r11)     // Catch: java.lang.Exception -> Lf1
                r3.putOpt(r1, r2)     // Catch: java.lang.Exception -> Lf1
                r1 = 0
                int r6 = (r13 > r1 ? 1 : (r13 == r1 ? 0 : -1))
                if (r6 <= 0) goto Lb7
                java.lang.String r11 = "package_size"
                long r13 = r13 / r4
                java.lang.Long r4 = java.lang.Long.valueOf(r13)     // Catch: java.lang.Exception -> Lf1
                r3.putOpt(r11, r4)     // Catch: java.lang.Exception -> Lf1
            Lb7:
                java.lang.String r4 = "space_enough"
                r5 = 2
                if (r0 == 0) goto Lbf
                r0 = r17
                goto Lc0
            Lbf:
                r0 = r5
            Lc0:
                java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.Exception -> Lf1
                r3.putOpt(r4, r0)     // Catch: java.lang.Exception -> Lf1
                int r0 = (r9 > r1 ? 1 : (r9 == r1 ? 0 : -1))
                if (r0 <= 0) goto Ld4
                if (r6 <= 0) goto Ld4
                java.lang.String r0 = "available_space_ratio"
                double r1 = (double) r9     // Catch: java.lang.Exception -> Lf1
                double r1 = r1 / r15
                r3.put(r0, r1)     // Catch: java.lang.Exception -> Lf1
            Ld4:
                java.lang.String r0 = "permission_unknown_source_install"
                if (r18 == 0) goto Ldb
                r1 = r17
                goto Ldc
            Ldb:
                r1 = r5
            Ldc:
                java.lang.Integer r1 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Exception -> Lf1
                r3.putOpt(r0, r1)     // Catch: java.lang.Exception -> Lf1
                java.lang.String r0 = "is_update_download"
                boolean r1 = r8.fl()     // Catch: java.lang.Exception -> Lf1
                if (r1 == 0) goto Led
                r5 = r17
            Led:
                r3.put(r0, r5)     // Catch: java.lang.Exception -> Lf1
                goto Lf9
            Lf1:
                r0 = move-exception
                goto Lf6
            Lf3:
                r0 = move-exception
                r3 = r19
            Lf6:
                r0.printStackTrace()
            Lf9:
                com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
                java.lang.String r1 = "install_failed"
                r0.df(r1, r3, r8)
                return r17
            L103:
                return r0
        }

        @Override
        public void run() {
                r4 = this;
                boolean r0 = r4.rg()     // Catch: java.lang.Throwable -> L12
                if (r0 == 0) goto L16
                com.ss.android.downloadlib.rg r0 = com.ss.android.downloadlib.rg.rg()     // Catch: java.lang.Throwable -> L12
                long r1 = r4.rg     // Catch: java.lang.Throwable -> L12
                int r3 = r4.df     // Catch: java.lang.Throwable -> L12
                r0.rg(r1, r3)     // Catch: java.lang.Throwable -> L12
                goto L16
            L12:
                r0 = move-exception
                r0.printStackTrace()
            L16:
                return
        }
    }

    private class q implements java.lang.Runnable {
        private final com.ss.android.downloadad.api.rg.df df;
        final com.ss.android.downloadlib.rg rg;

        public q(com.ss.android.downloadlib.rg r1, com.ss.android.downloadad.api.rg.df r2) {
                r0 = this;
                r0.rg = r1
                r0.<init>()
                r0.df = r2
                return
        }

        @Override
        public void run() {
                r3 = this;
                r0 = 0
                com.ss.android.downloadad.api.rg.df r1 = r3.df     // Catch: java.lang.Throwable -> Lf java.lang.Exception -> L11
                r2 = 1
                r1.bm(r2)     // Catch: java.lang.Throwable -> Lf java.lang.Exception -> L11
                com.ss.android.downloadlib.rg r1 = r3.rg     // Catch: java.lang.Throwable -> Lf java.lang.Exception -> L11
                com.ss.android.downloadad.api.rg.df r2 = r3.df     // Catch: java.lang.Throwable -> Lf java.lang.Exception -> L11
                com.ss.android.downloadlib.rg.rg(r1, r2)     // Catch: java.lang.Throwable -> Lf java.lang.Exception -> L11
                goto L15
            Lf:
                r1 = move-exception
                goto L1b
            L11:
                r1 = move-exception
                r1.printStackTrace()     // Catch: java.lang.Throwable -> Lf
            L15:
                com.ss.android.downloadad.api.rg.df r1 = r3.df
                r1.bm(r0)
                return
            L1b:
                com.ss.android.downloadad.api.rg.df r2 = r3.df
                r2.bm(r0)
                throw r1
        }
    }

    private class rg implements java.lang.Runnable {
        private final int df;
        final com.ss.android.downloadlib.rg rg;

        public rg(com.ss.android.downloadlib.rg r1, int r2) {
                r0 = this;
                r0.rg = r1
                r0.<init>()
                r0.df = r2
                return
        }

        @Override
        public void run() {
                r3 = this;
                com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()     // Catch: java.lang.Exception -> L1f
                r0.df()     // Catch: java.lang.Exception -> L1f
                com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()     // Catch: java.lang.Exception -> L1f
                java.util.concurrent.ConcurrentHashMap r0 = r0.q()     // Catch: java.lang.Exception -> L1f
                if (r0 == 0) goto L23
                boolean r1 = r0.isEmpty()     // Catch: java.lang.Exception -> L1f
                if (r1 != 0) goto L23
                com.ss.android.downloadlib.rg r1 = r3.rg     // Catch: java.lang.Exception -> L1f
                int r2 = r3.df     // Catch: java.lang.Exception -> L1f
                com.ss.android.downloadlib.rg.rg(r1, r0, r2)     // Catch: java.lang.Exception -> L1f
                goto L23
            L1f:
                r0 = move-exception
                r0.printStackTrace()
            L23:
                return
        }
    }

    static {
            java.lang.Class<com.ss.android.downloadlib.rg> r0 = com.ss.android.downloadlib.rg.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.downloadlib.rg.rg = r0
            return
    }

    private rg() {
            r1 = this;
            r1.<init>()
            com.ss.android.socialbase.appdownloader.df.rg(r1)
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            r0.registerAppSwitchListener(r1)
            return
    }

    private org.json.JSONObject df(com.ss.android.socialbase.downloader.model.DownloadInfo r4, com.ss.android.socialbase.appdownloader.rg r5) {
            r3 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r4)
            if (r0 != 0) goto Lc
            r4 = 0
            return r4
        Lc:
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            r5.rg(r1)
            java.lang.String r5 = "download_id"
            int r2 = r4.getId()     // Catch: java.lang.Throwable -> L27
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L27
            java.lang.String r5 = "name"
            java.lang.String r2 = r4.getName()     // Catch: java.lang.Throwable -> L27
            r1.put(r5, r2)     // Catch: java.lang.Throwable -> L27
            goto L2b
        L27:
            r5 = move-exception
            r5.printStackTrace()
        L2b:
            int r4 = r4.getId()
            com.ss.android.downloadlib.utils.pp.rg(r1, r4)
            com.ss.android.downloadlib.event.AdEventHandler r4 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r5 = "embeded_ad"
            java.lang.String r2 = "ah_result"
            r4.rg(r5, r2, r1, r0)
            return r1
    }

    public static org.json.JSONObject df(org.json.JSONObject r13, com.ss.android.socialbase.downloader.model.DownloadInfo r14) {
            if (r13 == 0) goto L46
            if (r14 != 0) goto L5
            goto L46
        L5:
            int r0 = r14.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 1
            java.lang.String r2 = "download_event_opt"
            int r0 = r0.optInt(r2, r1)
            if (r0 != 0) goto L17
            return r13
        L17:
            r0 = 0
            long r2 = com.ss.android.downloadlib.utils.b.rg(r0)     // Catch: java.lang.Throwable -> L42
            java.lang.String r4 = "available_space"
            double r5 = (double) r2     // Catch: java.lang.Throwable -> L42
            r7 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r9 = r5 / r7
            r13.put(r4, r9)     // Catch: java.lang.Throwable -> L42
            long r9 = r14.getTotalBytes()     // Catch: java.lang.Throwable -> L42
            java.lang.String r14 = "apk_size"
            double r11 = (double) r9     // Catch: java.lang.Throwable -> L42
            double r7 = r11 / r7
            r13.put(r14, r7)     // Catch: java.lang.Throwable -> L42
            int r14 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r14 <= 0) goto L46
            int r14 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r14 <= 0) goto L46
            java.lang.String r14 = "available_space_ratio"
            double r5 = r5 / r11
            r13.put(r14, r5)     // Catch: java.lang.Throwable -> L42
            goto L46
        L42:
            r14 = move-exception
            r14.printStackTrace()
        L46:
            return r13
    }

    private static void df(com.ss.android.downloadad.api.rg.df r9) {
            if (r9 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r9.m()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            java.lang.String r1 = ""
            if (r0 == 0) goto L11
            r0 = r1
            goto L15
        L11:
            java.lang.String r0 = r9.m()
        L15:
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r2 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r2)
            int r3 = r9.qx()
            com.ss.android.socialbase.downloader.model.DownloadInfo r2 = r2.getDownloadInfo(r3)
            r9.hq(r1)
            com.ss.android.downloadlib.addownload.model.ux r1 = com.ss.android.downloadlib.addownload.model.ux.rg()
            r1.rg(r9)
            org.json.JSONObject r1 = new org.json.JSONObject
            r1.<init>()
            org.json.JSONObject r1 = rg(r1, r2)
            r3 = 1
            java.lang.String r4 = "finish_reason"
            r1.putOpt(r4, r0)     // Catch: org.json.JSONException -> L51
            java.lang.String r0 = "finish_from_reserve_wifi"
            boolean r4 = r2.isDownloadFromReserveWifi()     // Catch: org.json.JSONException -> L51
            if (r4 == 0) goto L48
            r4 = r3
            goto L49
        L48:
            r4 = 0
        L49:
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: org.json.JSONException -> L51
            r1.putOpt(r0, r4)     // Catch: org.json.JSONException -> L51
            goto L55
        L51:
            r0 = move-exception
            r0.printStackTrace()
        L55:
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r2)
            int r4 = r2.getId()
            com.ss.android.downloadlib.utils.pp.rg(r1, r4)
            java.lang.String r4 = "download_failed_times"
            int r5 = r0.re()     // Catch: java.lang.Throwable -> Lc6
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r4 = "can_show_notification"
            boolean r5 = com.ss.android.socialbase.appdownloader.pp.pt.rg()     // Catch: java.lang.Throwable -> Lc6
            r6 = 2
            if (r5 == 0) goto L78
            r5 = r3
            goto L79
        L78:
            r5 = r6
        L79:
            r1.put(r4, r5)     // Catch: java.lang.Throwable -> Lc6
            long r4 = r2.getExpectFileLength()     // Catch: java.lang.Throwable -> Lc6
            r7 = 0
            int r4 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r4 <= 0) goto L9c
            long r4 = r2.getTotalBytes()     // Catch: java.lang.Throwable -> Lc6
            int r4 = (r4 > r7 ? 1 : (r4 == r7 ? 0 : -1))
            if (r4 <= 0) goto L9c
            long r4 = r2.getExpectFileLength()     // Catch: java.lang.Throwable -> Lc6
            long r7 = r2.getTotalBytes()     // Catch: java.lang.Throwable -> Lc6
            long r4 = r4 - r7
            java.lang.String r7 = "file_length_gap"
            r1.put(r7, r4)     // Catch: java.lang.Throwable -> Lc6
        L9c:
            java.lang.String r4 = "ttmd5_status"
            int r2 = r2.getTTMd5CheckStatus()     // Catch: java.lang.Throwable -> Lc6
            r1.put(r4, r2)     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r2 = "has_send_download_failed_finally"
            java.util.concurrent.atomic.AtomicBoolean r4 = r0.pt     // Catch: java.lang.Throwable -> Lc6
            boolean r4 = r4.get()     // Catch: java.lang.Throwable -> Lc6
            if (r4 == 0) goto Lb1
            r4 = r3
            goto Lb2
        Lb1:
            r4 = r6
        Lb2:
            r1.put(r2, r4)     // Catch: java.lang.Throwable -> Lc6
            java.lang.String r2 = "is_update_download"
            boolean r4 = r0.fl()     // Catch: java.lang.Throwable -> Lc6
            if (r4 == 0) goto Lbe
            goto Lbf
        Lbe:
            r3 = r6
        Lbf:
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> Lc6
            com.ss.android.downloadlib.utils.pp.rg(r0, r1)     // Catch: java.lang.Throwable -> Lc6
            goto Lca
        Lc6:
            r0 = move-exception
            r0.printStackTrace()
        Lca:
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r2 = "download_finish"
            r0.df(r2, r1, r9)
            return
    }

    private int pt(com.ss.android.downloadad.api.rg.df r10) {
            r9 = this;
            int r0 = r10.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r1 = "download_failed_finally_hours"
            r2 = 4631952216750555136(0x4048000000000000, double:48.0)
            double r0 = r0.optDouble(r1, r2)
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = -1
            if (r2 > 0) goto L18
            return r3
        L18:
            long r4 = java.lang.System.currentTimeMillis()
            long r6 = r10.bj()
            long r4 = r4 - r6
            double r4 = (double) r4
            r6 = 4633641066610819072(0x404e000000000000, double:60.0)
            double r0 = r0 * r6
            double r0 = r0 * r6
            r6 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r0 = r0 * r6
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            r1 = 1
            if (r0 >= 0) goto L32
            return r1
        L32:
            java.util.concurrent.atomic.AtomicBoolean r0 = r10.pt
            boolean r0 = r0.get()
            r2 = 0
            if (r0 == 0) goto L3c
            return r2
        L3c:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            int r4 = r10.qx()
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.getDownloadInfo(r4)
            if (r0 != 0) goto L4f
            return r3
        L4f:
            int r4 = r0.getRealStatus()
            r5 = -3
            if (r4 == r5) goto Ldc
            r5 = -4
            if (r4 != r5) goto L5b
            goto Ldc
        L5b:
            boolean r3 = com.ss.android.socialbase.downloader.constants.DownloadStatus.isDownloading(r4)
            if (r3 == 0) goto L62
            return r1
        L62:
            java.util.concurrent.atomic.AtomicBoolean r3 = r10.pt
            boolean r3 = r3.compareAndSet(r2, r1)
            if (r3 == 0) goto Ldb
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Ld7
            r3.<init>()     // Catch: java.lang.Throwable -> Ld7
            rg(r3, r0)     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r5 = "download_status"
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> Ld7
            r3.putOpt(r5, r4)     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r4 = "fail_status"
            int r5 = r10.go()     // Catch: java.lang.Throwable -> Ld7
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)     // Catch: java.lang.Throwable -> Ld7
            r3.putOpt(r4, r5)     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r4 = "fail_msg"
            java.lang.String r5 = r10.k()     // Catch: java.lang.Throwable -> Ld7
            r3.putOpt(r4, r5)     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r4 = "download_failed_times"
            int r5 = r10.re()     // Catch: java.lang.Throwable -> Ld7
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> Ld7
            long r4 = r0.getTotalBytes()     // Catch: java.lang.Throwable -> Ld7
            r6 = 0
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 <= 0) goto Lb4
            java.lang.String r4 = "download_percent"
            long r5 = r0.getCurBytes()     // Catch: java.lang.Throwable -> Ld7
            double r5 = (double) r5     // Catch: java.lang.Throwable -> Ld7
            long r7 = r0.getTotalBytes()     // Catch: java.lang.Throwable -> Ld7
            double r7 = (double) r7     // Catch: java.lang.Throwable -> Ld7
            double r5 = r5 / r7
            r3.put(r4, r5)     // Catch: java.lang.Throwable -> Ld7
        Lb4:
            java.lang.String r0 = "is_update_download"
            boolean r4 = r10.fl()     // Catch: java.lang.Throwable -> Ld7
            if (r4 == 0) goto Lbe
            r4 = r1
            goto Lbf
        Lbe:
            r4 = 2
        Lbf:
            r3.put(r0, r4)     // Catch: java.lang.Throwable -> Ld7
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r4 = r10.bm()     // Catch: java.lang.Throwable -> Ld7
            java.lang.String r5 = "download_failed_finally"
            r0.rg(r4, r5, r3, r10)     // Catch: java.lang.Throwable -> Ld7
            com.ss.android.downloadlib.addownload.model.ux r0 = com.ss.android.downloadlib.addownload.model.ux.rg()     // Catch: java.lang.Throwable -> Ld7
            r0.rg(r10)     // Catch: java.lang.Throwable -> Ld7
            return r2
        Ld7:
            r10 = move-exception
            r10.printStackTrace()
        Ldb:
            return r1
        Ldc:
            return r3
    }

    static java.lang.String q() {
            java.lang.String r0 = com.ss.android.downloadlib.rg.rg
            return r0
    }

    public static java.lang.String q(com.ss.android.socialbase.downloader.model.DownloadInfo r4, com.ss.android.downloadad.api.rg.df r5) {
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r4.getSavePath()
            java.lang.String r2 = r4.getName()
            r0.<init>(r1, r2)
            boolean r1 = r0.exists()
            r2 = 0
            if (r1 == 0) goto L32
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L2e
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> L2e
            java.lang.String r0 = r0.getAbsolutePath()     // Catch: java.lang.Exception -> L2e
            int r3 = com.ss.android.socialbase.appdownloader.q.rg()     // Catch: java.lang.Exception -> L2e
            android.content.pm.PackageInfo r0 = r1.getPackageArchiveInfo(r0, r3)     // Catch: java.lang.Exception -> L2e
            if (r0 == 0) goto L32
            java.lang.String r0 = r0.packageName     // Catch: java.lang.Exception -> L2e
            r2 = r0
            goto L32
        L2e:
            r0 = move-exception
            r0.printStackTrace()
        L32:
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L66
            java.lang.String r0 = r4.getPackageName()
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L66
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "real_package_name"
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L56
            java.lang.String r1 = "input_package_name"
            java.lang.String r4 = r4.getPackageName()     // Catch: org.json.JSONException -> L56
            r0.put(r1, r4)     // Catch: org.json.JSONException -> L56
            goto L5a
        L56:
            r4 = move-exception
            r4.printStackTrace()
        L5a:
            com.ss.android.downloadlib.event.AdEventHandler r4 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r1 = "embeded_ad"
            java.lang.String r3 = "package_name_error"
            r4.rg(r1, r3, r0, r5)
            return r2
        L66:
            java.lang.String r4 = r4.getPackageName()
            return r4
    }

    private void q(com.ss.android.downloadad.api.rg.df r5) {
            r4 = this;
            r0 = 20000(0x4e20, double:9.8813E-320)
            android.os.SystemClock.sleep(r0)
            r2 = 15
        L7:
            if (r2 <= 0) goto L20
            boolean r3 = com.ss.android.downloadlib.utils.b.df(r5)
            if (r3 == 0) goto L17
            java.lang.String r5 = r5.pp()
            r4.rg(r5)
            goto L20
        L17:
            int r2 = r2 + (-1)
            if (r2 != 0) goto L1c
            goto L20
        L1c:
            android.os.SystemClock.sleep(r0)
            goto L7
        L20:
            return
    }

    private int rg(com.ss.android.downloadad.api.rg.df r5, com.ss.android.socialbase.downloader.model.DownloadInfo r6, java.lang.String r7, org.json.JSONObject r8) {
            r4 = this;
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            int r0 = com.ss.android.socialbase.appdownloader.q.df(r0, r6)
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            int r1 = com.ss.android.downloadlib.utils.b.df(r1, r7)
            if (r0 <= 0) goto L1e
            if (r1 <= 0) goto L1e
            if (r0 == r1) goto L1e
            if (r1 <= r0) goto L1b
            r5 = 3011(0xbc3, float:4.22E-42)
            goto L1d
        L1b:
            r5 = 3010(0xbc2, float:4.218E-42)
        L1d:
            return r5
        L1e:
            int r0 = r5.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 1
            java.lang.String r2 = "install_finish_check_ttmd5"
            int r0 = r0.optInt(r2, r1)
            if (r0 != r1) goto L6e
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            r2 = 0
            java.lang.String r3 = "sp_ttdownloader_md5"
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r3, r2)
            long r2 = r5.df()
            java.lang.String r5 = java.lang.String.valueOf(r2)
            r2 = 0
            java.lang.String r5 = r0.getString(r5, r2)
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L57
            if (r6 == 0) goto L57
            java.lang.String r5 = r6.getTargetFilePath()
            java.lang.String r5 = com.ss.android.downloadlib.utils.rg.rg(r5)
        L57:
            java.lang.String r6 = com.ss.android.downloadlib.utils.rg.df(r7)
            int r5 = com.ss.android.downloadlib.utils.rg.rg(r5, r6)
            java.lang.String r6 = "ttmd5_status"
            r8.put(r6, r5)     // Catch: java.lang.Throwable -> L64
        L64:
            if (r5 != 0) goto L69
            r5 = 3000(0xbb8, float:4.204E-42)
            return r5
        L69:
            if (r5 != r1) goto L6e
            r5 = 3002(0xbba, float:4.207E-42)
            return r5
        L6e:
            r5 = 3001(0xbb9, float:4.205E-42)
            return r5
    }

    public static com.ss.android.downloadlib.rg rg() {
            com.ss.android.downloadlib.rg r0 = com.ss.android.downloadlib.rg.pt
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.rg> r0 = com.ss.android.downloadlib.rg.class
            monitor-enter(r0)
            com.ss.android.downloadlib.rg r1 = com.ss.android.downloadlib.rg.pt     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.rg r1 = new com.ss.android.downloadlib.rg     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.rg.pt = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.rg r0 = com.ss.android.downloadlib.rg.pt
            return r0
    }

    private static com.ss.android.socialbase.downloader.model.DownloadInfo rg(java.util.List<com.ss.android.socialbase.downloader.model.DownloadInfo> r4, java.lang.String r5) {
            r0 = 0
            if (r4 == 0) goto L3d
            boolean r1 = r4.isEmpty()
            if (r1 != 0) goto L3d
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            if (r1 == 0) goto L10
            goto L3d
        L10:
            java.util.Iterator r4 = r4.iterator()
        L14:
            boolean r1 = r4.hasNext()
            if (r1 == 0) goto L3d
            java.lang.Object r1 = r4.next()
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = (com.ss.android.socialbase.downloader.model.DownloadInfo) r1
            if (r1 != 0) goto L23
            goto L14
        L23:
            java.lang.String r2 = r1.getPackageName()
            boolean r2 = r5.equals(r2)
            if (r2 == 0) goto L2e
            return r1
        L2e:
            java.lang.String r2 = r1.getTargetFilePath()
            android.content.Context r3 = com.ss.android.downloadlib.addownload.bm.getContext()
            boolean r2 = com.ss.android.downloadlib.utils.b.rg(r3, r2, r5)
            if (r2 == 0) goto L14
            return r1
        L3d:
            return r0
    }

    private org.json.JSONObject rg(com.ss.android.downloadad.api.rg.df r10, java.lang.String r11, int r12) {
            r9 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Throwable -> Lba
            com.ss.android.socialbase.downloader.downloader.Downloader r1 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r1)     // Catch: java.lang.Throwable -> Lba
            int r2 = r10.qx()     // Catch: java.lang.Throwable -> Lba
            com.ss.android.socialbase.downloader.model.DownloadInfo r1 = r1.getDownloadInfo(r2)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r2 = "scene"
            java.lang.Integer r12 = java.lang.Integer.valueOf(r12)     // Catch: java.lang.Throwable -> Lba
            r0.putOpt(r2, r12)     // Catch: java.lang.Throwable -> Lba
            int r12 = r10.qx()     // Catch: java.lang.Throwable -> Lba
            com.ss.android.downloadlib.utils.pp.rg(r0, r12)     // Catch: java.lang.Throwable -> Lba
            com.ss.android.downloadlib.utils.pp.rg(r10, r0)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r12 = "is_update_download"
            boolean r2 = r10.fl()     // Catch: java.lang.Throwable -> Lba
            r3 = 1
            r4 = 2
            if (r2 == 0) goto L34
            r2 = r3
            goto L35
        L34:
            r2 = r4
        L35:
            r0.put(r12, r2)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r12 = "install_after_back_app"
            boolean r2 = r10.xv()     // Catch: java.lang.Throwable -> Lba
            if (r2 == 0) goto L42
            r2 = r3
            goto L43
        L42:
            r2 = r4
        L43:
            r0.put(r12, r2)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r12 = "clean_space_install_params"
            boolean r2 = r10.bl()     // Catch: java.lang.Throwable -> Lba
            if (r2 == 0) goto L51
            java.lang.String r2 = "1"
            goto L53
        L51:
            java.lang.String r2 = "2"
        L53:
            r0.putOpt(r12, r2)     // Catch: java.lang.Throwable -> Lba
            if (r1 == 0) goto L9a
            rg(r0, r1)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r12 = "uninstall_resume_count"
            int r2 = r1.getUninstallResumeCount()     // Catch: java.lang.Throwable -> L7c
            r0.put(r12, r2)     // Catch: java.lang.Throwable -> L7c
            long r5 = r10.d()     // Catch: java.lang.Throwable -> L7c
            r7 = 0
            int r12 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r12 <= 0) goto L7c
            java.lang.String r12 = "install_time"
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L7c
            long r7 = r10.d()     // Catch: java.lang.Throwable -> L7c
            long r5 = r5 - r7
            r0.put(r12, r5)     // Catch: java.lang.Throwable -> L7c
        L7c:
            java.util.concurrent.ConcurrentHashMap r12 = r1.getTempCacheData()     // Catch: java.lang.Throwable -> Lba
            java.lang.String r2 = "ah_attempt"
            java.lang.Object r12 = r12.get(r2)     // Catch: java.lang.Throwable -> Lba
            r2 = 0
            java.lang.String r12 = com.ss.android.socialbase.downloader.utils.DownloadUtils.getString(r12, r2)     // Catch: java.lang.Throwable -> Lba
            boolean r2 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> Lba
            if (r2 != 0) goto L9a
            com.ss.android.socialbase.appdownloader.rg r12 = com.ss.android.socialbase.appdownloader.rg.rg(r12)     // Catch: java.lang.Throwable -> Lba
            if (r12 == 0) goto L9a
            r12.rg(r0)     // Catch: java.lang.Throwable -> Lba
        L9a:
            int r10 = r9.rg(r10, r1, r11, r0)     // Catch: java.lang.Throwable -> Lba
            java.lang.String r11 = "fail_status"
            r0.put(r11, r10)     // Catch: java.lang.Throwable -> Lba
            r11 = 3000(0xbb8, float:4.204E-42)
            java.lang.String r12 = "hijack"
            if (r10 != r11) goto Lad
            r0.put(r12, r4)     // Catch: java.lang.Throwable -> Lba
            goto Lbe
        Lad:
            r11 = 3001(0xbb9, float:4.205E-42)
            if (r10 != r11) goto Lb6
            r10 = 0
            r0.put(r12, r10)     // Catch: java.lang.Throwable -> Lba
            goto Lbe
        Lb6:
            r0.put(r12, r3)     // Catch: java.lang.Throwable -> Lba
            goto Lbe
        Lba:
            r10 = move-exception
            r10.printStackTrace()
        Lbe:
            return r0
    }

    public static org.json.JSONObject rg(org.json.JSONObject r10, com.ss.android.socialbase.downloader.model.DownloadInfo r11) {
            if (r10 == 0) goto L22b
            if (r11 != 0) goto L6
            goto L22b
        L6:
            int r0 = r11.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 1
            java.lang.String r2 = "download_event_opt"
            int r0 = r0.optInt(r2, r1)
            if (r0 != 0) goto L18
            return r10
        L18:
            java.lang.String r0 = "download_id"
            int r2 = r11.getId()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "name"
            java.lang.String r2 = r11.getName()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "cur_bytes"
            long r2 = r11.getCurBytes()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "total_bytes"
            long r2 = r11.getTotalBytes()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "network_quality"
            java.lang.String r2 = r11.getNetworkQuality()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            com.ss.android.socialbase.downloader.network.NetTrafficManager r0 = com.ss.android.socialbase.downloader.network.NetTrafficManager.getInstance()     // Catch: java.lang.Throwable -> L227
            com.ss.android.socialbase.downloader.network.NetworkQuality r0 = r0.getCurrentNetworkQuality()     // Catch: java.lang.Throwable -> L227
            java.lang.String r2 = "current_network_quality"
            java.lang.String r0 = r0.name()     // Catch: java.lang.Throwable -> L227
            r10.put(r2, r0)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "only_wifi"
            boolean r2 = r11.isOnlyWifi()     // Catch: java.lang.Throwable -> L227
            r3 = 0
            if (r2 == 0) goto L61
            r2 = r1
            goto L62
        L61:
            r2 = r3
        L62:
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "need_https_degrade"
            boolean r2 = r11.isNeedHttpsToHttpRetry()     // Catch: java.lang.Throwable -> L227
            if (r2 == 0) goto L6f
            r2 = r1
            goto L70
        L6f:
            r2 = r3
        L70:
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "https_degrade_retry_used"
            boolean r2 = r11.isHttpsToHttpRetryUsed()     // Catch: java.lang.Throwable -> L227
            if (r2 == 0) goto L7d
            r2 = r1
            goto L7e
        L7d:
            r2 = r3
        L7e:
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "chunk_count"
            int r2 = r11.getChunkCount()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "retry_count"
            int r2 = r11.getRetryCount()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "cur_retry_time"
            int r2 = r11.getCurRetryTime()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "need_retry_delay"
            boolean r2 = r11.isNeedRetryDelay()     // Catch: java.lang.Throwable -> L227
            if (r2 == 0) goto La6
            r2 = r1
            goto La7
        La6:
            r2 = r3
        La7:
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "backup_url_used"
            boolean r2 = r11.isBackUpUrlUsed()     // Catch: java.lang.Throwable -> L227
            if (r2 == 0) goto Lb4
            r2 = r1
            goto Lb5
        Lb4:
            r2 = r3
        Lb5:
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "head_connection_error_msg"
            java.lang.String r2 = r11.getHeadConnectionException()     // Catch: java.lang.Throwable -> L227
            if (r2 == 0) goto Lc5
            java.lang.String r2 = r11.getHeadConnectionException()     // Catch: java.lang.Throwable -> L227
            goto Lc7
        Lc5:
            java.lang.String r2 = ""
        Lc7:
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "need_independent_process"
            boolean r2 = r11.isNeedIndependentProcess()     // Catch: java.lang.Throwable -> L227
            if (r2 == 0) goto Ld4
            r2 = r1
            goto Ld5
        Ld4:
            r2 = r3
        Ld5:
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "total_retry_count"
            int r2 = r11.getTotalRetryCount()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "cur_retry_time_in_total"
            int r2 = r11.getCurRetryTimeInTotal()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "real_download_time"
            long r4 = r11.getRealDownloadTime()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r4)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "first_speed_time"
            long r4 = r11.getFirstSpeedTime()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r4)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "all_connect_time"
            long r4 = r11.getAllConnectTime()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r4)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "download_prepare_time"
            long r4 = r11.getDownloadPrepareTime()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r4)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "download_time"
            long r4 = r11.getRealDownloadTime()     // Catch: java.lang.Throwable -> L227
            long r6 = r11.getAllConnectTime()     // Catch: java.lang.Throwable -> L227
            long r4 = r4 + r6
            long r6 = r11.getDownloadPrepareTime()     // Catch: java.lang.Throwable -> L227
            long r4 = r4 + r6
            r10.put(r0, r4)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "chunk_downgrade_retry_used"
            boolean r2 = r11.isChunkDowngradeRetryUsed()     // Catch: java.lang.Throwable -> L227
            if (r2 == 0) goto L12b
            r2 = r1
            goto L12c
        L12b:
            r2 = r3
        L12c:
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "need_chunk_downgrade_retry"
            boolean r2 = r11.isNeedChunkDowngradeRetry()     // Catch: java.lang.Throwable -> L227
            if (r2 == 0) goto L139
            r2 = r1
            goto L13a
        L139:
            r2 = r3
        L13a:
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "failed_resume_count"
            int r2 = r11.getFailedResumeCount()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            int r0 = r11.getPreconnectLevel()     // Catch: java.lang.Throwable -> L227
            java.lang.String r2 = "preconnect_level"
            r10.put(r2, r0)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "md5"
            java.lang.String r2 = r11.getMd5()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "expect_file_length"
            long r4 = r11.getExpectFileLength()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r4)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "retry_schedule_count"
            int r2 = r11.getRetryScheduleCount()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "rw_concurrent"
            boolean r2 = r11.isRwConcurrent()     // Catch: java.lang.Throwable -> L227
            if (r2 == 0) goto L174
            r2 = r1
            goto L175
        L174:
            r2 = r3
        L175:
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            long r4 = r11.getCurBytes()     // Catch: java.lang.Throwable -> L227
            double r4 = (double) r4     // Catch: java.lang.Throwable -> L227
            r6 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r4 = r4 / r6
            long r6 = r11.getRealDownloadTime()     // Catch: java.lang.Throwable -> L227
            double r6 = (double) r6
            r8 = 4652007308841189376(0x408f400000000000, double:1000.0)
            double r6 = r6 / r8
            r8 = 0
            int r0 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r0 <= 0) goto L1b6
            int r0 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r0 <= 0) goto L1b6
            double r4 = r4 / r6
            java.lang.String r0 = "download_speed"
            r10.put(r0, r4)     // Catch: java.lang.Exception -> L19b java.lang.Throwable -> L227
        L19b:
            java.lang.String r0 = com.ss.android.downloadlib.rg.rg     // Catch: java.lang.Throwable -> L227
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L227
            r2.<init>()     // Catch: java.lang.Throwable -> L227
            java.lang.String r6 = "download speed : "
            r2.append(r6)     // Catch: java.lang.Throwable -> L227
            r2.append(r4)     // Catch: java.lang.Throwable -> L227
            java.lang.String r4 = "MB/s"
            r2.append(r4)     // Catch: java.lang.Throwable -> L227
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L227
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r2)     // Catch: java.lang.Throwable -> L227
        L1b6:
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Exception -> L1cf java.lang.Throwable -> L227
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)     // Catch: java.lang.Exception -> L1cf java.lang.Throwable -> L227
            int r2 = r11.getId()     // Catch: java.lang.Exception -> L1cf java.lang.Throwable -> L227
            boolean r0 = r0.isDownloadServiceForeground(r2)     // Catch: java.lang.Exception -> L1cf java.lang.Throwable -> L227
            java.lang.String r2 = "is_download_service_foreground"
            if (r0 == 0) goto L1cb
            r3 = r1
        L1cb:
            r10.put(r2, r3)     // Catch: java.lang.Exception -> L1cf java.lang.Throwable -> L227
            goto L1d3
        L1cf:
            r0 = move-exception
            r0.printStackTrace()     // Catch: java.lang.Throwable -> L227
        L1d3:
            java.util.List r0 = r11.getBackUpUrls()     // Catch: java.lang.Throwable -> L227
            if (r0 == 0) goto L1ef
            java.lang.String r0 = "backup_url_count"
            java.util.List r2 = r11.getBackUpUrls()     // Catch: java.lang.Throwable -> L227
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "cur_backup_url_index"
            int r2 = r11.getCurBackUpUrlIndex()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
        L1ef:
            java.lang.String r0 = "clear_space_restart_times"
            com.ss.android.downloadlib.addownload.df.pt r2 = com.ss.android.downloadlib.addownload.df.pt.rg()     // Catch: java.lang.Throwable -> L227
            java.lang.String r3 = r11.getUrl()     // Catch: java.lang.Throwable -> L227
            int r2 = r2.df(r3)     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "mime_type"
            java.lang.String r2 = r11.getMimeType()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r2)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "network_available"
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Throwable -> L227
            boolean r2 = com.ss.android.socialbase.downloader.utils.DownloadUtils.isNetworkConnected(r2)     // Catch: java.lang.Throwable -> L227
            if (r2 == 0) goto L216
            goto L217
        L216:
            r1 = 2
        L217:
            r10.put(r0, r1)     // Catch: java.lang.Throwable -> L227
            java.lang.String r0 = "status_code"
            int r1 = r11.getHttpStatusCode()     // Catch: java.lang.Throwable -> L227
            r10.put(r0, r1)     // Catch: java.lang.Throwable -> L227
            df(r10, r11)     // Catch: java.lang.Throwable -> L227
            goto L22b
        L227:
            r11 = move-exception
            r11.printStackTrace()
        L22b:
            return r10
    }

    static void rg(com.ss.android.downloadlib.rg r0, com.ss.android.downloadad.api.rg.df r1) {
            r0.q(r1)
            return
    }

    static void rg(com.ss.android.downloadlib.rg r0, java.util.concurrent.ConcurrentHashMap r1, int r2) {
            r0.rg(r1, r2)
            return
    }

    public static synchronized void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r13, com.ss.android.downloadad.api.rg.df r14) {
            java.lang.Class<com.ss.android.downloadlib.rg> r0 = com.ss.android.downloadlib.rg.class
            monitor-enter(r0)
            if (r13 != 0) goto L13
            com.ss.android.downloadlib.exception.q r13 = com.ss.android.downloadlib.exception.q.rg()     // Catch: java.lang.Throwable -> L10
            java.lang.String r14 = "onDownloadFinish info null"
            r13.rg(r14)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)
            return
        L10:
            r13 = move-exception
            goto Lc7
        L13:
            if (r14 != 0) goto L20
            com.ss.android.downloadlib.exception.q r13 = com.ss.android.downloadlib.exception.q.rg()     // Catch: java.lang.Throwable -> L10
            java.lang.String r14 = "onDownloadFinish nativeModel null"
            r13.rg(r14)     // Catch: java.lang.Throwable -> L10
            monitor-exit(r0)
            return
        L20:
            int r1 = r14.lu()     // Catch: java.lang.Throwable -> L10
            r2 = 1
            if (r1 == r2) goto L29
            monitor-exit(r0)
            return
        L29:
            com.ss.android.downloadlib.q.ux r1 = com.ss.android.downloadlib.q.ux.rg()     // Catch: java.lang.Throwable -> L10
            r1.pt(r14)     // Catch: java.lang.Throwable -> L10
            java.lang.String r1 = q(r13, r14)     // Catch: java.lang.Throwable -> L10
            com.ss.android.downloadlib.addownload.model.c r2 = com.ss.android.downloadlib.addownload.model.c.rg()     // Catch: java.lang.Throwable -> L10
            java.lang.String r3 = r13.getUrl()     // Catch: java.lang.Throwable -> L10
            r2.df(r3, r1)     // Catch: java.lang.Throwable -> L10
            com.ss.android.downloadlib.addownload.model.c r2 = com.ss.android.downloadlib.addownload.model.c.rg()     // Catch: java.lang.Throwable -> L10
            java.lang.String r3 = r13.getUrl()     // Catch: java.lang.Throwable -> L10
            java.util.Map r2 = r2.rg(r3, r1)     // Catch: java.lang.Throwable -> L10
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L10
            r14.c(r3)     // Catch: java.lang.Throwable -> L10
            r3 = 2
            r14.pp(r3)     // Catch: java.lang.Throwable -> L10
            r14.df(r1)     // Catch: java.lang.Throwable -> L10
            long r3 = r14.df()     // Catch: java.lang.Throwable -> L10
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L10
            r2.put(r3, r14)     // Catch: java.lang.Throwable -> L10
            com.ss.android.downloadlib.addownload.model.ux r3 = com.ss.android.downloadlib.addownload.model.ux.rg()     // Catch: java.lang.Throwable -> L10
            java.util.Collection r2 = r2.values()     // Catch: java.lang.Throwable -> L10
            r3.rg(r2)     // Catch: java.lang.Throwable -> L10
            df(r14)     // Catch: java.lang.Throwable -> L10
            com.ss.android.downloadlib.fw r2 = com.ss.android.downloadlib.fw.rg()     // Catch: java.lang.Throwable -> L10
            r2.rg(r13, r1)     // Catch: java.lang.Throwable -> L10
            java.lang.String r2 = "application/vnd.android.package-archive"
            java.lang.String r3 = r13.getMimeType()     // Catch: java.lang.Throwable -> L10
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> L10
            if (r2 == 0) goto Lc5
            com.ss.android.downloadlib.rg r2 = rg()     // Catch: java.lang.Throwable -> L10
            r2.rg(r14)     // Catch: java.lang.Throwable -> L10
            com.ss.android.downloadlib.rg r2 = rg()     // Catch: java.lang.Throwable -> L10
            r2.df(r13, r14)     // Catch: java.lang.Throwable -> L10
            boolean r2 = r14.cd()     // Catch: java.lang.Throwable -> L10
            if (r2 == 0) goto Lba
            com.ss.android.downloadlib.addownload.rg.rg r2 = com.ss.android.downloadlib.addownload.rg.rg.rg()     // Catch: java.lang.Throwable -> L10
            int r3 = r13.getId()     // Catch: java.lang.Throwable -> L10
            long r3 = (long) r3     // Catch: java.lang.Throwable -> L10
            long r5 = r14.df()     // Catch: java.lang.Throwable -> L10
            long r7 = r14.hq()     // Catch: java.lang.Throwable -> L10
            java.lang.String r10 = r13.getTitle()     // Catch: java.lang.Throwable -> L10
            java.lang.String r11 = r14.pt()     // Catch: java.lang.Throwable -> L10
            java.lang.String r12 = r13.getTargetFilePath()     // Catch: java.lang.Throwable -> L10
            r9 = r1
            r2.rg(r3, r5, r7, r9, r10, r11, r12)     // Catch: java.lang.Throwable -> L10
        Lba:
            long r2 = r14.df()     // Catch: java.lang.Throwable -> L10
            java.lang.String r14 = r14.pt()     // Catch: java.lang.Throwable -> L10
            com.ss.android.downloadlib.addownload.pt.rg.rg(r13, r2, r14, r1)     // Catch: java.lang.Throwable -> L10
        Lc5:
            monitor-exit(r0)
            return
        Lc7:
            monitor-exit(r0)
            throw r13
    }

    private void rg(java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r10, int r11) {
            r9 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            long r1 = java.lang.System.currentTimeMillis()
            java.util.Collection r10 = r10.values()
            java.util.Iterator r10 = r10.iterator()
        L11:
            boolean r3 = r10.hasNext()
            if (r3 == 0) goto L117
            java.lang.Object r3 = r10.next()
            com.ss.android.downloadad.api.rg.df r3 = (com.ss.android.downloadad.api.rg.df) r3
            java.util.concurrent.atomic.AtomicBoolean r4 = r3.q
            boolean r4 = r4.get()
            java.lang.String r5 = "start_event_expire_hours"
            r6 = 168(0xa8, float:2.35E-43)
            if (r4 == 0) goto L52
            long r7 = r3.bj()
            long r7 = r1 - r7
            int r4 = r3.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r4)
            int r4 = r4.optInt(r5, r6)
            int r4 = r4 * 60
            int r4 = r4 * 60
            int r4 = r4 * 1000
            long r4 = (long) r4
            int r4 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r4 < 0) goto L11
            long r3 = r3.df()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0.add(r3)
            goto L11
        L52:
            int r4 = r3.lu()
            r7 = 1
            if (r4 != r7) goto L88
            int r4 = r9.pt(r3)
            if (r4 > 0) goto L11
            long r7 = r3.bj()
            long r7 = r1 - r7
            int r4 = r3.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r4)
            int r4 = r4.optInt(r5, r6)
            int r4 = r4 * 60
            int r4 = r4 * 60
            int r4 = r4 * 1000
            long r4 = (long) r4
            int r4 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r4 < 0) goto L11
            long r3 = r3.df()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0.add(r3)
            goto L11
        L88:
            int r4 = r3.lu()
            r5 = 2
            if (r4 != r5) goto L10a
            boolean r4 = r3.ka()
            if (r4 == 0) goto L97
            goto L11
        L97:
            boolean r4 = com.ss.android.downloadlib.utils.b.df(r3)
            if (r4 == 0) goto Lc7
            int r4 = r3.ev()
            r5 = 4
            if (r4 != r5) goto La8
            int r11 = r3.ev()
        La8:
            java.lang.String r4 = r3.pp()
            org.json.JSONObject r4 = r9.rg(r3, r4, r11)
            com.ss.android.downloadlib.event.AdEventHandler r5 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            r5.rg(r4, r3)
            long r4 = r3.df()
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r0.add(r4)
            com.ss.android.downloadlib.addownload.df.pt.rg(r3)
            goto L11
        Lc7:
            long r4 = r3.bj()
            long r4 = r1 - r4
            int r7 = r3.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r7 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r7)
            java.lang.String r8 = "finish_event_expire_hours"
            int r6 = r7.optInt(r8, r6)
            int r6 = r6 * 60
            int r6 = r6 * 60
            int r6 = r6 * 1000
            long r6 = (long) r6
            int r4 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r4 < 0) goto Lf3
            long r3 = r3.df()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0.add(r3)
            goto L11
        Lf3:
            java.lang.String r4 = r3.pp()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L11
            long r3 = r3.df()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0.add(r3)
            goto L11
        L10a:
            long r3 = r3.df()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0.add(r3)
            goto L11
        L117:
            com.ss.android.downloadlib.addownload.model.c r10 = com.ss.android.downloadlib.addownload.model.c.rg()
            r10.rg(r0)
            return
    }

    synchronized void df() {
            r1 = this;
            monitor-enter(r1)
            com.ss.android.downloadlib.rg$df r0 = r1.q     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto Lb
            com.ss.android.downloadlib.rg.df.rg(r0)     // Catch: java.lang.Throwable -> Ld
            r0 = 0
            r1.q = r0     // Catch: java.lang.Throwable -> Ld
        Lb:
            monitor-exit(r1)
            return
        Ld:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public void df(com.ss.android.socialbase.downloader.model.DownloadInfo r4, com.ss.android.downloadad.api.rg.df r5) {
            r3 = this;
            if (r4 == 0) goto L2e
            if (r5 != 0) goto L5
            goto L2e
        L5:
            int r0 = r4.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 1
            java.lang.String r2 = "install_finish_check_ttmd5"
            int r0 = r0.optInt(r2, r1)
            if (r0 != 0) goto L17
            return
        L17:
            java.lang.String r4 = r4.getTargetFilePath()
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L22
            return
        L22:
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.rg$3 r1 = new com.ss.android.downloadlib.rg$3
            r1.<init>(r3, r4, r5)
            r0.df(r1)
        L2e:
            return
    }

    @Override
    public void onAppBackground() {
            r2 = this;
            java.lang.String r0 = com.ss.android.downloadlib.rg.rg
            java.lang.String r1 = "onAppBackground()"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            r0 = 6
            r2.rg(r0)
            return
    }

    @Override
    public void onAppForeground() {
            r2 = this;
            java.lang.String r0 = com.ss.android.downloadlib.rg.rg
            java.lang.String r1 = "onAppForeground()"
            com.ss.android.socialbase.downloader.logger.Logger.d(r0, r1)
            r2.df()
            r0 = 5
            r2.rg(r0)
            return
    }

    @Override
    public void onOpenInstaller(com.ss.android.socialbase.downloader.model.DownloadInfo r3, java.lang.String r4) {
            r2 = this;
            if (r3 != 0) goto Lc
            com.ss.android.downloadlib.exception.q r3 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r4 = "info is null"
            r3.rg(r4)
            return
        Lc:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r4 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r3)
            java.lang.String r0 = "check_applink_mode"
            int r4 = r4.optInt(r0)
            r4 = r4 & 2
            if (r4 == 0) goto L32
            java.util.concurrent.ConcurrentHashMap r4 = r3.getTempCacheData()
            java.lang.String r0 = "ah_ext_json"
            java.lang.Object r4 = r4.get(r0)
            org.json.JSONObject r4 = (org.json.JSONObject) r4
            com.ss.android.downloadlib.df.pp r0 = com.ss.android.downloadlib.df.pp.rg()
            com.ss.android.downloadlib.rg$4 r1 = new com.ss.android.downloadlib.rg$4
            r1.<init>(r2, r3, r4)
            r0.df(r1)
        L32:
            return
    }

    @Override
    public void rg(int r9) {
            r8 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r8.df
            long r2 = r0 - r2
            r4 = 120000(0x1d4c0, double:5.9288E-319)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L10
            return
        L10:
            com.ss.android.downloadlib.pt r2 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.rg$rg r3 = new com.ss.android.downloadlib.rg$rg
            r3.<init>(r8, r9)
            long r4 = r8.df
            r6 = 0
            int r9 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r9 <= 0) goto L24
            r4 = 2000(0x7d0, double:9.88E-321)
            goto L26
        L24:
            r4 = 8000(0x1f40, double:3.9525E-320)
        L26:
            r2.rg(r3, r4)
            r8.df = r0
            return
    }

    public void rg(long r6) {
            r5 = this;
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()     // Catch: java.lang.Throwable -> L7c
            com.ss.android.downloadad.api.rg.df r6 = r0.pt(r6)     // Catch: java.lang.Throwable -> L7c
            if (r6 == 0) goto L7b
            boolean r7 = com.ss.android.downloadlib.utils.b.df(r6)     // Catch: java.lang.Throwable -> L7c
            if (r7 != 0) goto L7b
            java.util.concurrent.atomic.AtomicBoolean r7 = r6.q     // Catch: java.lang.Throwable -> L7c
            boolean r7 = r7.get()     // Catch: java.lang.Throwable -> L7c
            if (r7 == 0) goto L19
            goto L7b
        L19:
            com.ss.android.downloadlib.addownload.model.pt r7 = com.ss.android.downloadlib.addownload.model.pt.rg()     // Catch: java.lang.Throwable -> L7c
            android.util.Pair r7 = r7.df(r6)     // Catch: java.lang.Throwable -> L7c
            r0 = -1
            if (r7 == 0) goto L31
            java.lang.Object r1 = r7.first     // Catch: java.lang.Throwable -> L7c
            com.ss.android.downloadlib.addownload.model.pt$rg r1 = (com.ss.android.downloadlib.addownload.model.pt.rg) r1     // Catch: java.lang.Throwable -> L7c
            java.lang.Object r7 = r7.second     // Catch: java.lang.Throwable -> L7c
            java.lang.Integer r7 = (java.lang.Integer) r7     // Catch: java.lang.Throwable -> L7c
            int r7 = r7.intValue()     // Catch: java.lang.Throwable -> L7c
            goto L3a
        L31:
            com.ss.android.downloadlib.addownload.model.pt r7 = com.ss.android.downloadlib.addownload.model.pt.rg()     // Catch: java.lang.Throwable -> L7c
            com.ss.android.downloadlib.addownload.model.pt$rg r1 = r7.rg(r6)     // Catch: java.lang.Throwable -> L7c
            r7 = r0
        L3a:
            if (r1 != 0) goto L3d
            return
        L3d:
            com.ss.android.downloadlib.addownload.model.pt r2 = com.ss.android.downloadlib.addownload.model.pt.rg()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r3 = r1.rg     // Catch: java.lang.Throwable -> L7c
            r2.df(r3)     // Catch: java.lang.Throwable -> L7c
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L7c
            r2.<init>()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r3 = "installed_app_name"
            java.lang.String r4 = r1.pt     // Catch: java.lang.Throwable -> L7c
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L7c
            java.lang.String r3 = "installed_pkg_name"
            java.lang.String r1 = r1.rg     // Catch: java.lang.Throwable -> L7c
            r2.put(r3, r1)     // Catch: java.lang.Throwable -> L7c
            if (r7 == r0) goto L71
            java.lang.String r0 = "error_code"
            r2.put(r0, r7)     // Catch: java.lang.Throwable -> L7c
            int r7 = r6.qx()     // Catch: java.lang.Throwable -> L7c
            com.ss.android.downloadlib.utils.pp.rg(r2, r7)     // Catch: java.lang.Throwable -> L7c
            com.ss.android.downloadlib.event.AdEventHandler r7 = com.ss.android.downloadlib.event.AdEventHandler.rg()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r0 = "install_finish_hijack"
            r7.df(r0, r2, r6)     // Catch: java.lang.Throwable -> L7c
            goto L86
        L71:
            com.ss.android.downloadlib.event.AdEventHandler r7 = com.ss.android.downloadlib.event.AdEventHandler.rg()     // Catch: java.lang.Throwable -> L7c
            java.lang.String r0 = "install_finish_may_hijack"
            r7.df(r0, r2, r6)     // Catch: java.lang.Throwable -> L7c
            goto L86
        L7b:
            return
        L7c:
            r6 = move-exception
            com.ss.android.downloadlib.exception.q r7 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r0 = "trySendInstallFinishHijack"
            r7.rg(r6, r0)
        L86:
            return
    }

    public void rg(long r5, int r7) {
            r4 = this;
            com.ss.android.socialbase.downloader.setting.DownloadSetting r7 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r7)
            java.lang.String r0 = "check_install_finish_hijack_delay_time"
            r1 = 900000(0xdbba0, double:4.44659E-318)
            long r0 = r7.optLong(r0, r1)
            r2 = 0
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 >= 0) goto L14
            return
        L14:
            r2 = 300000(0x493e0, double:1.482197E-318)
            long r0 = java.lang.Math.max(r0, r2)
            com.ss.android.downloadlib.pt r7 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.rg$2 r2 = new com.ss.android.downloadlib.rg$2
            r2.<init>(r4, r5)
            r7.rg(r2, r0)
            return
    }

    public void rg(com.ss.android.downloadad.api.rg.df r3) {
            r2 = this;
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.rg$q r1 = new com.ss.android.downloadlib.rg$q
            r1.<init>(r2, r3)
            r0.rg(r1)
            return
    }

    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r11, long r12, long r14, long r16, long r18, long r20, boolean r22) {
            r10 = this;
            r0 = r11
            r1 = r12
            com.ss.android.downloadlib.addownload.model.c r3 = com.ss.android.downloadlib.addownload.model.c.rg()
            com.ss.android.downloadad.api.rg.df r3 = r3.rg(r11)
            if (r3 != 0) goto L16
            com.ss.android.downloadlib.exception.q r0 = com.ss.android.downloadlib.exception.q.rg()
            java.lang.String r1 = "trySendClearSpaceEvent nativeModel null"
            r0.rg(r1)
            return
        L16:
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L78
            r4.<init>()     // Catch: java.lang.Exception -> L78
            java.lang.String r5 = "space_before"
            double r6 = (double) r1     // Catch: java.lang.Exception -> L78
            r8 = 4697254411347427328(0x4130000000000000, double:1048576.0)
            double r6 = r6 / r8
            java.lang.Double r6 = java.lang.Double.valueOf(r6)     // Catch: java.lang.Exception -> L78
            r4.putOpt(r5, r6)     // Catch: java.lang.Exception -> L78
            java.lang.String r5 = "space_cleaned"
            long r1 = r14 - r1
            double r1 = (double) r1     // Catch: java.lang.Exception -> L78
            double r1 = r1 / r8
            java.lang.Double r1 = java.lang.Double.valueOf(r1)     // Catch: java.lang.Exception -> L78
            r4.putOpt(r5, r1)     // Catch: java.lang.Exception -> L78
            java.lang.String r1 = "clean_up_time_cost"
            java.lang.Long r2 = java.lang.Long.valueOf(r18)     // Catch: java.lang.Exception -> L78
            r4.putOpt(r1, r2)     // Catch: java.lang.Exception -> L78
            java.lang.String r1 = "is_download_restarted"
            if (r22 == 0) goto L44
            r2 = 1
            goto L45
        L44:
            r2 = 0
        L45:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Exception -> L78
            r4.putOpt(r1, r2)     // Catch: java.lang.Exception -> L78
            java.lang.String r1 = "byte_required"
            java.lang.Long r2 = java.lang.Long.valueOf(r16)     // Catch: java.lang.Exception -> L78
            r4.putOpt(r1, r2)     // Catch: java.lang.Exception -> L78
            java.lang.String r1 = "byte_required_after"
            long r5 = r16 - r14
            double r5 = (double) r5     // Catch: java.lang.Exception -> L78
            double r5 = r5 / r8
            java.lang.Double r2 = java.lang.Double.valueOf(r5)     // Catch: java.lang.Exception -> L78
            r4.putOpt(r1, r2)     // Catch: java.lang.Exception -> L78
            java.lang.String r1 = "clear_sleep_time"
            java.lang.Long r2 = java.lang.Long.valueOf(r20)     // Catch: java.lang.Exception -> L78
            r4.putOpt(r1, r2)     // Catch: java.lang.Exception -> L78
            com.ss.android.downloadlib.utils.pp.q(r11, r4)     // Catch: java.lang.Exception -> L78
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()     // Catch: java.lang.Exception -> L78
            java.lang.String r1 = "cleanup"
            r0.rg(r1, r4, r3)     // Catch: java.lang.Exception -> L78
            goto L7c
        L78:
            r0 = move-exception
            r0.printStackTrace()
        L7c:
            return
    }

    void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r12, com.ss.android.downloadad.api.rg.df r13, int r14) {
            r11 = this;
            if (r12 == 0) goto L63
            if (r13 != 0) goto L5
            goto L63
        L5:
            r11.df()
            long r4 = java.lang.System.currentTimeMillis()
            r13.df(r4)
            java.io.File r0 = android.os.Environment.getDataDirectory()
            r1 = -1
            long r0 = com.ss.android.downloadlib.utils.b.rg(r0, r1)
            r13.fw(r0)
            r0 = 2000(0x7d0, float:2.803E-42)
            if (r14 == r0) goto L24
            r0 = 2000(0x7d0, double:9.88E-321)
        L22:
            r8 = r0
            goto L43
        L24:
            int r0 = r12.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 120000(0x1d4c0, double:5.9288E-319)
            java.lang.String r3 = "check_install_failed_delay_time"
            long r0 = r0.optLong(r3, r1)
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 >= 0) goto L3c
            return
        L3c:
            r2 = 30000(0x7530, double:1.4822E-319)
            long r0 = java.lang.Math.max(r0, r2)
            goto L22
        L43:
            com.ss.android.downloadlib.rg$df r10 = new com.ss.android.downloadlib.rg$df
            long r1 = r13.df()
            int r3 = r12.getId()
            r7 = 0
            r0 = r10
            r6 = r14
            r0.<init>(r1, r3, r4, r6, r7)
            com.ss.android.downloadlib.pt r12 = com.ss.android.downloadlib.pt.rg()
            r12.rg(r10, r8)
            r11.q = r10
            com.ss.android.downloadlib.addownload.model.ux r12 = com.ss.android.downloadlib.addownload.model.ux.rg()
            r12.rg(r13)
        L63:
            return
    }

    @Override
    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r4, com.ss.android.socialbase.appdownloader.rg r5) {
            r3 = this;
            if (r4 == 0) goto L31
            if (r5 != 0) goto L5
            goto L31
        L5:
            int r0 = r4.getId()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            java.lang.String r1 = "ah_report_config"
            org.json.JSONArray r0 = r0.optJSONArray(r1)
            int r1 = r5.df
            if (r1 == 0) goto L20
            java.util.concurrent.ConcurrentHashMap r1 = r4.getTempCacheData()
            java.lang.String r2 = "intent"
            r1.remove(r2)
        L20:
            if (r0 == 0) goto L31
            org.json.JSONObject r5 = r3.df(r4, r5)
            if (r5 == 0) goto L31
            java.util.concurrent.ConcurrentHashMap r4 = r4.getTempCacheData()
            java.lang.String r0 = "ah_ext_json"
            r4.put(r0, r5)
        L31:
            return
    }

    public synchronized void rg(java.lang.String r7) {
            r6 = this;
            monitor-enter(r6)
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Throwable -> Lce
            if (r0 == 0) goto L9
            monitor-exit(r6)
            return
        L9:
            boolean r0 = com.ss.android.downloadlib.utils.b.rg()     // Catch: java.lang.Throwable -> Lce
            if (r0 != 0) goto Lc6
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()     // Catch: java.lang.Throwable -> Lce
            com.ss.android.downloadad.api.rg.df r0 = r0.rg(r7)     // Catch: java.lang.Throwable -> Lce
            if (r0 != 0) goto L22
            com.ss.android.downloadlib.addownload.model.pt r0 = com.ss.android.downloadlib.addownload.model.pt.rg()     // Catch: java.lang.Throwable -> Lce
            r0.rg(r7)     // Catch: java.lang.Throwable -> Lce
            monitor-exit(r6)
            return
        L22:
            com.ss.android.downloadlib.fw r1 = com.ss.android.downloadlib.fw.rg()     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = r0.rg()     // Catch: java.lang.Throwable -> Lce
            com.ss.android.downloadlib.addownload.pp r1 = r1.rg(r2)     // Catch: java.lang.Throwable -> Lce
            if (r1 == 0) goto L33
            r1.c()     // Catch: java.lang.Throwable -> Lce
        L33:
            java.util.concurrent.atomic.AtomicBoolean r1 = r0.q     // Catch: java.lang.Throwable -> Lce
            boolean r1 = r1.get()     // Catch: java.lang.Throwable -> Lce
            if (r1 == 0) goto L3d
            monitor-exit(r6)
            return
        L3d:
            int r1 = r0.qx()     // Catch: java.lang.Throwable -> Lce
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)     // Catch: java.lang.Throwable -> Lce
            java.lang.String r2 = "notification_opt_2"
            int r1 = r1.optInt(r2)     // Catch: java.lang.Throwable -> Lce
            r2 = 1
            if (r1 != r2) goto L59
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r1 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()     // Catch: java.lang.Throwable -> Lce
            int r3 = r0.qx()     // Catch: java.lang.Throwable -> Lce
            r1.cancelNotification(r3)     // Catch: java.lang.Throwable -> Lce
        L59:
            com.ss.android.downloadlib.df.df r1 = new com.ss.android.downloadlib.df.df     // Catch: java.lang.Throwable -> Lce
            r1.<init>()     // Catch: java.lang.Throwable -> Lce
            com.ss.android.socialbase.downloader.setting.DownloadSetting r3 = com.ss.android.downloadlib.utils.pt.rg(r0)     // Catch: java.lang.Throwable -> Lce
            java.lang.String r4 = "try_applink_delay_after_installed"
            r5 = 0
            int r3 = r3.optInt(r4, r5)     // Catch: java.lang.Throwable -> Lce
            com.ss.android.downloadlib.rg$1 r4 = new com.ss.android.downloadlib.rg$1     // Catch: java.lang.Throwable -> Lce
            r4.<init>(r6, r0, r7)     // Catch: java.lang.Throwable -> Lce
            r1.rg(r0, r4, r3)     // Catch: java.lang.Throwable -> Lce
            com.ss.android.downloadlib.q.ux r1 = com.ss.android.downloadlib.q.ux.rg()     // Catch: java.lang.Throwable -> Lce
            r1.c(r0)     // Catch: java.lang.Throwable -> Lce
            r6.rg(r7, r0)     // Catch: java.lang.Throwable -> Lce
            com.ss.android.downloadlib.addownload.rg.rg r0 = com.ss.android.downloadlib.addownload.rg.rg.rg()     // Catch: java.lang.Throwable -> Lce
            r0.df(r7)     // Catch: java.lang.Throwable -> Lce
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()     // Catch: java.lang.Throwable -> Lce
            com.ss.android.socialbase.downloader.downloader.Downloader r0 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)     // Catch: java.lang.Throwable -> Lce
            java.lang.String r1 = "application/vnd.android.package-archive"
            java.util.List r0 = r0.getSuccessedDownloadInfosWithMimeType(r1)     // Catch: java.lang.Throwable -> Lce
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = rg(r0, r7)     // Catch: java.lang.Throwable -> Lce
            if (r0 == 0) goto Lbc
            int r1 = r0.getId()     // Catch: java.lang.Throwable -> Lce
            com.ss.android.socialbase.downloader.setting.DownloadSetting r1 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r1)     // Catch: java.lang.Throwable -> Lce
            java.lang.String r3 = "no_hide_notification"
            int r1 = r1.optInt(r3)     // Catch: java.lang.Throwable -> Lce
            if (r1 == r2) goto Lb1
            com.ss.android.socialbase.downloader.notification.DownloadNotificationManager r1 = com.ss.android.socialbase.downloader.notification.DownloadNotificationManager.getInstance()     // Catch: java.lang.Throwable -> Lce
            int r2 = r0.getId()     // Catch: java.lang.Throwable -> Lce
            r1.hideNotification(r2)     // Catch: java.lang.Throwable -> Lce
        Lb1:
            com.ss.android.downloadlib.fw r1 = com.ss.android.downloadlib.fw.rg()     // Catch: java.lang.Throwable -> Lce
            r1.df(r0, r7)     // Catch: java.lang.Throwable -> Lce
            com.ss.android.downloadlib.addownload.df.pt.rg(r0)     // Catch: java.lang.Throwable -> Lce
            goto Lc4
        Lbc:
            com.ss.android.downloadlib.fw r0 = com.ss.android.downloadlib.fw.rg()     // Catch: java.lang.Throwable -> Lce
            r1 = 0
            r0.df(r1, r7)     // Catch: java.lang.Throwable -> Lce
        Lc4:
            monitor-exit(r6)
            return
        Lc6:
            java.lang.RuntimeException r7 = new java.lang.RuntimeException     // Catch: java.lang.Throwable -> Lce
            java.lang.String r0 = "handleAppInstalled in main thread."
            r7.<init>(r0)     // Catch: java.lang.Throwable -> Lce
            throw r7     // Catch: java.lang.Throwable -> Lce
        Lce:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public void rg(java.lang.String r4, com.ss.android.downloadad.api.rg.df r5) {
            r3 = this;
            if (r5 != 0) goto L3
            return
        L3:
            boolean r0 = com.ss.android.downloadlib.utils.b.df(r5)
            if (r0 != 0) goto La
            return
        La:
            java.util.concurrent.atomic.AtomicBoolean r0 = r5.q
            r1 = 0
            r2 = 1
            boolean r0 = r0.compareAndSet(r1, r2)
            if (r0 == 0) goto L35
            int r0 = r5.ev()
            r1 = 4
            if (r0 != r1) goto L1c
            goto L1d
        L1c:
            r1 = 3
        L1d:
            org.json.JSONObject r4 = r3.rg(r5, r4, r1)
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            java.lang.String r1 = r5.bm()
            java.lang.String r2 = "install_finish"
            r0.rg(r1, r2, r4, r5)
            com.ss.android.downloadlib.addownload.model.ux r4 = com.ss.android.downloadlib.addownload.model.ux.rg()
            r4.rg(r5)
        L35:
            return
    }
}
