package com.ss.android.downloadlib.addownload.q;

public class c {
    private static com.ss.android.downloadlib.addownload.q.c rg;
    private java.util.List<com.ss.android.downloadlib.addownload.q.pt> df;

    private c() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.df = r0
            com.ss.android.downloadlib.addownload.q.pp r1 = new com.ss.android.downloadlib.addownload.q.pp
            r1.<init>()
            r0.add(r1)
            java.util.List<com.ss.android.downloadlib.addownload.q.pt> r0 = r2.df
            com.ss.android.downloadlib.addownload.q.fw r1 = new com.ss.android.downloadlib.addownload.q.fw
            r1.<init>()
            r0.add(r1)
            java.util.List<com.ss.android.downloadlib.addownload.q.pt> r0 = r2.df
            com.ss.android.downloadlib.addownload.q.df r1 = new com.ss.android.downloadlib.addownload.q.df
            r1.<init>()
            r0.add(r1)
            java.util.List<com.ss.android.downloadlib.addownload.q.pt> r0 = r2.df
            com.ss.android.downloadlib.addownload.q.rg r1 = new com.ss.android.downloadlib.addownload.q.rg
            r1.<init>()
            r0.add(r1)
            return
    }

    public static com.ss.android.downloadlib.addownload.q.c rg() {
            com.ss.android.downloadlib.addownload.q.c r0 = com.ss.android.downloadlib.addownload.q.c.rg
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.addownload.q.c> r0 = com.ss.android.downloadlib.addownload.q.c.class
            monitor-enter(r0)
            com.ss.android.downloadlib.addownload.q.c r1 = com.ss.android.downloadlib.addownload.q.c.rg     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.addownload.q.c r1 = new com.ss.android.downloadlib.addownload.q.c     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.addownload.q.c.rg = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.addownload.q.c r0 = com.ss.android.downloadlib.addownload.q.c.rg
            return r0
    }

    public void rg(com.ss.android.downloadad.api.rg.df r5, int r6, com.ss.android.downloadlib.addownload.q.q r7) {
            r4 = this;
            java.util.List<com.ss.android.downloadlib.addownload.q.pt> r0 = r4.df
            if (r0 == 0) goto L64
            int r0 = r0.size()
            if (r0 == 0) goto L64
            if (r5 != 0) goto Ld
            goto L64
        Ld:
            r0 = 0
            com.ss.android.downloadlib.ux r0 = com.ss.android.downloadlib.ux.rg(r0)
            java.lang.String r1 = r5.rg()
            com.ss.android.socialbase.downloader.model.DownloadInfo r0 = r0.df(r1)
            if (r0 == 0) goto L60
            java.lang.String r0 = r0.getMimeType()
            java.lang.String r1 = "application/vnd.android.package-archive"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L29
            goto L60
        L29:
            int r0 = r5.qx()
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtain(r0)
            r1 = 0
            java.lang.String r2 = "pause_optimise_switch"
            int r0 = r0.optInt(r2, r1)
            r2 = 1
            if (r0 != r2) goto L3c
            r1 = r2
        L3c:
            java.util.List<com.ss.android.downloadlib.addownload.q.pt> r0 = r4.df
            java.util.Iterator r0 = r0.iterator()
        L42:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L5c
            java.lang.Object r2 = r0.next()
            com.ss.android.downloadlib.addownload.q.pt r2 = (com.ss.android.downloadlib.addownload.q.pt) r2
            if (r1 != 0) goto L55
            boolean r3 = r2 instanceof com.ss.android.downloadlib.addownload.q.fw
            if (r3 != 0) goto L55
            goto L42
        L55:
            boolean r2 = r2.rg(r5, r6, r7)
            if (r2 == 0) goto L42
            return
        L5c:
            r7.rg(r5)
            return
        L60:
            r7.rg(r5)
            return
        L64:
            r7.rg(r5)
            return
    }
}
