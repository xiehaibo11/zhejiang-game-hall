package com.sigmob.sdk.base.common;

public class h implements java.io.Serializable {
    private static final long serialVersionUID = 2;
    protected java.util.Map<java.lang.String, java.lang.String> a;
    protected java.lang.String b;
    protected java.lang.String c;
    protected java.lang.String d;
    protected java.lang.String e;
    protected java.lang.String f;
    protected java.lang.String g;
    protected java.lang.String h;
    protected int i;
    public boolean j;
    private final java.util.List<com.sigmob.sdk.videoAd.f> k;
    private boolean l;
    private boolean m;
    private java.lang.String n;
    private boolean o;
    private com.sigmob.sdk.base.common.x p;
    private com.sigmob.sdk.base.views.q q;
    private android.content.Context r;
    private java.lang.ref.WeakReference<android.content.Context> s;
    private com.sigmob.sdk.base.views.q.b t;
    private com.sigmob.sdk.base.models.BaseAdUnit u;
    private boolean v;
    private int w;






    static class 6 {
        static final int[] a = null;
        static final int[] b = null;

        static {
                com.sigmob.sdk.base.common.af[] r0 = com.sigmob.sdk.base.common.af.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.sigmob.sdk.base.common.h.6.b = r0
                r1 = 1
                com.sigmob.sdk.base.common.af r2 = com.sigmob.sdk.base.common.af.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r2 = r2.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r0[r2] = r1     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                r0 = 2
                int[] r2 = com.sigmob.sdk.base.common.h.6.b     // Catch: java.lang.NoSuchFieldError -> L1d
                com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.b     // Catch: java.lang.NoSuchFieldError -> L1d
                int r3 = r3.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2[r3] = r0     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r2 = com.sigmob.sdk.base.common.h.6.b     // Catch: java.lang.NoSuchFieldError -> L28
                com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.c     // Catch: java.lang.NoSuchFieldError -> L28
                int r3 = r3.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r4 = 3
                r2[r3] = r4     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                int[] r2 = com.sigmob.sdk.base.common.h.6.b     // Catch: java.lang.NoSuchFieldError -> L33
                com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.d     // Catch: java.lang.NoSuchFieldError -> L33
                int r3 = r3.ordinal()     // Catch: java.lang.NoSuchFieldError -> L33
                r4 = 4
                r2[r3] = r4     // Catch: java.lang.NoSuchFieldError -> L33
            L33:
                int[] r2 = com.sigmob.sdk.base.common.h.6.b     // Catch: java.lang.NoSuchFieldError -> L3e
                com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.e     // Catch: java.lang.NoSuchFieldError -> L3e
                int r3 = r3.ordinal()     // Catch: java.lang.NoSuchFieldError -> L3e
                r4 = 5
                r2[r3] = r4     // Catch: java.lang.NoSuchFieldError -> L3e
            L3e:
                int[] r2 = com.sigmob.sdk.base.common.h.6.b     // Catch: java.lang.NoSuchFieldError -> L49
                com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.f     // Catch: java.lang.NoSuchFieldError -> L49
                int r3 = r3.ordinal()     // Catch: java.lang.NoSuchFieldError -> L49
                r4 = 6
                r2[r3] = r4     // Catch: java.lang.NoSuchFieldError -> L49
            L49:
                int[] r2 = com.sigmob.sdk.base.common.h.6.b     // Catch: java.lang.NoSuchFieldError -> L54
                com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.g     // Catch: java.lang.NoSuchFieldError -> L54
                int r3 = r3.ordinal()     // Catch: java.lang.NoSuchFieldError -> L54
                r4 = 7
                r2[r3] = r4     // Catch: java.lang.NoSuchFieldError -> L54
            L54:
                com.sigmob.sdk.base.a[] r2 = com.sigmob.sdk.base.a.values()
                int r2 = r2.length
                int[] r2 = new int[r2]
                com.sigmob.sdk.base.common.h.6.a = r2
                com.sigmob.sdk.base.a r3 = com.sigmob.sdk.base.a.a     // Catch: java.lang.NoSuchFieldError -> L65
                int r3 = r3.ordinal()     // Catch: java.lang.NoSuchFieldError -> L65
                r2[r3] = r1     // Catch: java.lang.NoSuchFieldError -> L65
            L65:
                int[] r1 = com.sigmob.sdk.base.common.h.6.a     // Catch: java.lang.NoSuchFieldError -> L6f
                com.sigmob.sdk.base.a r2 = com.sigmob.sdk.base.a.c     // Catch: java.lang.NoSuchFieldError -> L6f
                int r2 = r2.ordinal()     // Catch: java.lang.NoSuchFieldError -> L6f
                r1[r2] = r0     // Catch: java.lang.NoSuchFieldError -> L6f
            L6f:
                return
        }
    }

    protected h() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.i = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.k = r0
            return
    }

    public static com.sigmob.sdk.base.common.h a(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            com.sigmob.sdk.base.common.h r0 = new com.sigmob.sdk.base.common.h
            r0.<init>()
            r0.b(r1)
            return r0
    }

    static com.sigmob.sdk.base.views.q a(com.sigmob.sdk.base.common.h r0) {
            com.sigmob.sdk.base.views.q r0 = r0.q
            return r0
    }

    static com.sigmob.sdk.base.views.q a(com.sigmob.sdk.base.common.h r0, com.sigmob.sdk.base.views.q r1) {
            r0.q = r1
            return r1
    }

    static java.lang.String a(com.sigmob.sdk.base.common.h r0, java.lang.String r1) {
            r0.n = r1
            return r1
    }

    static boolean a(com.sigmob.sdk.base.common.h r0, boolean r1) {
            r0.l = r1
            return r1
    }

    static com.sigmob.sdk.base.models.BaseAdUnit b(com.sigmob.sdk.base.common.h r0) {
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r0.u
            return r0
    }

    private void b(com.sigmob.sdk.base.a r1, java.lang.String r2, java.lang.String r3, boolean r4) {
            r0 = this;
            int[] r2 = com.sigmob.sdk.base.common.h.6.a
            int r1 = r1.ordinal()
            r1 = r2[r1]
            r2 = 1
            r3 = 0
            if (r1 == r2) goto L21
            r2 = 2
            if (r1 == r2) goto L18
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r0.u
            com.sigmob.sdk.base.common.ab r1 = r1.getSessionManager()
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.c
            goto L29
        L18:
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r0.u
            com.sigmob.sdk.base.common.ab r1 = r1.getSessionManager()
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.v
            goto L29
        L21:
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r0.u
            com.sigmob.sdk.base.common.ab r1 = r1.getSessionManager()
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.u
        L29:
            r1.a(r2, r3)
            return
    }

    static com.sigmob.sdk.base.views.q.b c(com.sigmob.sdk.base.common.h r0) {
            com.sigmob.sdk.base.views.q$b r0 = r0.t
            return r0
    }

    static java.lang.String d(com.sigmob.sdk.base.common.h r0) {
            java.lang.String r0 = r0.n
            return r0
    }

    static com.sigmob.sdk.base.common.x e(com.sigmob.sdk.base.common.h r0) {
            com.sigmob.sdk.base.common.x r0 = r0.p
            return r0
    }

    private boolean l() {
            r4 = this;
            java.lang.ref.WeakReference<android.content.Context> r0 = r4.s
            r1 = 0
            if (r0 == 0) goto L4e
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.u
            if (r2 != 0) goto La
            goto L4e
        La:
            java.lang.Object r0 = r0.get()
            android.content.Context r0 = (android.content.Context) r0
            if (r0 == 0) goto L37
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.u
            boolean r2 = r2.isDownloadDialog()
            if (r2 == 0) goto L37
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.u
            com.sigmob.sdk.base.models.rtb.AdPrivacy r2 = r2.getadPrivacy()
            if (r2 == 0) goto L37
            com.sigmob.sdk.base.views.q r2 = r4.q
            if (r2 != 0) goto L37
            com.sigmob.sdk.base.views.q r2 = new com.sigmob.sdk.base.views.q
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r4.u
            r2.<init>(r0, r3)
            r4.q = r2
            com.sigmob.sdk.base.common.h$1 r0 = new com.sigmob.sdk.base.common.h$1
            r0.<init>(r4)
            r2.a(r0)
        L37:
            com.sigmob.sdk.base.views.q r0 = r4.q
            if (r0 == 0) goto L4e
            boolean r0 = r0.a()
            if (r0 == 0) goto L4e
            boolean r0 = r4.l
            if (r0 != 0) goto L4e
            com.sigmob.sdk.base.views.q r0 = r4.q
            r0.show()
            r0 = 1
            r4.l = r0
            return r0
        L4e:
            return r1
    }

    public java.util.List<com.sigmob.sdk.base.common.g> a(long r4, long r6) {
            r3 = this;
            r0 = 0
            int r2 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
            if (r2 <= 0) goto L3e
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto L3e
            float r4 = (float) r4
            float r5 = (float) r6
            float r4 = r4 / r5
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            com.sigmob.sdk.videoAd.f r6 = new com.sigmob.sdk.videoAd.f
            com.sigmob.sdk.base.common.a r7 = com.sigmob.sdk.base.common.a.n
            r6.<init>(r7, r4)
            java.util.List<com.sigmob.sdk.videoAd.f> r4 = r3.k
            int r4 = r4.size()
            r7 = 0
        L20:
            if (r7 >= r4) goto L3d
            java.util.List<com.sigmob.sdk.videoAd.f> r0 = r3.k
            java.lang.Object r0 = r0.get(r7)
            com.sigmob.sdk.videoAd.f r0 = (com.sigmob.sdk.videoAd.f) r0
            int r1 = r0.a(r6)
            if (r1 <= 0) goto L31
            goto L3d
        L31:
            boolean r1 = r0.m()
            if (r1 != 0) goto L3a
            r5.add(r0)
        L3a:
            int r7 = r7 + 1
            goto L20
        L3d:
            return r5
        L3e:
            java.util.List r4 = java.util.Collections.emptyList()
            return r4
    }

    public void a(int r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void a(android.content.Context r1, int r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            java.lang.String r1 = "start"
            r2 = 0
            com.sigmob.sdk.base.common.z.b(r1, r2, r3)
            com.sigmob.sdk.base.common.a r1 = com.sigmob.sdk.base.common.a.a
            com.sigmob.sdk.base.network.f.a(r3, r1)
            return
    }

    public void a(android.content.Context r1, com.czhj.sdk.common.utils.TouchLocation r2, com.czhj.sdk.common.utils.TouchLocation r3, com.sigmob.sdk.base.a r4, com.sigmob.sdk.base.models.BaseAdUnit r5) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            return
    }

    public void a(android.content.Context r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r1 = this;
            java.lang.String r2 = "landing_page_show"
            r0 = 0
            com.sigmob.sdk.base.common.z.a(r2, r0, r3)
            return
    }

    public void a(android.content.Context r2, com.sigmob.sdk.base.models.BaseAdUnit r3, com.sigmob.sdk.base.views.q.b r4) {
            r1 = this;
            if (r2 == 0) goto L10
            if (r3 != 0) goto L5
            goto L10
        L5:
            java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
            r0.<init>(r2)
            r1.s = r0
            r1.u = r3
            r1.t = r4
        L10:
            return
    }

    public void a(android.content.Context r2, java.lang.String r3, com.sigmob.sdk.base.models.BaseAdUnit r4, java.lang.String r5, int r6) {
            r1 = this;
            java.lang.String r0 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2, r0)
            com.sigmob.sdk.base.common.z.a(r5, r6, r3, r4)
            return
    }

    public void a(com.sigmob.sdk.base.a r7, java.lang.String r8, java.lang.String r9, boolean r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    public void a(com.sigmob.sdk.base.a r5, java.lang.String r6, java.lang.String r7, boolean r8, boolean r9) {
            r4 = this;
            java.lang.String r0 = r4.b
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L9
            r0 = r6
        L9:
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.u
            com.sigmob.sdk.base.models.ClickCommon r1 = r1.getClickCommon()
            r1.clickUIType = r5
            com.sigmob.sdk.base.models.BaseAdUnit r1 = r4.u
            com.sigmob.sdk.base.models.ClickCommon r1 = r1.getClickCommon()
            r1.clickCoordinate = r7
            com.sigmob.sdk.base.models.BaseAdUnit r7 = r4.u
            com.sigmob.sdk.base.models.ClickCommon r7 = r7.getClickCommon()
            r7.clickUrl = r0
            com.sigmob.sdk.base.common.ag$a r7 = new com.sigmob.sdk.base.common.ag$a
            r7.<init>()
            com.sigmob.sdk.base.common.af r0 = com.sigmob.sdk.base.common.af.a
            r1 = 5
            com.sigmob.sdk.base.common.af[] r1 = new com.sigmob.sdk.base.common.af[r1]
            r2 = 0
            com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.f
            r1[r2] = r3
            r2 = 1
            com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.d
            r1[r2] = r3
            r2 = 2
            com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.e
            r1[r2] = r3
            r2 = 3
            com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.c
            r1[r2] = r3
            r2 = 4
            com.sigmob.sdk.base.common.af r3 = com.sigmob.sdk.base.common.af.b
            r1[r2] = r3
            com.sigmob.sdk.base.common.ag$a r7 = r7.a(r0, r1)
            com.sigmob.sdk.base.common.h$5 r0 = new com.sigmob.sdk.base.common.h$5
            r0.<init>(r4, r8, r9, r5)
            com.sigmob.sdk.base.common.ag$a r5 = r7.a(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r7 = r4.u
            com.sigmob.sdk.base.common.ag$a r5 = r5.a(r7)
            com.sigmob.sdk.base.models.BaseAdUnit r7 = r4.u
            boolean r7 = r7.isSkipSigmobBrowser()
            com.sigmob.sdk.base.common.ag$a r5 = r5.a(r7)
            com.sigmob.sdk.base.models.BaseAdUnit r7 = r4.u
            com.sigmob.sdk.base.models.rtb.Ad r7 = r7.getAd()
            java.lang.Boolean r7 = r7.forbiden_parse_landingpage
            boolean r7 = r7.booleanValue()
            com.sigmob.sdk.base.common.ag$a r5 = r5.b(r7)
            com.sigmob.sdk.base.common.ag r5 = r5.a()
            android.content.Context r7 = com.sigmob.sdk.b.b()
            r5.a(r7, r6)
            return
    }

    public void a(com.sigmob.sdk.base.a r7, java.lang.String r8, boolean r9) {
            r6 = this;
            r2 = 0
            r5 = 1
            r0 = r6
            r1 = r7
            r3 = r8
            r4 = r9
            r0.a(r1, r2, r3, r4, r5)
            return
    }

    public void a(com.sigmob.sdk.base.common.x r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void a(java.util.List<com.sigmob.sdk.videoAd.f> r2) {
            r1 = this;
            java.lang.String r0 = "fractionalTrackers cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r2, r0)
            java.util.List<com.sigmob.sdk.videoAd.f> r0 = r1.k
            r0.addAll(r2)
            java.util.List<com.sigmob.sdk.videoAd.f> r2 = r1.k
            java.util.Collections.sort(r2)
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.o = r1
            return
    }

    public boolean a() {
            r1 = this;
            boolean r0 = r1.v
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public void b(android.content.Context r1, int r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            return
    }

    public void b(android.content.Context r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r1 = this;
            java.lang.String r2 = "landing_page_close"
            r0 = 0
            com.sigmob.sdk.base.common.z.a(r2, r0, r3)
            return
    }

    public void b(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            java.lang.String r1 = r1.getSplashFilePath()
            r0.d(r1)
            return
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public void c(android.content.Context r1, int r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            return
    }

    public void c(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.u
            com.sigmob.sdk.base.network.f.a(r2, r0)
            return
    }

    public void c(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public void d(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.v
            com.sigmob.sdk.base.network.f.a(r2, r0)
            return
    }

    protected void d(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public void e(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.c
            com.sigmob.sdk.base.network.f.a(r2, r0)
            return
    }

    public void e(java.lang.String r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.e = r1
        L4:
            return
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public void f(java.lang.String r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.f = r1
        L4:
            return
    }

    public java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public void g(java.lang.String r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.g = r1
        L4:
            return
    }

    public java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public void h(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.l()
            if (r0 != 0) goto L9
            r1.i(r2)
        L9:
            return
    }

    public java.util.Map<java.lang.String, java.lang.String> i() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.a
            return r0
    }

    public void i(java.lang.String r5) {
            r4 = this;
            java.lang.String r0 = r4.n
            boolean r0 = com.sigmob.sdk.base.common.n.a(r0)
            r1 = 1
            if (r0 == 0) goto L17
            android.content.Context r5 = com.sigmob.sdk.b.b()     // Catch: java.lang.Throwable -> L16
            java.lang.String r0 = "当前正在努力下载，请稍等"
            android.widget.Toast r5 = android.widget.Toast.makeText(r5, r0, r1)     // Catch: java.lang.Throwable -> L16
            r5.show()     // Catch: java.lang.Throwable -> L16
        L16:
            return
        L17:
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.u
            java.lang.String r0 = r0.getLanding_page()
            boolean r2 = android.text.TextUtils.isEmpty(r5)
            if (r2 != 0) goto L24
            r0 = r5
        L24:
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.u
            com.sigmob.sdk.base.models.SigMacroCommon r2 = r2.getMacroCommon()
            java.lang.String r0 = r2.macroProcess(r0)
            com.sigmob.sdk.base.models.BaseAdUnit r2 = r4.u
            int r2 = r2.getBubInteractionType()
            if (r2 != r1) goto L6b
            com.czhj.sdk.common.network.JsonRequest r5 = new com.czhj.sdk.common.network.JsonRequest
            com.sigmob.sdk.base.common.h$2 r2 = new com.sigmob.sdk.base.common.h$2
            r2.<init>(r4)
            r5.<init>(r0, r2, r1)
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.getRequestQueue()
            if (r0 != 0) goto L62
            com.sigmob.sdk.base.models.BaseAdUnit r5 = r4.u
            com.sigmob.sdk.base.common.h$3 r0 = new com.sigmob.sdk.base.common.h$3
            r0.<init>(r4)
            java.lang.String r1 = "download_start"
            java.lang.String r2 = "0"
            com.sigmob.sdk.base.common.z.a(r1, r2, r5, r0)
            r5 = 0
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.u
            com.sigmob.sdk.base.common.h$4 r2 = new com.sigmob.sdk.base.common.h$4
            r2.<init>(r4)
            java.lang.String r3 = "request queue is null"
            com.sigmob.sdk.base.common.z.a(r1, r5, r3, r0, r2)
            goto L72
        L62:
            java.lang.String r1 = "GDTRequestConvert"
            r5.setTag(r1)
            r0.add(r5)
            goto L72
        L6b:
            r4.n = r5
            com.sigmob.sdk.base.models.BaseAdUnit r0 = r4.u
            com.sigmob.sdk.base.common.n.a(r5, r0)
        L72:
            return
    }

    public boolean j() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public void k() {
            r1 = this;
            r0 = 0
            r1.t = r0
            return
    }
}
