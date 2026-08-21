package com.mbridge.msdk.videocommon.download;

public final class a implements java.io.Serializable {
    private com.mbridge.msdk.foundation.download.core.DownloadRequest A;
    private int B;
    private boolean C;
    private int D;
    private java.io.File E;
    private int F;
    private int G;
    private int H;
    private int I;
    private boolean J;
    private com.mbridge.msdk.c.d K;
    private com.mbridge.msdk.videocommon.d.c L;
    private com.mbridge.msdk.c.d M;
    private com.mbridge.msdk.foundation.download.OnDownloadStateListener N;
    private com.mbridge.msdk.foundation.download.OnProgressStateListener O;
    private com.mbridge.msdk.foundation.download.OnDownloadStateListener P;
    private com.mbridge.msdk.foundation.download.OnProgressStateListener Q;
    private boolean a;
    private boolean b;
    private int c;
    private int d;
    private boolean e;
    private volatile int f;
    private java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.c> g;
    private com.mbridge.msdk.videocommon.listener.a h;
    private com.mbridge.msdk.videocommon.listener.a i;
    private com.mbridge.msdk.foundation.entity.CampaignEx j;
    private java.lang.String k;
    private android.content.Context l;
    private long m;
    private java.lang.String n;
    private java.lang.String o;
    private long p;
    private java.lang.String q;
    private boolean r;
    private long s;
    private int t;
    private boolean u;
    private com.mbridge.msdk.foundation.db.s v;
    private boolean w;
    private java.lang.String x;
    private com.mbridge.msdk.foundation.download.core.DownloadRequest y;
    private com.mbridge.msdk.foundation.download.DownloadMessage z;





    private static final class a implements java.lang.Runnable {
        private final java.lang.String a;
        private final java.lang.String b;
        private final java.lang.String c;
        private final long d;
        private final java.lang.String e;
        private java.lang.String f;


        public a(java.lang.String r1, java.lang.String r2, java.lang.String r3, long r4, java.lang.String r6, java.lang.String r7) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                r0.d = r4
                r0.e = r6
                r0.f = r7
                return
        }

        @Override
        public final void run() {
                r5 = this;
                java.lang.String r0 = "&"
                java.lang.String r1 = r5.c
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto Ld3
                java.lang.String r1 = r5.b
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto Ld3
                java.lang.String r1 = r5.a
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto Ld3
                java.lang.String r1 = r5.e
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto Ld3
                java.lang.String r1 = r5.f
                boolean r1 = android.text.TextUtils.isEmpty(r1)
                if (r1 != 0) goto Ld3
                long r1 = r5.d
                r3 = 0
                int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
                if (r1 > 0) goto L34
                goto Ld3
            L34:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L87
                java.lang.String r2 = "key=2000110&"
                r1.<init>(r2)     // Catch: java.lang.Exception -> L87
                java.lang.String r2 = "unit_id="
                r1.append(r2)     // Catch: java.lang.Exception -> L87
                java.lang.String r2 = r5.c     // Catch: java.lang.Exception -> L87
                r1.append(r2)     // Catch: java.lang.Exception -> L87
                r1.append(r0)     // Catch: java.lang.Exception -> L87
                java.lang.String r2 = "video_url="
                r1.append(r2)     // Catch: java.lang.Exception -> L87
                java.lang.String r2 = r5.b     // Catch: java.lang.Exception -> L87
                r1.append(r2)     // Catch: java.lang.Exception -> L87
                r1.append(r0)     // Catch: java.lang.Exception -> L87
                java.lang.String r2 = "c_id="
                r1.append(r2)     // Catch: java.lang.Exception -> L87
                java.lang.String r2 = r5.a     // Catch: java.lang.Exception -> L87
                r1.append(r2)     // Catch: java.lang.Exception -> L87
                r1.append(r0)     // Catch: java.lang.Exception -> L87
                java.lang.String r2 = "r_id="
                r1.append(r2)     // Catch: java.lang.Exception -> L87
                java.lang.String r2 = r5.e     // Catch: java.lang.Exception -> L87
                r1.append(r2)     // Catch: java.lang.Exception -> L87
                r1.append(r0)     // Catch: java.lang.Exception -> L87
                java.lang.String r2 = "r_id_n="
                r1.append(r2)     // Catch: java.lang.Exception -> L87
                java.lang.String r2 = r5.f     // Catch: java.lang.Exception -> L87
                r1.append(r2)     // Catch: java.lang.Exception -> L87
                r1.append(r0)     // Catch: java.lang.Exception -> L87
                java.lang.String r0 = "video_size="
                r1.append(r0)     // Catch: java.lang.Exception -> L87
                long r2 = r5.d     // Catch: java.lang.Exception -> L87
                r1.append(r2)     // Catch: java.lang.Exception -> L87
                goto L88
            L87:
                r1 = 0
            L88:
                com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
                boolean r0 = r0.c()
                if (r0 == 0) goto La0
                if (r1 == 0) goto Ld3
                com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()
                java.lang.String r1 = r1.toString()
                r0.a(r1)
                goto Ld3
            La0:
                if (r1 != 0) goto La3
                return
            La3:
                java.lang.String r0 = r1.toString()
                com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
                android.content.Context r1 = r1.j()
                java.lang.String r2 = r5.c
                com.mbridge.msdk.foundation.same.net.g.d r0 = com.mbridge.msdk.foundation.same.report.e.a(r0, r1, r2)
                if (r0 == 0) goto Ld3
                com.mbridge.msdk.foundation.same.report.d.a r1 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> Ld3
                com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> Ld3
                android.content.Context r2 = r2.j()     // Catch: java.lang.Exception -> Ld3
                r1.<init>(r2)     // Catch: java.lang.Exception -> Ld3
                r2 = 0
                com.mbridge.msdk.foundation.same.net.f.d r3 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> Ld3
                java.lang.String r3 = r3.a     // Catch: java.lang.Exception -> Ld3
                com.mbridge.msdk.videocommon.download.a$a$1 r4 = new com.mbridge.msdk.videocommon.download.a$a$1     // Catch: java.lang.Exception -> Ld3
                r4.<init>(r5)     // Catch: java.lang.Exception -> Ld3
                r1.post(r2, r3, r0, r4)     // Catch: java.lang.Exception -> Ld3
            Ld3:
                return
        }
    }

    public a(android.content.Context r20, com.mbridge.msdk.foundation.entity.CampaignEx r21, java.lang.String r22, int r23) {
            r19 = this;
            r1 = r19
            r0 = r21
            java.lang.String r2 = ""
            r19.<init>()
            r3 = 0
            r1.a = r3
            r1.b = r3
            r4 = 1
            r1.c = r4
            r1.e = r3
            r1.f = r3
            java.util.concurrent.CopyOnWriteArrayList r5 = new java.util.concurrent.CopyOnWriteArrayList
            r5.<init>()
            r1.g = r5
            r5 = 0
            r1.p = r5
            r1.r = r3
            r7 = 100
            r1.t = r7
            r1.u = r3
            r1.w = r3
            r1.F = r4
            r1.J = r3
            com.mbridge.msdk.videocommon.download.a$1 r8 = new com.mbridge.msdk.videocommon.download.a$1
            r8.<init>(r1)
            r1.N = r8
            com.mbridge.msdk.videocommon.download.a$2 r8 = new com.mbridge.msdk.videocommon.download.a$2
            r8.<init>(r1)
            r1.O = r8
            com.mbridge.msdk.videocommon.download.a$3 r8 = new com.mbridge.msdk.videocommon.download.a$3
            r8.<init>(r1)
            r1.P = r8
            com.mbridge.msdk.videocommon.download.a$4 r8 = new com.mbridge.msdk.videocommon.download.a$4
            r8.<init>(r1)
            r1.Q = r8
            if (r20 != 0) goto L4f
            if (r0 != 0) goto L4f
            return
        L4f:
            com.mbridge.msdk.c.b r8 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r9 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r9 = r9.k()
            com.mbridge.msdk.c.a r8 = r8.g(r9)
            if (r8 == 0) goto L67
            boolean r8 = r8.r()
            r1.J = r8
        L67:
            int r8 = com.mbridge.msdk.foundation.same.a.Q
            r1.G = r8
            int r8 = com.mbridge.msdk.foundation.same.a.R
            r1.H = r8
            int r8 = com.mbridge.msdk.foundation.same.a.P
            r1.I = r8
            long r8 = java.lang.System.currentTimeMillis()
            r1.s = r8
            com.mbridge.msdk.foundation.controller.a r8 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r8 = r8.j()
            r1.l = r8
            r1.j = r0
            r8 = r22
            r1.k = r8
            r8 = r23
            r1.c = r8
            if (r0 == 0) goto L95
            java.lang.String r0 = r21.getVideoUrlEncode()
            r1.n = r0
        L95:
            java.lang.String r0 = r1.n
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.x.d(r0)
            r1.x = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.same.b.c r8 = com.mbridge.msdk.foundation.same.b.c.c
            java.lang.String r8 = com.mbridge.msdk.foundation.same.b.e.b(r8)
            r0.append(r8)
            java.lang.String r8 = java.io.File.separator
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            r1.o = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r8 = r1.o
            r0.append(r8)
            java.lang.String r8 = r1.x
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            r1.q = r0
            com.mbridge.msdk.foundation.tools.ab r0 = com.mbridge.msdk.foundation.tools.ab.a()
            java.lang.String r8 = "u_n_d_r_r"
            boolean r0 = r0.a(r8, r3)
            r1.a = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r1.j
            java.lang.String r8 = r8.getAppName()
            r0.append(r8)
            java.lang.String r8 = " videoLocalPath:"
            r0.append(r8)
            java.lang.String r8 = r1.q
            r0.append(r8)
            java.lang.String r8 = " videoUrl: "
            r0.append(r8)
            com.mbridge.msdk.foundation.entity.CampaignEx r8 = r1.j
            java.lang.String r8 = r8.getVideoUrlEncode()
            r0.append(r8)
            java.lang.String r8 = " "
            r0.append(r8)
            int r8 = r1.t
            r0.append(r8)
            java.lang.String r0 = r0.toString()
            java.lang.String r8 = "CampaignDownLoadTask"
            com.mbridge.msdk.foundation.tools.z.b(r8, r0)
            java.lang.String r0 = r1.n     // Catch: java.lang.Exception -> L2f3
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2f3
            if (r0 == 0) goto L11a
            goto L2fb
        L11a:
            r0 = 0
            java.lang.String r9 = r1.o     // Catch: java.lang.Exception -> L2f3
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Exception -> L2f3
            if (r9 != 0) goto L133
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L2f3
            java.lang.String r9 = r1.o     // Catch: java.lang.Exception -> L2f3
            r0.<init>(r9)     // Catch: java.lang.Exception -> L2f3
            boolean r9 = r0.exists()     // Catch: java.lang.Exception -> L2f3
            if (r9 != 0) goto L133
            r0.mkdirs()     // Catch: java.lang.Exception -> L2f3
        L133:
            if (r0 == 0) goto L16a
            boolean r9 = r0.exists()     // Catch: java.lang.Exception -> L2f3
            if (r9 == 0) goto L16a
            java.io.File r9 = r1.E     // Catch: java.lang.Exception -> L2f3
            if (r9 == 0) goto L147
            java.io.File r9 = r1.E     // Catch: java.lang.Exception -> L2f3
            boolean r9 = r9.exists()     // Catch: java.lang.Exception -> L2f3
            if (r9 != 0) goto L16a
        L147:
            java.io.File r9 = new java.io.File     // Catch: java.lang.Exception -> L2f3
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2f3
            r10.<init>()     // Catch: java.lang.Exception -> L2f3
            r10.append(r0)     // Catch: java.lang.Exception -> L2f3
            java.lang.String r0 = "/.nomedia"
            r10.append(r0)     // Catch: java.lang.Exception -> L2f3
            java.lang.String r0 = r10.toString()     // Catch: java.lang.Exception -> L2f3
            r9.<init>(r0)     // Catch: java.lang.Exception -> L2f3
            r1.E = r9     // Catch: java.lang.Exception -> L2f3
            boolean r0 = r9.exists()     // Catch: java.lang.Exception -> L2f3
            if (r0 != 0) goto L16a
            java.io.File r0 = r1.E     // Catch: java.lang.Exception -> L2f3
            r0.createNewFile()     // Catch: java.lang.Exception -> L2f3
        L16a:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L2f3
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.foundation.db.s r0 = com.mbridge.msdk.foundation.db.s.a(r0)     // Catch: java.lang.Exception -> L2f3
            java.lang.String r9 = r1.n     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.foundation.entity.o r9 = r0.a(r9, r2)     // Catch: java.lang.Exception -> L2f3
            r10 = 5
            if (r9 == 0) goto L209
            long r11 = r9.b()     // Catch: java.lang.Exception -> L2f3
            r1.p = r11     // Catch: java.lang.Exception -> L2f3
            int r0 = r1.f     // Catch: java.lang.Exception -> L2f3
            r11 = 2
            if (r0 == r11) goto L194
            int r0 = r9.d()     // Catch: java.lang.Exception -> L2f3
            r1.f = r0     // Catch: java.lang.Exception -> L2f3
        L194:
            int r0 = r1.f     // Catch: java.lang.Exception -> L2f3
            if (r0 != r4) goto L19a
            r1.f = r11     // Catch: java.lang.Exception -> L2f3
        L19a:
            int r0 = r9.c()     // Catch: java.lang.Exception -> L2f3
            long r11 = (long) r0     // Catch: java.lang.Exception -> L2f3
            r1.m = r11     // Catch: java.lang.Exception -> L2f3
            long r11 = r9.a()     // Catch: java.lang.Exception -> L2f3
            int r0 = (r11 > r5 ? 1 : (r11 == r5 ? 0 : -1))
            if (r0 <= 0) goto L1af
            long r11 = r9.a()     // Catch: java.lang.Exception -> L2f3
            r1.s = r11     // Catch: java.lang.Exception -> L2f3
        L1af:
            int r0 = r1.f     // Catch: java.lang.Exception -> L2f3
            if (r0 != r10) goto L1ef
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L2f3
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2f3
            r9.<init>()     // Catch: java.lang.Exception -> L2f3
            java.lang.String r11 = r1.o     // Catch: java.lang.Exception -> L2f3
            r9.append(r11)     // Catch: java.lang.Exception -> L2f3
            java.lang.String r11 = r1.x     // Catch: java.lang.Exception -> L2f3
            r9.append(r11)     // Catch: java.lang.Exception -> L2f3
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L2f3
            r0.<init>(r9)     // Catch: java.lang.Exception -> L2f3
            java.lang.String r9 = r1.o     // Catch: java.lang.Exception -> L2f3
            java.lang.String r11 = r1.x     // Catch: java.lang.Exception -> L2f3
            boolean r0 = com.mbridge.msdk.foundation.download.utils.Objects.exists(r0, r9, r11)     // Catch: java.lang.Exception -> L2f3
            if (r0 == 0) goto L1eb
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2f3
            r0.<init>()     // Catch: java.lang.Exception -> L2f3
            java.lang.String r9 = r1.o     // Catch: java.lang.Exception -> L2f3
            r0.append(r9)     // Catch: java.lang.Exception -> L2f3
            java.lang.String r9 = r1.x     // Catch: java.lang.Exception -> L2f3
            r0.append(r9)     // Catch: java.lang.Exception -> L2f3
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2f3
            r1.q = r0     // Catch: java.lang.Exception -> L2f3
            goto L210
        L1eb:
            r19.o()     // Catch: java.lang.Exception -> L2f3
            goto L210
        L1ef:
            int r0 = r1.f     // Catch: java.lang.Exception -> L2f3
            if (r0 == 0) goto L210
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L2f3
            r0.<init>()     // Catch: java.lang.Exception -> L2f3
            java.lang.String r9 = r1.o     // Catch: java.lang.Exception -> L2f3
            r0.append(r9)     // Catch: java.lang.Exception -> L2f3
            java.lang.String r9 = r1.x     // Catch: java.lang.Exception -> L2f3
            r0.append(r9)     // Catch: java.lang.Exception -> L2f3
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L2f3
            r1.q = r0     // Catch: java.lang.Exception -> L2f3
            goto L210
        L209:
            java.lang.String r9 = r1.n     // Catch: java.lang.Exception -> L2f3
            long r11 = r1.s     // Catch: java.lang.Exception -> L2f3
            r0.a(r9, r11)     // Catch: java.lang.Exception -> L2f3
        L210:
            java.lang.String r0 = r1.n     // Catch: java.lang.Exception -> L2f3
            boolean r9 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L2f3
            if (r9 == 0) goto L221
            com.mbridge.msdk.videocommon.listener.a r0 = r1.i     // Catch: java.lang.Exception -> L2f3
            java.lang.String r3 = "VideoUrl is NULL, Please check it."
            r0.a(r3, r2)     // Catch: java.lang.Exception -> L2f3
            goto L2fb
        L221:
            int r2 = r1.f     // Catch: java.lang.Exception -> L2f3
            if (r2 != r4) goto L22c
            java.lang.String r0 = "Run : Task is RUNNING, Will return."
            com.mbridge.msdk.foundation.tools.z.a(r8, r0)     // Catch: java.lang.Exception -> L2f3
            goto L2fb
        L22c:
            int r2 = r1.f     // Catch: java.lang.Exception -> L2f3
            if (r2 != r10) goto L281
            long r9 = r1.m     // Catch: java.lang.Exception -> L2f3
            long r11 = r1.p     // Catch: java.lang.Exception -> L2f3
            int r2 = com.mbridge.msdk.foundation.download.utils.Utils.getDownloadRate(r9, r11)     // Catch: java.lang.Exception -> L2f3
            int r4 = r1.t     // Catch: java.lang.Exception -> L2f3
            if (r2 < r4) goto L281
            java.lang.String r0 = "Run : Video Done, Will callback."
            com.mbridge.msdk.foundation.tools.z.a(r8, r0)     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.videocommon.listener.a r0 = r1.h     // Catch: java.lang.Exception -> L2f3
            if (r0 == 0) goto L24c
            com.mbridge.msdk.videocommon.listener.a r0 = r1.h     // Catch: java.lang.Exception -> L2f3
            java.lang.String r2 = r1.n     // Catch: java.lang.Exception -> L2f3
            r0.a(r2)     // Catch: java.lang.Exception -> L2f3
        L24c:
            com.mbridge.msdk.videocommon.listener.a r0 = r1.i     // Catch: java.lang.Exception -> L2f3
            if (r0 == 0) goto L257
            com.mbridge.msdk.videocommon.listener.a r0 = r1.i     // Catch: java.lang.Exception -> L2f3
            java.lang.String r2 = r1.n     // Catch: java.lang.Exception -> L2f3
            r0.a(r2)     // Catch: java.lang.Exception -> L2f3
        L257:
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L277
            java.lang.String r2 = r1.q     // Catch: java.lang.Exception -> L277
            r0.<init>(r2)     // Catch: java.lang.Exception -> L277
            java.lang.String r2 = r1.o     // Catch: java.lang.Exception -> L277
            java.lang.String r3 = r1.x     // Catch: java.lang.Exception -> L277
            boolean r2 = com.mbridge.msdk.foundation.download.utils.Objects.exists(r0, r2, r3)     // Catch: java.lang.Exception -> L277
            if (r2 == 0) goto L2fb
            boolean r2 = r0.isFile()     // Catch: java.lang.Exception -> L277
            if (r2 == 0) goto L2fb
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L277
            r0.setLastModified(r2)     // Catch: java.lang.Exception -> L277
            goto L2fb
        L277:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.foundation.tools.z.d(r8, r0)     // Catch: java.lang.Exception -> L2f3
            goto L2fb
        L281:
            int r2 = r1.c     // Catch: java.lang.Exception -> L2f3
            r4 = 3
            if (r2 != r4) goto L290
            java.lang.String r0 = "Run : Dlnet is 3, Will callback."
            com.mbridge.msdk.foundation.tools.z.a(r8, r0)     // Catch: java.lang.Exception -> L2f3
            r1.a(r5, r3)     // Catch: java.lang.Exception -> L2f3
            goto L2fb
        L290:
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r1.j     // Catch: java.lang.Exception -> L297
            int r2 = r1.b(r2)     // Catch: java.lang.Exception -> L297
            goto L298
        L297:
            r2 = r7
        L298:
            if (r2 != 0) goto L2b0
            com.mbridge.msdk.videocommon.listener.a r3 = r1.h     // Catch: java.lang.Exception -> L2f3
            if (r3 == 0) goto L2a5
            com.mbridge.msdk.videocommon.listener.a r3 = r1.h     // Catch: java.lang.Exception -> L2f3
            java.lang.String r4 = r1.n     // Catch: java.lang.Exception -> L2f3
            r3.a(r4)     // Catch: java.lang.Exception -> L2f3
        L2a5:
            com.mbridge.msdk.videocommon.listener.a r3 = r1.i     // Catch: java.lang.Exception -> L2f3
            if (r3 == 0) goto L2b0
            com.mbridge.msdk.videocommon.listener.a r3 = r1.i     // Catch: java.lang.Exception -> L2f3
            java.lang.String r4 = r1.n     // Catch: java.lang.Exception -> L2f3
            r3.a(r4)     // Catch: java.lang.Exception -> L2f3
        L2b0:
            if (r2 == r7) goto L2d4
            boolean r3 = r1.a     // Catch: java.lang.Exception -> L2f3
            if (r3 == 0) goto L2d4
            com.mbridge.msdk.foundation.download.DownloadMessage r3 = new com.mbridge.msdk.foundation.download.DownloadMessage     // Catch: java.lang.Exception -> L2f3
            java.lang.Object r14 = new java.lang.Object     // Catch: java.lang.Exception -> L2f3
            r14.<init>()     // Catch: java.lang.Exception -> L2f3
            java.lang.String r4 = r1.x     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.foundation.download.DownloadResourceType r18 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO     // Catch: java.lang.Exception -> L2f3
            r13 = r3
            r15 = r0
            r16 = r4
            r17 = r2
            r13.<init>(r14, r15, r16, r17, r18)     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.foundation.download.OnDownloadStateListener r2 = r1.N     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.foundation.download.OnProgressStateListener r4 = r1.O     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.foundation.download.core.DownloadRequest r2 = r1.a(r3, r2, r4)     // Catch: java.lang.Exception -> L2f3
            r1.A = r2     // Catch: java.lang.Exception -> L2f3
        L2d4:
            com.mbridge.msdk.foundation.download.DownloadMessage r2 = new com.mbridge.msdk.foundation.download.DownloadMessage     // Catch: java.lang.Exception -> L2f3
            java.lang.Object r14 = new java.lang.Object     // Catch: java.lang.Exception -> L2f3
            r14.<init>()     // Catch: java.lang.Exception -> L2f3
            java.lang.String r3 = r1.x     // Catch: java.lang.Exception -> L2f3
            r17 = 100
            com.mbridge.msdk.foundation.download.DownloadResourceType r18 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO     // Catch: java.lang.Exception -> L2f3
            r13 = r2
            r15 = r0
            r16 = r3
            r13.<init>(r14, r15, r16, r17, r18)     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.foundation.download.OnDownloadStateListener r0 = r1.P     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.foundation.download.OnProgressStateListener r3 = r1.Q     // Catch: java.lang.Exception -> L2f3
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r1.a(r2, r0, r3)     // Catch: java.lang.Exception -> L2f3
            r1.y = r0     // Catch: java.lang.Exception -> L2f3
            goto L2fb
        L2f3:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.b(r8, r0)
        L2fb:
            return
    }

    static int a(com.mbridge.msdk.videocommon.download.a r0, int r1) {
            r0.f = r1
            return r1
    }

    static long a(com.mbridge.msdk.videocommon.download.a r0, long r1) {
            r0.p = r1
            return r1
    }

    static com.mbridge.msdk.foundation.db.s a(com.mbridge.msdk.videocommon.download.a r0) {
            com.mbridge.msdk.foundation.db.s r0 = r0.v
            return r0
    }

    static com.mbridge.msdk.foundation.db.s a(com.mbridge.msdk.videocommon.download.a r0, com.mbridge.msdk.foundation.db.s r1) {
            r0.v = r1
            return r1
    }

    private com.mbridge.msdk.foundation.download.core.DownloadRequest<?> a(com.mbridge.msdk.foundation.download.DownloadMessage r3, com.mbridge.msdk.foundation.download.OnDownloadStateListener r4, com.mbridge.msdk.foundation.download.OnProgressStateListener r5) {
            r2 = this;
            com.mbridge.msdk.foundation.download.MBDownloadManager r0 = com.mbridge.msdk.foundation.download.MBDownloadManager.getInstance()
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r3 = r0.download(r3)
            int r0 = r2.G
            long r0 = (long) r0
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r3 = r3.withReadTimeout(r0)
            int r0 = r2.I
            long r0 = (long) r0
            com.mbridge.msdk.foundation.download.core.DownloadRequestBuilder r3 = r3.withConnectTimeout(r0)
            int r0 = r2.H
            long r0 = (long) r0
            com.mbridge.msdk.foundation.download.core.RequestBuilder r3 = r3.withWriteTimeout(r0)
            com.mbridge.msdk.foundation.download.DownloadPriority r0 = com.mbridge.msdk.foundation.download.DownloadPriority.HIGH
            com.mbridge.msdk.foundation.download.core.RequestBuilder r3 = r3.withDownloadPriority(r0)
            r0 = 1
            com.mbridge.msdk.foundation.download.core.RequestBuilder r3 = r3.withHttpRetryCounter(r0)
            java.lang.String r0 = r2.o
            com.mbridge.msdk.foundation.download.core.RequestBuilder r3 = r3.withDirectoryPathInternal(r0)
            com.mbridge.msdk.foundation.download.core.RequestBuilder r3 = r3.withDownloadStateListener(r4)
            com.mbridge.msdk.foundation.download.core.RequestBuilder r3 = r3.withProgressStateListener(r5)
            boolean r4 = r2.J
            java.lang.String r4 = java.lang.Boolean.toString(r4)
            java.lang.String r5 = "do_us_fi_re"
            com.mbridge.msdk.foundation.download.core.RequestBuilder r3 = r3.with(r5, r4)
            com.mbridge.msdk.foundation.download.core.DownloadRequest r3 = r3.build()
            return r3
    }

    private void a(int r14, java.lang.String r15) {
            r13 = this;
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.t r0 = com.mbridge.msdk.foundation.db.t.a(r0)
            long r1 = r13.s
            r3 = 0
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L19
            goto L21
        L19:
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r13.s
            long r3 = r1 - r3
        L21:
            com.mbridge.msdk.foundation.entity.p r1 = new com.mbridge.msdk.foundation.entity.p
            android.content.Context r6 = r13.l
            com.mbridge.msdk.foundation.entity.CampaignEx r7 = r13.j
            java.lang.String r9 = java.lang.Long.toString(r3)
            long r10 = r13.m
            int r12 = r13.D
            r5 = r1
            r8 = r14
            r5.<init>(r6, r7, r8, r9, r10, r12)
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r13.j
            java.lang.String r14 = r14.getId()
            r1.n(r14)
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r13.j
            java.lang.String r14 = r14.getVideoUrlEncode()
            r1.e(r14)
            r1.p(r15)
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r13.j
            java.lang.String r14 = r14.getRequestId()
            r1.k(r14)
            com.mbridge.msdk.foundation.entity.CampaignEx r14 = r13.j
            java.lang.String r14 = r14.getRequestIdNotice()
            r1.l(r14)
            java.lang.String r14 = r13.k
            r1.m(r14)
            r0.a(r1)
            return
    }

    private void a(long r7, int r9) {
            r6 = this;
            r6.p = r7
            int r0 = r6.t
            long r1 = (long) r0
            long r3 = r6.m
            long r1 = r1 * r3
            r3 = 100
            long r3 = r3 * r7
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            r2 = 1
            if (r1 < 0) goto L90
            boolean r1 = r6.u
            if (r1 != 0) goto L90
            r1 = 4
            if (r9 == r1) goto L90
            r1 = 100
            if (r0 != r1) goto L21
            r0 = 5
            if (r9 == r0) goto L21
            r6.f = r0
            return
        L21:
            r6.u = r2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "UpdateListener : state: "
            r0.append(r1)
            r0.append(r9)
            java.lang.String r1 = " progress : "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "CampaignDownLoadTask"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            java.lang.String r0 = r6.k()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto L5e
            com.mbridge.msdk.videocommon.listener.a r0 = r6.h
            if (r0 == 0) goto L54
            java.lang.String r1 = r6.n
            r0.a(r1)
        L54:
            com.mbridge.msdk.videocommon.listener.a r0 = r6.i
            if (r0 == 0) goto L90
            java.lang.String r1 = r6.n
            r0.a(r1)
            goto L90
        L5e:
            com.mbridge.msdk.videocommon.listener.a r1 = r6.h
            java.lang.String r3 = "file is not effective "
            if (r1 == 0) goto L78
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = r6.n
            r1.a(r4, r5)
        L78:
            com.mbridge.msdk.videocommon.listener.a r1 = r6.i
            if (r1 == 0) goto L90
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            r4.append(r0)
            java.lang.String r0 = r4.toString()
            java.lang.String r3 = r6.n
            r1.a(r0, r3)
        L90:
            boolean r0 = r6.b
            if (r0 != 0) goto Lbb
            r0 = 0
            int r0 = (r7 > r0 ? 1 : (r7 == r0 ? 0 : -1))
            if (r0 <= 0) goto Lbb
            r6.b = r2
            com.mbridge.msdk.foundation.db.s r0 = r6.v
            if (r0 != 0) goto Lb2
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.s r0 = com.mbridge.msdk.foundation.db.s.a(r0)
            r6.v = r0
        Lb2:
            com.mbridge.msdk.foundation.db.s r0 = r6.v
            java.lang.String r1 = r6.n
            int r2 = r6.f
            r0.a(r1, r7, r2)
        Lbb:
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.c> r0 = r6.g
            if (r0 == 0) goto Ld5
            java.util.Iterator r0 = r0.iterator()
        Lc3:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto Ld5
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.videocommon.download.c r1 = (com.mbridge.msdk.videocommon.download.c) r1
            if (r1 == 0) goto Lc3
            r1.a(r7, r9)
            goto Lc3
        Ld5:
            return
    }

    static void a(com.mbridge.msdk.videocommon.download.a r0, int r1, java.lang.String r2) {
            r0.a(r1, r2)
            return
    }

    static void a(com.mbridge.msdk.videocommon.download.a r0, java.lang.String r1) {
            r0.c(r1)
            return
    }

    static boolean a(com.mbridge.msdk.videocommon.download.a r0, boolean r1) {
            r0.e = r1
            return r1
    }

    private int b(com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r4 = this;
            r0 = 100
            if (r5 != 0) goto L5
            return r0
        L5:
            int r1 = r5.getReady_rate()
            r2 = -1
            java.lang.String r3 = "CampaignDownLoadTask"
            if (r1 == r2) goto L27
            int r5 = r5.getReady_rate()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ready_rate(campaign): "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r3, r1)
            goto L3f
        L27:
            int r5 = r4.c(r5)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "ready_rate(reward_unit_setting): "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r1 = r1.toString()
            com.mbridge.msdk.foundation.tools.z.a(r3, r1)
        L3f:
            r1 = 0
            int r5 = java.lang.Math.max(r5, r1)     // Catch: java.lang.Exception -> L45
            return r5
        L45:
            return r0
    }

    static long b(com.mbridge.msdk.videocommon.download.a r0, long r1) {
            r0.m = r1
            return r1
    }

    static com.mbridge.msdk.foundation.entity.CampaignEx b(com.mbridge.msdk.videocommon.download.a r0) {
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r0.j
            return r0
    }

    static java.lang.String b(com.mbridge.msdk.videocommon.download.a r0, int r1) {
            java.lang.String r0 = r0.f(r1)
            return r0
    }

    private int c(com.mbridge.msdk.foundation.entity.CampaignEx r5) {
            r4 = this;
            r0 = 100
            if (r5 != 0) goto L5
            return r0
        L5:
            int r1 = r5.getAdType()     // Catch: java.lang.Throwable -> L72
            r2 = 298(0x12a, float:4.18E-43)
            if (r1 != r2) goto L2c
            com.mbridge.msdk.c.d r5 = r4.K     // Catch: java.lang.Throwable -> L72
            if (r5 != 0) goto L25
            com.mbridge.msdk.c.b r5 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L72
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L72
            java.lang.String r1 = r1.k()     // Catch: java.lang.Throwable -> L72
            java.lang.String r2 = r4.k     // Catch: java.lang.Throwable -> L72
            com.mbridge.msdk.c.d r5 = r5.c(r1, r2)     // Catch: java.lang.Throwable -> L72
            r4.K = r5     // Catch: java.lang.Throwable -> L72
        L25:
            com.mbridge.msdk.c.d r5 = r4.K     // Catch: java.lang.Throwable -> L72
            int r5 = r5.f()     // Catch: java.lang.Throwable -> L72
            return r5
        L2c:
            int r5 = r5.getAdType()     // Catch: java.lang.Throwable -> L72
            r1 = 42
            if (r5 != r1) goto L52
            com.mbridge.msdk.c.d r5 = r4.M     // Catch: java.lang.Throwable -> L72
            if (r5 != 0) goto L4c
            com.mbridge.msdk.c.b r5 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L72
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L72
            java.lang.String r1 = r1.k()     // Catch: java.lang.Throwable -> L72
            java.lang.String r2 = r4.k     // Catch: java.lang.Throwable -> L72
            com.mbridge.msdk.c.d r5 = r5.e(r1, r2)     // Catch: java.lang.Throwable -> L72
            r4.M = r5     // Catch: java.lang.Throwable -> L72
        L4c:
            r5 = 0
            int r5 = r4.d(r5)     // Catch: java.lang.Throwable -> L72
            return r5
        L52:
            com.mbridge.msdk.videocommon.d.c r5 = r4.L     // Catch: java.lang.Throwable -> L72
            if (r5 != 0) goto L6b
            com.mbridge.msdk.videocommon.d.b r5 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Throwable -> L72
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L72
            java.lang.String r1 = r1.k()     // Catch: java.lang.Throwable -> L72
            java.lang.String r2 = r4.k     // Catch: java.lang.Throwable -> L72
            r3 = 0
            com.mbridge.msdk.videocommon.d.c r5 = r5.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L72
            r4.L = r5     // Catch: java.lang.Throwable -> L72
        L6b:
            com.mbridge.msdk.videocommon.d.c r5 = r4.L     // Catch: java.lang.Throwable -> L72
            int r5 = r5.r()     // Catch: java.lang.Throwable -> L72
            return r5
        L72:
            r5 = move-exception
            java.lang.String r1 = r5.getMessage()
            java.lang.String r2 = "CampaignDownLoadTask"
            com.mbridge.msdk.foundation.tools.z.c(r2, r1, r5)
            return r0
    }

    static int c(com.mbridge.msdk.videocommon.download.a r0, int r1) {
            r0.B = r1
            return r1
    }

    static long c(com.mbridge.msdk.videocommon.download.a r2) {
            long r0 = r2.m
            return r0
    }

    private void c(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L68
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L5e
            boolean r0 = r0.c()     // Catch: java.lang.Exception -> L5e
            if (r0 == 0) goto L18
            com.mbridge.msdk.foundation.same.report.b r0 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Exception -> L5e
            r0.a(r5)     // Catch: java.lang.Exception -> L5e
            return
        L18:
            com.mbridge.msdk.foundation.same.report.d.a r0 = new com.mbridge.msdk.foundation.same.report.d.a     // Catch: java.lang.Exception -> L5e
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L5e
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L5e
            r0.<init>(r1)     // Catch: java.lang.Exception -> L5e
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L5e
            android.content.Context r1 = r1.j()     // Catch: java.lang.Exception -> L5e
            java.lang.String r2 = r4.k     // Catch: java.lang.Exception -> L5e
            com.mbridge.msdk.foundation.same.net.g.d r5 = com.mbridge.msdk.foundation.same.report.e.a(r5, r1, r2)     // Catch: java.lang.Exception -> L5e
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.j     // Catch: java.lang.Exception -> L5e
            if (r1 == 0) goto L52
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r4.j     // Catch: java.lang.Exception -> L5e
            int r1 = r1.getAdType()     // Catch: java.lang.Exception -> L5e
            r2 = 42
            if (r1 == r2) goto L52
            com.mbridge.msdk.videocommon.d.b r1 = com.mbridge.msdk.videocommon.d.b.a()     // Catch: java.lang.Exception -> L5e
            com.mbridge.msdk.videocommon.d.a r1 = r1.b()     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = r1.b()     // Catch: java.lang.Exception -> L5e
            java.lang.String r2 = "r_stid"
            r5.a(r2, r1)     // Catch: java.lang.Exception -> L5e
        L52:
            r1 = 0
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Exception -> L5e
            java.lang.String r2 = r2.a     // Catch: java.lang.Exception -> L5e
            r3 = 0
            r0.post(r1, r2, r5, r3)     // Catch: java.lang.Exception -> L5e
            goto L68
        L5e:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            java.lang.String r0 = "CampaignDownLoadTask"
            com.mbridge.msdk.foundation.tools.z.d(r0, r5)
        L68:
            return
    }

    private int d(com.mbridge.msdk.foundation.entity.CampaignEx r2) {
            r1 = this;
            r2 = 100
            com.mbridge.msdk.c.d r0 = r1.M     // Catch: java.lang.Exception -> Lc
            if (r0 == 0) goto Lc
            com.mbridge.msdk.c.d r0 = r1.M     // Catch: java.lang.Exception -> Lc
            int r2 = r0.f()     // Catch: java.lang.Exception -> Lc
        Lc:
            return r2
    }

    static java.lang.String d(com.mbridge.msdk.videocommon.download.a r0) {
            java.lang.String r0 = r0.q
            return r0
    }

    static int e(com.mbridge.msdk.videocommon.download.a r0) {
            int r0 = r0.f
            return r0
    }

    private java.lang.String f(int r5) {
            r4 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.j
            if (r0 == 0) goto L103
            java.lang.String r0 = r4.k
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L103
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.j
            java.lang.String r0 = r0.getRequestId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L103
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r4.j
            java.lang.String r0 = r0.getVideoUrlEncode()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L26
            goto L103
        L26:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "key="
            r0.append(r1)
            java.lang.String r1 = "2000077"
            r0.append(r1)
            java.lang.String r1 = "&"
            r0.append(r1)
            java.lang.String r2 = "unit_id="
            r0.append(r2)
            java.lang.String r2 = r4.k
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "rid="
            r0.append(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.j
            java.lang.String r2 = r2.getRequestId()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "rid_n="
            r0.append(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.j
            java.lang.String r2 = r2.getRequestIdNotice()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "package_name="
            r0.append(r2)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.d()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "app_id="
            r0.append(r2)
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r2 = r2.k()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "video_url="
            r0.append(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.j
            java.lang.String r2 = r2.getVideoUrlEncode()
            java.lang.String r2 = java.net.URLEncoder.encode(r2)
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "process_size="
            r0.append(r2)
            long r2 = r4.p
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "file_size="
            r0.append(r2)
            long r2 = r4.m
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "ready_rate="
            r0.append(r2)
            int r2 = r4.t
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "cd_rate="
            r0.append(r2)
            int r2 = r4.d
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "cid="
            r0.append(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r4.j
            java.lang.String r2 = r2.getId()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "type="
            r0.append(r2)
            int r2 = r4.f
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = "video_download_status="
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            return r5
        L103:
            java.lang.String r5 = ""
            return r5
    }

    static java.lang.String f(com.mbridge.msdk.videocommon.download.a r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    static long g(com.mbridge.msdk.videocommon.download.a r2) {
            long r0 = r2.p
            return r0
    }

    static int h(com.mbridge.msdk.videocommon.download.a r0) {
            int r0 = r0.B
            return r0
    }

    static com.mbridge.msdk.foundation.download.core.DownloadRequest i(com.mbridge.msdk.videocommon.download.a r0) {
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r0.A
            return r0
    }

    static void j(com.mbridge.msdk.videocommon.download.a r0) {
            r0.p()
            return
    }

    static int k(com.mbridge.msdk.videocommon.download.a r0) {
            int r0 = r0.t
            return r0
    }

    static int l(com.mbridge.msdk.videocommon.download.a r0) {
            int r0 = r0.d
            return r0
    }

    static java.lang.String m(com.mbridge.msdk.videocommon.download.a r0) {
            java.lang.String r0 = r0.k
            return r0
    }

    static com.mbridge.msdk.foundation.download.core.DownloadRequest n(com.mbridge.msdk.videocommon.download.a r0) {
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r0.y
            return r0
    }

    static int o(com.mbridge.msdk.videocommon.download.a r0) {
            int r0 = r0.F
            return r0
    }

    private void o() {
            r4 = this;
            com.mbridge.msdk.foundation.db.s r0 = r4.v
            if (r0 != 0) goto L16
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.s r0 = com.mbridge.msdk.foundation.db.s.a(r0)
            r4.v = r0
        L16:
            r0 = 0
            com.mbridge.msdk.foundation.db.s r1 = r4.v     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = r4.n     // Catch: java.lang.Throwable -> L42
            r1.b(r2)     // Catch: java.lang.Throwable -> L42
            com.mbridge.msdk.foundation.tools.ab r1 = com.mbridge.msdk.foundation.tools.ab.a()     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = "r_d_v_b_l"
            r3 = 1
            boolean r1 = r1.a(r2, r3)     // Catch: java.lang.Throwable -> L42
            if (r1 != 0) goto L49
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L42
            java.lang.String r2 = r4.q     // Catch: java.lang.Throwable -> L42
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L42
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L42
            if (r2 == 0) goto L49
            boolean r2 = r1.isFile()     // Catch: java.lang.Throwable -> L42
            if (r2 == 0) goto L49
            r1.delete()     // Catch: java.lang.Throwable -> L42
            goto L49
        L42:
            java.lang.String r1 = "CampaignDownLoadTask"
            java.lang.String r2 = "del DB or file failed"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Throwable -> L4c
        L49:
            r4.f = r0
            return
        L4c:
            r1 = move-exception
            r4.f = r0
            throw r1
    }

    private void p() {
            r8 = this;
            java.lang.String r0 = "insertExcludeId"
            java.lang.String r1 = "com.mbridge.msdk.reward.a.a"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L50
            java.lang.Object r2 = r1.newInstance()     // Catch: java.lang.Exception -> L50
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L50
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L50
            java.lang.Class<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = com.mbridge.msdk.foundation.entity.CampaignEx.class
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Exception -> L50
            java.lang.reflect.Method r1 = r1.getMethod(r0, r4)     // Catch: java.lang.Exception -> L50
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L50
            java.lang.String r5 = r8.k     // Catch: java.lang.Exception -> L50
            r4[r6] = r5     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx r5 = r8.j     // Catch: java.lang.Exception -> L50
            r4[r7] = r5     // Catch: java.lang.Exception -> L50
            r1.invoke(r2, r4)     // Catch: java.lang.Exception -> L50
            java.lang.String r1 = "com.mbridge.msdk.mbnative.controller.NativeController"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L50
            java.lang.Object r2 = r1.newInstance()     // Catch: java.lang.Exception -> L50
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L50
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r6] = r5     // Catch: java.lang.Exception -> L50
            java.lang.Class<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = com.mbridge.msdk.foundation.entity.CampaignEx.class
            r4[r7] = r5     // Catch: java.lang.Exception -> L50
            java.lang.reflect.Method r0 = r1.getMethod(r0, r4)     // Catch: java.lang.Exception -> L50
            java.lang.Object[] r1 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L50
            java.lang.String r3 = r8.k     // Catch: java.lang.Exception -> L50
            r1[r6] = r3     // Catch: java.lang.Exception -> L50
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r8.j     // Catch: java.lang.Exception -> L50
            r1[r7] = r3     // Catch: java.lang.Exception -> L50
            r0.invoke(r2, r1)     // Catch: java.lang.Exception -> L50
            goto L5a
        L50:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "CampaignDownLoadTask"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L5a:
            return
    }

    static boolean p(com.mbridge.msdk.videocommon.download.a r0) {
            boolean r0 = r0.e
            return r0
    }

    static boolean q(com.mbridge.msdk.videocommon.download.a r0) {
            boolean r0 = r0.C
            return r0
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.n
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void a(int r5, int r6) {
            r4 = this;
            r4.f = r5
            com.mbridge.msdk.foundation.db.s r0 = r4.v
            if (r0 != 0) goto L18
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r0 = r0.j()
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)
            com.mbridge.msdk.foundation.db.s r0 = com.mbridge.msdk.foundation.db.s.a(r0)
            r4.v = r0
        L18:
            com.mbridge.msdk.foundation.db.s r0 = r4.v
            java.lang.String r1 = r4.n
            long r2 = (long) r6
            r0.a(r1, r2, r5)
            return
    }

    public final void a(long r7, boolean r9) {
            r6 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "setStateToDone 下载完成  ： mProgressSize"
            r0.append(r1)
            long r1 = r6.p
            r0.append(r1)
            java.lang.String r1 = "  progressSize "
            r0.append(r1)
            r0.append(r7)
            java.lang.String r1 = "  "
            r0.append(r1)
            int r2 = r6.B
            r0.append(r2)
            java.lang.String r2 = "%   FileSize : "
            r0.append(r2)
            long r2 = r6.m
            r0.append(r2)
            r0.append(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r6.j
            java.lang.String r1 = r1.getAppName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "CampaignDownLoadTask"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
            int r0 = r6.t
            r2 = 0
            r4 = 100
            if (r0 != r4) goto L9e
            int r0 = r6.c
            r4 = 3
            if (r0 == r4) goto L9e
            long r4 = r6.m
            int r0 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r0 == 0) goto L9e
            if (r9 != 0) goto L9e
            java.io.File r0 = new java.io.File
            java.lang.String r4 = r6.q
            r0.<init>(r4)
            java.lang.String r4 = r6.o
            java.lang.String r5 = r6.x
            boolean r4 = com.mbridge.msdk.foundation.download.utils.Objects.exists(r0, r4, r5)
            if (r4 == 0) goto L6a
            long r2 = r0.length()
        L6a:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r4 = "progressSize = "
            r0.append(r4)
            r0.append(r7)
            java.lang.String r7 = " fileSize = "
            r0.append(r7)
            long r7 = r6.m
            r0.append(r7)
            java.lang.String r7 = " "
            r0.append(r7)
            r0.append(r9)
            java.lang.String r7 = " absFileSize = "
            r0.append(r7)
            r0.append(r2)
            java.lang.String r7 = r0.toString()
            com.mbridge.msdk.foundation.tools.z.d(r1, r7)
            java.lang.String r7 = "File size is not match witch download size."
            r6.a(r7)
            return
        L9e:
            r9 = 5
            r6.f = r9
            r9 = 1
            java.lang.String r0 = ""
            r6.a(r9, r0)
            long r0 = r6.m
            int r9 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r9 == 0) goto Lb6
            com.mbridge.msdk.foundation.db.s r9 = r6.v
            if (r9 == 0) goto Lb6
            java.lang.String r2 = r6.n
            r9.b(r2, r0)
        Lb6:
            r9 = 0
            r6.b = r9
            int r9 = r6.f
            r6.a(r7, r9)
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public final void a(com.mbridge.msdk.videocommon.download.c r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.c> r0 = r1.g
            if (r0 == 0) goto L7
            r0.add(r2)
        L7:
            return
    }

    public final void a(com.mbridge.msdk.videocommon.listener.a r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void a(java.lang.String r3) {
            r2 = this;
            com.mbridge.msdk.videocommon.listener.a r0 = r2.h
            if (r0 == 0) goto L9
            java.lang.String r1 = r2.n
            r0.a(r3, r1)
        L9:
            com.mbridge.msdk.videocommon.listener.a r0 = r2.i
            if (r0 == 0) goto L12
            java.lang.String r1 = r2.n
            r0.a(r3, r1)
        L12:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Video download stop : "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "CampaignDownLoadTask"
            com.mbridge.msdk.foundation.tools.z.d(r0, r3)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.j
            if (r3 == 0) goto L55
            java.util.ArrayList r3 = r3.getRsIgnoreCheckRule()
            if (r3 == 0) goto L55
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.j
            java.util.ArrayList r3 = r3.getRsIgnoreCheckRule()
            int r3 = r3.size()
            if (r3 <= 0) goto L55
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = r2.j
            java.util.ArrayList r3 = r3.getRsIgnoreCheckRule()
            r1 = 0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            boolean r3 = r3.contains(r1)
            if (r3 == 0) goto L55
            java.lang.String r3 = "Is not check video download status"
            com.mbridge.msdk.foundation.tools.z.b(r0, r3)
            return
        L55:
            int r3 = r2.f
            r0 = 4
            if (r3 == r0) goto L6d
            int r3 = r2.f
            r1 = 2
            if (r3 == r1) goto L6d
            int r3 = r2.f
            r1 = 5
            if (r3 == r1) goto L6d
            r2.f = r0
            long r0 = r2.p
            int r3 = r2.f
            r2.a(r0, r3)
        L6d:
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public final void b(int r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void b(com.mbridge.msdk.videocommon.listener.a r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final void b(java.lang.String r2) {
            r1 = this;
            r1.p()
            r0 = 2
            r1.a(r0, r2)
            r2 = 4
            r1.f = r2
            return
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.r = r1
            return
    }

    public final boolean b() {
            r1 = this;
            boolean r0 = r1.w
            return r0
    }

    public final long c() {
            r2 = this;
            long r0 = r2.s
            return r0
    }

    public final void c(int r2) {
            r1 = this;
            r1.t = r2
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r0 = "setReadyRate:"
            r2.append(r0)
            int r0 = r1.t
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "CampaignDownLoadTask"
            com.mbridge.msdk.foundation.tools.z.a(r0, r2)
            return
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.q
            return r0
    }

    public final void d(int r1) {
            r0 = this;
            r0.D = r1
            return
    }

    public final long e() {
            r2 = this;
            long r0 = r2.m
            return r0
    }

    public final void e(int r1) {
            r0 = this;
            r0.F = r1
            return
    }

    public final int f() {
            r1 = this;
            int r0 = r1.f
            return r0
    }

    public final com.mbridge.msdk.foundation.entity.CampaignEx g() {
            r1 = this;
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = r1.j
            return r0
    }

    public final long h() {
            r2 = this;
            long r0 = r2.p
            return r0
    }

    public final void i() {
            r4 = this;
            java.lang.String r0 = "CampaignDownLoadTask"
            java.lang.String r1 = "start()"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            java.lang.String r1 = r4.n     // Catch: java.lang.Throwable -> L8c
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L8c
            if (r1 == 0) goto L10
            return
        L10:
            java.lang.String r1 = r4.n     // Catch: java.lang.Throwable -> L8c
            if (r1 == 0) goto L22
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Throwable -> L8c
            java.lang.String r2 = r4.n     // Catch: java.lang.Throwable -> L8c
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L8c
            java.lang.String r1 = r1.getPath()     // Catch: java.lang.Throwable -> L8c
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Throwable -> L8c
        L22:
            int r1 = r4.t
            r2 = 2
            if (r1 != 0) goto L31
            int r1 = r4.F
            if (r1 != r2) goto L31
            java.lang.String r1 = "Can not start download because readyRate is 0 and videoCtnType is 2"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
            return
        L31:
            boolean r1 = r4.a
            if (r1 == 0) goto L41
            int r1 = r4.F
            if (r1 != r2) goto L41
            int r1 = r4.t
            r2 = 100
            if (r1 == r2) goto L41
            r1 = 1
            goto L42
        L41:
            r1 = 0
        L42:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "start: ready rate is "
            r2.append(r3)
            int r3 = r4.t
            r2.append(r3)
            java.lang.String r3 = " and video ctn type is "
            r2.append(r3)
            int r3 = r4.F
            r2.append(r3)
            java.lang.String r3 = " and isUseNewDownloadReadyRate "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r2 = r2.toString()
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)
            if (r1 == 0) goto L7c
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r4.A
            if (r0 == 0) goto L74
            r0.start()
            goto L8b
        L74:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r4.y
            if (r0 == 0) goto L8b
            r0.start()
            goto L8b
        L7c:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r4.y
            if (r0 == 0) goto L84
            r0.start()
            goto L8b
        L84:
            com.mbridge.msdk.foundation.download.core.DownloadRequest r0 = r4.A
            if (r0 == 0) goto L8b
            r0.start()
        L8b:
            return
        L8c:
            com.mbridge.msdk.videocommon.listener.a r0 = r4.h
            java.lang.String r1 = ""
            java.lang.String r2 = "VideoUrl is not illegal, Please check it."
            if (r0 == 0) goto L97
            r0.a(r2, r1)
        L97:
            com.mbridge.msdk.videocommon.listener.a r0 = r4.i
            if (r0 == 0) goto L9e
            r0.a(r2, r1)
        L9e:
            return
    }

    public final void j() {
            r10 = this;
            java.lang.String r0 = "CampaignDownLoadTask"
            r1 = 1
            r10.C = r1     // Catch: java.lang.Exception -> Lc2
            int r2 = r10.F     // Catch: java.lang.Exception -> Lc2
            if (r2 != r1) goto L20
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc2
            r1.<init>()     // Catch: java.lang.Exception -> Lc2
            java.lang.String r2 = "Can not call resume(), because videoCtnType = "
            r1.append(r2)     // Catch: java.lang.Exception -> Lc2
            int r2 = r10.F     // Catch: java.lang.Exception -> Lc2
            r1.append(r2)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Lc2
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> Lc2
            return
        L20:
            java.lang.String r2 = "resume()"
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Exception -> Lc2
            boolean r2 = r10.a     // Catch: java.lang.Exception -> Lc2
            r3 = 2
            if (r2 == 0) goto L35
            int r2 = r10.F     // Catch: java.lang.Exception -> Lc2
            if (r2 != r3) goto L35
            int r2 = r10.t     // Catch: java.lang.Exception -> Lc2
            r4 = 100
            if (r2 == r4) goto L35
            goto L36
        L35:
            r1 = 0
        L36:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lc2
            r2.<init>()     // Catch: java.lang.Exception -> Lc2
            java.lang.String r4 = "resume: ready rate is "
            r2.append(r4)     // Catch: java.lang.Exception -> Lc2
            int r4 = r10.t     // Catch: java.lang.Exception -> Lc2
            r2.append(r4)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r4 = " and video ctn type is "
            r2.append(r4)     // Catch: java.lang.Exception -> Lc2
            int r4 = r10.F     // Catch: java.lang.Exception -> Lc2
            r2.append(r4)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r4 = " and isUseNewDownloadReadyRate "
            r2.append(r4)     // Catch: java.lang.Exception -> Lc2
            r2.append(r1)     // Catch: java.lang.Exception -> Lc2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> Lc2
            com.mbridge.msdk.foundation.tools.z.d(r0, r2)     // Catch: java.lang.Exception -> Lc2
            com.mbridge.msdk.foundation.download.DownloadMessage r2 = r10.z     // Catch: java.lang.Exception -> Lc2
            if (r2 != 0) goto L77
            com.mbridge.msdk.foundation.download.DownloadMessage r2 = new com.mbridge.msdk.foundation.download.DownloadMessage     // Catch: java.lang.Exception -> Lc2
            java.lang.Object r5 = new java.lang.Object     // Catch: java.lang.Exception -> Lc2
            r5.<init>()     // Catch: java.lang.Exception -> Lc2
            java.lang.String r6 = r10.n     // Catch: java.lang.Exception -> Lc2
            java.lang.String r7 = r10.x     // Catch: java.lang.Exception -> Lc2
            r8 = 100
            com.mbridge.msdk.foundation.download.DownloadResourceType r9 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO     // Catch: java.lang.Exception -> Lc2
            r4 = r2
            r4.<init>(r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> Lc2
            r10.z = r2     // Catch: java.lang.Exception -> Lc2
        L77:
            if (r1 == 0) goto L9a
            com.mbridge.msdk.foundation.download.DownloadMessage r1 = new com.mbridge.msdk.foundation.download.DownloadMessage     // Catch: java.lang.Exception -> Lc2
            java.lang.Object r5 = new java.lang.Object     // Catch: java.lang.Exception -> Lc2
            r5.<init>()     // Catch: java.lang.Exception -> Lc2
            java.lang.String r6 = r10.n     // Catch: java.lang.Exception -> Lc2
            java.lang.String r7 = r10.x     // Catch: java.lang.Exception -> Lc2
            r8 = 100
            com.mbridge.msdk.foundation.download.DownloadResourceType r9 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO     // Catch: java.lang.Exception -> Lc2
            r4 = r1
            r4.<init>(r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> Lc2
            com.mbridge.msdk.foundation.download.OnDownloadStateListener r2 = r10.N     // Catch: java.lang.Exception -> Lc2
            com.mbridge.msdk.foundation.download.OnProgressStateListener r4 = r10.O     // Catch: java.lang.Exception -> Lc2
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r10.a(r1, r2, r4)     // Catch: java.lang.Exception -> Lc2
            r10.A = r1     // Catch: java.lang.Exception -> Lc2
            r1.start()     // Catch: java.lang.Exception -> Lc2
            goto Lba
        L9a:
            com.mbridge.msdk.foundation.download.DownloadMessage r1 = new com.mbridge.msdk.foundation.download.DownloadMessage     // Catch: java.lang.Exception -> Lc2
            java.lang.Object r5 = new java.lang.Object     // Catch: java.lang.Exception -> Lc2
            r5.<init>()     // Catch: java.lang.Exception -> Lc2
            java.lang.String r6 = r10.n     // Catch: java.lang.Exception -> Lc2
            java.lang.String r7 = r10.x     // Catch: java.lang.Exception -> Lc2
            r8 = 100
            com.mbridge.msdk.foundation.download.DownloadResourceType r9 = com.mbridge.msdk.foundation.download.DownloadResourceType.DOWNLOAD_RESOURCE_TYPE_VIDEO     // Catch: java.lang.Exception -> Lc2
            r4 = r1
            r4.<init>(r5, r6, r7, r8, r9)     // Catch: java.lang.Exception -> Lc2
            com.mbridge.msdk.foundation.download.OnDownloadStateListener r2 = r10.P     // Catch: java.lang.Exception -> Lc2
            com.mbridge.msdk.foundation.download.OnProgressStateListener r4 = r10.Q     // Catch: java.lang.Exception -> Lc2
            com.mbridge.msdk.foundation.download.core.DownloadRequest r1 = r10.a(r1, r2, r4)     // Catch: java.lang.Exception -> Lc2
            r10.y = r1     // Catch: java.lang.Exception -> Lc2
            r1.start()     // Catch: java.lang.Exception -> Lc2
        Lba:
            java.lang.String r1 = r10.f(r3)     // Catch: java.lang.Exception -> Lc2
            r10.c(r1)     // Catch: java.lang.Exception -> Lc2
            goto Lca
        Lc2:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        Lca:
            return
    }

    public final java.lang.String k() {
            r6 = this;
            int r0 = r6.c
            java.lang.String r1 = ""
            r2 = 3
            if (r0 != r2) goto L8
            return r1
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r6.o
            r0.append(r2)
            java.lang.String r2 = r6.x
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.io.File r2 = new java.io.File
            r2.<init>(r0)
            java.lang.String r3 = r6.o     // Catch: java.lang.Throwable -> L4f
            java.lang.String r4 = r6.x     // Catch: java.lang.Throwable -> L4f
            boolean r3 = com.mbridge.msdk.foundation.download.utils.Objects.exists(r2, r3, r4)     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L4c
            boolean r3 = r2.isFile()     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L49
            boolean r3 = r2.canRead()     // Catch: java.lang.Throwable -> L4f
            if (r3 == 0) goto L46
            long r2 = r2.length()     // Catch: java.lang.Throwable -> L4f
            r4 = 0
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 <= 0) goto L43
            r6.q = r0     // Catch: java.lang.Throwable -> L4f
            goto L5d
        L43:
            java.lang.String r1 = "file length is 0 "
            goto L5d
        L46:
            java.lang.String r1 = "file can not read "
            goto L5d
        L49:
            java.lang.String r1 = "file is not file "
            goto L5d
        L4c:
            java.lang.String r1 = "file is not exist "
            goto L5d
        L4f:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            java.lang.String r2 = "CampaignDownLoadTask"
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
            java.lang.String r1 = r0.getMessage()
        L5d:
            int r0 = r6.f
            r2 = 5
            if (r0 != r2) goto L6b
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 != 0) goto L6b
            r6.o()
        L6b:
            return r1
    }

    public final void l() {
            r1 = this;
            java.util.concurrent.CopyOnWriteArrayList<com.mbridge.msdk.videocommon.download.c> r0 = r1.g
            if (r0 == 0) goto L7
            r0 = 0
            r1.g = r0
        L7:
            return
    }

    public final void m() {
            r3 = this;
            r0 = 0
            r3.o()     // Catch: java.lang.Throwable -> L20 java.lang.Exception -> L22
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.j     // Catch: java.lang.Throwable -> L20 java.lang.Exception -> L22
            if (r1 == 0) goto L14
            com.mbridge.msdk.foundation.entity.CampaignEx r1 = r3.j     // Catch: java.lang.Throwable -> L20 java.lang.Exception -> L22
            int r1 = r1.getPlayable_ads_without_video()     // Catch: java.lang.Throwable -> L20 java.lang.Exception -> L22
            r2 = 2
            if (r1 != r2) goto L14
            r3.f = r0
            return
        L14:
            com.mbridge.msdk.videocommon.a.a r1 = com.mbridge.msdk.videocommon.a.a.a()     // Catch: java.lang.Throwable -> L20 java.lang.Exception -> L22
            if (r1 == 0) goto L29
            com.mbridge.msdk.foundation.entity.CampaignEx r2 = r3.j     // Catch: java.lang.Throwable -> L20 java.lang.Exception -> L22
            r1.a(r2)     // Catch: java.lang.Throwable -> L20 java.lang.Exception -> L22
            goto L29
        L20:
            r1 = move-exception
            goto L2c
        L22:
            java.lang.String r1 = "CampaignDownLoadTask"
            java.lang.String r2 = "del file is failed"
            com.mbridge.msdk.foundation.tools.z.d(r1, r2)     // Catch: java.lang.Throwable -> L20
        L29:
            r3.f = r0
            return
        L2c:
            r3.f = r0
            throw r1
    }

    public final java.lang.String n() {
            r3 = this;
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = r3.q     // Catch: java.lang.Exception -> L1a
            r0.<init>(r1)     // Catch: java.lang.Exception -> L1a
            java.lang.String r1 = r3.o     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = r3.x     // Catch: java.lang.Exception -> L1a
            boolean r1 = com.mbridge.msdk.foundation.download.utils.Objects.exists(r0, r1, r2)     // Catch: java.lang.Exception -> L1a
            if (r1 == 0) goto L24
            boolean r0 = r0.isFile()     // Catch: java.lang.Exception -> L1a
            if (r0 == 0) goto L24
            java.lang.String r0 = r3.q     // Catch: java.lang.Exception -> L1a
            return r0
        L1a:
            r0 = move-exception
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "CampaignDownLoadTask"
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L24:
            java.lang.String r0 = r3.n
            return r0
    }
}
