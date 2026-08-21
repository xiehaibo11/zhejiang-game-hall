package com.ss.android.downloadlib.addownload.model;

public class c {
    private final java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadModel> df;
    private final java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> pp;
    private final java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadController> pt;
    private final java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadEventConfig> q;
    private volatile boolean rg;


    private static class rg {
        private static com.ss.android.downloadlib.addownload.model.c rg;

        static {
                com.ss.android.downloadlib.addownload.model.c r0 = new com.ss.android.downloadlib.addownload.model.c
                r1 = 0
                r0.<init>(r1)
                com.ss.android.downloadlib.addownload.model.c.rg.rg = r0
                return
        }

        static com.ss.android.downloadlib.addownload.model.c rg() {
                com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg.rg
                return r0
        }
    }

    private c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.rg = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.df = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.q = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.pt = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.pp = r0
            return
    }

    c(com.ss.android.downloadlib.addownload.model.c.1 r1) {
            r0 = this;
            r0.<init>()
            return
    }

    static java.util.concurrent.ConcurrentHashMap df(com.ss.android.downloadlib.addownload.model.c r0) {
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r0 = r0.pp
            return r0
    }

    public static com.ss.android.downloadlib.addownload.model.c rg() {
            com.ss.android.downloadlib.addownload.model.c r0 = com.ss.android.downloadlib.addownload.model.c.rg.rg()
            return r0
    }

    static boolean rg(com.ss.android.downloadlib.addownload.model.c r0) {
            boolean r0 = r0.rg
            return r0
    }

    static boolean rg(com.ss.android.downloadlib.addownload.model.c r0, boolean r1) {
            r0.rg = r1
            return r1
    }

    public void c(long r3) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadModel> r0 = r2.df
            java.lang.Long r1 = java.lang.Long.valueOf(r3)
            r0.remove(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadEventConfig> r0 = r2.q
            java.lang.Long r1 = java.lang.Long.valueOf(r3)
            r0.remove(r1)
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadController> r0 = r2.pt
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0.remove(r3)
            return
    }

    public com.ss.android.download.api.download.DownloadEventConfig df(long r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadEventConfig> r0 = r1.q
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            com.ss.android.download.api.download.DownloadEventConfig r2 = (com.ss.android.download.api.download.DownloadEventConfig) r2
            return r2
    }

    public com.ss.android.downloadad.api.rg.df df(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r0 = r4.pp
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L12:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r0.next()
            com.ss.android.downloadad.api.rg.df r2 = (com.ss.android.downloadad.api.rg.df) r2
            if (r2 == 0) goto L12
            java.lang.String r3 = r2.rg()
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L12
            return r2
        L2b:
            return r1
    }

    public void df() {
            r3 = this;
            com.ss.android.downloadlib.pt r0 = com.ss.android.downloadlib.pt.rg()
            com.ss.android.downloadlib.addownload.model.c$1 r1 = new com.ss.android.downloadlib.addownload.model.c$1
            r1.<init>(r3)
            r2 = 1
            r0.rg(r1, r2)
            return
    }

    public void df(java.lang.String r4, java.lang.String r5) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L37
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto Ld
            goto L37
        Ld:
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadModel> r0 = r3.df
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L17:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L37
            java.lang.Object r1 = r0.next()
            com.ss.android.download.api.download.DownloadModel r1 = (com.ss.android.download.api.download.DownloadModel) r1
            boolean r2 = r1 instanceof com.ss.android.downloadad.api.download.AdDownloadModel
            if (r2 == 0) goto L17
            java.lang.String r2 = r1.getDownloadUrl()
            boolean r2 = android.text.TextUtils.equals(r2, r4)
            if (r2 == 0) goto L17
            com.ss.android.downloadad.api.download.AdDownloadModel r1 = (com.ss.android.downloadad.api.download.AdDownloadModel) r1
            r1.setPackageName(r5)
            goto L17
        L37:
            return
    }

    public com.ss.android.downloadlib.addownload.model.pp pp(long r3) {
            r2 = this;
            com.ss.android.downloadlib.addownload.model.pp r0 = new com.ss.android.downloadlib.addownload.model.pp
            r0.<init>()
            r0.rg = r3
            com.ss.android.download.api.download.DownloadModel r1 = r2.rg(r3)
            r0.df = r1
            com.ss.android.download.api.download.DownloadEventConfig r1 = r2.df(r3)
            r0.q = r1
            com.ss.android.download.api.download.DownloadEventConfig r1 = r0.q
            if (r1 != 0) goto L1e
            com.ss.android.download.api.download.q r1 = new com.ss.android.download.api.download.q
            r1.<init>()
            r0.q = r1
        L1e:
            com.ss.android.download.api.download.DownloadController r3 = r2.q(r3)
            r0.pt = r3
            com.ss.android.download.api.download.DownloadController r3 = r0.pt
            if (r3 != 0) goto L2f
            com.ss.android.download.api.download.df r3 = new com.ss.android.download.api.download.df
            r3.<init>()
            r0.pt = r3
        L2f:
            return r0
    }

    public com.ss.android.downloadad.api.rg.df pt(long r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r0 = r1.pp
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            com.ss.android.downloadad.api.rg.df r2 = (com.ss.android.downloadad.api.rg.df) r2
            return r2
    }

    public com.ss.android.download.api.download.DownloadController q(long r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadController> r0 = r1.pt
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            com.ss.android.download.api.download.DownloadController r2 = (com.ss.android.download.api.download.DownloadController) r2
            return r2
    }

    public java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> q() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r0 = r1.pp
            return r0
    }

    public com.ss.android.download.api.download.DownloadModel rg(long r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadModel> r0 = r1.df
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            com.ss.android.download.api.download.DownloadModel r2 = (com.ss.android.download.api.download.DownloadModel) r2
            return r2
    }

    public com.ss.android.downloadad.api.rg.df rg(int r4) {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r0 = r3.pp
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L20
            java.lang.Object r1 = r0.next()
            com.ss.android.downloadad.api.rg.df r1 = (com.ss.android.downloadad.api.rg.df) r1
            if (r1 != 0) goto L19
            goto La
        L19:
            int r2 = r1.qx()
            if (r2 != r4) goto La
            return r1
        L20:
            r4 = 0
            return r4
    }

    public com.ss.android.downloadad.api.rg.df rg(com.ss.android.socialbase.downloader.model.DownloadInfo r8) {
            r7 = this;
            r0 = 0
            if (r8 != 0) goto L4
            return r0
        L4:
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r1 = r7.pp
            java.util.Collection r1 = r1.values()
            java.util.Iterator r1 = r1.iterator()
        Le:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L28
            java.lang.Object r2 = r1.next()
            com.ss.android.downloadad.api.rg.df r2 = (com.ss.android.downloadad.api.rg.df) r2
            if (r2 != 0) goto L1d
            goto Le
        L1d:
            int r3 = r2.qx()
            int r4 = r8.getId()
            if (r3 != r4) goto Le
            return r2
        L28:
            java.lang.String r1 = r8.getExtra()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L77
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L73
            java.lang.String r2 = r8.getExtra()     // Catch: java.lang.Exception -> L73
            r1.<init>(r2)     // Catch: java.lang.Exception -> L73
            java.lang.String r2 = "extra"
            long r1 = com.ss.android.downloadlib.utils.b.rg(r1, r2)     // Catch: java.lang.Exception -> L73
            r3 = 0
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 == 0) goto L77
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r3 = r7.pp     // Catch: java.lang.Exception -> L73
            java.util.Collection r3 = r3.values()     // Catch: java.lang.Exception -> L73
            java.util.Iterator r3 = r3.iterator()     // Catch: java.lang.Exception -> L73
        L51:
            boolean r4 = r3.hasNext()     // Catch: java.lang.Exception -> L73
            if (r4 == 0) goto L69
            java.lang.Object r4 = r3.next()     // Catch: java.lang.Exception -> L73
            com.ss.android.downloadad.api.rg.df r4 = (com.ss.android.downloadad.api.rg.df) r4     // Catch: java.lang.Exception -> L73
            if (r4 != 0) goto L60
            goto L51
        L60:
            long r5 = r4.df()     // Catch: java.lang.Exception -> L73
            int r5 = (r5 > r1 ? 1 : (r5 == r1 ? 0 : -1))
            if (r5 != 0) goto L51
            return r4
        L69:
            com.ss.android.downloadlib.exception.q r1 = com.ss.android.downloadlib.exception.q.rg()     // Catch: java.lang.Exception -> L73
            java.lang.String r2 = "getNativeModelByInfo"
            r1.rg(r2)     // Catch: java.lang.Exception -> L73
            goto L77
        L73:
            r1 = move-exception
            r1.printStackTrace()
        L77:
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r1 = r7.pp
            java.util.Collection r1 = r1.values()
            java.util.Iterator r1 = r1.iterator()
        L81:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L9f
            java.lang.Object r2 = r1.next()
            com.ss.android.downloadad.api.rg.df r2 = (com.ss.android.downloadad.api.rg.df) r2
            if (r2 != 0) goto L90
            goto L81
        L90:
            java.lang.String r3 = r2.rg()
            java.lang.String r4 = r8.getUrl()
            boolean r3 = android.text.TextUtils.equals(r3, r4)
            if (r3 == 0) goto L81
            return r2
        L9f:
            return r0
    }

    public com.ss.android.downloadad.api.rg.df rg(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r0 = r4.pp
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        L12:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L2b
            java.lang.Object r2 = r0.next()
            com.ss.android.downloadad.api.rg.df r2 = (com.ss.android.downloadad.api.rg.df) r2
            if (r2 == 0) goto L12
            java.lang.String r3 = r2.pp()
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L12
            return r2
        L2b:
            return r1
    }

    public java.util.Map<java.lang.Long, com.ss.android.downloadad.api.rg.df> rg(java.lang.String r6, java.lang.String r7) {
            r5 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L43
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 == 0) goto L12
            goto L43
        L12:
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r1 = r5.pp
            java.util.Collection r1 = r1.values()
            java.util.Iterator r1 = r1.iterator()
        L1c:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L43
            java.lang.Object r2 = r1.next()
            com.ss.android.downloadad.api.rg.df r2 = (com.ss.android.downloadad.api.rg.df) r2
            if (r2 == 0) goto L1c
            java.lang.String r3 = r2.rg()
            boolean r3 = android.text.TextUtils.equals(r3, r6)
            if (r3 == 0) goto L1c
            r2.df(r7)
            long r3 = r2.df()
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0.put(r3, r2)
            goto L1c
        L43:
            return r0
    }

    public void rg(long r2, com.ss.android.download.api.download.DownloadController r4) {
            r1 = this;
            if (r4 == 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadController> r0 = r1.pt
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r0.put(r2, r4)
        Lb:
            return
    }

    public void rg(long r2, com.ss.android.download.api.download.DownloadEventConfig r4) {
            r1 = this;
            if (r4 == 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadEventConfig> r0 = r1.q
            java.lang.Long r2 = java.lang.Long.valueOf(r2)
            r0.put(r2, r4)
        Lb:
            return
    }

    public void rg(com.ss.android.download.api.download.DownloadModel r4) {
            r3 = this;
            if (r4 == 0) goto L2b
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.download.api.download.DownloadModel> r0 = r3.df
            long r1 = r4.getId()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r0.put(r1, r4)
            com.ss.android.download.api.model.DeepLink r0 = r4.getDeepLink()
            if (r0 == 0) goto L2b
            com.ss.android.download.api.model.DeepLink r0 = r4.getDeepLink()
            long r1 = r4.getId()
            r0.setId(r1)
            com.ss.android.download.api.model.DeepLink r0 = r4.getDeepLink()
            java.lang.String r4 = r4.getPackageName()
            r0.setPackageName(r4)
        L2b:
            return
    }

    public synchronized void rg(com.ss.android.downloadad.api.rg.df r4) {
            r3 = this;
            monitor-enter(r3)
            if (r4 != 0) goto L5
            monitor-exit(r3)
            return
        L5:
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r0 = r3.pp     // Catch: java.lang.Throwable -> L1b
            long r1 = r4.df()     // Catch: java.lang.Throwable -> L1b
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L1b
            r0.put(r1, r4)     // Catch: java.lang.Throwable -> L1b
            com.ss.android.downloadlib.addownload.model.ux r0 = com.ss.android.downloadlib.addownload.model.ux.rg()     // Catch: java.lang.Throwable -> L1b
            r0.rg(r4)     // Catch: java.lang.Throwable -> L1b
            monitor-exit(r3)
            return
        L1b:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public synchronized void rg(java.util.List<java.lang.Long> r5) {
            r4 = this;
            monitor-enter(r4)
            java.util.ArrayList r0 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L34
            r0.<init>()     // Catch: java.lang.Throwable -> L34
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L34
        La:
            boolean r1 = r5.hasNext()     // Catch: java.lang.Throwable -> L34
            if (r1 == 0) goto L2b
            java.lang.Object r1 = r5.next()     // Catch: java.lang.Throwable -> L34
            java.lang.Long r1 = (java.lang.Long) r1     // Catch: java.lang.Throwable -> L34
            long r1 = r1.longValue()     // Catch: java.lang.Throwable -> L34
            java.lang.String r3 = java.lang.String.valueOf(r1)     // Catch: java.lang.Throwable -> L34
            r0.add(r3)     // Catch: java.lang.Throwable -> L34
            java.util.concurrent.ConcurrentHashMap<java.lang.Long, com.ss.android.downloadad.api.rg.df> r3 = r4.pp     // Catch: java.lang.Throwable -> L34
            java.lang.Long r1 = java.lang.Long.valueOf(r1)     // Catch: java.lang.Throwable -> L34
            r3.remove(r1)     // Catch: java.lang.Throwable -> L34
            goto La
        L2b:
            com.ss.android.downloadlib.addownload.model.ux r5 = com.ss.android.downloadlib.addownload.model.ux.rg()     // Catch: java.lang.Throwable -> L34
            r5.rg(r0)     // Catch: java.lang.Throwable -> L34
            monitor-exit(r4)
            return
        L34:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }
}
