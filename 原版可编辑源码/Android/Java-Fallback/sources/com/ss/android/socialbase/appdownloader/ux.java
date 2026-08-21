package com.ss.android.socialbase.appdownloader;

public class ux {
    private android.os.Handler c;
    private boolean df;
    private java.lang.Runnable fw;
    private java.lang.ref.SoftReference<com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity> pp;
    private long pt;
    private long q;
    private final java.util.Queue<java.lang.Integer> rg;





    private static class rg {
        private static final com.ss.android.socialbase.appdownloader.ux rg = null;

        static {
                com.ss.android.socialbase.appdownloader.ux r0 = new com.ss.android.socialbase.appdownloader.ux
                r1 = 0
                r0.<init>(r1)
                com.ss.android.socialbase.appdownloader.ux.rg.rg = r0
                return
        }

        static com.ss.android.socialbase.appdownloader.ux rg() {
                com.ss.android.socialbase.appdownloader.ux r0 = com.ss.android.socialbase.appdownloader.ux.rg.rg
                return r0
        }
    }

    private ux() {
            r2 = this;
            r2.<init>()
            java.util.ArrayDeque r0 = new java.util.ArrayDeque
            r0.<init>()
            r2.rg = r0
            r0 = 0
            r2.df = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.c = r0
            com.ss.android.socialbase.appdownloader.ux$1 r0 = new com.ss.android.socialbase.appdownloader.ux$1
            r0.<init>(r2)
            r2.fw = r0
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            com.ss.android.socialbase.appdownloader.ux$2 r1 = new com.ss.android.socialbase.appdownloader.ux$2
            r1.<init>(r2)
            r0.registerAppSwitchListener(r1)
            return
    }

    ux(com.ss.android.socialbase.appdownloader.ux.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    private int df(android.content.Context r1, int r2, boolean r3) {
            r0 = this;
            int r1 = com.ss.android.socialbase.appdownloader.q.df(r1, r2, r3)
            r2 = 1
            if (r1 != r2) goto L9
            r0.df = r2
        L9:
            long r2 = java.lang.System.currentTimeMillis()
            r0.q = r2
            return r1
    }

    static java.util.Queue df(com.ss.android.socialbase.appdownloader.ux r0) {
            java.util.Queue<java.lang.Integer> r0 = r0.rg
            return r0
    }

    static android.os.Handler pp(com.ss.android.socialbase.appdownloader.ux r0) {
            android.os.Handler r0 = r0.c
            return r0
    }

    static java.lang.Runnable pt(com.ss.android.socialbase.appdownloader.ux r0) {
            java.lang.Runnable r0 = r0.fw
            return r0
    }

    private boolean pt() {
            r4 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r4.q
            long r0 = r0 - r2
            r2 = 1000(0x3e8, double:4.94E-321)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    static long q(com.ss.android.socialbase.appdownloader.ux r2) {
            long r0 = r2.pt
            return r0
    }

    private void q() {
            r5 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 29
            if (r0 < r1) goto L11
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            boolean r0 = r0.isAppForeground()
            if (r0 != 0) goto L11
            return
        L11:
            java.util.Queue<java.lang.Integer> r0 = r5.rg
            monitor-enter(r0)
            java.util.Queue<java.lang.Integer> r1 = r5.rg     // Catch: java.lang.Throwable -> L54
            java.lang.Object r1 = r1.poll()     // Catch: java.lang.Throwable -> L54
            java.lang.Integer r1 = (java.lang.Integer) r1     // Catch: java.lang.Throwable -> L54
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            android.os.Handler r0 = r5.c
            java.lang.Runnable r2 = r5.fw
            r0.removeCallbacks(r2)
            r0 = 0
            if (r1 == 0) goto L51
            android.content.Context r2 = com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.getAppContext()
            android.os.Looper r3 = android.os.Looper.myLooper()
            android.os.Looper r4 = android.os.Looper.getMainLooper()
            if (r3 == r4) goto L40
            android.os.Handler r0 = r5.c
            com.ss.android.socialbase.appdownloader.ux$3 r3 = new com.ss.android.socialbase.appdownloader.ux$3
            r3.<init>(r5, r2, r1)
            r0.post(r3)
            goto L47
        L40:
            int r1 = r1.intValue()
            r5.df(r2, r1, r0)
        L47:
            android.os.Handler r0 = r5.c
            java.lang.Runnable r1 = r5.fw
            r2 = 20000(0x4e20, double:9.8813E-320)
            r0.postDelayed(r1, r2)
            goto L53
        L51:
            r5.df = r0
        L53:
            return
        L54:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L54
            throw r1
    }

    static int rg(com.ss.android.socialbase.appdownloader.ux r0, android.content.Context r1, int r2, boolean r3) {
            int r0 = r0.df(r1, r2, r3)
            return r0
    }

    static long rg(com.ss.android.socialbase.appdownloader.ux r0, long r1) {
            r0.pt = r1
            return r1
    }

    public static com.ss.android.socialbase.appdownloader.ux rg() {
            com.ss.android.socialbase.appdownloader.ux r0 = com.ss.android.socialbase.appdownloader.ux.rg.rg()
            return r0
    }

    static void rg(com.ss.android.socialbase.appdownloader.ux r0) {
            r0.q()
            return
    }

    public com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity df() {
            r2 = this;
            java.lang.ref.SoftReference<com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity> r0 = r2.pp
            r1 = 0
            if (r0 != 0) goto L7
            r0 = r1
            goto Ld
        L7:
            java.lang.Object r0 = r0.get()
            com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity r0 = (com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity) r0
        Ld:
            r2.pp = r1
            return r0
    }

    public int rg(android.content.Context r5, int r6, boolean r7) {
            r4 = this;
            if (r7 == 0) goto L7
            int r5 = r4.df(r5, r6, r7)
            return r5
        L7:
            boolean r0 = r4.pt()
            r1 = 1
            if (r0 == 0) goto L1b
            android.os.Handler r0 = r4.c
            com.ss.android.socialbase.appdownloader.ux$4 r2 = new com.ss.android.socialbase.appdownloader.ux$4
            r2.<init>(r4, r5, r6, r7)
            r5 = 1000(0x3e8, double:4.94E-321)
            r0.postDelayed(r2, r5)
            return r1
        L1b:
            com.ss.android.socialbase.downloader.common.AppStatusManager r0 = com.ss.android.socialbase.downloader.common.AppStatusManager.getInstance()
            boolean r0 = r0.isAppForeground()
            if (r0 == 0) goto L31
            java.lang.String r0 = "leaves"
            java.lang.String r1 = "on Foreground"
            com.ss.android.socialbase.downloader.logger.Logger.i(r0, r1)
            int r5 = r4.df(r5, r6, r7)
            return r5
        L31:
            boolean r0 = com.ss.android.socialbase.appdownloader.df.rg()
            if (r0 == 0) goto L38
            return r1
        L38:
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 29
            if (r0 >= r2) goto L40
            r0 = r1
            goto L41
        L40:
            r0 = 0
        L41:
            java.util.Queue<java.lang.Integer> r2 = r4.rg
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L54
            boolean r2 = r4.df
            if (r2 != 0) goto L54
            if (r0 == 0) goto L54
            int r5 = r4.df(r5, r6, r7)
            return r5
        L54:
            com.ss.android.socialbase.downloader.setting.DownloadSetting r5 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            r7 = 3
            java.lang.String r2 = "install_queue_size"
            int r5 = r5.optInt(r2, r7)
            java.util.Queue<java.lang.Integer> r7 = r4.rg
            monitor-enter(r7)
        L62:
            java.util.Queue<java.lang.Integer> r2 = r4.rg     // Catch: java.lang.Throwable -> Laa
            int r2 = r2.size()     // Catch: java.lang.Throwable -> Laa
            if (r2 <= r5) goto L70
            java.util.Queue<java.lang.Integer> r2 = r4.rg     // Catch: java.lang.Throwable -> Laa
            r2.poll()     // Catch: java.lang.Throwable -> Laa
            goto L62
        L70:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Laa
            if (r0 == 0) goto L8d
            android.os.Handler r5 = r4.c
            java.lang.Runnable r7 = r4.fw
            r5.removeCallbacks(r7)
            com.ss.android.socialbase.downloader.setting.DownloadSetting r5 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r6)
            r2 = 20000(0x4e20, double:9.8813E-320)
            java.lang.String r7 = "install_queue_timeout"
            long r2 = r5.optLong(r7, r2)
            android.os.Handler r5 = r4.c
            java.lang.Runnable r7 = r4.fw
            r5.postDelayed(r7, r2)
        L8d:
            java.util.Queue<java.lang.Integer> r5 = r4.rg
            monitor-enter(r5)
            java.util.Queue<java.lang.Integer> r7 = r4.rg     // Catch: java.lang.Throwable -> La7
            java.lang.Integer r0 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> La7
            boolean r7 = r7.contains(r0)     // Catch: java.lang.Throwable -> La7
            if (r7 != 0) goto La5
            java.util.Queue<java.lang.Integer> r7 = r4.rg     // Catch: java.lang.Throwable -> La7
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Throwable -> La7
            r7.offer(r6)     // Catch: java.lang.Throwable -> La7
        La5:
            monitor-exit(r5)     // Catch: java.lang.Throwable -> La7
            return r1
        La7:
            r6 = move-exception
            monitor-exit(r5)     // Catch: java.lang.Throwable -> La7
            throw r6
        Laa:
            r5 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> Laa
            throw r5
    }

    public void rg(com.ss.android.socialbase.appdownloader.view.JumpUnknownSourceActivity r2) {
            r1 = this;
            java.lang.ref.SoftReference r0 = new java.lang.ref.SoftReference
            r0.<init>(r2)
            r1.pp = r0
            return
    }

    void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r1, java.lang.String r2) {
            r0 = this;
            if (r1 == 0) goto Lb
            boolean r1 = android.text.TextUtils.isEmpty(r2)
            if (r1 != 0) goto Lb
            r0.q()
        Lb:
            return
    }
}
