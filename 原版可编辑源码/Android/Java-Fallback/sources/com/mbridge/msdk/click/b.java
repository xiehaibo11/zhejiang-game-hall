package com.mbridge.msdk.click;

public final class b {
    public static boolean a;
    public static java.util.Set<java.lang.String> b;
    public static java.util.Set<java.lang.String> c;
    public static java.util.Map<java.lang.String, java.lang.Long> d;
    public static java.util.Map<java.lang.String, java.lang.Long> e;
    static android.os.Handler f;
    private java.lang.String g;
    private long h;
    private long i;
    private boolean j;
    private boolean k;
    private boolean l;
    private boolean m;
    private boolean n;
    private com.mbridge.msdk.c.a o;
    private com.mbridge.msdk.foundation.db.i p;
    private android.content.Context q;
    private com.mbridge.msdk.click.CommonJumpLoader r;
    private java.util.HashMap<java.lang.String, com.mbridge.msdk.click.CommonJumpLoader> s;
    private com.mbridge.msdk.out.NativeListener.NativeTrackingListener t;
    private com.mbridge.msdk.foundation.same.report.d u;
    private com.mbridge.msdk.click.h v;
    private android.os.Handler w;











    static {
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.mbridge.msdk.click.b.b = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.mbridge.msdk.click.b.c = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.click.b.d = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.click.b.e = r0
            com.mbridge.msdk.click.b$9 r0 = new com.mbridge.msdk.click.b$9
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.mbridge.msdk.click.b.f = r0
            return
    }

    public b(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.m = r0
            r0 = 1
            r1.n = r0
            r0 = 0
            r1.p = r0
            r1.q = r0
            r1.t = r0
            com.mbridge.msdk.click.b$1 r0 = new com.mbridge.msdk.click.b$1
            r0.<init>(r1)
            r1.w = r0
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b(r3)
            r1.o = r0
            if (r0 != 0) goto L2d
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b()
            r1.o = r0
        L2d:
            com.mbridge.msdk.c.a r0 = r1.o
            boolean r0 = r0.ad()
            r1.k = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.q = r2
            r1.g = r3
            com.mbridge.msdk.foundation.db.i r3 = r1.p
            if (r3 != 0) goto L47
            com.mbridge.msdk.foundation.db.i r2 = com.mbridge.msdk.foundation.db.i.a(r2)
            r1.p = r2
        L47:
            com.mbridge.msdk.foundation.same.report.d r2 = new com.mbridge.msdk.foundation.same.report.d
            android.content.Context r3 = r1.q
            r2.<init>(r3)
            r1.u = r2
            java.util.HashMap r2 = new java.util.HashMap
            r2.<init>()
            r1.s = r2
            return
    }

    static com.mbridge.msdk.out.NativeListener.NativeTrackingListener a(com.mbridge.msdk.click.b r0) {
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r0 = r0.t
            return r0
    }

    private com.mbridge.msdk.scheme.applet.AppletSchemeCallBack a(com.mbridge.msdk.out.NativeListener.NativeTrackingListener r2, com.mbridge.msdk.foundation.entity.CampaignEx r3, com.mbridge.msdk.scheme.applet.AppletsModel r4, com.mbridge.msdk.click.b r5) {
            r1 = this;
            com.mbridge.msdk.click.f r0 = new com.mbridge.msdk.click.f
            r0.<init>(r2, r3, r4, r5)
            return r0
    }

    private void a(int r2, java.lang.String r3, com.mbridge.msdk.foundation.entity.CampaignEx r4, com.mbridge.msdk.out.NativeListener.NativeTrackingListener r5) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto L1f
            r0 = 2
            if (r2 != r0) goto Lf
            android.content.Context r2 = r1.q     // Catch: java.lang.Throwable -> L15
            com.mbridge.msdk.foundation.tools.ad.a(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L15
            goto L1f
        Lf:
            android.content.Context r2 = r1.q     // Catch: java.lang.Throwable -> L15
            com.mbridge.msdk.foundation.tools.ad.a(r2, r3, r5)     // Catch: java.lang.Throwable -> L15
            goto L1f
        L15:
            r2 = move-exception
            java.lang.String r3 = r2.getMessage()
            java.lang.String r4 = "MBridge SDK M"
            com.mbridge.msdk.foundation.tools.z.c(r4, r3, r2)
        L1f:
            return
    }

    public static void a(android.content.Context r3) {
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r1 = r1.k()
            com.mbridge.msdk.c.a r0 = r0.b(r1)
            if (r0 != 0) goto L1a
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r0 = r0.b()
        L1a:
            if (r0 == 0) goto L48
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            r2 = 0
            if (r1 != 0) goto L35
            if (r3 == 0) goto L35
            java.lang.String r0 = r0.Q()
            android.widget.Toast r3 = android.widget.Toast.makeText(r3, r0, r2)
            r3.show()
            goto L48
        L35:
            com.mbridge.msdk.foundation.controller.a r3 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r3 = r3.j()
            java.lang.String r0 = r0.Q()
            android.widget.Toast r3 = android.widget.Toast.makeText(r3, r0, r2)
            r3.show()
        L48:
            return
    }

    private void a(android.content.Context r10, com.mbridge.msdk.foundation.entity.CampaignEx r11) {
            r9 = this;
            r0 = 2
            if (r10 != 0) goto L13
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r10 = r10.j()
            java.lang.String r1 = r9.g
            java.lang.String r2 = "context is null"
            com.mbridge.msdk.foundation.same.report.e.a(r10, r11, r0, r2, r1)
            return
        L13:
            int r1 = com.mbridge.msdk.foundation.tools.v.v()
            r2 = 0
            r3 = 1
            if (r1 != r3) goto L1d
            r1 = r3
            goto L1e
        L1d:
            r1 = r2
        L1e:
            int r4 = com.mbridge.msdk.foundation.tools.v.r(r10)
            if (r4 != r3) goto L26
            r4 = r3
            goto L27
        L26:
            r4 = r2
        L27:
            if (r1 == 0) goto Lc1
            if (r4 != 0) goto L2d
            goto Lc1
        L2d:
            java.lang.String r1 = r11.getGhId()
            java.lang.String r4 = r11.getGhPath()
            java.lang.String r5 = r11.getBindId()
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r6 = r6.m()
            boolean r7 = android.text.TextUtils.isEmpty(r1)
            if (r7 != 0) goto Lb6
            boolean r7 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> La8
            if (r7 == 0) goto L4e
            goto L4f
        L4e:
            r5 = r6
        L4f:
            java.lang.Object r5 = com.mbridge.msdk.foundation.tools.v.f(r5)     // Catch: java.lang.Throwable -> La8
            java.lang.String r6 = "com.tencent.mm.opensdk.modelbiz.WXLaunchMiniProgram$Req"
            java.lang.Class r6 = java.lang.Class.forName(r6)     // Catch: java.lang.Throwable -> La8
            java.lang.Object r7 = r6.newInstance()     // Catch: java.lang.Throwable -> La8
            java.lang.String r8 = "userName"
            java.lang.reflect.Field r8 = r6.getField(r8)     // Catch: java.lang.Throwable -> La8
            r8.set(r7, r1)     // Catch: java.lang.Throwable -> La8
            java.lang.String r1 = "path"
            java.lang.reflect.Field r1 = r6.getField(r1)     // Catch: java.lang.Throwable -> La8
            r1.set(r7, r4)     // Catch: java.lang.Throwable -> La8
            java.lang.String r1 = "miniprogramType"
            java.lang.reflect.Field r1 = r6.getField(r1)     // Catch: java.lang.Throwable -> La8
            java.lang.String r4 = "MINIPTOGRAM_TYPE_RELEASE"
            java.lang.reflect.Field r4 = r6.getField(r4)     // Catch: java.lang.Throwable -> La8
            r6 = 0
            java.lang.Object r4 = r4.get(r6)     // Catch: java.lang.Throwable -> La8
            r1.set(r7, r4)     // Catch: java.lang.Throwable -> La8
            java.lang.String r1 = "com.tencent.mm.opensdk.openapi.IWXAPI"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> La8
            java.lang.String r4 = "sendReq"
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> La8
            java.lang.String r8 = "com.tencent.mm.opensdk.modelbase.BaseReq"
            java.lang.Class r8 = java.lang.Class.forName(r8)     // Catch: java.lang.Throwable -> La8
            r6[r2] = r8     // Catch: java.lang.Throwable -> La8
            java.lang.reflect.Method r1 = r1.getMethod(r4, r6)     // Catch: java.lang.Throwable -> La8
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> La8
            r4[r2] = r7     // Catch: java.lang.Throwable -> La8
            r1.invoke(r5, r4)     // Catch: java.lang.Throwable -> La8
            java.lang.String r0 = r9.g
            java.lang.String r1 = ""
            com.mbridge.msdk.foundation.same.report.e.a(r10, r11, r3, r1, r0)
            goto Lc0
        La8:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            java.lang.String r2 = r9.g
            com.mbridge.msdk.foundation.same.report.e.a(r10, r11, r0, r1, r2)
            r9.f(r11)
            return
        Lb6:
            r9.f(r11)
            java.lang.String r1 = r9.g
            java.lang.String r2 = "ghid is empty"
            com.mbridge.msdk.foundation.same.report.e.a(r10, r11, r0, r2, r1)
        Lc0:
            return
        Lc1:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "integrated:"
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = "-hasWx:"
            r2.append(r1)
            r2.append(r4)
            java.lang.String r1 = r2.toString()
            java.lang.String r2 = r9.g
            com.mbridge.msdk.foundation.same.report.e.a(r10, r11, r0, r1, r2)
            r9.f(r11)
            return
    }

    public static void a(android.content.Context r9, com.mbridge.msdk.foundation.entity.CampaignEx r10, java.lang.String r11, java.lang.String r12, boolean r13, boolean r14) {
            if (r9 != 0) goto L3
            return
        L3:
            com.mbridge.msdk.click.CommonJumpLoader r0 = new com.mbridge.msdk.click.CommonJumpLoader
            android.content.Context r9 = r9.getApplicationContext()
            r1 = 1
            r0.<init>(r9, r1)
            r4 = 0
            int r8 = com.mbridge.msdk.click.a.a.f
            java.lang.String r1 = "2"
            r2 = r11
            r3 = r10
            r5 = r12
            r6 = r13
            r7 = r14
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void a(android.content.Context r9, com.mbridge.msdk.foundation.entity.CampaignEx r10, java.lang.String r11, java.lang.String r12, boolean r13, boolean r14, int r15) {
            if (r9 != 0) goto L3
            return
        L3:
            com.mbridge.msdk.click.CommonJumpLoader r0 = new com.mbridge.msdk.click.CommonJumpLoader
            android.content.Context r9 = r9.getApplicationContext()
            r1 = 1
            r0.<init>(r9, r1)
            r4 = 0
            java.lang.String r1 = "2"
            r2 = r11
            r3 = r10
            r5 = r12
            r6 = r13
            r7 = r14
            r8 = r15
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void a(android.content.Context r10, com.mbridge.msdk.foundation.entity.CampaignEx r11, java.lang.String r12, java.lang.String[] r13, boolean r14, boolean r15) {
            if (r10 == 0) goto L2d
            if (r11 == 0) goto L2d
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            if (r0 != 0) goto L2d
            if (r13 != 0) goto Ld
            goto L2d
        Ld:
            com.mbridge.msdk.click.CommonJumpLoader r0 = new com.mbridge.msdk.click.CommonJumpLoader
            android.content.Context r10 = r10.getApplicationContext()
            r1 = 1
            r0.<init>(r10, r1)
            r10 = 0
        L18:
            int r1 = r13.length
            if (r10 >= r1) goto L2d
            r5 = 0
            r6 = r13[r10]
            int r9 = com.mbridge.msdk.click.a.a.f
            java.lang.String r2 = "2"
            r1 = r0
            r3 = r12
            r4 = r11
            r7 = r14
            r8 = r15
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9)
            int r10 = r10 + 1
            goto L18
        L2d:
            return
    }

    private void a(com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult r2, com.mbridge.msdk.foundation.entity.CampaignEx r3, boolean r4, boolean r5) {
            r1 = this;
            boolean r0 = r1.j
            if (r0 == 0) goto L9
            r5 = 1
            r1.a(r2, r3, r5, r4)
            goto Lf
        L9:
            if (r5 == 0) goto Lf
            r5 = 2
            r1.a(r2, r3, r5, r4)
        Lf:
            return
    }

    static void a(com.mbridge.msdk.click.b r0, com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult r1, com.mbridge.msdk.foundation.entity.CampaignEx r2, boolean r3, boolean r4) {
            r0.a(r1, r2, r3, r4)
            return
    }

    static void a(com.mbridge.msdk.click.b r3, com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L1d
            android.content.Context r1 = r3.q     // Catch: java.lang.Exception -> L1d
            java.lang.Class<com.mbridge.msdk.out.LoadingActivity> r2 = com.mbridge.msdk.out.LoadingActivity.class
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L1d
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r1)     // Catch: java.lang.Exception -> L1d
            java.lang.String r1 = "icon_url"
            java.lang.String r4 = r4.getIconUrl()     // Catch: java.lang.Exception -> L1d
            r0.putExtra(r1, r4)     // Catch: java.lang.Exception -> L1d
            android.content.Context r3 = r3.q     // Catch: java.lang.Exception -> L1d
            r3.startActivity(r0)     // Catch: java.lang.Exception -> L1d
            goto L25
        L1d:
            r3 = move-exception
            java.lang.String r4 = "MBridge SDK M"
            java.lang.String r0 = "Exception"
            com.mbridge.msdk.foundation.tools.z.c(r4, r0, r3)
        L25:
            return
    }

    static void a(com.mbridge.msdk.click.b r0, com.mbridge.msdk.foundation.entity.CampaignEx r1, com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult r2, boolean r3, boolean r4, boolean r5, java.lang.Boolean r6) {
            r0.a(r1, r2, r3, r4, r5, r6)
            return
    }

    static void a(com.mbridge.msdk.click.b r0, com.mbridge.msdk.foundation.entity.CampaignEx r1, java.lang.String r2, int r3) {
            r0.a(r1, r2, r3)
            return
    }

    static void a(com.mbridge.msdk.click.b r10, com.mbridge.msdk.foundation.entity.CampaignEx r11, java.lang.String r12, boolean r13) {
            if (r11 == 0) goto L11
            java.lang.String r0 = r11.getAkdlui()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L11
            java.lang.String r0 = r11.getAkdlui()
            goto L15
        L11:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r12)
        L15:
            r1 = 1
            boolean[] r1 = new boolean[r1]     // Catch: java.lang.Throwable -> L33
            java.lang.String r2 = "/apk"
            android.content.Context r3 = r10.q     // Catch: java.lang.Throwable -> L33
            java.io.File r7 = com.mbridge.msdk.foundation.tools.x.a(r2, r3, r1)     // Catch: java.lang.Throwable -> L33
            java.lang.String r8 = com.mbridge.msdk.click.c.a(r12)     // Catch: java.lang.Throwable -> L33
            com.mbridge.msdk.click.b$3 r9 = new com.mbridge.msdk.click.b$3     // Catch: java.lang.Throwable -> L33
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r13
            r5 = r0
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L33
            com.mbridge.msdk.optimize.a.a(r7, r8, r12, r9)     // Catch: java.lang.Throwable -> L33
            goto L3e
        L33:
            com.mbridge.msdk.foundation.controller.a r10 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r10 = r10.j()
            com.mbridge.msdk.click.c.a(r10, r12, r0)
        L3e:
            return
    }

    static void a(com.mbridge.msdk.click.b r8, com.mbridge.msdk.foundation.entity.CampaignEx r9, boolean r10, com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult r11, int r12, boolean r13) {
            if (r9 != 0) goto L3
            goto L56
        L3:
            java.lang.String r0 = ""
            if (r11 == 0) goto Lb
            java.lang.String r0 = r11.getUrl()     // Catch: java.lang.Exception -> L52
        Lb:
            com.mbridge.msdk.foundation.db.i r1 = r8.p     // Catch: java.lang.Exception -> L52
            com.mbridge.msdk.foundation.db.c r2 = com.mbridge.msdk.foundation.db.c.a(r1)     // Catch: java.lang.Exception -> L52
            int r1 = r9.getLinkType()     // Catch: java.lang.Exception -> L52
            boolean r0 = r8.a(r1, r0)     // Catch: java.lang.Exception -> L52
            if (r0 == 0) goto L44
            r0 = 0
            r8.a(r11, r9, r0, r13)     // Catch: java.lang.Exception -> L52
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r11 = r9.getJumpResult()     // Catch: java.lang.Exception -> L52
            if (r11 == 0) goto L3a
            java.lang.String r11 = r9.getNoticeUrl()     // Catch: java.lang.Exception -> L52
            boolean r11 = android.text.TextUtils.isEmpty(r11)     // Catch: java.lang.Exception -> L52
            if (r11 != 0) goto L3a
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r11 = r9.getJumpResult()     // Catch: java.lang.Exception -> L52
            java.lang.String r13 = r9.getNoticeUrl()     // Catch: java.lang.Exception -> L52
            r11.setNoticeurl(r13)     // Catch: java.lang.Exception -> L52
        L3a:
            java.lang.String r4 = r8.g     // Catch: java.lang.Exception -> L52
            r6 = 1
            r3 = r9
            r5 = r10
            r7 = r12
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L52
            goto L56
        L44:
            r0 = 1
            r8.a(r11, r9, r0, r13)     // Catch: java.lang.Exception -> L52
            java.lang.String r4 = r8.g     // Catch: java.lang.Exception -> L52
            r6 = 0
            r3 = r9
            r5 = r10
            r7 = r12
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L52
            goto L56
        L52:
            r8 = move-exception
            r8.printStackTrace()
        L56:
            return
    }

    static void a(com.mbridge.msdk.click.b r2, boolean r3, com.mbridge.msdk.out.Campaign r4) {
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.mbridge.msdk.click.b$7 r1 = new com.mbridge.msdk.click.b$7
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    public static void a(com.mbridge.msdk.foundation.entity.CampaignEx r2, android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "start"
            boolean r0 = r4.equals(r0)     // Catch: java.lang.Throwable -> L30
            if (r0 != 0) goto L10
            java.lang.String r0 = "downloading"
            boolean r0 = r4.equals(r0)     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto L2c
        L10:
            android.os.Looper r0 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L30
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L30
            if (r0 != r1) goto L1e
            d()     // Catch: java.lang.Throwable -> L30
            goto L2c
        L1e:
            android.os.Handler r0 = com.mbridge.msdk.click.b.f     // Catch: java.lang.Throwable -> L30
            r1 = 1
            android.os.Message r0 = r0.obtainMessage(r1)     // Catch: java.lang.Throwable -> L30
            r0.obj = r3     // Catch: java.lang.Throwable -> L30
            android.os.Handler r1 = com.mbridge.msdk.click.b.f     // Catch: java.lang.Throwable -> L30
            r1.sendMessage(r0)     // Catch: java.lang.Throwable -> L30
        L2c:
            c(r2, r3, r4)     // Catch: java.lang.Throwable -> L30
            goto L3a
        L30:
            r2 = move-exception
            java.lang.String r3 = r2.getMessage()
            java.lang.String r4 = "MBridge SDK M"
            com.mbridge.msdk.foundation.tools.z.c(r4, r3, r2)
        L3a:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r12, com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult r13, boolean r14, boolean r15, boolean r16, java.lang.Boolean r17) {
            r11 = this;
            r7 = r11
            r0 = r12
            r3 = r13
            r4 = r14
            r5 = r16
            boolean r1 = r7.n     // Catch: java.lang.Exception -> L20a
            if (r1 != 0) goto Lb
            return
        Lb:
            boolean r1 = com.mbridge.msdk.c.a.aq()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.MBridgeConstans.ALLOW_APK_DOWNLOAD = r1     // Catch: java.lang.Exception -> L20a
            r1 = 1
            if (r0 == 0) goto L1f8
            if (r3 != 0) goto L18
            goto L1f8
        L18:
            int r2 = r11.c()     // Catch: java.lang.Exception -> L20a
            int r6 = r13.getCode()     // Catch: java.lang.Exception -> L20a
            boolean r8 = r17.booleanValue()     // Catch: java.lang.Exception -> L20a
            if (r8 != 0) goto L3c
            java.lang.String r1 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Exception -> L20a
            if (r1 != 0) goto L3b
            java.lang.String r1 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            boolean r2 = r17.booleanValue()     // Catch: java.lang.Exception -> L20a
            r11.a(r12, r1, r2)     // Catch: java.lang.Exception -> L20a
        L3b:
            return
        L3c:
            java.lang.String r8 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            boolean r8 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> L20a
            r9 = 2
            r10 = 3
            if (r8 == 0) goto L82
            if (r4 == 0) goto L82
            int r2 = r12.getLinkType()     // Catch: java.lang.Exception -> L20a
            if (r2 != r9) goto L5e
            int r6 = r11.c()     // Catch: java.lang.Exception -> L20a
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r16
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L20a
            return
        L5e:
            if (r2 != r10) goto L64
            r11.a(r12, r13, r14, r5)     // Catch: java.lang.Exception -> L20a
            return
        L64:
            android.content.Context r2 = r7.q     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r12.getClickURL()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r8 = r7.t     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.foundation.tools.ad.a(r2, r6, r8)     // Catch: java.lang.Exception -> L20a
            r11.a(r13, r12, r1, r5)     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r7.t     // Catch: java.lang.Exception -> L20a
            if (r1 == 0) goto L81
            if (r4 == 0) goto L81
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r7.t     // Catch: java.lang.Exception -> L20a
            java.lang.String r2 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            r1.onFinishRedirection(r12, r2)     // Catch: java.lang.Exception -> L20a
        L81:
            return
        L82:
            java.lang.String r8 = "MBridge SDK M"
            if (r6 != r1) goto L137
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L20a
            r6.<init>()     // Catch: java.lang.Exception -> L20a
            java.lang.String r9 = "Jump to Google Play: "
            r6.append(r9)     // Catch: java.lang.Exception -> L20a
            java.lang.String r9 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            r6.append(r9)     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.foundation.tools.z.b(r8, r6)     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r12.getPackageName()     // Catch: java.lang.Exception -> L20a
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L20a
            if (r6 != 0) goto Lda
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L20a
            if (r6 != 0) goto Lda
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            java.lang.String r9 = r12.getPackageName()     // Catch: java.lang.Exception -> L20a
            boolean r6 = r6.contains(r9)     // Catch: java.lang.Exception -> L20a
            if (r6 == 0) goto Lda
            if (r4 == 0) goto Lda
            android.content.Context r6 = r7.q     // Catch: java.lang.Exception -> L20a
            java.lang.String r8 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r9 = r7.t     // Catch: java.lang.Exception -> L20a
            boolean r6 = com.mbridge.msdk.foundation.tools.ad.a.a(r6, r8, r9)     // Catch: java.lang.Exception -> L20a
            if (r6 != 0) goto L126
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r8 = r7.t     // Catch: java.lang.Exception -> L20a
            r11.a(r2, r6, r12, r8)     // Catch: java.lang.Exception -> L20a
            goto L126
        Lda:
            if (r4 == 0) goto L126
            java.lang.String r6 = r12.getPackageName()     // Catch: java.lang.Exception -> L20a
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L20a
            if (r6 != 0) goto L105
            android.content.Context r6 = r7.q     // Catch: java.lang.Exception -> L20a
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L20a
            r9.<init>()     // Catch: java.lang.Exception -> L20a
            java.lang.String r10 = "market://details?id="
            r9.append(r10)     // Catch: java.lang.Exception -> L20a
            java.lang.String r10 = r12.getPackageName()     // Catch: java.lang.Exception -> L20a
            r9.append(r10)     // Catch: java.lang.Exception -> L20a
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r10 = r7.t     // Catch: java.lang.Exception -> L20a
            boolean r6 = com.mbridge.msdk.foundation.tools.ad.a.a(r6, r9, r10)     // Catch: java.lang.Exception -> L20a
            if (r6 != 0) goto L10e
        L105:
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r9 = r7.t     // Catch: java.lang.Exception -> L20a
            r11.a(r2, r6, r12, r9)     // Catch: java.lang.Exception -> L20a
        L10e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L20a
            r2.<init>()     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = "code market This pkg is "
            r2.append(r6)     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r12.getPackageName()     // Catch: java.lang.Exception -> L20a
            r2.append(r6)     // Catch: java.lang.Exception -> L20a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.foundation.tools.z.d(r8, r2)     // Catch: java.lang.Exception -> L20a
        L126:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r7.t     // Catch: java.lang.Exception -> L20a
            if (r2 == 0) goto L1d0
            if (r4 == 0) goto L1d0
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r7.t     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            r2.onFinishRedirection(r12, r6)     // Catch: java.lang.Exception -> L20a
            goto L1d0
        L137:
            if (r6 != r10) goto L17e
            if (r4 == 0) goto L16e
            boolean r2 = com.mbridge.msdk.MBridgeConstans.ALLOW_APK_DOWNLOAD     // Catch: java.lang.Exception -> L20a
            if (r2 == 0) goto L163
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L20a
            r2.<init>()     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = "Jump to download: "
            r2.append(r6)     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            r2.append(r6)     // Catch: java.lang.Exception -> L20a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.foundation.tools.z.b(r8, r2)     // Catch: java.lang.Exception -> L20a
            java.lang.String r2 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            boolean r6 = r17.booleanValue()     // Catch: java.lang.Exception -> L20a
            r11.a(r12, r2, r6)     // Catch: java.lang.Exception -> L20a
            goto L16e
        L163:
            android.content.Context r2 = r7.q     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r8 = r7.t     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.foundation.tools.ad.a(r2, r6, r8)     // Catch: java.lang.Exception -> L20a
        L16e:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r7.t     // Catch: java.lang.Exception -> L20a
            if (r2 == 0) goto L1d0
            if (r4 == 0) goto L1d0
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r7.t     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            r2.onFinishRedirection(r12, r6)     // Catch: java.lang.Exception -> L20a
            goto L1d0
        L17e:
            if (r4 == 0) goto L1d0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L20a
            r2.<init>()     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = "Jump to Web: "
            r2.append(r6)     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            r2.append(r6)     // Catch: java.lang.Exception -> L20a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.foundation.tools.z.b(r8, r2)     // Catch: java.lang.Exception -> L20a
            int r2 = r12.getLinkType()     // Catch: java.lang.Exception -> L20a
            if (r10 != r2) goto L1a2
            r11.a(r12, r13, r14, r5)     // Catch: java.lang.Exception -> L20a
            return
        L1a2:
            int r2 = r12.getLinkType()     // Catch: java.lang.Exception -> L20a
            if (r9 != r2) goto L1b6
            int r6 = r11.c()     // Catch: java.lang.Exception -> L20a
            r1 = r11
            r2 = r12
            r3 = r13
            r4 = r14
            r5 = r16
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L20a
            return
        L1b6:
            android.content.Context r2 = r7.q     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r8 = r7.t     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.foundation.tools.ad.a(r2, r6, r8)     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r7.t     // Catch: java.lang.Exception -> L20a
            if (r2 == 0) goto L1d0
            if (r4 == 0) goto L1d0
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r7.t     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            r2.onFinishRedirection(r12, r6)     // Catch: java.lang.Exception -> L20a
        L1d0:
            int r2 = r12.getLinkType()     // Catch: java.lang.Exception -> L20a
            java.lang.String r6 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            boolean r2 = r11.a(r2, r6)     // Catch: java.lang.Exception -> L20a
            if (r2 == 0) goto L1e3
            r1 = 0
            r11.a(r13, r12, r1, r5)     // Catch: java.lang.Exception -> L20a
            goto L1e6
        L1e3:
            r11.a(r13, r12, r1, r5)     // Catch: java.lang.Exception -> L20a
        L1e6:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r7.t     // Catch: java.lang.Exception -> L20a
            if (r1 == 0) goto L20e
            if (r4 != 0) goto L20e
            if (r15 == 0) goto L20e
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r7.t     // Catch: java.lang.Exception -> L20a
            java.lang.String r2 = r13.getUrl()     // Catch: java.lang.Exception -> L20a
            r1.onFinishRedirection(r12, r2)     // Catch: java.lang.Exception -> L20a
            goto L20e
        L1f8:
            if (r4 == 0) goto L209
            r11.a(r13, r12, r1, r5)     // Catch: java.lang.Exception -> L20a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r0 = r7.t     // Catch: java.lang.Exception -> L20a
            if (r0 == 0) goto L209
            if (r4 == 0) goto L209
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r0 = r7.t     // Catch: java.lang.Exception -> L20a
            r1 = 0
            r0.onRedirectionFailed(r1, r1)     // Catch: java.lang.Exception -> L20a
        L209:
            return
        L20a:
            r0 = move-exception
            r0.printStackTrace()
        L20e:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r9, java.lang.String r10, int r11) {
            r8 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 != 0) goto L43
            r5 = 1
            r6 = 0
            r0 = -1
            if (r11 == r0) goto L1f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r10)
            java.lang.String r10 = "&apk_ptype="
            r0.append(r10)
            r0.append(r11)
            java.lang.String r10 = r0.toString()
        L1f:
            java.lang.String r11 = "opdptype"
            boolean r11 = r10.contains(r11)
            if (r11 != 0) goto L38
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            r11.append(r10)
            java.lang.String r10 = "&opdptype=0"
            r11.append(r10)
            java.lang.String r10 = r11.toString()
        L38:
            r4 = r10
            android.content.Context r1 = r8.q
            java.lang.String r3 = r8.g
            int r7 = com.mbridge.msdk.click.a.a.i
            r2 = r9
            a(r1, r2, r3, r4, r5, r6, r7)
        L43:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r11, java.lang.String r12, boolean r13) {
            r10 = this;
            java.lang.String r0 = r11.getAkdlui()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 == 0) goto Le
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r12)
        Le:
            r1 = -1
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L140
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L140
            java.lang.String r3 = ""
            java.lang.Object r2 = com.mbridge.msdk.foundation.tools.ag.b(r2, r0, r3)     // Catch: java.lang.Throwable -> L140
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L140
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L140
            r4 = 0
            r5 = 1
            if (r3 != 0) goto L49
            java.io.File r3 = new java.io.File     // Catch: java.lang.Throwable -> L140
            r3.<init>(r2)     // Catch: java.lang.Throwable -> L140
            boolean r2 = r3.exists()     // Catch: java.lang.Throwable -> L140
            if (r2 == 0) goto L114
            if (r13 == 0) goto L48
            java.lang.String r2 = r11.getNoticeUrl()     // Catch: java.lang.Throwable -> L140
            int r4 = com.mbridge.msdk.foundation.same.a.J     // Catch: java.lang.Throwable -> L140
            r10.a(r11, r2, r4)     // Catch: java.lang.Throwable -> L140
            android.content.Context r2 = r10.q     // Catch: java.lang.Throwable -> L140
            android.net.Uri r3 = android.net.Uri.fromFile(r3)     // Catch: java.lang.Throwable -> L140
            com.mbridge.msdk.click.c.a(r2, r3, r12, r0)     // Catch: java.lang.Throwable -> L140
        L48:
            return
        L49:
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L140
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L140
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140
            r3.<init>()     // Catch: java.lang.Throwable -> L140
            r3.append(r0)     // Catch: java.lang.Throwable -> L140
            java.lang.String r6 = "process"
            r3.append(r6)     // Catch: java.lang.Throwable -> L140
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L140
            java.lang.Integer r6 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L140
            java.lang.Object r2 = com.mbridge.msdk.foundation.tools.ag.b(r2, r3, r6)     // Catch: java.lang.Throwable -> L140
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Throwable -> L140
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L140
            int r3 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L140
            if (r2 == 0) goto L114
            if (r2 != r3) goto L114
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L140
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L140
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140
            r3.<init>()     // Catch: java.lang.Throwable -> L140
            r3.append(r0)     // Catch: java.lang.Throwable -> L140
            java.lang.String r6 = "isDowning"
            r3.append(r6)     // Catch: java.lang.Throwable -> L140
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L140
            r6 = 0
            java.lang.Long r8 = java.lang.Long.valueOf(r6)     // Catch: java.lang.Throwable -> L140
            java.lang.Object r2 = com.mbridge.msdk.foundation.tools.ag.b(r2, r3, r8)     // Catch: java.lang.Throwable -> L140
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.lang.Throwable -> L140
            long r2 = r2.longValue()     // Catch: java.lang.Throwable -> L140
            long r8 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L140
            long r8 = r8 - r2
            int r2 = (r2 > r6 ? 1 : (r2 == r6 ? 0 : -1))
            if (r2 == 0) goto L114
            r2 = 600000(0x927c0, double:2.964394E-318)
            int r2 = (r8 > r2 ? 1 : (r8 == r2 ? 0 : -1))
            if (r2 >= 0) goto L114
            if (r13 == 0) goto L113
            com.mbridge.msdk.foundation.controller.a r2 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L140
            android.content.Context r2 = r2.j()     // Catch: java.lang.Throwable -> L140
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L140
            r3.<init>()     // Catch: java.lang.Throwable -> L140
            r3.append(r0)     // Catch: java.lang.Throwable -> L140
            java.lang.String r0 = "downloadType"
            r3.append(r0)     // Catch: java.lang.Throwable -> L140
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L140
            java.lang.Integer r3 = java.lang.Integer.valueOf(r1)     // Catch: java.lang.Throwable -> L140
            java.lang.Object r0 = com.mbridge.msdk.foundation.tools.ag.b(r2, r0, r3)     // Catch: java.lang.Throwable -> L140
            java.lang.Integer r0 = (java.lang.Integer) r0     // Catch: java.lang.Throwable -> L140
            int r0 = r0.intValue()     // Catch: java.lang.Throwable -> L140
            java.lang.String r2 = "downloading"
            if (r0 != r5) goto Led
            android.content.Context r0 = r10.q     // Catch: java.lang.Throwable -> L140
            b(r11, r0, r2)     // Catch: java.lang.Throwable -> L140
            java.lang.String r0 = r11.getNoticeUrl()     // Catch: java.lang.Throwable -> L140
            int r2 = com.mbridge.msdk.foundation.same.a.F     // Catch: java.lang.Throwable -> L140
            r10.a(r11, r0, r2)     // Catch: java.lang.Throwable -> L140
            goto L113
        Led:
            r3 = 2
            if (r0 != r3) goto Lff
            android.content.Context r0 = r10.q     // Catch: java.lang.Throwable -> L140
            a(r11, r0, r2)     // Catch: java.lang.Throwable -> L140
            java.lang.String r0 = r11.getNoticeUrl()     // Catch: java.lang.Throwable -> L140
            int r2 = com.mbridge.msdk.foundation.same.a.F     // Catch: java.lang.Throwable -> L140
            r10.a(r11, r0, r2)     // Catch: java.lang.Throwable -> L140
            goto L113
        Lff:
            android.content.Context r0 = r10.q     // Catch: java.lang.Throwable -> L140
            java.lang.String r2 = r11.getClickURL()     // Catch: java.lang.Throwable -> L140
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r3 = r10.t     // Catch: java.lang.Throwable -> L140
            com.mbridge.msdk.foundation.tools.ad.a(r0, r2, r3)     // Catch: java.lang.Throwable -> L140
            java.lang.String r0 = r11.getNoticeUrl()     // Catch: java.lang.Throwable -> L140
            int r2 = com.mbridge.msdk.foundation.same.a.I     // Catch: java.lang.Throwable -> L140
            r10.a(r11, r0, r2)     // Catch: java.lang.Throwable -> L140
        L113:
            return
        L114:
            int r0 = com.mbridge.msdk.foundation.tools.aj.a     // Catch: java.lang.Throwable -> L140
            if (r0 != r1) goto L132
            java.lang.String r0 = "com.mbridge.msdk.mbdownload.b"
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L129 java.lang.Throwable -> L140
            java.lang.String r0 = "com.mbridge.msdk.mbdownload.f"
            java.lang.Class.forName(r0)     // Catch: java.lang.ClassNotFoundException -> L129 java.lang.Throwable -> L140
            com.mbridge.msdk.foundation.tools.aj.a = r5     // Catch: java.lang.ClassNotFoundException -> L129 java.lang.Throwable -> L140
            java.lang.String r0 = "ok"
            com.mbridge.msdk.foundation.tools.aj.b = r0     // Catch: java.lang.ClassNotFoundException -> L129 java.lang.Throwable -> L140
            goto L132
        L129:
            r0 = move-exception
            com.mbridge.msdk.foundation.tools.aj.a = r4     // Catch: java.lang.Throwable -> L140
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L140
            com.mbridge.msdk.foundation.tools.aj.b = r0     // Catch: java.lang.Throwable -> L140
        L132:
            int r0 = com.mbridge.msdk.foundation.tools.aj.a     // Catch: java.lang.Throwable -> L140
            if (r0 != r5) goto L13c
            if (r13 == 0) goto L13c
            r10.b(r11, r12, r13)     // Catch: java.lang.Throwable -> L140
            goto L153
        L13c:
            r10.c(r11, r12, r13)     // Catch: java.lang.Throwable -> L140
            goto L153
        L140:
            r0 = move-exception
            com.mbridge.msdk.foundation.tools.aj.a = r1
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.aj.b = r0
            java.lang.String r0 = "downloadapk"
            java.lang.String r1 = "can't find download jar, use simple method"
            com.mbridge.msdk.foundation.tools.z.b(r0, r1)
            r10.c(r11, r12, r13)
        L153:
            return
    }

    private void a(com.mbridge.msdk.foundation.entity.CampaignEx r17, boolean r18, boolean r19, boolean r20, int r21, boolean r22, java.lang.Boolean r23) {
            r16 = this;
            r8 = r16
            r0 = r17
            r1 = r18
            r9 = r22
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L1b7
            r8.h = r2     // Catch: java.lang.Exception -> L1b7
            java.lang.String r10 = "Start 302 Redirection... "
            java.lang.String r11 = "MBridge SDK M"
            r12 = 1
            r13 = 0
            if (r1 == 0) goto L4d
            com.mbridge.msdk.foundation.tools.z.b(r11, r10)     // Catch: java.lang.Exception -> L1b7
            if (r20 != 0) goto L2a
            java.util.HashMap<java.lang.String, com.mbridge.msdk.click.CommonJumpLoader> r2 = r8.s     // Catch: java.lang.Exception -> L1b7
            java.lang.String r3 = r17.getClickURL()     // Catch: java.lang.Exception -> L1b7
            boolean r2 = r2.containsKey(r3)     // Catch: java.lang.Exception -> L1b7
            if (r2 == 0) goto L2a
            if (r19 != 0) goto L2a
            return
        L2a:
            com.mbridge.msdk.click.CommonJumpLoader r2 = new com.mbridge.msdk.click.CommonJumpLoader     // Catch: java.lang.Exception -> L1b7
            android.content.Context r3 = r8.q     // Catch: java.lang.Exception -> L1b7
            if (r19 == 0) goto L31
            r12 = r13
        L31:
            r2.<init>(r3, r12)     // Catch: java.lang.Exception -> L1b7
            java.util.HashMap<java.lang.String, com.mbridge.msdk.click.CommonJumpLoader> r3 = r8.s     // Catch: java.lang.Exception -> L1b7
            java.lang.String r4 = r17.getClickURL()     // Catch: java.lang.Exception -> L1b7
            r3.put(r4, r2)     // Catch: java.lang.Exception -> L1b7
            java.lang.String r3 = "2"
            java.lang.String r4 = r8.g     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.click.b$4 r5 = new com.mbridge.msdk.click.b$4     // Catch: java.lang.Exception -> L1b7
            r14 = r21
            r5.<init>(r8, r0, r1, r14)     // Catch: java.lang.Exception -> L1b7
            r2.a(r3, r4, r0, r5)     // Catch: java.lang.Exception -> L1b7
            goto L1bb
        L4d:
            r14 = r21
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r8.t     // Catch: java.lang.Exception -> L1b7
            if (r1 == 0) goto L67
            if (r9 != 0) goto L67
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r8.t     // Catch: java.lang.Exception -> L1b7
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Exception -> L1b7
            r1.onStartRedirection(r0, r2)     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r8.t     // Catch: java.lang.Exception -> L1b7
            boolean r1 = r1.onInterceptDefaultLoadingDialog()     // Catch: java.lang.Exception -> L1b7
            r1 = r1 ^ r12
            r15 = r1
            goto L68
        L67:
            r15 = r12
        L68:
            java.util.HashMap<java.lang.String, com.mbridge.msdk.click.CommonJumpLoader> r1 = r8.s     // Catch: java.lang.Exception -> L1b7
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Exception -> L1b7
            boolean r1 = r1.containsKey(r2)     // Catch: java.lang.Exception -> L1b7
            if (r1 == 0) goto L8c
            java.util.HashMap<java.lang.String, com.mbridge.msdk.click.CommonJumpLoader> r1 = r8.s     // Catch: java.lang.Exception -> L1b7
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Exception -> L1b7
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.click.CommonJumpLoader r1 = (com.mbridge.msdk.click.CommonJumpLoader) r1     // Catch: java.lang.Exception -> L1b7
            r1.a()     // Catch: java.lang.Exception -> L1b7
            java.util.HashMap<java.lang.String, com.mbridge.msdk.click.CommonJumpLoader> r1 = r8.s     // Catch: java.lang.Exception -> L1b7
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Exception -> L1b7
            r1.remove(r2)     // Catch: java.lang.Exception -> L1b7
        L8c:
            r4 = 1
            r8.l = r13     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r1 = r17.getJumpResult()     // Catch: java.lang.Exception -> L1b7
            if (r1 == 0) goto Lac
            if (r9 != 0) goto La7
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r3 = r17.getJumpResult()     // Catch: java.lang.Exception -> L1b7
            boolean r5 = r8.m     // Catch: java.lang.Exception -> L1b7
            r6 = 0
            r1 = r16
            r2 = r17
            r7 = r23
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L1b7
        La7:
            r8.l = r12     // Catch: java.lang.Exception -> L1b7
            r8.m = r13     // Catch: java.lang.Exception -> L1b7
            r4 = r13
        Lac:
            com.mbridge.msdk.foundation.db.i r1 = r8.p     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.foundation.db.c r1 = com.mbridge.msdk.foundation.db.c.a(r1)     // Catch: java.lang.Exception -> L1b7
            java.lang.String r2 = r17.getId()     // Catch: java.lang.Exception -> L1b7
            java.lang.String r3 = r8.g     // Catch: java.lang.Exception -> L1b7
            boolean r1 = r1.a(r2, r3)     // Catch: java.lang.Exception -> L1b7
            if (r1 == 0) goto Lc4
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r1 = r17.getJumpResult()     // Catch: java.lang.Exception -> L1b7
            if (r1 != 0) goto L1bb
        Lc4:
            com.mbridge.msdk.foundation.db.i r1 = r8.p     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.foundation.db.c r1 = com.mbridge.msdk.foundation.db.c.a(r1)     // Catch: java.lang.Exception -> L1b7
            r1.a()     // Catch: java.lang.Exception -> L1b7
            java.lang.String r2 = r17.getId()     // Catch: java.lang.Exception -> L1b7
            java.lang.String r3 = r8.g     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r3 = r1.b(r2, r3)     // Catch: java.lang.Exception -> L1b7
            if (r3 == 0) goto Lf3
            if (r9 != 0) goto Lf3
            r0.setJumpResult(r3)     // Catch: java.lang.Exception -> L1b7
            if (r4 == 0) goto L149
            if (r9 != 0) goto Lee
            boolean r5 = r8.m     // Catch: java.lang.Exception -> L1b7
            r6 = 0
            r1 = r16
            r2 = r17
            r7 = r23
            r1.a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L1b7
        Lee:
            r8.l = r12     // Catch: java.lang.Exception -> L1b7
            r8.m = r13     // Catch: java.lang.Exception -> L1b7
            goto L148
        Lf3:
            java.lang.String r1 = r17.getClick_mode()     // Catch: java.lang.Exception -> L1b7
            java.lang.String r2 = "6"
            boolean r1 = r1.equals(r2)     // Catch: java.lang.Exception -> L1b7
            if (r1 == 0) goto L142
            java.lang.String r1 = r17.getPackageName()     // Catch: java.lang.Exception -> L1b7
            boolean r1 = r1.isEmpty()     // Catch: java.lang.Exception -> L1b7
            if (r1 != 0) goto L142
            int r1 = r17.getLinkType()     // Catch: java.lang.Exception -> L1b7
            r2 = 2
            if (r1 != r2) goto L142
            if (r9 != 0) goto L142
            android.content.Context r1 = r8.q     // Catch: java.lang.Exception -> L1b7
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L1b7
            r2.<init>()     // Catch: java.lang.Exception -> L1b7
            java.lang.String r3 = "market://details?id="
            r2.append(r3)     // Catch: java.lang.Exception -> L1b7
            java.lang.String r3 = r17.getPackageName()     // Catch: java.lang.Exception -> L1b7
            r2.append(r3)     // Catch: java.lang.Exception -> L1b7
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r3 = r8.t     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.foundation.tools.ad.a.a(r1, r2, r3)     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r8.t     // Catch: java.lang.Exception -> L1b7
            if (r1 == 0) goto L13f
            if (r4 == 0) goto L13f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r8.t     // Catch: java.lang.Exception -> L1b7
            r1.onDismissLoading(r0)     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r8.t     // Catch: java.lang.Exception -> L1b7
            r2 = 0
            r1.onFinishRedirection(r0, r2)     // Catch: java.lang.Exception -> L1b7
        L13f:
            r8.l = r12     // Catch: java.lang.Exception -> L1b7
            r4 = r13
        L142:
            if (r9 == 0) goto L149
            r8.l = r12     // Catch: java.lang.Exception -> L1b7
            r8.m = r13     // Catch: java.lang.Exception -> L1b7
        L148:
            r4 = r13
        L149:
            com.mbridge.msdk.foundation.tools.z.b(r11, r10)     // Catch: java.lang.Exception -> L1b7
            android.os.Handler r1 = new android.os.Handler     // Catch: java.lang.Exception -> L1b7
            android.os.Looper r2 = android.os.Looper.getMainLooper()     // Catch: java.lang.Exception -> L1b7
            r1.<init>(r2)     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.click.b$5 r2 = new com.mbridge.msdk.click.b$5     // Catch: java.lang.Exception -> L1b7
            r2.<init>(r8, r15, r9, r0)     // Catch: java.lang.Exception -> L1b7
            r1.post(r2)     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.click.CommonJumpLoader r1 = r8.r     // Catch: java.lang.Exception -> L1b7
            if (r1 == 0) goto L166
            com.mbridge.msdk.click.CommonJumpLoader r1 = r8.r     // Catch: java.lang.Exception -> L1b7
            r1.a()     // Catch: java.lang.Exception -> L1b7
        L166:
            java.util.Set<java.lang.String> r1 = com.mbridge.msdk.click.b.b     // Catch: java.lang.Exception -> L1b7
            if (r1 == 0) goto L18e
            java.util.Set<java.lang.String> r1 = com.mbridge.msdk.click.b.b     // Catch: java.lang.Exception -> L1b7
            java.lang.String r2 = r17.getId()     // Catch: java.lang.Exception -> L1b7
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Exception -> L1b7
            if (r1 == 0) goto L18e
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r8.t     // Catch: java.lang.Exception -> L1b7
            if (r1 == 0) goto L188
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r8.t     // Catch: java.lang.Exception -> L1b7
            r1.onDismissLoading(r0)     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r8.t     // Catch: java.lang.Exception -> L1b7
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Exception -> L1b7
            r1.onFinishRedirection(r0, r2)     // Catch: java.lang.Exception -> L1b7
        L188:
            java.lang.String r0 = "点击正在tracking"
            com.mbridge.msdk.foundation.tools.z.b(r11, r0)     // Catch: java.lang.Exception -> L1b7
            return
        L18e:
            java.util.Set<java.lang.String> r1 = com.mbridge.msdk.click.b.b     // Catch: java.lang.Exception -> L1b7
            java.lang.String r2 = r17.getId()     // Catch: java.lang.Exception -> L1b7
            r1.add(r2)     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.click.CommonJumpLoader r9 = new com.mbridge.msdk.click.CommonJumpLoader     // Catch: java.lang.Exception -> L1b7
            android.content.Context r1 = r8.q     // Catch: java.lang.Exception -> L1b7
            r9.<init>(r1, r13)     // Catch: java.lang.Exception -> L1b7
            r8.r = r9     // Catch: java.lang.Exception -> L1b7
            java.lang.String r10 = "1"
            java.lang.String r11 = r8.g     // Catch: java.lang.Exception -> L1b7
            com.mbridge.msdk.click.b$6 r12 = new com.mbridge.msdk.click.b$6     // Catch: java.lang.Exception -> L1b7
            r1 = r12
            r2 = r16
            r3 = r17
            r5 = r23
            r6 = r21
            r7 = r15
            r1.<init>(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Exception -> L1b7
            r9.a(r10, r11, r0, r12)     // Catch: java.lang.Exception -> L1b7
            goto L1bb
        L1b7:
            r0 = move-exception
            r0.printStackTrace()
        L1bb:
            return
    }

    private boolean a(int r4, java.lang.String r5) {
            r3 = this;
            r0 = 2
            r1 = 1
            r2 = 0
            if (r4 != r0) goto Lc
            boolean r4 = com.mbridge.msdk.foundation.tools.ad.a.a(r5)     // Catch: java.lang.Exception -> L16
            if (r4 == 0) goto L13
            goto L14
        Lc:
            boolean r4 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L16
            if (r4 != 0) goto L13
            goto L14
        L13:
            r1 = r2
        L14:
            r2 = r1
            goto L1a
        L16:
            r4 = move-exception
            r4.printStackTrace()
        L1a:
            return r2
    }

    static boolean a(com.mbridge.msdk.click.b r0, boolean r1) {
            r0.j = r1
            return r1
    }

    private boolean a(com.mbridge.msdk.foundation.entity.CampaignEx r6, com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult r7, boolean r8, boolean r9) {
            r5 = this;
            r0 = 1
            r1 = 0
            if (r8 == 0) goto L1c
            java.lang.String r2 = r6.getNoticeUrl()     // Catch: java.lang.Throwable -> L1a
            int r3 = com.mbridge.msdk.foundation.same.a.I     // Catch: java.lang.Throwable -> L1a
            r5.a(r6, r2, r3)     // Catch: java.lang.Throwable -> L1a
            android.content.Context r2 = r5.q     // Catch: java.lang.Throwable -> L1a
            java.lang.String r3 = r6.getClickURL()     // Catch: java.lang.Throwable -> L1a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r4 = r5.t     // Catch: java.lang.Throwable -> L1a
            com.mbridge.msdk.foundation.tools.ad.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L1a
            r1 = r0
            goto L1c
        L1a:
            r6 = move-exception
            goto L44
        L1c:
            if (r1 == 0) goto L31
            r5.a(r7, r6, r0, r9)     // Catch: java.lang.Throwable -> L1a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r9 = r5.t     // Catch: java.lang.Throwable -> L1a
            if (r9 == 0) goto L4d
            if (r8 == 0) goto L4d
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r8 = r5.t     // Catch: java.lang.Throwable -> L1a
            java.lang.String r7 = r7.getUrl()     // Catch: java.lang.Throwable -> L1a
            r8.onFinishRedirection(r6, r7)     // Catch: java.lang.Throwable -> L1a
            goto L4d
        L31:
            r5.a(r7, r6, r0, r9)     // Catch: java.lang.Throwable -> L1a
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r9 = r5.t     // Catch: java.lang.Throwable -> L1a
            if (r9 == 0) goto L4d
            if (r8 == 0) goto L4d
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r8 = r5.t     // Catch: java.lang.Throwable -> L1a
            java.lang.String r7 = r7.getUrl()     // Catch: java.lang.Throwable -> L1a
            r8.onRedirectionFailed(r6, r7)     // Catch: java.lang.Throwable -> L1a
            goto L4d
        L44:
            java.lang.String r7 = r6.getMessage()
            java.lang.String r8 = "MBridge SDK M"
            com.mbridge.msdk.foundation.tools.z.c(r8, r7, r6)
        L4d:
            return r1
    }

    private boolean a(com.mbridge.msdk.foundation.entity.CampaignEx r6, com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult r7, boolean r8, boolean r9, int r10) {
            r5 = this;
            r0 = 0
            r1 = 1
            if (r8 == 0) goto L6a
            java.lang.String r2 = r6.getLandingType()     // Catch: java.lang.Throwable -> L68
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L68
            int r2 = r2.intValue()     // Catch: java.lang.Throwable -> L68
            if (r2 != r1) goto L1f
            android.content.Context r10 = r5.q     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = r7.getUrl()     // Catch: java.lang.Throwable -> L68
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r3 = r5.t     // Catch: java.lang.Throwable -> L68
            com.mbridge.msdk.foundation.tools.ad.a(r10, r2, r3)     // Catch: java.lang.Throwable -> L68
        L1d:
            r0 = r1
            goto L6a
        L1f:
            r3 = 2
            if (r2 != r3) goto L2e
            android.content.Context r10 = r5.q     // Catch: java.lang.Throwable -> L68
            java.lang.String r2 = r7.getUrl()     // Catch: java.lang.Throwable -> L68
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r3 = r5.t     // Catch: java.lang.Throwable -> L68
            com.mbridge.msdk.foundation.tools.ad.a(r10, r2, r6, r3)     // Catch: java.lang.Throwable -> L68
            goto L1d
        L2e:
            java.lang.String r2 = r6.getPackageName()     // Catch: java.lang.Throwable -> L68
            if (r2 == 0) goto L5e
            android.content.Context r2 = r5.q     // Catch: java.lang.Throwable -> L68
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L68
            r3.<init>()     // Catch: java.lang.Throwable -> L68
            java.lang.String r4 = "market://details?id="
            r3.append(r4)     // Catch: java.lang.Throwable -> L68
            java.lang.String r4 = r6.getPackageName()     // Catch: java.lang.Throwable -> L68
            r3.append(r4)     // Catch: java.lang.Throwable -> L68
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L68
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r4 = r5.t     // Catch: java.lang.Throwable -> L68
            boolean r2 = com.mbridge.msdk.foundation.tools.ad.a.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L68
            if (r2 == 0) goto L54
            goto L1d
        L54:
            java.lang.String r2 = r7.getUrl()     // Catch: java.lang.Throwable -> L68
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r3 = r5.t     // Catch: java.lang.Throwable -> L68
            r5.a(r10, r2, r6, r3)     // Catch: java.lang.Throwable -> L68
            goto L6a
        L5e:
            java.lang.String r2 = r7.getUrl()     // Catch: java.lang.Throwable -> L68
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r3 = r5.t     // Catch: java.lang.Throwable -> L68
            r5.a(r10, r2, r6, r3)     // Catch: java.lang.Throwable -> L68
            goto L6a
        L68:
            r6 = move-exception
            goto L92
        L6a:
            if (r0 == 0) goto L7f
            r5.a(r7, r6, r1, r9)     // Catch: java.lang.Throwable -> L68
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r9 = r5.t     // Catch: java.lang.Throwable -> L68
            if (r9 == 0) goto L9b
            if (r8 == 0) goto L9b
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r8 = r5.t     // Catch: java.lang.Throwable -> L68
            java.lang.String r7 = r7.getUrl()     // Catch: java.lang.Throwable -> L68
            r8.onFinishRedirection(r6, r7)     // Catch: java.lang.Throwable -> L68
            goto L9b
        L7f:
            r5.a(r7, r6, r1, r9)     // Catch: java.lang.Throwable -> L68
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r9 = r5.t     // Catch: java.lang.Throwable -> L68
            if (r9 == 0) goto L9b
            if (r8 == 0) goto L9b
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r8 = r5.t     // Catch: java.lang.Throwable -> L68
            java.lang.String r7 = r7.getUrl()     // Catch: java.lang.Throwable -> L68
            r8.onRedirectionFailed(r6, r7)     // Catch: java.lang.Throwable -> L68
            goto L9b
        L92:
            java.lang.String r7 = r6.getMessage()
            java.lang.String r8 = "MBridge SDK M"
            com.mbridge.msdk.foundation.tools.z.c(r8, r7, r6)
        L9b:
            return r0
    }

    static com.mbridge.msdk.foundation.db.i b(com.mbridge.msdk.click.b r0) {
            com.mbridge.msdk.foundation.db.i r0 = r0.p
            return r0
    }

    static void b() {
            d()
            return
    }

    public static void b(com.mbridge.msdk.foundation.entity.CampaignEx r2, android.content.Context r3, java.lang.String r4) {
            java.lang.String r0 = "start"
            boolean r0 = r4.equals(r0)     // Catch: java.lang.Throwable -> L30
            if (r0 != 0) goto L10
            java.lang.String r0 = "downloading"
            boolean r0 = r4.equals(r0)     // Catch: java.lang.Throwable -> L30
            if (r0 == 0) goto L2c
        L10:
            android.os.Looper r0 = android.os.Looper.myLooper()     // Catch: java.lang.Throwable -> L30
            android.os.Looper r1 = android.os.Looper.getMainLooper()     // Catch: java.lang.Throwable -> L30
            if (r0 != r1) goto L1e
            a(r3)     // Catch: java.lang.Throwable -> L30
            goto L2c
        L1e:
            android.os.Handler r0 = com.mbridge.msdk.click.b.f     // Catch: java.lang.Throwable -> L30
            r1 = 0
            android.os.Message r0 = r0.obtainMessage(r1)     // Catch: java.lang.Throwable -> L30
            r0.obj = r3     // Catch: java.lang.Throwable -> L30
            android.os.Handler r1 = com.mbridge.msdk.click.b.f     // Catch: java.lang.Throwable -> L30
            r1.sendMessage(r0)     // Catch: java.lang.Throwable -> L30
        L2c:
            c(r2, r3, r4)     // Catch: java.lang.Throwable -> L30
            goto L3a
        L30:
            r2 = move-exception
            java.lang.String r3 = r2.getMessage()
            java.lang.String r4 = "MBridge SDK M"
            com.mbridge.msdk.foundation.tools.z.c(r4, r3, r2)
        L3a:
            return
    }

    private void b(com.mbridge.msdk.foundation.entity.CampaignEx r18, java.lang.String r19, boolean r20) {
            r17 = this;
            r7 = r18
            r8 = r19
            java.lang.String r9 = "process"
            java.lang.String r10 = "isDowning"
            if (r7 == 0) goto L19
            java.lang.String r0 = r18.getAkdlui()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L19
            java.lang.String r0 = r18.getAkdlui()
            goto L1d
        L19:
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r19)
        L1d:
            r11 = r0
            r0 = 1
            r12 = 0
            com.mbridge.msdk.foundation.tools.ad.a(r8, r0, r7)     // Catch: java.lang.Throwable -> Leb
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> Leb
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> Leb
            boolean r2 = com.mbridge.msdk.foundation.tools.aj.a(r1)     // Catch: java.lang.Throwable -> Leb
            boolean r3 = com.mbridge.msdk.foundation.tools.aj.c(r1)     // Catch: java.lang.Throwable -> Leb
            boolean r4 = com.mbridge.msdk.foundation.tools.aj.b(r1)     // Catch: java.lang.Throwable -> Leb
            if (r4 != 0) goto L48
            java.lang.String r0 = r18.getNoticeUrl()     // Catch: java.lang.Throwable -> Leb
            int r2 = com.mbridge.msdk.foundation.same.a.I     // Catch: java.lang.Throwable -> Leb
            r13 = r17
            r13.a(r7, r0, r2)     // Catch: java.lang.Throwable -> L50
            com.mbridge.msdk.click.c.a(r1, r8, r11)     // Catch: java.lang.Throwable -> L50
            return
        L48:
            r13 = r17
            if (r3 != 0) goto L53
            r17.c(r18, r19, r20)     // Catch: java.lang.Throwable -> L50
            return
        L50:
            r0 = move-exception
            goto Lee
        L53:
            if (r2 != 0) goto L59
            r17.c(r18, r19, r20)     // Catch: java.lang.Throwable -> L50
            return
        L59:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L50
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L50
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            r2.<init>()     // Catch: java.lang.Throwable -> L50
            r2.append(r11)     // Catch: java.lang.Throwable -> L50
            r2.append(r10)     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L50
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L50
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L50
            com.mbridge.msdk.foundation.tools.ag.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L50
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L50
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L50
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L50
            r2.<init>()     // Catch: java.lang.Throwable -> L50
            r2.append(r11)     // Catch: java.lang.Throwable -> L50
            r2.append(r9)     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L50
            int r3 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L50
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L50
            com.mbridge.msdk.foundation.tools.ag.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = "com.mbridge.msdk.mbdownload.manager.ADownloadManager"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = "getInstance"
            java.lang.Class[] r3 = new java.lang.Class[r12]     // Catch: java.lang.Throwable -> L50
            java.lang.reflect.Method r2 = r1.getMethod(r2, r3)     // Catch: java.lang.Throwable -> L50
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r12]     // Catch: java.lang.Throwable -> L50
            java.lang.Object r14 = r2.invoke(r3, r4)     // Catch: java.lang.Throwable -> L50
            java.lang.String r2 = "initAPKDownloadTask"
            r3 = 3
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L50
            java.lang.Class<com.mbridge.msdk.foundation.entity.CampaignEx> r5 = com.mbridge.msdk.foundation.entity.CampaignEx.class
            r4[r12] = r5     // Catch: java.lang.Throwable -> L50
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r4[r0] = r5     // Catch: java.lang.Throwable -> L50
            java.lang.Class<com.mbridge.msdk.out.IDownloadListener> r5 = com.mbridge.msdk.out.IDownloadListener.class
            r15 = 2
            r4[r15] = r5     // Catch: java.lang.Throwable -> L50
            java.lang.reflect.Method r6 = r1.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L50
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L50
            r5[r12] = r7     // Catch: java.lang.Throwable -> L50
            r5[r0] = r8     // Catch: java.lang.Throwable -> L50
            com.mbridge.msdk.click.b$10 r0 = new com.mbridge.msdk.click.b$10     // Catch: java.lang.Throwable -> L50
            r1 = r0
            r2 = r17
            r3 = r18
            r4 = r20
            r12 = r5
            r5 = r11
            r16 = r6
            r6 = r19
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L50
            r12[r15] = r0     // Catch: java.lang.Throwable -> L50
            r0 = r16
            java.lang.Object r0 = r0.invoke(r14, r12)     // Catch: java.lang.Throwable -> L50
            java.lang.String r0 = (java.lang.String) r0     // Catch: java.lang.Throwable -> L50
            goto L137
        Leb:
            r0 = move-exception
            r13 = r17
        Lee:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r10)
            java.lang.String r2 = r2.toString()
            r3 = 0
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            com.mbridge.msdk.foundation.tools.ag.a(r1, r2, r3)
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r11)
            r2.append(r9)
            java.lang.String r2 = r2.toString()
            r3 = 0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            com.mbridge.msdk.foundation.tools.ag.a(r1, r2, r3)
            boolean r1 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r1 == 0) goto L134
            r0.printStackTrace()
        L134:
            r17.c(r18, r19, r20)
        L137:
            return
    }

    private int c() {
            r2 = this;
            r0 = 1
            com.mbridge.msdk.c.a r1 = r2.o     // Catch: java.lang.Exception -> Lc
            if (r1 == 0) goto L10
            com.mbridge.msdk.c.a r1 = r2.o     // Catch: java.lang.Exception -> Lc
            int r0 = r1.U()     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r1 = move-exception
            r1.printStackTrace()
        L10:
            return r0
    }

    static java.lang.String c(com.mbridge.msdk.click.b r0) {
            java.lang.String r0 = r0.g
            return r0
    }

    private static void c(com.mbridge.msdk.foundation.entity.CampaignEx r8, android.content.Context r9, java.lang.String r10) {
            if (r8 == 0) goto Lce
            com.mbridge.msdk.foundation.entity.l r0 = r8.getNativeVideoTracking()     // Catch: java.lang.Throwable -> Lc4
            if (r0 != 0) goto La
            goto Lce
        La:
            java.lang.String r0 = "start"
            boolean r0 = r10.equals(r0)     // Catch: java.lang.Throwable -> Lc4
            r1 = 0
            if (r0 != 0) goto L97
            java.lang.String r0 = "shortcuts_start"
            boolean r0 = r10.equals(r0)     // Catch: java.lang.Throwable -> Lc4
            if (r0 == 0) goto L1d
            goto L97
        L1d:
            java.lang.String r0 = "end"
            boolean r0 = r10.equals(r0)     // Catch: java.lang.Throwable -> Lc4
            if (r0 == 0) goto L52
            com.mbridge.msdk.foundation.entity.l r10 = r8.getNativeVideoTracking()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String[] r10 = r10.b()     // Catch: java.lang.Throwable -> Lc4
            if (r10 == 0) goto Lce
        L2f:
            com.mbridge.msdk.foundation.entity.l r10 = r8.getNativeVideoTracking()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String[] r10 = r10.b()     // Catch: java.lang.Throwable -> Lc4
            int r10 = r10.length     // Catch: java.lang.Throwable -> Lc4
            if (r1 >= r10) goto Lce
            java.lang.String r4 = r8.getCampaignUnitId()     // Catch: java.lang.Throwable -> Lc4
            com.mbridge.msdk.foundation.entity.l r10 = r8.getNativeVideoTracking()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String[] r10 = r10.b()     // Catch: java.lang.Throwable -> Lc4
            r5 = r10[r1]     // Catch: java.lang.Throwable -> Lc4
            r6 = 0
            r7 = 0
            r2 = r9
            r3 = r8
            a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> Lc4
            int r1 = r1 + 1
            goto L2f
        L52:
            java.lang.String r0 = "install"
            boolean r10 = r10.equals(r0)     // Catch: java.lang.Throwable -> Lc4
            if (r10 == 0) goto Lce
            com.mbridge.msdk.foundation.entity.l r10 = r8.getNativeVideoTracking()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String[] r10 = r10.c()     // Catch: java.lang.Throwable -> Lc4
            if (r10 == 0) goto L87
        L64:
            com.mbridge.msdk.foundation.entity.l r10 = r8.getNativeVideoTracking()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String[] r10 = r10.c()     // Catch: java.lang.Throwable -> Lc4
            int r10 = r10.length     // Catch: java.lang.Throwable -> Lc4
            if (r1 >= r10) goto L87
            java.lang.String r4 = r8.getCampaignUnitId()     // Catch: java.lang.Throwable -> Lc4
            com.mbridge.msdk.foundation.entity.l r10 = r8.getNativeVideoTracking()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String[] r10 = r10.c()     // Catch: java.lang.Throwable -> Lc4
            r5 = r10[r1]     // Catch: java.lang.Throwable -> Lc4
            r6 = 0
            r7 = 0
            r2 = r9
            r3 = r8
            a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> Lc4
            int r1 = r1 + 1
            goto L64
        L87:
            com.mbridge.msdk.foundation.db.i r9 = com.mbridge.msdk.foundation.db.i.a(r9)     // Catch: java.lang.Throwable -> Lc4
            com.mbridge.msdk.foundation.db.g r9 = com.mbridge.msdk.foundation.db.g.b(r9)     // Catch: java.lang.Throwable -> Lc4
            java.lang.String r8 = r8.getPackageName()     // Catch: java.lang.Throwable -> Lc4
            r9.i(r8)     // Catch: java.lang.Throwable -> Lc4
            goto Lce
        L97:
            com.mbridge.msdk.foundation.entity.l r10 = r8.getNativeVideoTracking()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String[] r10 = r10.a()     // Catch: java.lang.Throwable -> Lc4
            if (r10 == 0) goto Lce
        La1:
            com.mbridge.msdk.foundation.entity.l r10 = r8.getNativeVideoTracking()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String[] r10 = r10.a()     // Catch: java.lang.Throwable -> Lc4
            int r10 = r10.length     // Catch: java.lang.Throwable -> Lc4
            if (r1 >= r10) goto Lce
            java.lang.String r4 = r8.getCampaignUnitId()     // Catch: java.lang.Throwable -> Lc4
            com.mbridge.msdk.foundation.entity.l r10 = r8.getNativeVideoTracking()     // Catch: java.lang.Throwable -> Lc4
            java.lang.String[] r10 = r10.a()     // Catch: java.lang.Throwable -> Lc4
            r5 = r10[r1]     // Catch: java.lang.Throwable -> Lc4
            r6 = 0
            r7 = 0
            r2 = r9
            r3 = r8
            a(r2, r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> Lc4
            int r1 = r1 + 1
            goto La1
        Lc4:
            r8 = move-exception
            java.lang.String r9 = r8.getMessage()
            java.lang.String r10 = "MBridge SDK M"
            com.mbridge.msdk.foundation.tools.z.c(r10, r9, r8)
        Lce:
            return
    }

    private void c(com.mbridge.msdk.foundation.entity.CampaignEx r6, java.lang.String r7, boolean r8) {
            r5 = this;
            if (r6 == 0) goto L11
            java.lang.String r0 = r6.getAkdlui()     // Catch: java.lang.Throwable -> L91
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L91
            if (r0 != 0) goto L11
            java.lang.String r0 = r6.getAkdlui()     // Catch: java.lang.Throwable -> L91
            goto L12
        L11:
            r0 = r7
        L12:
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L91
            if (r1 == 0) goto L1c
            java.lang.String r0 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r7)     // Catch: java.lang.Throwable -> L91
        L1c:
            r1 = 2
            com.mbridge.msdk.foundation.tools.ad.a(r7, r1, r6)     // Catch: java.lang.Throwable -> L91
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L91
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L91
            boolean r2 = com.mbridge.msdk.foundation.tools.aj.b(r1)     // Catch: java.lang.Throwable -> L91
            if (r2 != 0) goto L3b
            java.lang.String r8 = r6.getNoticeUrl()     // Catch: java.lang.Throwable -> L91
            int r2 = com.mbridge.msdk.foundation.same.a.I     // Catch: java.lang.Throwable -> L91
            r5.a(r6, r8, r2)     // Catch: java.lang.Throwable -> L91
            com.mbridge.msdk.click.c.a(r1, r7, r0)     // Catch: java.lang.Throwable -> L91
            return
        L3b:
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L91
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L91
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L91
            r2.<init>()     // Catch: java.lang.Throwable -> L91
            r2.append(r0)     // Catch: java.lang.Throwable -> L91
            java.lang.String r3 = "isDowning"
            r2.append(r3)     // Catch: java.lang.Throwable -> L91
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L91
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L91
            java.lang.Long r3 = java.lang.Long.valueOf(r3)     // Catch: java.lang.Throwable -> L91
            com.mbridge.msdk.foundation.tools.ag.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L91
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L91
            android.content.Context r1 = r1.j()     // Catch: java.lang.Throwable -> L91
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L91
            r2.<init>()     // Catch: java.lang.Throwable -> L91
            r2.append(r0)     // Catch: java.lang.Throwable -> L91
            java.lang.String r0 = "process"
            r2.append(r0)     // Catch: java.lang.Throwable -> L91
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L91
            int r2 = android.os.Process.myPid()     // Catch: java.lang.Throwable -> L91
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L91
            com.mbridge.msdk.foundation.tools.ag.a(r1, r0, r2)     // Catch: java.lang.Throwable -> L91
            java.lang.Thread r0 = new java.lang.Thread     // Catch: java.lang.Throwable -> L91
            com.mbridge.msdk.click.b$2 r1 = new com.mbridge.msdk.click.b$2     // Catch: java.lang.Throwable -> L91
            r1.<init>(r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L91
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L91
            r0.start()     // Catch: java.lang.Throwable -> L91
            goto L99
        L91:
            r6 = move-exception
            boolean r7 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r7 == 0) goto L99
            r6.printStackTrace()
        L99:
            return
    }

    static java.util.HashMap d(com.mbridge.msdk.click.b r0) {
            java.util.HashMap<java.lang.String, com.mbridge.msdk.click.CommonJumpLoader> r0 = r0.s
            return r0
    }

    private static void d() {
            java.util.Locale r0 = java.util.Locale.getDefault()     // Catch: java.lang.Exception -> L3a
            java.lang.String r0 = r0.getLanguage()     // Catch: java.lang.Exception -> L3a
            boolean r1 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Exception -> L3a
            r2 = 0
            if (r1 != 0) goto L29
            java.lang.String r1 = "zh"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Exception -> L3a
            if (r0 == 0) goto L29
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3a
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = "正在下载中,请稍候..."
            android.widget.Toast r0 = android.widget.Toast.makeText(r0, r1, r2)     // Catch: java.lang.Exception -> L3a
            r0.show()     // Catch: java.lang.Exception -> L3a
            goto L3a
        L29:
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L3a
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L3a
            java.lang.String r1 = "Downloading...."
            android.widget.Toast r0 = android.widget.Toast.makeText(r0, r1, r2)     // Catch: java.lang.Exception -> L3a
            r0.show()     // Catch: java.lang.Exception -> L3a
        L3a:
            return
    }

    private boolean d(com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            r7 = this;
            if (r8 == 0) goto L9
            r0 = 2
            int r1 = r8.getLinkType()     // Catch: java.lang.Exception -> L7b
            if (r0 == r1) goto L10
        L9:
            r0 = 3
            int r1 = r8.getLinkType()     // Catch: java.lang.Exception -> L7b
            if (r0 != r1) goto L83
        L10:
            java.lang.String r0 = r8.getId()     // Catch: java.lang.Exception -> L7b
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.mbridge.msdk.click.b.d     // Catch: java.lang.Exception -> L7b
            if (r1 == 0) goto L83
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.mbridge.msdk.click.b.d     // Catch: java.lang.Exception -> L7b
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Exception -> L7b
            java.lang.String r2 = "MBridge SDK M"
            if (r1 == 0) goto L62
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.mbridge.msdk.click.b.d     // Catch: java.lang.Exception -> L7b
            java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Exception -> L7b
            java.lang.Long r0 = (java.lang.Long) r0     // Catch: java.lang.Exception -> L7b
            if (r0 == 0) goto L62
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L7b
            long r5 = r0.longValue()     // Catch: java.lang.Exception -> L7b
            int r1 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r1 > 0) goto L44
            java.util.Set<java.lang.String> r1 = com.mbridge.msdk.click.b.b     // Catch: java.lang.Exception -> L7b
            java.lang.String r5 = r8.getId()     // Catch: java.lang.Exception -> L7b
            boolean r1 = r1.contains(r5)     // Catch: java.lang.Exception -> L7b
            if (r1 == 0) goto L62
        L44:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7b
            r8.<init>()     // Catch: java.lang.Exception -> L7b
            java.lang.String r1 = "点击时间未超过coit "
            r8.append(r1)     // Catch: java.lang.Exception -> L7b
            r8.append(r3)     // Catch: java.lang.Exception -> L7b
            java.lang.String r1 = "|"
            r8.append(r1)     // Catch: java.lang.Exception -> L7b
            r8.append(r0)     // Catch: java.lang.Exception -> L7b
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L7b
            com.mbridge.msdk.foundation.tools.z.b(r2, r8)     // Catch: java.lang.Exception -> L7b
            r8 = 0
            return r8
        L62:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L7b
            r0.<init>()     // Catch: java.lang.Exception -> L7b
            java.lang.String r1 = "未发现有点击或点击超时保存点击时间 interval = "
            r0.append(r1)     // Catch: java.lang.Exception -> L7b
            int r8 = r8.getClickTimeOutInterval()     // Catch: java.lang.Exception -> L7b
            r0.append(r8)     // Catch: java.lang.Exception -> L7b
            java.lang.String r8 = r0.toString()     // Catch: java.lang.Exception -> L7b
            com.mbridge.msdk.foundation.tools.z.b(r2, r8)     // Catch: java.lang.Exception -> L7b
            goto L83
        L7b:
            r8 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L83
            r8.printStackTrace()
        L83:
            r8 = 1
            return r8
    }

    static boolean e(com.mbridge.msdk.click.b r0) {
            boolean r0 = r0.l
            return r0
    }

    private boolean e(com.mbridge.msdk.foundation.entity.CampaignEx r8) {
            r7 = this;
            if (r8 == 0) goto L9
            r0 = 2
            int r1 = r8.getLinkType()     // Catch: java.lang.Exception -> L94
            if (r0 == r1) goto L10
        L9:
            r0 = 3
            int r1 = r8.getLinkType()     // Catch: java.lang.Exception -> L94
            if (r0 != r1) goto L9c
        L10:
            java.lang.String r0 = r8.getId()     // Catch: java.lang.Exception -> L94
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.mbridge.msdk.click.b.d     // Catch: java.lang.Exception -> L94
            if (r1 == 0) goto L9c
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.mbridge.msdk.click.b.d     // Catch: java.lang.Exception -> L94
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = "MBridge SDK M"
            if (r1 == 0) goto L62
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.mbridge.msdk.click.b.d     // Catch: java.lang.Exception -> L94
            java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Exception -> L94
            java.lang.Long r0 = (java.lang.Long) r0     // Catch: java.lang.Exception -> L94
            if (r0 == 0) goto L62
            long r3 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L94
            long r5 = r0.longValue()     // Catch: java.lang.Exception -> L94
            int r1 = (r5 > r3 ? 1 : (r5 == r3 ? 0 : -1))
            if (r1 > 0) goto L44
            java.util.Set<java.lang.String> r1 = com.mbridge.msdk.click.b.b     // Catch: java.lang.Exception -> L94
            java.lang.String r5 = r8.getId()     // Catch: java.lang.Exception -> L94
            boolean r1 = r1.contains(r5)     // Catch: java.lang.Exception -> L94
            if (r1 == 0) goto L62
        L44:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L94
            r8.<init>()     // Catch: java.lang.Exception -> L94
            java.lang.String r1 = "点击时间未超过coit "
            r8.append(r1)     // Catch: java.lang.Exception -> L94
            r8.append(r3)     // Catch: java.lang.Exception -> L94
            java.lang.String r1 = "|"
            r8.append(r1)     // Catch: java.lang.Exception -> L94
            r8.append(r0)     // Catch: java.lang.Exception -> L94
            java.lang.String r8 = r8.toString()     // Catch: java.lang.Exception -> L94
            com.mbridge.msdk.foundation.tools.z.b(r2, r8)     // Catch: java.lang.Exception -> L94
            r8 = 0
            return r8
        L62:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L94
            r0.<init>()     // Catch: java.lang.Exception -> L94
            java.lang.String r1 = "未发现有点击或点击超时保存点击时间 interval = "
            r0.append(r1)     // Catch: java.lang.Exception -> L94
            int r1 = r8.getClickTimeOutInterval()     // Catch: java.lang.Exception -> L94
            r0.append(r1)     // Catch: java.lang.Exception -> L94
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L94
            com.mbridge.msdk.foundation.tools.z.b(r2, r0)     // Catch: java.lang.Exception -> L94
            int r0 = r8.getClickTimeOutInterval()     // Catch: java.lang.Exception -> L94
            int r0 = r0 * 1000
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.mbridge.msdk.click.b.d     // Catch: java.lang.Exception -> L94
            java.lang.String r8 = r8.getId()     // Catch: java.lang.Exception -> L94
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L94
            long r4 = (long) r0     // Catch: java.lang.Exception -> L94
            long r2 = r2 + r4
            java.lang.Long r0 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L94
            r1.put(r8, r0)     // Catch: java.lang.Exception -> L94
            goto L9c
        L94:
            r8 = move-exception
            boolean r0 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r0 == 0) goto L9c
            r8.printStackTrace()
        L9c:
            r8 = 1
            return r8
    }

    private void f(com.mbridge.msdk.foundation.entity.CampaignEx r4) {
            r3 = this;
            int r0 = r3.c()
            r1 = 2
            if (r0 != r1) goto L13
            android.content.Context r0 = r3.q
            java.lang.String r1 = r4.getClickURL()
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r3.t
            com.mbridge.msdk.foundation.tools.ad.a(r0, r1, r4, r2)
            goto L1e
        L13:
            android.content.Context r0 = r3.q
            java.lang.String r4 = r4.getClickURL()
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r3.t
            com.mbridge.msdk.foundation.tools.ad.a(r0, r4, r1)
        L1e:
            return
    }

    static boolean f(com.mbridge.msdk.click.b r0) {
            boolean r0 = r0.m
            return r0
    }

    static void g(com.mbridge.msdk.click.b r2) {
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L10
            r0.<init>()     // Catch: java.lang.Exception -> L10
            java.lang.String r1 = "ExitApp"
            r0.setAction(r1)     // Catch: java.lang.Exception -> L10
            android.content.Context r2 = r2.q     // Catch: java.lang.Exception -> L10
            r2.sendBroadcast(r0)     // Catch: java.lang.Exception -> L10
            goto L18
        L10:
            r2 = move-exception
            java.lang.String r0 = "MBridge SDK M"
            java.lang.String r1 = "Exception"
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r2)
        L18:
            return
    }

    static android.content.Context h(com.mbridge.msdk.click.b r0) {
            android.content.Context r0 = r0.q
            return r0
    }

    static android.os.Handler i(com.mbridge.msdk.click.b r0) {
            android.os.Handler r0 = r0.w
            return r0
    }

    public final void a() {
            r2 = this;
            java.util.HashMap<java.lang.String, com.mbridge.msdk.click.CommonJumpLoader> r0 = r2.s     // Catch: java.lang.Exception -> L33
            if (r0 == 0) goto L30
            java.util.HashMap<java.lang.String, com.mbridge.msdk.click.CommonJumpLoader> r0 = r2.s     // Catch: java.lang.Exception -> L33
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Exception -> L33
            if (r0 == 0) goto L30
            int r1 = r0.size()     // Catch: java.lang.Exception -> L33
            if (r1 <= 0) goto L30
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L33
        L16:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L33
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L33
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Exception -> L33
            if (r1 == 0) goto L16
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Exception -> L33
            com.mbridge.msdk.click.CommonJumpLoader r1 = (com.mbridge.msdk.click.CommonJumpLoader) r1     // Catch: java.lang.Exception -> L33
            if (r1 == 0) goto L16
            r1.a()     // Catch: java.lang.Exception -> L33
            goto L16
        L30:
            r0 = 0
            r2.t = r0     // Catch: java.lang.Exception -> L33
        L33:
            return
    }

    public final void a(com.mbridge.msdk.click.CommonJumpLoader.JumpLoaderResult r8, com.mbridge.msdk.foundation.entity.CampaignEx r9, int r10, boolean r11) {
            r7 = this;
            java.lang.String r0 = ""
            if (r9 == 0) goto L14d
            if (r8 != 0) goto L8
            goto L14d
        L8:
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L149
            long r3 = r7.h     // Catch: java.lang.Throwable -> L149
            long r1 = r1 - r3
            r7.i = r1     // Catch: java.lang.Throwable -> L149
            com.mbridge.msdk.foundation.entity.e r1 = new com.mbridge.msdk.foundation.entity.e     // Catch: java.lang.Throwable -> L149
            r1.<init>()     // Catch: java.lang.Throwable -> L149
            android.content.Context r2 = r7.q     // Catch: java.lang.Throwable -> L149
            int r2 = com.mbridge.msdk.foundation.tools.v.D(r2)     // Catch: java.lang.Throwable -> L149
            r1.a(r2)     // Catch: java.lang.Throwable -> L149
            android.content.Context r3 = r7.q     // Catch: java.lang.Throwable -> L149
            java.lang.String r2 = com.mbridge.msdk.foundation.tools.v.a(r3, r2)     // Catch: java.lang.Throwable -> L149
            r1.a(r2)     // Catch: java.lang.Throwable -> L149
            java.lang.String r2 = r9.getRequestId()     // Catch: java.lang.Throwable -> L149
            r1.j(r2)     // Catch: java.lang.Throwable -> L149
            java.lang.String r2 = r9.getRequestIdNotice()     // Catch: java.lang.Throwable -> L149
            r1.k(r2)     // Catch: java.lang.Throwable -> L149
            r1.d(r10)     // Catch: java.lang.Throwable -> L149
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L149
            r10.<init>()     // Catch: java.lang.Throwable -> L149
            long r2 = r7.i     // Catch: java.lang.Throwable -> L149
            r10.append(r2)     // Catch: java.lang.Throwable -> L149
            r10.append(r0)     // Catch: java.lang.Throwable -> L149
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L149
            r1.i(r10)     // Catch: java.lang.Throwable -> L149
            java.lang.String r10 = r9.getId()     // Catch: java.lang.Throwable -> L149
            r1.h(r10)     // Catch: java.lang.Throwable -> L149
            int r10 = r8.getType()     // Catch: java.lang.Throwable -> L149
            r1.f(r10)     // Catch: java.lang.Throwable -> L149
            java.lang.String r10 = r8.getUrl()     // Catch: java.lang.Throwable -> L149
            boolean r10 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> L149
            java.lang.String r2 = "utf-8"
            if (r10 != 0) goto L72
            java.lang.String r10 = r8.getUrl()     // Catch: java.lang.Throwable -> L149
            java.lang.String r10 = java.net.URLEncoder.encode(r10, r2)     // Catch: java.lang.Throwable -> L149
            r1.g(r10)     // Catch: java.lang.Throwable -> L149
        L72:
            java.lang.StringBuilder r10 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L149
            r10.<init>()     // Catch: java.lang.Throwable -> L149
            long r3 = r7.h     // Catch: java.lang.Throwable -> L149
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 / r5
            r10.append(r3)     // Catch: java.lang.Throwable -> L149
            r10.append(r0)     // Catch: java.lang.Throwable -> L149
            java.lang.String r10 = r10.toString()     // Catch: java.lang.Throwable -> L149
            r1.c(r10)     // Catch: java.lang.Throwable -> L149
            java.lang.String r10 = r9.getLandingType()     // Catch: java.lang.Throwable -> L149
            int r10 = java.lang.Integer.parseInt(r10)     // Catch: java.lang.Throwable -> L149
            r1.b(r10)     // Catch: java.lang.Throwable -> L149
            int r9 = r9.getLinkType()     // Catch: java.lang.Throwable -> L149
            r1.c(r9)     // Catch: java.lang.Throwable -> L149
            java.lang.String r9 = r7.g     // Catch: java.lang.Throwable -> L149
            r1.b(r9)     // Catch: java.lang.Throwable -> L149
            if (r8 == 0) goto L14d
            int r9 = r8.getType()     // Catch: java.lang.Throwable -> L149
            r1.f(r9)     // Catch: java.lang.Throwable -> L149
            java.lang.String r9 = r8.getUrl()     // Catch: java.lang.Throwable -> L149
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L149
            if (r9 != 0) goto Lbe
            java.lang.String r9 = r8.getUrl()     // Catch: java.lang.Throwable -> L149
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Throwable -> L149
            r1.g(r9)     // Catch: java.lang.Throwable -> L149
        Lbe:
            boolean r9 = r7.k     // Catch: java.lang.Throwable -> L149
            if (r9 == 0) goto L10a
            int r9 = r8.getStatusCode()     // Catch: java.lang.Throwable -> L149
            r1.e(r9)     // Catch: java.lang.Throwable -> L149
            java.lang.String r9 = r8.getHeader()     // Catch: java.lang.Throwable -> L149
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L149
            if (r9 != 0) goto Lde
            java.lang.String r9 = r8.getHeader()     // Catch: java.lang.Throwable -> L149
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r2)     // Catch: java.lang.Throwable -> L149
            r1.e(r9)     // Catch: java.lang.Throwable -> L149
        Lde:
            java.lang.String r9 = r8.getContent()     // Catch: java.lang.Throwable -> L149
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L149
            if (r9 != 0) goto Lf5
            java.lang.String r9 = r8.getContent()     // Catch: java.lang.Throwable -> L149
            java.lang.String r10 = "UTF-8"
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r10)     // Catch: java.lang.Throwable -> L149
            r1.f(r9)     // Catch: java.lang.Throwable -> L149
        Lf5:
            java.lang.String r9 = r8.getExceptionMsg()     // Catch: java.lang.Throwable -> L149
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> L149
            if (r9 != 0) goto L10a
            java.lang.String r8 = r8.getExceptionMsg()     // Catch: java.lang.Throwable -> L149
            java.lang.String r8 = java.net.URLEncoder.encode(r8, r2)     // Catch: java.lang.Throwable -> L149
            r1.d(r8)     // Catch: java.lang.Throwable -> L149
        L10a:
            if (r11 == 0) goto L116
            com.mbridge.msdk.foundation.same.report.d r8 = r7.u     // Catch: java.lang.Throwable -> L149
            java.lang.String r9 = "click_jump_error"
            java.lang.String r10 = r7.g     // Catch: java.lang.Throwable -> L149
            r8.a(r9, r1, r10)     // Catch: java.lang.Throwable -> L149
            goto L14d
        L116:
            java.util.ArrayList r8 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L149
            r8.<init>()     // Catch: java.lang.Throwable -> L149
            r8.add(r1)     // Catch: java.lang.Throwable -> L149
            java.lang.String r8 = com.mbridge.msdk.foundation.entity.e.a(r8)     // Catch: java.lang.Throwable -> L149
            boolean r9 = com.mbridge.msdk.foundation.tools.ai.b(r8)     // Catch: java.lang.Throwable -> L149
            if (r9 == 0) goto L14d
            com.mbridge.msdk.foundation.same.report.b r9 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L149
            boolean r9 = r9.c()     // Catch: java.lang.Throwable -> L149
            if (r9 == 0) goto L13a
            com.mbridge.msdk.foundation.same.report.b r9 = com.mbridge.msdk.foundation.same.report.b.a()     // Catch: java.lang.Throwable -> L149
            r9.a(r8)     // Catch: java.lang.Throwable -> L149
            goto L14d
        L13a:
            com.mbridge.msdk.foundation.same.report.d r9 = new com.mbridge.msdk.foundation.same.report.d     // Catch: java.lang.Throwable -> L149
            android.content.Context r10 = r7.q     // Catch: java.lang.Throwable -> L149
            r11 = 0
            r9.<init>(r10, r11)     // Catch: java.lang.Throwable -> L149
            java.lang.String r10 = "click_jump_success"
            r11 = 0
            r9.a(r10, r8, r11, r11)     // Catch: java.lang.Throwable -> L149
            goto L14d
        L149:
            r8 = move-exception
            r8.printStackTrace()
        L14d:
            return
    }

    public final void a(com.mbridge.msdk.click.h r1) {
            r0 = this;
            r0.v = r1
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r10) {
            r9 = this;
            java.lang.String r0 = "MBridge SDK M"
            boolean r1 = r9.e(r10)     // Catch: java.lang.Throwable -> L6f
            if (r1 != 0) goto L9
            return
        L9:
            com.mbridge.msdk.foundation.db.i r1 = r9.p     // Catch: java.lang.Throwable -> L6f
            com.mbridge.msdk.foundation.db.c r2 = com.mbridge.msdk.foundation.db.c.a(r1)     // Catch: java.lang.Throwable -> L6f
            r2.a()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r1 = r10.getId()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r3 = r9.g     // Catch: java.lang.Throwable -> L6f
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r1 = r2.b(r1, r3)     // Catch: java.lang.Throwable -> L6f
            if (r1 == 0) goto L37
            java.lang.String r3 = r1.getNoticeurl()     // Catch: java.lang.Throwable -> L6f
            if (r3 == 0) goto L28
            r3 = 0
            r1.setNoticeurl(r3)     // Catch: java.lang.Throwable -> L6f
        L28:
            r10.setJumpResult(r1)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r4 = r9.g     // Catch: java.lang.Throwable -> L6f
            r5 = 0
            r6 = -1
            int r7 = r10.getTtc_type()     // Catch: java.lang.Throwable -> L6f
            r3 = r10
            r2.a(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L6f
        L37:
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L6f
            java.lang.String r2 = r10.getPackageName()     // Catch: java.lang.Throwable -> L6f
            boolean r1 = com.mbridge.msdk.click.c.d(r1, r2)     // Catch: java.lang.Throwable -> L6f
            if (r1 == 0) goto L5c
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6f
            r1.<init>()     // Catch: java.lang.Throwable -> L6f
            java.lang.String r10 = r10.getPackageName()     // Catch: java.lang.Throwable -> L6f
            r1.append(r10)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r10 = " is intalled."
            r1.append(r10)     // Catch: java.lang.Throwable -> L6f
            java.lang.String r10 = r1.toString()     // Catch: java.lang.Throwable -> L6f
            com.mbridge.msdk.foundation.tools.z.a(r0, r10)     // Catch: java.lang.Throwable -> L6f
            return
        L5c:
            r3 = 0
            r4 = 0
            r5 = 0
            int r6 = r10.getTtc_type()     // Catch: java.lang.Throwable -> L6f
            r7 = 0
            r1 = 0
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r1)     // Catch: java.lang.Throwable -> L6f
            r1 = r9
            r2 = r10
            r1.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L6f
            goto L77
        L6f:
            r10 = move-exception
            java.lang.String r1 = r10.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r0, r1, r10)
        L77:
            return
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r2, com.mbridge.msdk.out.NativeListener.NativeAdListener r3) {
            r1 = this;
            if (r3 == 0) goto L7
            if (r2 == 0) goto L7
            r3.onAdClick(r2)
        L7:
            java.lang.String r3 = "MBridge SDK M"
            java.lang.String r0 = "clickStart"
            com.mbridge.msdk.foundation.tools.z.b(r3, r0)
            r1.c(r2)
            return
    }

    public final void a(com.mbridge.msdk.out.Campaign r6, java.lang.String r7) {
            r5 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r7)     // Catch: java.lang.Exception -> Lee
            if (r0 != 0) goto Led
            if (r6 != 0) goto La
            goto Led
        La:
            r0 = 0
            if (r6 == 0) goto L14
            boolean r1 = r6 instanceof com.mbridge.msdk.foundation.entity.CampaignEx     // Catch: java.lang.Exception -> Lee
            if (r1 == 0) goto L14
            r0 = r6
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> Lee
        L14:
            java.lang.String r6 = "market://"
            boolean r6 = r7.startsWith(r6)     // Catch: java.lang.Exception -> Lee
            java.lang.String r1 = "market://details?id="
            java.lang.String r2 = "MBridge SDK M"
            if (r6 != 0) goto L8a
            java.lang.String r6 = "https://play.google.com/"
            boolean r6 = r7.startsWith(r6)     // Catch: java.lang.Exception -> Lee
            if (r6 == 0) goto L29
            goto L8a
        L29:
            boolean r6 = com.mbridge.msdk.c.a.aq()     // Catch: java.lang.Exception -> Lee
            com.mbridge.msdk.MBridgeConstans.ALLOW_APK_DOWNLOAD = r6     // Catch: java.lang.Exception -> Lee
            java.lang.String r6 = r7.toLowerCase()     // Catch: java.lang.Exception -> Lee
            java.lang.String r3 = ".apk"
            boolean r6 = r6.endsWith(r3)     // Catch: java.lang.Exception -> Lee
            if (r6 == 0) goto Lf2
            boolean r6 = com.mbridge.msdk.MBridgeConstans.ALLOW_APK_DOWNLOAD     // Catch: java.lang.Exception -> Lee
            if (r6 != 0) goto Lf2
            r6 = 1
            if (r0 == 0) goto L82
            java.lang.String r3 = r0.getPackageName()     // Catch: java.lang.Exception -> Lee
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> Lee
            if (r3 != 0) goto L82
            android.content.Context r3 = r5.q     // Catch: java.lang.Exception -> Lee
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lee
            r4.<init>()     // Catch: java.lang.Exception -> Lee
            r4.append(r1)     // Catch: java.lang.Exception -> Lee
            java.lang.String r1 = r0.getPackageName()     // Catch: java.lang.Exception -> Lee
            r4.append(r1)     // Catch: java.lang.Exception -> Lee
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Exception -> Lee
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r4 = r5.t     // Catch: java.lang.Exception -> Lee
            boolean r1 = com.mbridge.msdk.foundation.tools.ad.a.a(r3, r1, r4)     // Catch: java.lang.Exception -> Lee
            if (r1 != 0) goto L7a
            android.os.Handler r6 = r5.w     // Catch: java.lang.Exception -> L74
            com.mbridge.msdk.click.b$8 r7 = new com.mbridge.msdk.click.b$8     // Catch: java.lang.Exception -> L74
            r7.<init>(r5)     // Catch: java.lang.Exception -> L74
            r6.post(r7)     // Catch: java.lang.Exception -> L74
            goto L89
        L74:
            java.lang.String r6 = "Opps!Access Unavailable."
            com.mbridge.msdk.foundation.tools.z.d(r2, r6)     // Catch: java.lang.Exception -> Lee
            goto L89
        L7a:
            boolean r1 = com.mbridge.msdk.MBridgeConstans.ALLOW_APK_DOWNLOAD     // Catch: java.lang.Exception -> Lee
            if (r1 == 0) goto L89
            r5.a(r0, r7, r6)     // Catch: java.lang.Exception -> Lee
            goto L89
        L82:
            boolean r1 = com.mbridge.msdk.MBridgeConstans.ALLOW_APK_DOWNLOAD     // Catch: java.lang.Exception -> Lee
            if (r1 == 0) goto L89
            r5.a(r0, r7, r6)     // Catch: java.lang.Exception -> Lee
        L89:
            return
        L8a:
            android.content.Context r6 = r5.q     // Catch: java.lang.Exception -> Lee
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r3 = r5.t     // Catch: java.lang.Exception -> Lee
            boolean r6 = com.mbridge.msdk.foundation.tools.ad.a.a(r6, r7, r3)     // Catch: java.lang.Exception -> Lee
            if (r6 != 0) goto Ld9
            if (r0 == 0) goto Ld9
            java.lang.String r6 = r0.getPackageName()     // Catch: java.lang.Exception -> Lee
            boolean r6 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> Lee
            if (r6 != 0) goto Lbb
            android.content.Context r6 = r5.q     // Catch: java.lang.Exception -> Lee
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lee
            r3.<init>()     // Catch: java.lang.Exception -> Lee
            r3.append(r1)     // Catch: java.lang.Exception -> Lee
            java.lang.String r0 = r0.getPackageName()     // Catch: java.lang.Exception -> Lee
            r3.append(r0)     // Catch: java.lang.Exception -> Lee
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Exception -> Lee
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r5.t     // Catch: java.lang.Exception -> Lee
            com.mbridge.msdk.foundation.tools.ad.a.a(r6, r0, r1)     // Catch: java.lang.Exception -> Lee
            goto Ld9
        Lbb:
            int r6 = r5.c()     // Catch: java.lang.Exception -> Lee
            r1 = 2
            if (r6 != r1) goto Lce
            android.content.Context r6 = r5.q     // Catch: java.lang.Exception -> Lee
            java.lang.String r1 = r0.getClickURL()     // Catch: java.lang.Exception -> Lee
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r3 = r5.t     // Catch: java.lang.Exception -> Lee
            com.mbridge.msdk.foundation.tools.ad.a(r6, r1, r0, r3)     // Catch: java.lang.Exception -> Lee
            goto Ld9
        Lce:
            android.content.Context r6 = r5.q     // Catch: java.lang.Exception -> Lee
            java.lang.String r0 = r0.getClickURL()     // Catch: java.lang.Exception -> Lee
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r5.t     // Catch: java.lang.Exception -> Lee
            com.mbridge.msdk.foundation.tools.ad.a(r6, r0, r1)     // Catch: java.lang.Exception -> Lee
        Ld9:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Lee
            r6.<init>()     // Catch: java.lang.Exception -> Lee
            java.lang.String r0 = "Jump to Google Play: "
            r6.append(r0)     // Catch: java.lang.Exception -> Lee
            r6.append(r7)     // Catch: java.lang.Exception -> Lee
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> Lee
            com.mbridge.msdk.foundation.tools.z.b(r2, r6)     // Catch: java.lang.Exception -> Lee
        Led:
            return
        Lee:
            r6 = move-exception
            r6.printStackTrace()
        Lf2:
            return
    }

    public final void a(com.mbridge.msdk.out.NativeListener.NativeTrackingListener r1) {
            r0 = this;
            r0.t = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.n = r1
            return
    }

    public final boolean b(com.mbridge.msdk.foundation.entity.CampaignEx r10) {
            r9 = this;
            boolean r0 = r9.d(r10)
            r1 = 1
            if (r0 != 0) goto L8
            return r1
        L8:
            boolean r0 = com.mbridge.msdk.foundation.tools.ae.a(r10)
            if (r0 == 0) goto L8e
            java.lang.String r0 = r10.getNoticeUrl()
            com.mbridge.msdk.foundation.tools.o r2 = com.mbridge.msdk.foundation.tools.o.a()
            r2.a(r10)
            android.content.Context r2 = r9.q
            java.lang.String r3 = r10.getDeepLinkURL()
            boolean r2 = com.mbridge.msdk.click.c.e(r2, r3)
            if (r2 == 0) goto L87
            if (r10 == 0) goto L2e
            r2 = 2
            int r3 = r10.getLinkType()     // Catch: java.lang.Exception -> L53
            if (r2 == r3) goto L35
        L2e:
            r2 = 3
            int r3 = r10.getLinkType()     // Catch: java.lang.Exception -> L53
            if (r2 != r3) goto L5b
        L35:
            java.lang.String r2 = r10.getId()     // Catch: java.lang.Exception -> L53
            java.util.Map<java.lang.String, java.lang.Long> r3 = com.mbridge.msdk.click.b.d     // Catch: java.lang.Exception -> L53
            if (r3 == 0) goto L5b
            int r3 = r10.getClickTimeOutInterval()     // Catch: java.lang.Exception -> L53
            int r3 = r3 * 1000
            java.util.Map<java.lang.String, java.lang.Long> r4 = com.mbridge.msdk.click.b.d     // Catch: java.lang.Exception -> L53
            long r5 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L53
            long r7 = (long) r3     // Catch: java.lang.Exception -> L53
            long r5 = r5 + r7
            java.lang.Long r3 = java.lang.Long.valueOf(r5)     // Catch: java.lang.Exception -> L53
            r4.put(r2, r3)     // Catch: java.lang.Exception -> L53
            goto L5b
        L53:
            r2 = move-exception
            boolean r3 = com.mbridge.msdk.MBridgeConstans.DEBUG
            if (r3 == 0) goto L5b
            r2.printStackTrace()
        L5b:
            android.content.Context r2 = r9.q
            if (r2 == 0) goto L6e
            android.content.Intent r2 = new android.content.Intent
            r2.<init>()
            java.lang.String r3 = "mb_dp_close_broadcast_receiver"
            r2.setAction(r3)
            android.content.Context r3 = r9.q     // Catch: java.lang.Exception -> L6e
            r3.sendBroadcast(r2)     // Catch: java.lang.Exception -> L6e
        L6e:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r0)
            java.lang.String r0 = "&opdptype=1"
            r2.append(r0)
            java.lang.String r0 = r2.toString()
            r2 = -1
            r9.a(r10, r0, r2)
            com.mbridge.msdk.click.c.b(r10)
            return r1
        L87:
            com.mbridge.msdk.foundation.tools.o r0 = com.mbridge.msdk.foundation.tools.o.a()
            r0.b(r10)
        L8e:
            r10 = 0
            return r10
    }

    public final void c(com.mbridge.msdk.foundation.entity.CampaignEx r17) {
            r16 = this;
            r9 = r16
            r0 = r17
            java.lang.String r10 = "MBridge SDK M"
            r7 = 0
            r9.j = r7     // Catch: java.lang.Throwable -> L46f
            boolean r1 = r16.e(r17)     // Catch: java.lang.Throwable -> L46f
            if (r1 != 0) goto L10
            return
        L10:
            java.lang.String r8 = r17.getNoticeUrl()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.db.i r1 = r9.p     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.db.c r1 = com.mbridge.msdk.foundation.db.c.a(r1)     // Catch: java.lang.Throwable -> L46f
            r1.a()     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getId()     // Catch: java.lang.Throwable -> L46f
            java.lang.String r3 = r9.g     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.click.CommonJumpLoader$JumpLoaderResult r11 = r1.b(r2, r3)     // Catch: java.lang.Throwable -> L46f
            if (r11 == 0) goto L43
            java.lang.String r2 = r11.getNoticeurl()     // Catch: java.lang.Throwable -> L46f
            if (r2 == 0) goto L33
            r2 = 0
            r11.setNoticeurl(r2)     // Catch: java.lang.Throwable -> L46f
        L33:
            r0.setJumpResult(r11)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r3 = r9.g     // Catch: java.lang.Throwable -> L46f
            r4 = 0
            r5 = -1
            int r6 = r17.getTtc_type()     // Catch: java.lang.Throwable -> L46f
            r2 = r17
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L46f
        L43:
            boolean r1 = com.mbridge.msdk.foundation.tools.ae.a(r17)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = "&opdptype=1"
            java.lang.String r3 = "mb_dp_close_broadcast_receiver"
            java.lang.String r4 = "&opdptype=0"
            r5 = -1
            if (r1 == 0) goto Lba
            com.mbridge.msdk.foundation.tools.o r1 = com.mbridge.msdk.foundation.tools.o.a()     // Catch: java.lang.Throwable -> L46f
            r1.a(r0)     // Catch: java.lang.Throwable -> L46f
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L46f
            java.lang.String r6 = r17.getDeepLinkURL()     // Catch: java.lang.Throwable -> L46f
            boolean r1 = com.mbridge.msdk.click.c.e(r1, r6)     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto La4
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L70
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r4 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.onStartRedirection(r0, r4)     // Catch: java.lang.Throwable -> L46f
        L70:
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L81
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L46f
            r1.<init>()     // Catch: java.lang.Throwable -> L46f
            r1.setAction(r3)     // Catch: java.lang.Throwable -> L46f
            android.content.Context r3 = r9.q     // Catch: java.lang.Exception -> L81 java.lang.Throwable -> L46f
            r3.sendBroadcast(r1)     // Catch: java.lang.Exception -> L81 java.lang.Throwable -> L46f
        L81:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r1.<init>()     // Catch: java.lang.Throwable -> L46f
            r1.append(r8)     // Catch: java.lang.Throwable -> L46f
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L46f
            r9.a(r0, r1, r5)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.click.c.b(r17)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto La3
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.onFinishRedirection(r0, r2)     // Catch: java.lang.Throwable -> L46f
        La3:
            return
        La4:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r1.<init>()     // Catch: java.lang.Throwable -> L46f
            r1.append(r8)     // Catch: java.lang.Throwable -> L46f
            r1.append(r4)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.o r1 = com.mbridge.msdk.foundation.tools.o.a()     // Catch: java.lang.Throwable -> L46f
            r1.b(r0)     // Catch: java.lang.Throwable -> L46f
        Lba:
            int r1 = r17.getLinkType()     // Catch: java.lang.Throwable -> L46f
            r6 = 12
            if (r1 != r6) goto Le5
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto Lcf
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.onStartRedirection(r0, r2)     // Catch: java.lang.Throwable -> L46f
        Lcf:
            r9.a(r0, r8, r5)     // Catch: java.lang.Throwable -> L46f
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L46f
            r9.a(r1, r0)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto Le4
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.onFinishRedirection(r0, r2)     // Catch: java.lang.Throwable -> L46f
        Le4:
            return
        Le5:
            com.mbridge.msdk.scheme.applet.AppletModelManager r1 = com.mbridge.msdk.scheme.applet.AppletModelManager.getInstance()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.scheme.applet.AppletsModel r1 = r1.get(r0)     // Catch: java.lang.Throwable -> L46f
            r6 = 1
            if (r1 == 0) goto L1af
            boolean r12 = r1.isSupportWxScheme()     // Catch: java.lang.Throwable -> L46f
            if (r12 == 0) goto L1af
            boolean r12 = r1.isRequestSuccess()     // Catch: java.lang.Throwable -> L46f
            if (r12 == 0) goto L159
            android.content.Context r12 = r9.q     // Catch: java.lang.Throwable -> L46f
            java.lang.String r1 = r1.getDeepLink()     // Catch: java.lang.Throwable -> L46f
            boolean r1 = com.mbridge.msdk.click.c.e(r12, r1)     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L149
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L115
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r4 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.onStartRedirection(r0, r4)     // Catch: java.lang.Throwable -> L46f
        L115:
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L126
            android.content.Intent r1 = new android.content.Intent     // Catch: java.lang.Throwable -> L46f
            r1.<init>()     // Catch: java.lang.Throwable -> L46f
            r1.setAction(r3)     // Catch: java.lang.Throwable -> L46f
            android.content.Context r3 = r9.q     // Catch: java.lang.Exception -> L126 java.lang.Throwable -> L46f
            r3.sendBroadcast(r1)     // Catch: java.lang.Exception -> L126 java.lang.Throwable -> L46f
        L126:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r1.<init>()     // Catch: java.lang.Throwable -> L46f
            r1.append(r8)     // Catch: java.lang.Throwable -> L46f
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L46f
            r9.a(r0, r1, r5)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.click.c.b(r17)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L148
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.onFinishRedirection(r0, r2)     // Catch: java.lang.Throwable -> L46f
        L148:
            return
        L149:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r1.<init>()     // Catch: java.lang.Throwable -> L46f
            r1.append(r8)     // Catch: java.lang.Throwable -> L46f
            r1.append(r4)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r8 = r1.toString()     // Catch: java.lang.Throwable -> L46f
            goto L1af
        L159:
            boolean r2 = r1.isRequesting()     // Catch: java.lang.Throwable -> L46f
            if (r2 == 0) goto L176
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r2 == 0) goto L16c
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r3 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r2.onStartRedirection(r0, r3)     // Catch: java.lang.Throwable -> L46f
        L16c:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r9.t     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.scheme.applet.AppletSchemeCallBack r0 = r9.a(r2, r0, r1, r9)     // Catch: java.lang.Throwable -> L46f
            r1.setAppletSchemeCallBack(r0)     // Catch: java.lang.Throwable -> L46f
            return
        L176:
            boolean r2 = r1.can(r6)     // Catch: java.lang.Throwable -> L46f
            if (r2 == 0) goto L1af
            boolean r2 = r1.isRequestTimesMaxPerDay()     // Catch: java.lang.Throwable -> L46f
            if (r2 == 0) goto L198
            if (r0 == 0) goto L1af
            if (r1 == 0) goto L1af
            java.lang.String r2 = r1.getReBuildClickUrl()     // Catch: java.lang.Throwable -> L46f
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L46f
            if (r2 != 0) goto L1af
            java.lang.String r1 = r1.getReBuildClickUrl()     // Catch: java.lang.Throwable -> L46f
            r0.setClickURL(r1)     // Catch: java.lang.Throwable -> L46f
            goto L1af
        L198:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r2 == 0) goto L1a5
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r3 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r2.onStartRedirection(r0, r3)     // Catch: java.lang.Throwable -> L46f
        L1a5:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r9.t     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.scheme.applet.AppletSchemeCallBack r0 = r9.a(r2, r0, r1, r9)     // Catch: java.lang.Throwable -> L46f
            r1.requestWxAppletsScheme(r6, r0)     // Catch: java.lang.Throwable -> L46f
            return
        L1af:
            boolean r1 = r17.getUserActivation()     // Catch: java.lang.Throwable -> L46f
            if (r1 != 0) goto L21d
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getPackageName()     // Catch: java.lang.Throwable -> L46f
            boolean r1 = com.mbridge.msdk.click.c.d(r1, r2)     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L21d
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getPackageName()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.click.c.f(r1, r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r1.<init>()     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getPackageName()     // Catch: java.lang.Throwable -> L46f
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = " is intalled."
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.z.a(r10, r1)     // Catch: java.lang.Throwable -> L46f
            int r1 = com.mbridge.msdk.foundation.same.a.K     // Catch: java.lang.Throwable -> L46f
            r9.a(r0, r8, r1)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L1f4
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.onStartRedirection(r0, r2)     // Catch: java.lang.Throwable -> L46f
        L1f4:
            r3 = 0
            r4 = 0
            r5 = 0
            int r7 = r17.getTtc_type()     // Catch: java.lang.Throwable -> L46f
            r8 = 1
            java.lang.Boolean r11 = java.lang.Boolean.valueOf(r6)     // Catch: java.lang.Throwable -> L46f
            r1 = r16
            r2 = r17
            r6 = r7
            r7 = r8
            r8 = r11
            r1.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L21c
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.onFinishRedirection(r0, r2)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r0 = r9.t     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.ad.a(r0)     // Catch: java.lang.Throwable -> L46f
        L21c:
            return
        L21d:
            int r1 = r17.getLinkType()     // Catch: java.lang.Throwable -> L46f
            int r2 = r16.c()     // Catch: java.lang.Throwable -> L46f
            r3 = 3
            if (r1 == r3) goto L22b
            r9.a(r0, r8, r5)     // Catch: java.lang.Throwable -> L46f
        L22b:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r4.<init>()     // Catch: java.lang.Throwable -> L46f
            java.lang.String r5 = "======302跳转前linkType:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L46f
            r4.append(r1)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r5 = " openType:"
            r4.append(r5)     // Catch: java.lang.Throwable -> L46f
            r4.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r5 = "======landingType："
            r4.append(r5)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r5 = r17.getLandingType()     // Catch: java.lang.Throwable -> L46f
            r4.append(r5)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.z.b(r10, r4)     // Catch: java.lang.Throwable -> L46f
            r4 = 4
            r5 = 9
            r8 = 8
            if (r1 == r8) goto L261
            if (r1 == r5) goto L261
            if (r1 != r4) goto L25f
            goto L261
        L25f:
            r12 = r7
            goto L262
        L261:
            r12 = r6
        L262:
            java.lang.String r13 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            java.lang.String r14 = "market://"
            boolean r13 = r13.startsWith(r14)     // Catch: java.lang.Throwable -> L46f
            if (r13 != 0) goto L27e
            java.lang.String r13 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            java.lang.String r14 = "https://play.google.com/"
            boolean r13 = r13.startsWith(r14)     // Catch: java.lang.Throwable -> L46f
            if (r13 == 0) goto L27b
            goto L27e
        L27b:
            r13 = r7
            goto L2f9
        L27e:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r13 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r13 == 0) goto L28d
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r13 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r14 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r13.onStartRedirection(r0, r14)     // Catch: java.lang.Throwable -> L46f
            r13 = r6
            goto L28e
        L28d:
            r13 = r7
        L28e:
            android.content.Context r14 = r9.q     // Catch: java.lang.Throwable -> L46f
            java.lang.String r15 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r3 = r9.t     // Catch: java.lang.Throwable -> L46f
            boolean r3 = com.mbridge.msdk.foundation.tools.ad.a.a(r14, r15, r3)     // Catch: java.lang.Throwable -> L46f
            if (r3 == 0) goto L2c5
            r9.a(r11, r0, r7, r7)     // Catch: java.lang.Throwable -> L46f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r1.<init>()     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = "不用做302跳转 最终地址已经是gp了："
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.z.b(r10, r1)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L2c4
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.onFinishRedirection(r0, r2)     // Catch: java.lang.Throwable -> L46f
        L2c4:
            return
        L2c5:
            if (r12 != 0) goto L2f9
            java.lang.String r1 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r3 = r9.t     // Catch: java.lang.Throwable -> L46f
            r9.a(r2, r1, r0, r3)     // Catch: java.lang.Throwable -> L46f
            r9.a(r11, r0, r7, r7)     // Catch: java.lang.Throwable -> L46f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r1.<init>()     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = "最终地址是gp, 但是打开失败了："
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.z.b(r10, r1)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L2f8
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.onFinishRedirection(r0, r2)     // Catch: java.lang.Throwable -> L46f
        L2f8:
            return
        L2f9:
            java.lang.String r3 = " clickurl 为空"
            java.lang.String r14 = "linketype="
            if (r12 == 0) goto L3bc
            java.lang.String r12 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r15 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r15 == 0) goto L30e
            if (r13 != 0) goto L30e
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r13 = r9.t     // Catch: java.lang.Throwable -> L46f
            r13.onStartRedirection(r0, r12)     // Catch: java.lang.Throwable -> L46f
        L30e:
            boolean r13 = android.text.TextUtils.isEmpty(r12)     // Catch: java.lang.Throwable -> L46f
            if (r13 == 0) goto L336
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r2.<init>()     // Catch: java.lang.Throwable -> L46f
            r2.append(r14)     // Catch: java.lang.Throwable -> L46f
            r2.append(r1)     // Catch: java.lang.Throwable -> L46f
            r2.append(r3)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r1 = r2.toString()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.z.b(r10, r1)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L332
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            r1.onRedirectionFailed(r0, r12)     // Catch: java.lang.Throwable -> L46f
        L332:
            r9.a(r11, r0, r6, r7)     // Catch: java.lang.Throwable -> L46f
            return
        L336:
            if (r1 != r8) goto L376
            java.lang.String r1 = "linketype=8 用webview 打开"
            com.mbridge.msdk.foundation.tools.z.b(r10, r1)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.entity.AabEntity r1 = r17.getAabEntity()     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L362
            com.mbridge.msdk.foundation.entity.AabEntity r1 = r17.getAabEntity()     // Catch: java.lang.Throwable -> L46f
            int r1 = r1.getHlp()     // Catch: java.lang.Throwable -> L46f
            if (r1 != r6) goto L362
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 != 0) goto L35c
            com.mbridge.msdk.click.h r1 = r9.v     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.click.h r2 = r9.v     // Catch: java.lang.Throwable -> L46f
            if (r2 == 0) goto L35c
            com.mbridge.msdk.click.h r2 = r9.v     // Catch: java.lang.Throwable -> L46f
            r2.onStartRedirection(r0, r12)     // Catch: java.lang.Throwable -> L46f
        L35c:
            android.content.Context r2 = r9.q     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.ad.a(r2, r12, r0, r9, r1)     // Catch: java.lang.Throwable -> L46f
            goto L372
        L362:
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r9.t     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.ad.a(r1, r12, r0, r2)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L372
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            r1.onFinishRedirection(r0, r12)     // Catch: java.lang.Throwable -> L46f
        L372:
            r9.a(r11, r0, r7, r7)     // Catch: java.lang.Throwable -> L46f
            return
        L376:
            if (r1 != r5) goto L391
            java.lang.String r1 = "linketype=9 用浏览器 打开"
            com.mbridge.msdk.foundation.tools.z.b(r10, r1)     // Catch: java.lang.Throwable -> L46f
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r9.t     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.ad.a(r1, r12, r2)     // Catch: java.lang.Throwable -> L46f
            r9.a(r11, r0, r7, r7)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L390
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            r1.onFinishRedirection(r0, r12)     // Catch: java.lang.Throwable -> L46f
        L390:
            return
        L391:
            if (r1 != r4) goto L3af
            r1 = 2
            if (r2 != r1) goto L3a3
            java.lang.String r1 = "linketype=4 opent=2 用webview 打开"
            com.mbridge.msdk.foundation.tools.z.b(r10, r1)     // Catch: java.lang.Throwable -> L46f
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r9.t     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.ad.a(r1, r12, r0, r2)     // Catch: java.lang.Throwable -> L46f
            goto L3af
        L3a3:
            java.lang.String r1 = "linketype=4 opent=不为2 用Browser 打开"
            com.mbridge.msdk.foundation.tools.z.b(r10, r1)     // Catch: java.lang.Throwable -> L46f
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r2 = r9.t     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.ad.a(r1, r12, r2)     // Catch: java.lang.Throwable -> L46f
        L3af:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L3b8
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            r1.onFinishRedirection(r0, r12)     // Catch: java.lang.Throwable -> L46f
        L3b8:
            r9.a(r11, r0, r7, r7)     // Catch: java.lang.Throwable -> L46f
            return
        L3bc:
            r2 = 2
            if (r1 != r2) goto L3ef
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r1.<init>()     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = "linktype为2 开始做302跳转"
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.z.b(r10, r1)     // Catch: java.lang.Throwable -> L46f
            r3 = 0
            r4 = 1
            r5 = 0
            int r7 = r17.getTtc_type()     // Catch: java.lang.Throwable -> L46f
            r8 = 0
            java.lang.Boolean r11 = java.lang.Boolean.valueOf(r6)     // Catch: java.lang.Throwable -> L46f
            r1 = r16
            r2 = r17
            r6 = r7
            r7 = r8
            r8 = r11
            r1.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L46f
            goto L477
        L3ef:
            r2 = 3
            if (r1 != r2) goto L421
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r1.<init>()     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = "linktype为3 开始做302跳转"
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            r1.append(r2)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.z.b(r10, r1)     // Catch: java.lang.Throwable -> L46f
            r3 = 0
            r4 = 1
            r5 = 0
            int r7 = r17.getTtc_type()     // Catch: java.lang.Throwable -> L46f
            r8 = 0
            java.lang.Boolean r11 = java.lang.Boolean.valueOf(r6)     // Catch: java.lang.Throwable -> L46f
            r1 = r16
            r2 = r17
            r6 = r7
            r7 = r8
            r8 = r11
            r1.a(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L46f
            goto L477
        L421:
            java.lang.String r2 = r17.getClickURL()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r4 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r4 == 0) goto L42e
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r4 = r9.t     // Catch: java.lang.Throwable -> L46f
            r4.onStartRedirection(r0, r2)     // Catch: java.lang.Throwable -> L46f
        L42e:
            boolean r4 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L46f
            if (r4 == 0) goto L456
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L46f
            r4.<init>()     // Catch: java.lang.Throwable -> L46f
            r4.append(r14)     // Catch: java.lang.Throwable -> L46f
            r4.append(r1)     // Catch: java.lang.Throwable -> L46f
            r4.append(r3)     // Catch: java.lang.Throwable -> L46f
            java.lang.String r1 = r4.toString()     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.z.b(r10, r1)     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L452
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            r1.onRedirectionFailed(r0, r2)     // Catch: java.lang.Throwable -> L46f
        L452:
            r9.a(r11, r0, r6, r7)     // Catch: java.lang.Throwable -> L46f
            return
        L456:
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            if (r1 == 0) goto L45f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r1 = r9.t     // Catch: java.lang.Throwable -> L46f
            r1.onFinishRedirection(r0, r2)     // Catch: java.lang.Throwable -> L46f
        L45f:
            java.lang.String r1 = "linketyp不是23489的值 用浏览器 打开"
            com.mbridge.msdk.foundation.tools.z.b(r10, r1)     // Catch: java.lang.Throwable -> L46f
            android.content.Context r1 = r9.q     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.out.NativeListener$NativeTrackingListener r3 = r9.t     // Catch: java.lang.Throwable -> L46f
            com.mbridge.msdk.foundation.tools.ad.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L46f
            r9.a(r11, r0, r7, r7)     // Catch: java.lang.Throwable -> L46f
            goto L477
        L46f:
            r0 = move-exception
            java.lang.String r1 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.c(r10, r1, r0)
        L477:
            return
    }
}
