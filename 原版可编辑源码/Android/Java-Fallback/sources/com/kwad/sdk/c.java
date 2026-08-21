package com.kwad.sdk;

public final class c {
    private final java.util.Map<java.lang.Integer, com.kwad.sdk.DownloadTask> agL;
    private final java.util.Map<java.lang.String, java.lang.Integer> agM;
    private com.kwad.sdk.a agN;
    private boolean agO;
    private com.kwad.sdk.d agP;
    private android.content.Context mContext;


    static final class a {
        private static final com.kwad.sdk.c agR = null;

        static {
                com.kwad.sdk.c r0 = new com.kwad.sdk.c
                r0.<init>()
                com.kwad.sdk.c.a.agR = r0
                return
        }

        static com.kwad.sdk.c wW() {
                com.kwad.sdk.c r0 = com.kwad.sdk.c.a.agR
                return r0
        }
    }

    public c() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.agL = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.agM = r0
            r0 = 0
            r1.agO = r0
            return
    }

    private void a(int r2, com.kwad.sdk.DownloadTask.DownloadRequest r3) {
            r1 = this;
            java.util.Map<java.lang.Integer, com.kwad.sdk.DownloadTask> r0 = r1.agL
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            com.kwad.sdk.DownloadTask r2 = (com.kwad.sdk.DownloadTask) r2
            if (r2 == 0) goto L11
            r2.resume(r3)
        L11:
            return
    }

    private void a(int r4, com.kwad.sdk.a... r5) {
            r3 = this;
            java.util.Map<java.lang.Integer, com.kwad.sdk.DownloadTask> r0 = r3.agL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            java.lang.Object r0 = r0.get(r1)
            com.kwad.sdk.DownloadTask r0 = (com.kwad.sdk.DownloadTask) r0
            if (r0 == 0) goto L1f
            r1 = 0
        Lf:
            r2 = 2
            if (r1 >= r2) goto L1f
            r2 = r5[r1]
            if (r2 == 0) goto L1c
            r2.setId(r4)
            r0.addListener(r2)
        L1c:
            int r1 = r1 + 1
            goto Lf
        L1f:
            return
    }

    private void bM(int r2) {
            r1 = this;
            java.util.Map<java.lang.Integer, com.kwad.sdk.DownloadTask> r0 = r1.agL
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            com.kwad.sdk.DownloadTask r2 = (com.kwad.sdk.DownloadTask) r2
            if (r2 == 0) goto L11
            r2.clearListener()
        L11:
            return
    }

    private void h(com.kwad.sdk.DownloadTask r3) {
            r2 = this;
            java.util.Map<java.lang.Integer, com.kwad.sdk.DownloadTask> r0 = r2.agL
            int r1 = r3.getId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.remove(r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = r2.agM
            java.lang.String r3 = r3.getUrl()
            r0.remove(r3)
            return
    }

    public static com.kwad.sdk.c wP() {
            com.kwad.sdk.c r0 = com.kwad.sdk.c.a.wW()
            return r0
    }

    public static boolean wS() {
            java.lang.String r0 = "com.kwad.sdk.api.proxy.app.BaseFragmentActivity.RequestInstallPermissionActivity"
            java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L7
            r0 = 1
            return r0
        L7:
            r0 = 0
            return r0
    }

    private void wT() {
            r5 = this;
            r0 = 1
            com.kwad.sdk.k$a r1 = new com.kwad.sdk.k$a     // Catch: java.lang.Throwable -> L7
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L7
            goto Lc
        L7:
            r1 = move-exception
            r1.printStackTrace()
            r1 = 0
        Lc:
            if (r1 == 0) goto L27
            com.kwad.framework.filedownloader.download.b r2 = com.kwad.framework.filedownloader.download.b.up()
            com.kwad.framework.filedownloader.services.c$b r3 = new com.kwad.framework.filedownloader.services.c$b
            r3.<init>()
            r4 = 2147483647(0x7fffffff, float:NaN)
            com.kwad.framework.filedownloader.services.c$b r3 = r3.bC(r4)
            com.kwad.framework.filedownloader.services.c$b r1 = r3.a(r1)
            r2.b(r1)
            r5.agO = r0
        L27:
            return
    }

    private static void wU() {
            com.kwad.sdk.k$a r0 = new com.kwad.sdk.k$a     // Catch: java.lang.Throwable -> L7
            r1 = 0
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L7
            goto Lc
        L7:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
        Lc:
            if (r0 == 0) goto L25
            com.kwad.framework.filedownloader.download.b r1 = com.kwad.framework.filedownloader.download.b.up()
            com.kwad.framework.filedownloader.services.c$b r2 = new com.kwad.framework.filedownloader.services.c$b
            r2.<init>()
            r3 = 2147483647(0x7fffffff, float:NaN)
            com.kwad.framework.filedownloader.services.c$b r2 = r2.bC(r3)
            com.kwad.framework.filedownloader.services.c$b r0 = r2.a(r0)
            r1.b(r0)
        L25:
            return
    }

    public final int a(com.kwad.sdk.DownloadTask.DownloadRequest r4, com.kwad.sdk.a r5) {
            r3 = this;
            com.kwad.sdk.DownloadTask r5 = new com.kwad.sdk.DownloadTask
            r5.<init>(r4)
            java.lang.String r0 = r4.getDownloadUrl()
            java.lang.String r1 = "downali.game.uc.cn"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L15
            r3.wT()
            goto L1c
        L15:
            boolean r0 = r3.agO
            if (r0 == 0) goto L1c
            wU()
        L1c:
            java.util.Map<java.lang.Integer, com.kwad.sdk.DownloadTask> r0 = r3.agL
            int r1 = r5.getId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.Object r0 = r0.get(r1)
            if (r0 == 0) goto L3b
            int r0 = r5.getId()
            r3.a(r0, r4)
            int r4 = r5.getId()
            r3.bM(r4)
            goto L5c
        L3b:
            java.util.Map<java.lang.Integer, com.kwad.sdk.DownloadTask> r4 = r3.agL
            int r0 = r5.getId()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r4.put(r0, r5)
            java.util.Map<java.lang.String, java.lang.Integer> r4 = r3.agM
            java.lang.String r0 = r5.getUrl()
            int r1 = r5.getId()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r4.put(r0, r1)
            r5.submit()
        L5c:
            int r4 = r5.getId()
            r0 = 2
            com.kwad.sdk.a[] r0 = new com.kwad.sdk.a[r0]
            r1 = 0
            r2 = 0
            r0[r1] = r2
            r1 = 1
            com.kwad.sdk.a r2 = r3.agN
            r0[r1] = r2
            r3.a(r4, r0)
            int r4 = r5.getId()
            return r4
    }

    public final void a(com.kwad.sdk.a r1) {
            r0 = this;
            r0.agN = r1
            return
    }

    public final com.kwad.sdk.DownloadTask bL(int r2) {
            r1 = this;
            java.util.Map<java.lang.Integer, com.kwad.sdk.DownloadTask> r0 = r1.agL
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            com.kwad.sdk.DownloadTask r2 = (com.kwad.sdk.DownloadTask) r2
            return r2
    }

    public final void bN(int r2) {
            r1 = this;
            com.kwad.sdk.DownloadTask r0 = r1.bL(r2)
            if (r0 != 0) goto L7
            return
        L7:
            boolean r0 = r0.isUserPause()
            if (r0 == 0) goto L11
            r1.resume(r2)
            return
        L11:
            r1.pause(r2)
            return
    }

    public final void cancel(int r2) {
            r1 = this;
            java.util.Map<java.lang.Integer, com.kwad.sdk.DownloadTask> r0 = r1.agL
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            com.kwad.sdk.DownloadTask r2 = (com.kwad.sdk.DownloadTask) r2
            if (r2 == 0) goto L14
            r2.cancel()
            r1.h(r2)
        L14:
            return
    }

    public final void g(com.kwad.sdk.DownloadTask r3) {
            r2 = this;
            android.content.Context r0 = r2.mContext
            java.lang.String r1 = r3.getTargetFilePath()
            boolean r0 = com.kwad.sdk.utils.ak.an(r0, r1)
            if (r0 == 0) goto L1b
            com.kwad.sdk.core.download.c r0 = com.kwad.sdk.core.download.c.Aw()
            java.lang.String r3 = r3.getUrl()
            java.lang.String r3 = com.kwad.sdk.utils.ad.bp(r3)
            r0.cN(r3)
        L1b:
            return
    }

    public final android.content.Context getContext() {
            r1 = this;
            android.content.Context r0 = r1.mContext
            return r0
    }

    public final void init(android.content.Context r3) {
            r2 = this;
            r2.mContext = r3
            com.kwad.framework.filedownloader.services.c$b r0 = new com.kwad.framework.filedownloader.services.c$b
            r0.<init>()
            r1 = 2147483647(0x7fffffff, float:NaN)
            com.kwad.framework.filedownloader.services.c$b r0 = r0.bC(r1)
            com.kwad.sdk.c$1 r1 = new com.kwad.sdk.c$1
            r1.<init>(r2)
            com.kwad.framework.filedownloader.services.c$b r0 = r0.a(r1)
            com.kwad.framework.filedownloader.r.a(r3, r0)
            return
    }

    public final void pause(int r2) {
            r1 = this;
            java.util.Map<java.lang.Integer, com.kwad.sdk.DownloadTask> r0 = r1.agL
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            com.kwad.sdk.DownloadTask r2 = (com.kwad.sdk.DownloadTask) r2
            if (r2 == 0) goto L11
            r2.userPause()
        L11:
            return
    }

    public final void resume(int r2) {
            r1 = this;
            r0 = 0
            r1.a(r2, r0)
            return
    }

    public final java.io.File wQ() {
            r1 = this;
            android.content.Context r0 = r1.mContext
            java.io.File r0 = com.kwad.sdk.utils.av.cK(r0)
            return r0
    }

    public final com.kwad.sdk.d wR() {
            r1 = this;
            com.kwad.sdk.d r0 = r1.agP
            if (r0 != 0) goto Lb
            com.kwad.sdk.core.download.b.a r0 = new com.kwad.sdk.core.download.b.a
            r0.<init>()
            r1.agP = r0
        Lb:
            com.kwad.sdk.d r0 = r1.agP
            return r0
    }

    public final boolean wV() {
            r7 = this;
            java.util.Map<java.lang.Integer, com.kwad.sdk.DownloadTask> r0 = r7.agL
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
        Lb:
            r2 = r1
        Lc:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L55
            java.lang.Object r3 = r0.next()
            java.util.Map$Entry r3 = (java.util.Map.Entry) r3
            java.lang.Object r3 = r3.getValue()
            com.kwad.sdk.DownloadTask r3 = (com.kwad.sdk.DownloadTask) r3
            r4 = 1
            if (r3 == 0) goto Lc
            int r2 = r3.getStatus()
            r5 = -2
            if (r2 == r5) goto Lb
            if (r2 == r4) goto Lb
            r5 = 2
            if (r2 == r5) goto Lb
            r5 = 3
            if (r2 == r5) goto Lb
            r5 = 5
            if (r2 == r5) goto Lb
            r5 = 6
            if (r2 == r5) goto Lb
            r5 = 10
            if (r2 == r5) goto Lb
            r5 = 11
            if (r2 == r5) goto Lb
            long r2 = r3.getStatusUpdateTime()
            long r5 = java.lang.System.currentTimeMillis()
            long r2 = r2 - r5
            long r2 = java.lang.Math.abs(r2)
            r5 = 120000(0x1d4c0, double:5.9288E-319)
            int r2 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r2 > 0) goto L53
            goto Lb
        L53:
            r2 = r4
            goto Lc
        L55:
            return r2
    }
}
