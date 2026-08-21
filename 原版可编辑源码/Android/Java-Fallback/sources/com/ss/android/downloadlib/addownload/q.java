package com.ss.android.downloadlib.addownload;

public class q {
    private static volatile com.ss.android.downloadlib.addownload.q df;
    private static java.lang.String rg;
    private java.util.concurrent.ConcurrentHashMap<java.lang.Long, java.lang.Runnable> q;


    static {
            java.lang.Class<com.ss.android.downloadlib.addownload.q> r0 = com.ss.android.downloadlib.addownload.q.class
            java.lang.String r0 = r0.getSimpleName()
            com.ss.android.downloadlib.addownload.q.rg = r0
            return
    }

    public q() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.q = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.q = r0
            return
    }

    public static com.ss.android.downloadlib.addownload.q rg() {
            com.ss.android.downloadlib.addownload.q r0 = com.ss.android.downloadlib.addownload.q.df
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.addownload.q> r0 = com.ss.android.downloadlib.addownload.q.class
            monitor-enter(r0)
            com.ss.android.downloadlib.addownload.q r1 = com.ss.android.downloadlib.addownload.q.df     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.addownload.q r1 = new com.ss.android.downloadlib.addownload.q     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.addownload.q.df = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.addownload.q r0 = com.ss.android.downloadlib.addownload.q.df
            return r0
    }

    private void rg(long r9, boolean r11, int r12) {
            r8 = this;
            com.ss.android.downloadlib.event.AdEventHandler r0 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            r0.rg(r9, r11, r12)
            if (r11 == 0) goto L16
            com.ss.android.download.api.config.qx r1 = com.ss.android.downloadlib.addownload.bm.n()
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 3
            r1.rg(r2, r3, r4, r5, r6, r7)
        L16:
            return
    }

    public static boolean rg(com.ss.android.socialbase.downloader.model.DownloadInfo r1) {
            if (r1 == 0) goto L12
            int r0 = r1.getStatus()
            if (r0 == 0) goto L12
            int r1 = r1.getStatus()
            r0 = -4
            if (r1 != r0) goto L10
            goto L12
        L10:
            r1 = 0
            return r1
        L12:
            r1 = 1
            return r1
    }

    public long df() {
            r4 = this;
            org.json.JSONObject r0 = com.ss.android.downloadlib.addownload.bm.rz()
            java.lang.String r1 = "quick_app_check_internal"
            r2 = 1200(0x4b0, double:5.93E-321)
            long r0 = r0.optLong(r1, r2)
            return r0
    }

    public void rg(com.ss.android.downloadlib.addownload.pp r3, int r4, com.ss.android.download.api.download.DownloadModel r5) {
            r2 = this;
            com.ss.android.downloadlib.df.pp r0 = com.ss.android.downloadlib.df.pp.rg()
            com.ss.android.downloadlib.addownload.q$1 r1 = new com.ss.android.downloadlib.addownload.q$1
            r1.<init>(r2, r3, r4, r5)
            long r3 = r2.df()
            r0.rg(r1, r3)
            return
    }

    public void rg(com.ss.android.downloadlib.addownload.pp r5, boolean r6, int r7, com.ss.android.download.api.download.DownloadModel r8) {
            r4 = this;
            boolean r0 = r8 instanceof com.ss.android.downloadad.api.download.AdDownloadModel
            if (r0 == 0) goto Lb
            r0 = r8
            com.ss.android.downloadad.api.download.AdDownloadModel r0 = (com.ss.android.downloadad.api.download.AdDownloadModel) r0
            r1 = 3
            r0.setFunnelType(r1)
        Lb:
            long r0 = r8.getId()
            r8 = 4
            r2 = 0
            r3 = 1
            if (r7 == r8) goto L52
            r8 = 5
            if (r7 == r8) goto L45
            r5 = 7
            if (r7 == r5) goto L1b
            goto L5f
        L1b:
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, java.lang.Runnable> r5 = r4.q
            java.lang.Long r7 = java.lang.Long.valueOf(r0)
            java.lang.Object r5 = r5.remove(r7)
            java.lang.Runnable r5 = (java.lang.Runnable) r5
            if (r6 == 0) goto L34
            com.ss.android.downloadlib.event.AdEventHandler r5 = com.ss.android.downloadlib.event.AdEventHandler.rg()
            r5.rg(r0, r3)
            r4.rg(r0, r3, r3)
            goto L5f
        L34:
            if (r5 == 0) goto L41
            com.ss.android.downloadlib.fw r6 = com.ss.android.downloadlib.fw.rg()
            android.os.Handler r6 = r6.df()
            r6.post(r5)
        L41:
            r4.rg(r0, r2, r3)
            goto L5f
        L45:
            if (r6 != 0) goto L4e
            r4.rg(r0, r2, r3)
            r5.q(r2)
            goto L5f
        L4e:
            r4.rg(r0, r3, r3)
            goto L5f
        L52:
            r7 = 2
            if (r6 != 0) goto L5c
            r4.rg(r0, r2, r7)
            r5.df(r2)
            goto L5f
        L5c:
            r4.rg(r0, r3, r7)
        L5f:
            return
    }
}
