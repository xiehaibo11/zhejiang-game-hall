package com.mbridge.msdk.mbdownload;

class k extends java.lang.Thread {
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    private static final java.lang.String e = null;
    private static java.lang.Boolean t;
    private com.mbridge.msdk.mbdownload.c f;
    private android.content.Context g;
    private boolean h;
    private java.io.File i;
    private int j;
    private long k;
    private long l;
    private int m;
    private int n;
    private android.os.Handler o;
    private com.mbridge.msdk.mbdownload.b.a p;
    private android.app.NotificationManager q;
    private com.mbridge.msdk.out.IDownloadListener r;
    private int s;


    static {
            java.lang.Class<com.mbridge.msdk.mbdownload.k> r0 = com.mbridge.msdk.mbdownload.k.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.mbdownload.k.e = r0
            r0 = 1
            com.mbridge.msdk.mbdownload.k.a = r0
            r0 = 2
            com.mbridge.msdk.mbdownload.k.b = r0
            r0 = 3
            com.mbridge.msdk.mbdownload.k.c = r0
            r0 = 4
            com.mbridge.msdk.mbdownload.k.d = r0
            r0 = 0
            java.lang.Boolean r0 = java.lang.Boolean.valueOf(r0)
            com.mbridge.msdk.mbdownload.k.t = r0
            return
    }

    public k(com.mbridge.msdk.mbdownload.c r4, com.mbridge.msdk.mbdownload.b.a r5, int r6, int r7) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.j = r0
            r1 = -1
            r3.k = r1
            r3.l = r1
            r1 = -1
            r3.m = r1
            r3.s = r0
            r3.f = r4
            android.app.Service r1 = r4.c()
            android.content.Context r1 = r1.getApplicationContext()
            r3.g = r1
            r3.p = r5
            r3.j = r7
            android.app.Service r4 = r4.c()
            java.lang.String r5 = "notification"
            java.lang.Object r4 = r4.getSystemService(r5)
            android.app.NotificationManager r4 = (android.app.NotificationManager) r4
            r3.q = r4
            com.mbridge.msdk.mbdownload.j.a()
            android.os.Handler r4 = new android.os.Handler
            com.mbridge.msdk.mbdownload.c r5 = r3.f
            android.app.Service r5 = r5.c()
            android.os.Looper r5 = r5.getMainLooper()
            r4.<init>(r5)
            r3.o = r4
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r4 = com.mbridge.msdk.mbdownload.c.d     // Catch: java.lang.Exception -> Lc0
            int r4 = r4.indexOfKey(r6)     // Catch: java.lang.Exception -> Lc0
            r5 = 1
            if (r4 < 0) goto L63
            android.util.SparseArray<com.mbridge.msdk.mbdownload.e$b> r4 = com.mbridge.msdk.mbdownload.c.d     // Catch: java.lang.Exception -> Lc0
            java.lang.Object r4 = r4.get(r6)     // Catch: java.lang.Exception -> Lc0
            com.mbridge.msdk.mbdownload.e$b r4 = (com.mbridge.msdk.mbdownload.e.b) r4     // Catch: java.lang.Exception -> Lc0
            long[] r4 = r4.f     // Catch: java.lang.Exception -> Lc0
            if (r4 == 0) goto L63
            int r7 = r4.length     // Catch: java.lang.Exception -> Lc0
            if (r7 <= r5) goto L63
            r1 = r4[r0]     // Catch: java.lang.Exception -> Lc0
            r3.k = r1     // Catch: java.lang.Exception -> Lc0
            r1 = r4[r5]     // Catch: java.lang.Exception -> Lc0
            r3.l = r1     // Catch: java.lang.Exception -> Lc0
        L63:
            r3.n = r6     // Catch: java.lang.Exception -> Lc0
            boolean[] r4 = new boolean[r5]     // Catch: java.lang.Exception -> Lc0
            java.lang.String r5 = "/apk"
            android.content.Context r6 = r3.g     // Catch: java.lang.Exception -> Lc0
            java.io.File r5 = com.mbridge.msdk.mbdownload.e.a(r5, r6, r4)     // Catch: java.lang.Exception -> Lc0
            r3.i = r5     // Catch: java.lang.Exception -> Lc0
            boolean r4 = r4[r0]     // Catch: java.lang.Exception -> Lc0
            r3.h = r4     // Catch: java.lang.Exception -> Lc0
            com.mbridge.msdk.mbdownload.b$a r4 = r3.p     // Catch: java.lang.Exception -> Lc0
            java.lang.String r5 = r4.f     // Catch: java.lang.Exception -> Lc0
            java.lang.String r6 = ".apk.tmp"
            if (r5 == 0) goto L8f
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc0
            r5.<init>()     // Catch: java.lang.Exception -> Lc0
            java.lang.String r7 = r4.f     // Catch: java.lang.Exception -> Lc0
            r5.append(r7)     // Catch: java.lang.Exception -> Lc0
            r5.append(r6)     // Catch: java.lang.Exception -> Lc0
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> Lc0
            goto La4
        L8f:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc0
            r5.<init>()     // Catch: java.lang.Exception -> Lc0
            java.lang.String r7 = r4.d     // Catch: java.lang.Exception -> Lc0
            java.lang.String r7 = com.mbridge.msdk.mbdownload.e.a(r7)     // Catch: java.lang.Exception -> Lc0
            r5.append(r7)     // Catch: java.lang.Exception -> Lc0
            r5.append(r6)     // Catch: java.lang.Exception -> Lc0
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Exception -> Lc0
        La4:
            java.lang.String r4 = r4.b     // Catch: java.lang.Exception -> Lc0
            java.lang.String r6 = "delta_update"
            boolean r4 = r4.equalsIgnoreCase(r6)     // Catch: java.lang.Exception -> Lc0
            if (r4 == 0) goto Lb6
            java.lang.String r4 = ".apk"
            java.lang.String r6 = ".patch"
            java.lang.String r5 = r5.replace(r4, r6)     // Catch: java.lang.Exception -> Lc0
        Lb6:
            java.io.File r4 = new java.io.File     // Catch: java.lang.Exception -> Lc0
            java.io.File r6 = r3.i     // Catch: java.lang.Exception -> Lc0
            r4.<init>(r6, r5)     // Catch: java.lang.Exception -> Lc0
            r3.i = r4     // Catch: java.lang.Exception -> Lc0
            goto Ld1
        Lc0:
            r4 = move-exception
            java.lang.String r5 = com.mbridge.msdk.mbdownload.k.e
            java.lang.String r6 = r4.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r5, r6, r4)
            com.mbridge.msdk.mbdownload.c r5 = r3.f
            int r6 = r3.n
            r5.a(r6, r4)
        Ld1:
            return
    }

    static com.mbridge.msdk.mbdownload.c a(com.mbridge.msdk.mbdownload.k r0) {
            com.mbridge.msdk.mbdownload.c r0 = r0.f
            return r0
    }

    static java.io.File a(com.mbridge.msdk.mbdownload.k r0, java.io.File r1) {
            r0.i = r1
            return r1
    }

    static void a(com.mbridge.msdk.mbdownload.k r4, int r5) throws android.os.RemoteException {
            r0 = 0
            r1 = 0
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = com.mbridge.msdk.mbdownload.c.c     // Catch: android.os.DeadObjectException -> L1f
            com.mbridge.msdk.mbdownload.b$a r3 = r4.p     // Catch: android.os.DeadObjectException -> L1f
            java.lang.Object r2 = r2.get(r3)     // Catch: android.os.DeadObjectException -> L1f
            if (r2 == 0) goto L3a
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r2 = com.mbridge.msdk.mbdownload.c.c     // Catch: android.os.DeadObjectException -> L1f
            com.mbridge.msdk.mbdownload.b$a r3 = r4.p     // Catch: android.os.DeadObjectException -> L1f
            java.lang.Object r2 = r2.get(r3)     // Catch: android.os.DeadObjectException -> L1f
            android.os.Messenger r2 = (android.os.Messenger) r2     // Catch: android.os.DeadObjectException -> L1f
            r3 = 3
            android.os.Message r5 = android.os.Message.obtain(r0, r3, r5, r1)     // Catch: android.os.DeadObjectException -> L1f
            r2.send(r5)     // Catch: android.os.DeadObjectException -> L1f
            goto L3a
        L1f:
            java.lang.String r5 = com.mbridge.msdk.mbdownload.k.e
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            com.mbridge.msdk.mbdownload.b$a r3 = r4.p
            java.lang.String r3 = r3.c
            r2[r1] = r3
            java.lang.String r1 = "Service Client for downloading %1$15s is dead. Removing messenger from the service"
            java.lang.String r1 = java.lang.String.format(r1, r2)
            com.mbridge.msdk.foundation.tools.z.d(r5, r1)
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r5 = com.mbridge.msdk.mbdownload.c.c
            com.mbridge.msdk.mbdownload.b$a r4 = r4.p
            r5.put(r4, r0)
        L3a:
            return
    }

    private void a(boolean r3) {
            r2 = this;
            com.mbridge.msdk.out.IDownloadListener r3 = r2.r
            if (r3 != 0) goto Lb
            com.mbridge.msdk.mbdownload.k$1 r3 = new com.mbridge.msdk.mbdownload.k$1
            r3.<init>(r2)
            r2.r = r3
        Lb:
            com.mbridge.msdk.mbdownload.manager.ADownloadManager r3 = com.mbridge.msdk.mbdownload.manager.ADownloadManager.getInstance()
            com.mbridge.msdk.mbdownload.b$a r0 = r2.p
            java.lang.String r0 = r0.g
            com.mbridge.msdk.out.IDownloadListener r1 = r2.r
            r3.addDownloadListener(r0, r1)
            com.mbridge.msdk.mbdownload.manager.ADownloadManager r3 = com.mbridge.msdk.mbdownload.manager.ADownloadManager.getInstance()
            com.mbridge.msdk.mbdownload.b$a r0 = r2.p
            java.lang.String r0 = r0.g
            com.mbridge.msdk.mbdownload.b$a r1 = r2.p
            java.lang.String r1 = r1.d
            r3.start(r0, r1)
            return
    }

    static int b(com.mbridge.msdk.mbdownload.k r0) {
            int r0 = r0.n
            return r0
    }

    static com.mbridge.msdk.mbdownload.b.a c(com.mbridge.msdk.mbdownload.k r0) {
            com.mbridge.msdk.mbdownload.b$a r0 = r0.p
            return r0
    }

    static android.content.Context d(com.mbridge.msdk.mbdownload.k r0) {
            android.content.Context r0 = r0.g
            return r0
    }

    static java.io.File e(com.mbridge.msdk.mbdownload.k r0) {
            java.io.File r0 = r0.i
            return r0
    }

    public final void a() {
            r2 = this;
            int r0 = com.mbridge.msdk.mbdownload.k.b
            r2.s = r0
            com.mbridge.msdk.mbdownload.manager.ADownloadManager r0 = com.mbridge.msdk.mbdownload.manager.ADownloadManager.getInstance()
            com.mbridge.msdk.mbdownload.b$a r1 = r2.p
            java.lang.String r1 = r1.g
            r0.pause(r1)
            return
    }

    public final void a(int r3) {
            r2 = this;
            r2.m = r3
            int r3 = com.mbridge.msdk.mbdownload.k.c
            r2.s = r3
            com.mbridge.msdk.mbdownload.manager.ADownloadManager r3 = com.mbridge.msdk.mbdownload.manager.ADownloadManager.getInstance()
            com.mbridge.msdk.mbdownload.b$a r0 = r2.p
            java.lang.String r0 = r0.g
            r3.pause(r0)
            com.mbridge.msdk.mbdownload.manager.ADownloadManager r3 = com.mbridge.msdk.mbdownload.manager.ADownloadManager.getInstance()
            com.mbridge.msdk.mbdownload.b$a r0 = r2.p
            java.lang.String r0 = r0.g
            com.mbridge.msdk.out.IDownloadListener r1 = r2.r
            r3.deleteDownloadListener(r0, r1)
            return
    }

    public final void b() {
            r1 = this;
            int r0 = com.mbridge.msdk.mbdownload.k.a
            r1.s = r0
            r0 = 0
            r1.a(r0)
            return
    }

    public final int c() {
            r1 = this;
            int r0 = r1.s
            return r0
    }

    public final void d() {
            r4 = this;
            java.lang.String r0 = "workthread"
            java.lang.String r1 = "=====installOrActive"
            com.mbridge.msdk.foundation.tools.z.a(r0, r1)
            android.content.Context r0 = r4.g
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.e r0 = com.mbridge.msdk.foundation.db.e.a(r0)
            com.mbridge.msdk.mbdownload.b$a r1 = r4.p
            java.lang.String r1 = r1.g
            java.lang.String r0 = r0.h(r1)
            android.content.Context r1 = r4.g
            boolean r1 = com.mbridge.msdk.click.c.d(r1, r0)
            if (r1 != 0) goto L35
            android.content.Context r0 = r4.g
            java.io.File r1 = r4.i
            android.net.Uri r1 = android.net.Uri.fromFile(r1)
            com.mbridge.msdk.mbdownload.b$a r2 = r4.p
            java.lang.String r2 = r2.d
            com.mbridge.msdk.mbdownload.b$a r3 = r4.p
            java.lang.String r3 = r3.g
            com.mbridge.msdk.click.c.a(r0, r1, r2, r3)
            goto L3a
        L35:
            android.content.Context r1 = r4.g
            com.mbridge.msdk.click.c.f(r1, r0)
        L3a:
            return
    }

    @Override
    public void run() {
            r5 = this;
            r0 = 0
            r5.j = r0
            com.mbridge.msdk.mbdownload.c r1 = r5.f     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L35
            if (r1 == 0) goto Le
            com.mbridge.msdk.mbdownload.c r1 = r5.f     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L35
            int r2 = r5.n     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L35
            r1.a(r2)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L35
        Le:
            long r1 = r5.k     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L35
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 <= 0) goto L17
            r0 = 1
        L17:
            r5.a(r0)     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L35
            java.util.Map<com.mbridge.msdk.mbdownload.b$a, android.os.Messenger> r0 = com.mbridge.msdk.mbdownload.c.c     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L35
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L35
            if (r0 > 0) goto L3d
            com.mbridge.msdk.mbdownload.c r0 = r5.f     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L35
            android.app.Service r0 = r0.c()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L35
            r0.stopSelf()     // Catch: java.lang.Throwable -> L2c java.lang.Exception -> L35
            goto L3d
        L2c:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L3d
            r0.printStackTrace()
            goto L3d
        L35:
            r0 = move-exception
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L3d
            r0.printStackTrace()
        L3d:
            int r0 = com.mbridge.msdk.mbdownload.k.a
            r5.s = r0
            return
    }
}
