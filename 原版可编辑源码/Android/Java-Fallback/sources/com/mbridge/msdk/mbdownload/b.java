package com.mbridge.msdk.mbdownload;

public class b {
    private static final java.lang.String b = null;
    final android.os.Messenger a;
    private android.content.Context c;
    private com.mbridge.msdk.out.IDownloadListener d;
    private android.os.Messenger e;
    private java.lang.String f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private java.lang.String j;
    private java.lang.String k;
    private boolean l;
    private boolean m;
    private java.lang.String n;
    private java.lang.String o;
    private java.lang.String p;
    private java.lang.String[] q;
    private java.lang.String[] r;
    private java.lang.String[] s;
    private java.lang.String[] t;
    private java.lang.String[] u;
    private java.lang.String[] v;
    private boolean w;
    private boolean x;
    private boolean y;
    private android.content.ServiceConnection z;


    static class a {
        public java.lang.String a;
        public java.lang.String b;
        public java.lang.String c;
        public java.lang.String d;
        public java.lang.String e;
        public java.lang.String f;
        public java.lang.String g;
        public boolean h;
        public boolean i;
        public java.lang.String j;
        public java.lang.String[] k;
        public java.lang.String[] l;
        public java.lang.String[] m;
        public java.lang.String[] n;
        public java.lang.String[] o;
        public java.lang.String[] p;
        public boolean q;
        public boolean r;
        public boolean s;

        public a(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, boolean r7) {
                r2 = this;
                r2.<init>()
                r0 = 1
                r2.h = r0
                r0 = 0
                r2.i = r0
                r1 = 0
                r2.k = r1
                r2.l = r1
                r2.m = r1
                r2.n = r1
                r2.o = r1
                r2.p = r1
                r2.q = r0
                r2.r = r0
                r2.s = r0
                r2.b = r3
                r2.c = r4
                r2.d = r5
                r2.g = r6
                r2.h = r7
                return
        }
    }

    class b extends android.os.Handler {
        final com.mbridge.msdk.mbdownload.b a;

        b(com.mbridge.msdk.mbdownload.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void handleMessage(android.os.Message r6) {
                r5 = this;
                int r0 = r6.what     // Catch: java.lang.Exception -> Lae
                r1 = 1
                if (r0 == r1) goto L9c
                r2 = 2
                if (r0 == r2) goto L88
                r2 = 3
                if (r0 == r2) goto L74
                r3 = 5
                if (r0 == r3) goto L13
                super.handleMessage(r6)     // Catch: java.lang.Exception -> Lae
                goto Ld8
            L13:
                com.mbridge.msdk.mbdownload.b r0 = r5.a     // Catch: java.lang.Exception -> L2b
                android.content.ServiceConnection r0 = com.mbridge.msdk.mbdownload.b.b(r0)     // Catch: java.lang.Exception -> L2b
                if (r0 == 0) goto L2f
                com.mbridge.msdk.mbdownload.b r0 = r5.a     // Catch: java.lang.Exception -> L2b
                android.content.Context r0 = com.mbridge.msdk.mbdownload.b.c(r0)     // Catch: java.lang.Exception -> L2b
                com.mbridge.msdk.mbdownload.b r4 = r5.a     // Catch: java.lang.Exception -> L2b
                android.content.ServiceConnection r4 = com.mbridge.msdk.mbdownload.b.b(r4)     // Catch: java.lang.Exception -> L2b
                r0.unbindService(r4)     // Catch: java.lang.Exception -> L2b
                goto L2f
            L2b:
                r0 = move-exception
                r0.printStackTrace()     // Catch: java.lang.Exception -> Lae
            L2f:
                com.mbridge.msdk.mbdownload.b r0 = r5.a     // Catch: java.lang.Exception -> Lae
                com.mbridge.msdk.out.IDownloadListener r0 = com.mbridge.msdk.mbdownload.b.a(r0)     // Catch: java.lang.Exception -> Lae
                if (r0 == 0) goto Ld8
                int r0 = r6.arg1     // Catch: java.lang.Exception -> Lae
                if (r0 == r1) goto L5c
                int r0 = r6.arg1     // Catch: java.lang.Exception -> Lae
                if (r0 == r2) goto L5c
                int r0 = r6.arg1     // Catch: java.lang.Exception -> Lae
                if (r0 != r3) goto L44
                goto L5c
            L44:
                com.mbridge.msdk.mbdownload.b r0 = r5.a     // Catch: java.lang.Exception -> Lae
                com.mbridge.msdk.out.IDownloadListener r0 = com.mbridge.msdk.mbdownload.b.a(r0)     // Catch: java.lang.Exception -> Lae
                r1 = 8
                r2 = 0
                r3 = 0
                r0.onEnd(r1, r2, r3)     // Catch: java.lang.Exception -> Lae
                java.lang.String r0 = com.mbridge.msdk.mbdownload.b.a()     // Catch: java.lang.Exception -> Lae
                java.lang.String r1 = "DownloadAgent.handleMessage(DownloadingService.DOWNLOAD_COMPLETE_FAIL): "
                com.mbridge.msdk.foundation.tools.z.a(r0, r1)     // Catch: java.lang.Exception -> Lae
                goto Ld8
            L5c:
                com.mbridge.msdk.mbdownload.b r0 = r5.a     // Catch: java.lang.Exception -> Lae
                com.mbridge.msdk.out.IDownloadListener r0 = com.mbridge.msdk.mbdownload.b.a(r0)     // Catch: java.lang.Exception -> Lae
                int r1 = r6.arg1     // Catch: java.lang.Exception -> Lae
                int r2 = r6.arg2     // Catch: java.lang.Exception -> Lae
                android.os.Bundle r3 = r6.getData()     // Catch: java.lang.Exception -> Lae
                java.lang.String r4 = "filename"
                java.lang.String r3 = r3.getString(r4)     // Catch: java.lang.Exception -> Lae
                r0.onEnd(r1, r2, r3)     // Catch: java.lang.Exception -> Lae
                goto Ld8
            L74:
                com.mbridge.msdk.mbdownload.b r0 = r5.a     // Catch: java.lang.Exception -> Lae
                com.mbridge.msdk.out.IDownloadListener r0 = com.mbridge.msdk.mbdownload.b.a(r0)     // Catch: java.lang.Exception -> Lae
                if (r0 == 0) goto Ld8
                com.mbridge.msdk.mbdownload.b r0 = r5.a     // Catch: java.lang.Exception -> Lae
                com.mbridge.msdk.out.IDownloadListener r0 = com.mbridge.msdk.mbdownload.b.a(r0)     // Catch: java.lang.Exception -> Lae
                int r1 = r6.arg1     // Catch: java.lang.Exception -> Lae
                r0.onProgressUpdate(r1)     // Catch: java.lang.Exception -> Lae
                goto Ld8
            L88:
                com.mbridge.msdk.mbdownload.b r0 = r5.a     // Catch: java.lang.Exception -> Lae
                com.mbridge.msdk.out.IDownloadListener r0 = com.mbridge.msdk.mbdownload.b.a(r0)     // Catch: java.lang.Exception -> Lae
                if (r0 == 0) goto Ld8
                com.mbridge.msdk.mbdownload.b r0 = r5.a     // Catch: java.lang.Exception -> Lae
                com.mbridge.msdk.out.IDownloadListener r0 = com.mbridge.msdk.mbdownload.b.a(r0)     // Catch: java.lang.Exception -> Lae
                int r1 = r6.arg1     // Catch: java.lang.Exception -> Lae
                r0.onStatus(r1)     // Catch: java.lang.Exception -> Lae
                goto Ld8
            L9c:
                com.mbridge.msdk.mbdownload.b r0 = r5.a     // Catch: java.lang.Exception -> Lae
                com.mbridge.msdk.out.IDownloadListener r0 = com.mbridge.msdk.mbdownload.b.a(r0)     // Catch: java.lang.Exception -> Lae
                if (r0 == 0) goto Ld8
                com.mbridge.msdk.mbdownload.b r0 = r5.a     // Catch: java.lang.Exception -> Lae
                com.mbridge.msdk.out.IDownloadListener r0 = com.mbridge.msdk.mbdownload.b.a(r0)     // Catch: java.lang.Exception -> Lae
                r0.onStart()     // Catch: java.lang.Exception -> Lae
                goto Ld8
            Lae:
                r0 = move-exception
                r0.printStackTrace()
                java.lang.String r1 = com.mbridge.msdk.mbdownload.b.a()
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "DownloadAgent.handleMessage("
                r2.append(r3)
                int r6 = r6.what
                r2.append(r6)
                java.lang.String r6 = "): "
                r2.append(r6)
                java.lang.String r6 = r0.getMessage()
                r2.append(r6)
                java.lang.String r6 = r2.toString()
                com.mbridge.msdk.foundation.tools.z.a(r1, r6)
            Ld8:
                return
        }
    }

    static {
            java.lang.Class<com.mbridge.msdk.mbdownload.b> r0 = com.mbridge.msdk.mbdownload.b.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.mbdownload.b.b = r0
            return
    }

    public b(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = "none"
            r2.f = r0
            java.lang.String r0 = ""
            r2.g = r0
            r0 = 1
            r2.l = r0
            r0 = 0
            r2.m = r0
            r2.w = r0
            r2.x = r0
            r2.y = r0
            android.os.Messenger r0 = new android.os.Messenger
            com.mbridge.msdk.mbdownload.b$b r1 = new com.mbridge.msdk.mbdownload.b$b
            r1.<init>(r2)
            r0.<init>(r1)
            r2.a = r0
            com.mbridge.msdk.mbdownload.b$1 r0 = new com.mbridge.msdk.mbdownload.b$1
            r0.<init>(r2)
            r2.z = r0
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            android.content.Context r0 = r0.getApplicationContext()
            r2.c = r0
            r2.f = r4
            r2.h = r5
            r2.k = r3
            return
    }

    static android.os.Messenger a(com.mbridge.msdk.mbdownload.b r0, android.os.Messenger r1) {
            r0.e = r1
            return r1
    }

    static com.mbridge.msdk.out.IDownloadListener a(com.mbridge.msdk.mbdownload.b r0) {
            com.mbridge.msdk.out.IDownloadListener r0 = r0.d
            return r0
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.mbdownload.b.b
            return r0
    }

    static android.content.ServiceConnection b(com.mbridge.msdk.mbdownload.b r0) {
            android.content.ServiceConnection r0 = r0.z
            return r0
    }

    static android.content.Context c(com.mbridge.msdk.mbdownload.b r0) {
            android.content.Context r0 = r0.c
            return r0
    }

    static java.lang.String d(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String r0 = r0.f
            return r0
    }

    static java.lang.String e(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    static java.lang.String f(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String r0 = r0.h
            return r0
    }

    static java.lang.String g(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static boolean h(com.mbridge.msdk.mbdownload.b r0) {
            boolean r0 = r0.l
            return r0
    }

    static java.lang.String i(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String r0 = r0.i
            return r0
    }

    static java.lang.String j(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String r0 = r0.j
            return r0
    }

    static java.lang.String k(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String r0 = r0.o
            return r0
    }

    static java.lang.String[] l(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String[] r0 = r0.q
            return r0
    }

    static java.lang.String[] m(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String[] r0 = r0.u
            return r0
    }

    static java.lang.String[] n(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String[] r0 = r0.r
            return r0
    }

    static java.lang.String[] o(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String[] r0 = r0.s
            return r0
    }

    static java.lang.String[] p(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String[] r0 = r0.t
            return r0
    }

    static java.lang.String[] q(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String[] r0 = r0.v
            return r0
    }

    static boolean r(com.mbridge.msdk.mbdownload.b r0) {
            boolean r0 = r0.w
            return r0
    }

    static boolean s(com.mbridge.msdk.mbdownload.b r0) {
            boolean r0 = r0.x
            return r0
    }

    static boolean t(com.mbridge.msdk.mbdownload.b r0) {
            boolean r0 = r0.y
            return r0
    }

    static java.lang.String u(com.mbridge.msdk.mbdownload.b r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    static boolean v(com.mbridge.msdk.mbdownload.b r0) {
            boolean r0 = r0.m
            return r0
    }

    static android.os.Messenger w(com.mbridge.msdk.mbdownload.b r0) {
            android.os.Messenger r0 = r0.e
            return r0
    }

    public java.lang.String getTargetAppIconUrl() {
            r1 = this;
            java.lang.String r0 = r1.n
            return r0
    }

    public boolean isCanPause() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public boolean isOnGoingStatus() {
            r1 = this;
            boolean r0 = r1.l
            return r0
    }

    public void setCanPause(boolean r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public void setCancelUrls(java.lang.String... r1) {
            r0 = this;
            r0.t = r1
            return
    }

    public void setCarryOnUrls(java.lang.String... r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public void setDownloadClz(java.lang.String r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public void setDownloadListener(com.mbridge.msdk.out.IDownloadListener r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public void setFaiUrls(java.lang.String... r1) {
            r0 = this;
            r0.u = r1
            return
    }

    public void setMd5(java.lang.String r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public void setOnGoingStatus(boolean r1) {
            r0 = this;
            r0.l = r1
            return
    }

    public void setPauseUrls(java.lang.String... r1) {
            r0 = this;
            r0.s = r1
            return
    }

    public void setReportClz(java.lang.String r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public void setRichNotification(boolean r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void setSilentDownload(boolean r1) {
            r0 = this;
            r0.x = r1
            return
    }

    public void setStartUrls(java.lang.String... r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public void setSuccUrls(java.lang.String... r1) {
            r0 = this;
            r0.q = r1
            return
    }

    public void setTargetAppIconUrl(java.lang.String r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public void setTargetMd5(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public com.mbridge.msdk.mbdownload.b setTitle(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return r0
    }

    public void setWifiOnly(boolean r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public void start() {
            r5 = this;
            java.lang.String r0 = r5.p
            if (r0 == 0) goto L2b
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L24
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.ClassNotFoundException -> L24
            android.content.Context r2 = r5.c     // Catch: java.lang.ClassNotFoundException -> L24
            r1.<init>(r2, r0)     // Catch: java.lang.ClassNotFoundException -> L24
            android.content.Context r2 = r5.c     // Catch: java.lang.ClassNotFoundException -> L24
            android.content.ServiceConnection r3 = r5.z     // Catch: java.lang.ClassNotFoundException -> L24
            r4 = 1
            r2.bindService(r1, r3, r4)     // Catch: java.lang.ClassNotFoundException -> L24
            android.content.Context r1 = r5.c     // Catch: java.lang.ClassNotFoundException -> L24
            android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.ClassNotFoundException -> L24
            android.content.Context r3 = r5.c     // Catch: java.lang.ClassNotFoundException -> L24
            r2.<init>(r3, r0)     // Catch: java.lang.ClassNotFoundException -> L24
            r1.startService(r2)     // Catch: java.lang.ClassNotFoundException -> L24
            return
        L24:
            r0 = move-exception
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            r1.<init>(r0)
            throw r1
        L2b:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "cannot find MBService"
            r0.<init>(r1)
            throw r0
    }
}
