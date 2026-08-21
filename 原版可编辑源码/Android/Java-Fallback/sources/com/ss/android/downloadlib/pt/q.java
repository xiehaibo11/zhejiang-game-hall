package com.ss.android.downloadlib.pt;

public class q implements com.ss.android.socialbase.appdownloader.q.bm {
    private static volatile com.ss.android.downloadlib.pt.q rg;
    private java.util.List<com.ss.android.socialbase.appdownloader.q.bm> df;


    private q() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.df = r0
            com.ss.android.downloadlib.pt.df r1 = new com.ss.android.downloadlib.pt.df
            r1.<init>()
            r0.add(r1)
            java.util.List<com.ss.android.socialbase.appdownloader.q.bm> r0 = r2.df
            com.ss.android.downloadlib.pt.rg r1 = new com.ss.android.downloadlib.pt.rg
            r1.<init>()
            r0.add(r1)
            return
    }

    public static com.ss.android.downloadlib.pt.q rg() {
            com.ss.android.downloadlib.pt.q r0 = com.ss.android.downloadlib.pt.q.rg
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.pt.q> r0 = com.ss.android.downloadlib.pt.q.class
            monitor-enter(r0)
            com.ss.android.downloadlib.pt.q r1 = com.ss.android.downloadlib.pt.q.rg     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.pt.q r1 = new com.ss.android.downloadlib.pt.q     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.pt.q.rg = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.pt.q r0 = com.ss.android.downloadlib.pt.q.rg
            return r0
    }

    static void rg(com.ss.android.downloadlib.pt.q r0, com.ss.android.socialbase.downloader.model.DownloadInfo r1, int r2, com.ss.android.socialbase.appdownloader.q.rz r3) {
            r0.rg(r1, r2, r3)
            return
    }

    private void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r3, int r4, com.ss.android.socialbase.appdownloader.q.rz r5) {
            r2 = this;
            java.util.List<com.ss.android.socialbase.appdownloader.q.bm> r0 = r2.df
            int r0 = r0.size()
            if (r4 == r0) goto L1c
            if (r4 >= 0) goto Lb
            goto L1c
        Lb:
            java.util.List<com.ss.android.socialbase.appdownloader.q.bm> r0 = r2.df
            java.lang.Object r0 = r0.get(r4)
            com.ss.android.socialbase.appdownloader.q.bm r0 = (com.ss.android.socialbase.appdownloader.q.bm) r0
            com.ss.android.downloadlib.pt.q$1 r1 = new com.ss.android.downloadlib.pt.q$1
            r1.<init>(r2, r4, r3, r5)
            r0.rg(r3, r1)
            return
        L1c:
            r5.rg()
            return
    }

    @Override
    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r2, com.ss.android.socialbase.appdownloader.q.rz r3) {
            r1 = this;
            if (r2 == 0) goto L10
            java.util.List<com.ss.android.socialbase.appdownloader.q.bm> r0 = r1.df
            int r0 = r0.size()
            if (r0 != 0) goto Lb
            goto L10
        Lb:
            r0 = 0
            r1.rg(r2, r0, r3)
            return
        L10:
            if (r3 == 0) goto L15
            r3.rg()
        L15:
            return
    }
}
