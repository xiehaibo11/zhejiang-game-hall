package com.ss.android.downloadlib;

public class ux {
    private static volatile com.ss.android.downloadlib.ux rg;
    private long c;
    private final com.ss.android.download.api.rg df;
    private com.ss.android.downloadad.api.df pp;
    private final com.ss.android.downloadad.api.rg pt;
    private final com.ss.android.downloadlib.fw q;








    private ux(android.content.Context r3) {
            r2 = this;
            r2.<init>()
            com.ss.android.downloadlib.fw r0 = com.ss.android.downloadlib.fw.rg()
            r2.q = r0
            com.ss.android.downloadlib.pp r0 = new com.ss.android.downloadlib.pp
            r0.<init>()
            r2.df = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.c = r0
            r2.df(r3)
            com.ss.android.downloadlib.rg r3 = com.ss.android.downloadlib.rg.rg()
            r2.pt = r3
            return
    }

    ux(android.content.Context r1, com.ss.android.downloadlib.ux.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static com.ss.android.downloadlib.fw df(com.ss.android.downloadlib.ux r0) {
            com.ss.android.downloadlib.fw r0 = r0.ux()
            return r0
    }

    private void df(android.content.Context r8) {
            r7 = this;
            com.ss.android.downloadlib.addownload.bm.rg(r8)
            android.content.Context r0 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r0)
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg()
            r0.df()
            com.ss.android.socialbase.appdownloader.pt r1 = com.ss.android.socialbase.appdownloader.pt.bm()
            android.content.Context r2 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.downloadlib.q.fw r4 = new com.ss.android.downloadlib.q.fw
            r4.<init>()
            com.ss.android.downloadlib.q.c r5 = new com.ss.android.downloadlib.q.c
            r5.<init>(r8)
            com.ss.android.downloadlib.q r6 = new com.ss.android.downloadlib.q
            r6.<init>()
            java.lang.String r3 = "misc_config"
            r1.rg(r2, r3, r4, r5, r6)
            com.ss.android.downloadlib.q.pt r0 = new com.ss.android.downloadlib.q.pt
            r0.<init>()
            com.ss.android.socialbase.appdownloader.pt r1 = com.ss.android.socialbase.appdownloader.pt.bm()
            r1.rg(r0)
            com.ss.android.socialbase.downloader.downloader.Downloader r8 = com.ss.android.socialbase.downloader.downloader.Downloader.getInstance(r8)
            r8.registerDownloadCacheSyncListener(r0)
            com.ss.android.socialbase.appdownloader.pt r8 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.downloadlib.addownload.b r0 = new com.ss.android.downloadlib.addownload.b
            r0.<init>()
            r8.rg(r0)
            com.ss.android.downloadlib.q.pp r8 = new com.ss.android.downloadlib.q.pp
            r8.<init>()
            com.ss.android.socialbase.downloader.downloader.DownloadComponentManager.setDownloadEventListener(r8)
            com.ss.android.socialbase.appdownloader.pt r8 = com.ss.android.socialbase.appdownloader.pt.bm()
            com.ss.android.downloadlib.pt.q r0 = com.ss.android.downloadlib.pt.q.rg()
            r8.rg(r0)
            return
    }

    public static com.ss.android.downloadlib.ux rg(android.content.Context r2) {
            com.ss.android.downloadlib.ux r0 = com.ss.android.downloadlib.ux.rg
            if (r0 != 0) goto L18
            java.lang.Class<com.ss.android.downloadlib.ux> r0 = com.ss.android.downloadlib.ux.class
            monitor-enter(r0)
            com.ss.android.downloadlib.ux r1 = com.ss.android.downloadlib.ux.rg     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto L13
            com.ss.android.downloadlib.ux$1 r1 = new com.ss.android.downloadlib.ux$1     // Catch: java.lang.Throwable -> L15
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L15
            com.ss.android.downloadlib.exception.df.rg(r1)     // Catch: java.lang.Throwable -> L15
        L13:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            goto L18
        L15:
            r2 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L15
            throw r2
        L18:
            com.ss.android.downloadlib.ux r2 = com.ss.android.downloadlib.ux.rg
            return r2
    }

    static com.ss.android.downloadlib.ux rg(com.ss.android.downloadlib.ux r0) {
            com.ss.android.downloadlib.ux.rg = r0
            return r0
    }

    private com.ss.android.downloadlib.fw ux() {
            r1 = this;
            com.ss.android.downloadlib.fw r0 = r1.q
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = com.ss.android.downloadlib.addownload.bm.oh()
            return r0
    }

    public long df() {
            r2 = this;
            long r0 = r2.c
            return r0
    }

    public com.ss.android.socialbase.downloader.model.DownloadInfo df(java.lang.String r3) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L8
            r3 = 0
            return r3
        L8:
            com.ss.android.socialbase.appdownloader.pt r0 = com.ss.android.socialbase.appdownloader.pt.bm()
            android.content.Context r1 = com.ss.android.downloadlib.addownload.bm.getContext()
            com.ss.android.socialbase.downloader.model.DownloadInfo r3 = r0.rg(r1, r3)
            return r3
    }

    public void fw() {
            r1 = this;
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            r0.pp()
            return
    }

    public com.ss.android.downloadad.api.df pp() {
            r1 = this;
            com.ss.android.downloadad.api.df r0 = r1.pp
            if (r0 != 0) goto La
            com.ss.android.downloadlib.df r0 = com.ss.android.downloadlib.df.rg()
            r1.pp = r0
        La:
            com.ss.android.downloadad.api.df r0 = r1.pp
            return r0
    }

    public com.ss.android.downloadad.api.rg pt() {
            r1 = this;
            com.ss.android.downloadad.api.rg r0 = r1.pt
            return r0
    }

    public void q() {
            r2 = this;
            long r0 = java.lang.System.currentTimeMillis()
            r2.c = r0
            return
    }

    public com.ss.android.download.api.rg rg() {
            r1 = this;
            com.ss.android.download.api.rg r0 = r1.df
            return r0
    }

    public com.ss.android.download.api.rg rg(java.lang.String r3) {
            r2 = this;
            com.ss.android.downloadlib.c r0 = com.ss.android.downloadlib.c.rg()
            com.ss.android.download.api.config.c r0 = r0.df()
            if (r0 == 0) goto L15
            boolean r1 = r0.rg(r3)
            if (r1 == 0) goto L15
            com.ss.android.download.api.rg r3 = r0.df(r3)
            return r3
        L15:
            com.ss.android.download.api.rg r3 = r2.df
            return r3
    }

    public void rg(android.content.Context r8, int r9, com.ss.android.download.api.download.DownloadStatusChangeListener r10, com.ss.android.download.api.download.DownloadModel r11) {
            r7 = this;
            com.ss.android.downloadlib.ux$4 r6 = new com.ss.android.downloadlib.ux$4
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            com.ss.android.downloadlib.exception.df.rg(r6)
            return
    }

    public void rg(com.ss.android.download.api.download.rg.rg r2) {
            r1 = this;
            com.ss.android.downloadlib.fw r0 = r1.ux()
            r0.rg(r2)
            return
    }

    public void rg(java.lang.String r2, int r3) {
            r1 = this;
            com.ss.android.downloadlib.ux$2 r0 = new com.ss.android.downloadlib.ux$2
            r0.<init>(r1, r2, r3)
            com.ss.android.downloadlib.exception.df.rg(r0)
            return
    }

    public void rg(java.lang.String r10, long r11, int r13, com.ss.android.download.api.download.DownloadEventConfig r14, com.ss.android.download.api.download.DownloadController r15) {
            r9 = this;
            com.ss.android.downloadlib.ux$6 r8 = new com.ss.android.downloadlib.ux$6
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r5 = r13
            r6 = r14
            r7 = r15
            r0.<init>(r1, r2, r3, r5, r6, r7)
            com.ss.android.downloadlib.exception.df.rg(r8)
            return
    }

    public void rg(java.lang.String r11, long r12, int r14, com.ss.android.download.api.download.DownloadEventConfig r15, com.ss.android.download.api.download.DownloadController r16, com.ss.android.download.api.config.IDownloadButtonClickListener r17) {
            r10 = this;
            com.ss.android.downloadlib.ux$7 r9 = new com.ss.android.downloadlib.ux$7
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r5 = r14
            r6 = r15
            r7 = r16
            r8 = r17
            r0.<init>(r1, r2, r3, r5, r6, r7, r8)
            com.ss.android.downloadlib.exception.df.rg(r9)
            return
    }

    public void rg(java.lang.String r12, long r13, int r15, com.ss.android.download.api.download.DownloadEventConfig r16, com.ss.android.download.api.download.DownloadController r17, com.ss.android.download.api.config.OnItemClickListener r18, com.ss.android.download.api.config.IDownloadButtonClickListener r19) {
            r11 = this;
            com.ss.android.downloadlib.ux$5 r10 = new com.ss.android.downloadlib.ux$5
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r5 = r15
            r6 = r16
            r7 = r17
            r8 = r18
            r9 = r19
            r0.<init>(r1, r2, r3, r5, r6, r7, r8, r9)
            com.ss.android.downloadlib.exception.df.rg(r10)
            return
    }

    public void rg(java.lang.String r2, boolean r3) {
            r1 = this;
            com.ss.android.downloadlib.ux$3 r0 = new com.ss.android.downloadlib.ux$3
            r0.<init>(r1, r2, r3)
            com.ss.android.downloadlib.exception.df.rg(r0)
            return
    }
}
