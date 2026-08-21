package com.ss.android.downloadlib;

public class fw {
    private static volatile com.ss.android.downloadlib.fw rg;
    private long c;
    private final android.os.Handler df;
    private final java.util.concurrent.CopyOnWriteArrayList<java.lang.Object> pp;
    private final java.util.Map<java.lang.String, com.ss.android.downloadlib.addownload.c> pt;
    private final java.util.List<com.ss.android.downloadlib.addownload.c> q;






    static {
            return
    }

    private fw() {
            r2 = this;
            r2.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.q = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.pt = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.pp = r0
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r2.df = r0
            return
    }

    private synchronized void df(android.content.Context r3, int r4, com.ss.android.download.api.download.DownloadStatusChangeListener r5, com.ss.android.download.api.download.DownloadModel r6) {
            r2 = this;
            monitor-enter(r2)
            java.util.List<com.ss.android.downloadlib.addownload.c> r0 = r2.q     // Catch: java.lang.Throwable -> L30
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L30
            if (r0 > 0) goto Ld
            r2.q(r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L30
            goto L2e
        Ld:
            java.util.List<com.ss.android.downloadlib.addownload.c> r0 = r2.q     // Catch: java.lang.Throwable -> L30
            r1 = 0
            java.lang.Object r0 = r0.remove(r1)     // Catch: java.lang.Throwable -> L30
            com.ss.android.downloadlib.addownload.c r0 = (com.ss.android.downloadlib.addownload.c) r0     // Catch: java.lang.Throwable -> L30
            com.ss.android.downloadlib.addownload.c r3 = r0.df(r3)     // Catch: java.lang.Throwable -> L30
            com.ss.android.downloadlib.addownload.c r3 = r3.df(r4, r5)     // Catch: java.lang.Throwable -> L30
            com.ss.android.downloadlib.addownload.c r3 = r3.df(r6)     // Catch: java.lang.Throwable -> L30
            r3.rg()     // Catch: java.lang.Throwable -> L30
            java.util.Map<java.lang.String, com.ss.android.downloadlib.addownload.c> r3 = r2.pt     // Catch: java.lang.Throwable -> L30
            java.lang.String r4 = r6.getDownloadUrl()     // Catch: java.lang.Throwable -> L30
            r3.put(r4, r0)     // Catch: java.lang.Throwable -> L30
        L2e:
            monitor-exit(r2)
            return
        L30:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    private void pt() {
            r9 = this;
            long r0 = java.lang.System.currentTimeMillis()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            java.util.List<com.ss.android.downloadlib.addownload.c> r3 = r9.q
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L36
            java.lang.Object r4 = r3.next()
            com.ss.android.downloadlib.addownload.c r4 = (com.ss.android.downloadlib.addownload.c) r4
            boolean r5 = r4.df()
            if (r5 == 0) goto L22
            goto Lf
        L22:
            long r5 = r4.pt()
            long r5 = r0 - r5
            r7 = 300000(0x493e0, double:1.482197E-318)
            int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r5 <= 0) goto Lf
            r4.ux()
            r2.add(r4)
            goto Lf
        L36:
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L41
            java.util.List<com.ss.android.downloadlib.addownload.c> r0 = r9.q
            r0.removeAll(r2)
        L41:
            return
    }

    private void q() {
            r6 = this;
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r6.c
            long r2 = r0 - r2
            r4 = 300000(0x493e0, double:1.482197E-318)
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 >= 0) goto L10
            return
        L10:
            r6.c = r0
            java.util.List<com.ss.android.downloadlib.addownload.c> r0 = r6.q
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L1d
            r6.pt()
        L1d:
            return
    }

    private void q(android.content.Context r2, int r3, com.ss.android.download.api.download.DownloadStatusChangeListener r4, com.ss.android.download.api.download.DownloadModel r5) {
            r1 = this;
            if (r5 != 0) goto L3
            return
        L3:
            com.ss.android.downloadlib.addownload.pp r0 = new com.ss.android.downloadlib.addownload.pp
            r0.<init>()
            com.ss.android.downloadlib.addownload.c r2 = r0.df(r2)
            com.ss.android.downloadlib.addownload.c r2 = r2.df(r3, r4)
            com.ss.android.downloadlib.addownload.c r2 = r2.df(r5)
            r2.rg()
            java.util.Map<java.lang.String, com.ss.android.downloadlib.addownload.c> r2 = r1.pt
            java.lang.String r3 = r5.getDownloadUrl()
            r2.put(r3, r0)
            return
    }

    public static com.ss.android.downloadlib.fw rg() {
            com.ss.android.downloadlib.fw r0 = com.ss.android.downloadlib.fw.rg
            if (r0 != 0) goto L17
            java.lang.Class<com.ss.android.downloadlib.fw> r0 = com.ss.android.downloadlib.fw.class
            monitor-enter(r0)
            com.ss.android.downloadlib.fw r1 = com.ss.android.downloadlib.fw.rg     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.ss.android.downloadlib.fw r1 = new com.ss.android.downloadlib.fw     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.ss.android.downloadlib.fw.rg = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.ss.android.downloadlib.fw r0 = com.ss.android.downloadlib.fw.rg
            return r0
    }

    static java.util.concurrent.CopyOnWriteArrayList rg(com.ss.android.downloadlib.fw r0) {
            java.util.concurrent.CopyOnWriteArrayList<java.lang.Object> r0 = r0.pp
            return r0
    }

    public android.os.Handler df() {
            r1 = this;
            android.os.Handler r0 = r1.df
            return r0
    }

    public void df(com.ss.android.socialbase.downloader.model.DownloadInfo r3, java.lang.String r4) {
            r2 = this;
            android.os.Handler r0 = r2.df
            com.ss.android.downloadlib.fw$4 r1 = new com.ss.android.downloadlib.fw$4
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    public com.ss.android.downloadlib.addownload.pp rg(java.lang.String r3) {
            r2 = this;
            java.util.Map<java.lang.String, com.ss.android.downloadlib.addownload.c> r0 = r2.pt
            r1 = 0
            if (r0 == 0) goto L21
            int r0 = r0.size()
            if (r0 == 0) goto L21
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L12
            goto L21
        L12:
            java.util.Map<java.lang.String, com.ss.android.downloadlib.addownload.c> r0 = r2.pt
            java.lang.Object r3 = r0.get(r3)
            com.ss.android.downloadlib.addownload.c r3 = (com.ss.android.downloadlib.addownload.c) r3
            boolean r0 = r3 instanceof com.ss.android.downloadlib.addownload.pp
            if (r0 == 0) goto L21
            com.ss.android.downloadlib.addownload.pp r3 = (com.ss.android.downloadlib.addownload.pp) r3
            return r3
        L21:
            return r1
    }

    public void rg(android.content.Context r3, int r4, com.ss.android.download.api.download.DownloadStatusChangeListener r5, com.ss.android.download.api.download.DownloadModel r6) {
            r2 = this;
            if (r6 == 0) goto L3a
            java.lang.String r0 = r6.getDownloadUrl()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Ld
            goto L3a
        Ld:
            java.util.Map<java.lang.String, com.ss.android.downloadlib.addownload.c> r0 = r2.pt
            java.lang.String r1 = r6.getDownloadUrl()
            java.lang.Object r0 = r0.get(r1)
            com.ss.android.downloadlib.addownload.c r0 = (com.ss.android.downloadlib.addownload.c) r0
            if (r0 == 0) goto L2b
            com.ss.android.downloadlib.addownload.c r3 = r0.df(r3)
            com.ss.android.downloadlib.addownload.c r3 = r3.df(r4, r5)
            com.ss.android.downloadlib.addownload.c r3 = r3.df(r6)
            r3.rg()
            return
        L2b:
            java.util.List<com.ss.android.downloadlib.addownload.c> r0 = r2.q
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L37
            r2.df(r3, r4, r5, r6)
            goto L3a
        L37:
            r2.q(r3, r4, r5, r6)
        L3a:
            return
    }

    public void rg(com.ss.android.download.api.download.DownloadModel r3, com.ss.android.download.api.download.DownloadController r4, com.ss.android.download.api.download.DownloadEventConfig r5) {
            r2 = this;
            android.os.Handler r0 = r2.df
            com.ss.android.downloadlib.fw$1 r1 = new com.ss.android.downloadlib.fw$1
            r1.<init>(r2, r3, r4, r5)
            r0.post(r1)
            return
    }

    public void rg(com.ss.android.download.api.download.rg.rg r4) {
            r3 = this;
            if (r4 == 0) goto L1f
            com.ss.android.socialbase.downloader.setting.DownloadSetting r0 = com.ss.android.socialbase.downloader.setting.DownloadSetting.obtainGlobal()
            r1 = 0
            java.lang.String r2 = "fix_listener_oom"
            boolean r0 = r0.optBugFix(r2, r1)
            if (r0 == 0) goto L1a
            java.util.concurrent.CopyOnWriteArrayList<java.lang.Object> r0 = r3.pp
            java.lang.ref.SoftReference r1 = new java.lang.ref.SoftReference
            r1.<init>(r4)
            r0.add(r1)
            goto L1f
        L1a:
            java.util.concurrent.CopyOnWriteArrayList<java.lang.Object> r0 = r3.pp
            r0.add(r4)
        L1f:
            return
    }

    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r3) {
            r2 = this;
            android.os.Handler r0 = r2.df
            com.ss.android.downloadlib.fw$5 r1 = new com.ss.android.downloadlib.fw$5
            r1.<init>(r2, r3)
            r0.post(r1)
            return
    }

    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r3, com.ss.android.socialbase.downloader.exception.BaseException r4, java.lang.String r5) {
            r2 = this;
            android.os.Handler r0 = r2.df
            com.ss.android.downloadlib.fw$2 r1 = new com.ss.android.downloadlib.fw$2
            r1.<init>(r2, r3, r4, r5)
            r0.post(r1)
            return
    }

    public void rg(com.ss.android.socialbase.downloader.model.DownloadInfo r3, java.lang.String r4) {
            r2 = this;
            android.os.Handler r0 = r2.df
            com.ss.android.downloadlib.fw$3 r1 = new com.ss.android.downloadlib.fw$3
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    public void rg(java.lang.String r2, int r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Map<java.lang.String, com.ss.android.downloadlib.addownload.c> r0 = r1.pt
            java.lang.Object r0 = r0.get(r2)
            com.ss.android.downloadlib.addownload.c r0 = (com.ss.android.downloadlib.addownload.c) r0
            if (r0 == 0) goto L24
            boolean r3 = r0.rg(r3)
            if (r3 == 0) goto L21
            java.util.List<com.ss.android.downloadlib.addownload.c> r3 = r1.q
            r3.add(r0)
            java.util.Map<java.lang.String, com.ss.android.downloadlib.addownload.c> r3 = r1.pt
            r3.remove(r2)
        L21:
            r1.q()
        L24:
            return
    }

    public void rg(java.lang.String r11, long r12, int r14, com.ss.android.download.api.download.DownloadEventConfig r15, com.ss.android.download.api.download.DownloadController r16) {
            r10 = this;
            r0 = 0
            r8 = r0
            com.ss.android.download.api.config.OnItemClickListener r8 = (com.ss.android.download.api.config.OnItemClickListener) r8
            r9 = 0
            r1 = r10
            r2 = r11
            r3 = r12
            r5 = r14
            r6 = r15
            r7 = r16
            r1.rg(r2, r3, r5, r6, r7, r8, r9)
            return
    }

    public void rg(java.lang.String r11, long r12, int r14, com.ss.android.download.api.download.DownloadEventConfig r15, com.ss.android.download.api.download.DownloadController r16, com.ss.android.download.api.config.IDownloadButtonClickListener r17) {
            r10 = this;
            r0 = 0
            r8 = r0
            com.ss.android.download.api.config.OnItemClickListener r8 = (com.ss.android.download.api.config.OnItemClickListener) r8
            r1 = r10
            r2 = r11
            r3 = r12
            r5 = r14
            r6 = r15
            r7 = r16
            r9 = r17
            r1.rg(r2, r3, r5, r6, r7, r8, r9)
            return
    }

    public void rg(java.lang.String r2, long r3, int r5, com.ss.android.download.api.download.DownloadEventConfig r6, com.ss.android.download.api.download.DownloadController r7, com.ss.android.download.api.config.OnItemClickListener r8, com.ss.android.download.api.config.IDownloadButtonClickListener r9) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Map<java.lang.String, com.ss.android.downloadlib.addownload.c> r0 = r1.pt
            java.lang.Object r2 = r0.get(r2)
            com.ss.android.downloadlib.addownload.c r2 = (com.ss.android.downloadlib.addownload.c) r2
            if (r2 == 0) goto L28
            com.ss.android.downloadlib.addownload.c r2 = r2.rg(r3)
            com.ss.android.downloadlib.addownload.c r2 = r2.df(r6)
            com.ss.android.downloadlib.addownload.c r2 = r2.df(r7)
            com.ss.android.downloadlib.addownload.c r2 = r2.rg(r8)
            com.ss.android.downloadlib.addownload.c r2 = r2.rg(r9)
            r2.df(r5)
        L28:
            return
    }

    public void rg(java.lang.String r2, boolean r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L7
            return
        L7:
            java.util.Map<java.lang.String, com.ss.android.downloadlib.addownload.c> r0 = r1.pt
            java.lang.Object r2 = r0.get(r2)
            com.ss.android.downloadlib.addownload.c r2 = (com.ss.android.downloadlib.addownload.c) r2
            if (r2 == 0) goto L14
            r2.rg(r3)
        L14:
            return
    }
}
