package com.sigmob.sdk.videoAd;

public class a extends com.sigmob.sdk.base.common.h implements java.io.Serializable {
    protected static final long serialVersionUID = 2;
    protected com.sigmob.sdk.videoAd.h k;
    protected com.sigmob.sdk.videoAd.h l;
    protected boolean m;
    protected int n;
    protected int o;
    protected float p;
    protected int q;
    protected int r;
    protected boolean s;
    private final java.util.List<com.sigmob.sdk.videoAd.f> t;
    private int u;
    private int v;
    private boolean w;
    private com.sigmob.sdk.videoAd.e x;
    private int y;
    private boolean z;

    private a() {
            r2 = this;
            r2.<init>()
            r0 = 3
            r2.n = r0
            r0 = 4
            r2.o = r0
            r0 = 1065353216(0x3f800000, float:1.0)
            r2.p = r0
            r0 = -1000(0xfffffffffffffc18, float:NaN)
            r2.q = r0
            r0 = 100
            r2.r = r0
            r0 = 0
            r2.s = r0
            r1 = -1
            r2.u = r1
            r1 = 1
            r2.w = r1
            r1 = 0
            r2.x = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2.t = r1
            r2.m = r0
            return
    }

    private void d(boolean r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public static com.sigmob.sdk.videoAd.a f(com.sigmob.sdk.base.models.BaseAdUnit r6) {
            com.sigmob.sdk.videoAd.a r0 = new com.sigmob.sdk.videoAd.a
            r0.<init>()
            java.lang.String r1 = r6.getVideoPath()
            r0.d(r1)
            int r1 = r6.getAd_type()
            r2 = 0
            r3 = 1
            if (r1 != r3) goto L16
            r1 = r3
            goto L17
        L16:
            r1 = r2
        L17:
            r0.d(r1)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r6.getMaterial()
            java.lang.Integer r1 = r1.video_reciprocal_millisecond
            int r1 = r1.intValue()
            r0.h(r1)
            com.sigmob.sdk.base.models.rtb.MaterialMeta r1 = r6.getMaterial()
            java.lang.Integer r1 = r1.creative_type
            int r1 = r1.intValue()
            com.sigmob.sdk.base.common.l r4 = com.sigmob.sdk.base.common.l.e
            int r4 = r4.a()
            if (r1 == r4) goto L3a
            r2 = r3
        L3a:
            r0.c(r2)
            com.sigmob.sdk.base.models.rtb.RvAdSetting r6 = r6.getRvAdSetting()
            com.sigmob.sdk.base.i r1 = com.sigmob.sdk.base.i.a()
            com.sigmob.sdk.base.models.config.DialogSetting r1 = r1.q()
            com.sigmob.sdk.videoAd.e r2 = new com.sigmob.sdk.videoAd.e
            if (r1 == 0) goto L59
            java.lang.String r3 = r1.title
            java.lang.String r4 = r1.body_text
            java.lang.String r5 = r1.cancel_button_text
            java.lang.String r1 = r1.close_button_text
            r2.<init>(r3, r4, r5, r1)
            goto L6c
        L59:
            java.lang.String r1 = com.sigmob.sdk.base.d.k()
            java.lang.String r3 = com.sigmob.sdk.base.d.j()
            java.lang.String r4 = com.sigmob.sdk.base.d.m()
            java.lang.String r5 = com.sigmob.sdk.base.d.l()
            r2.<init>(r1, r3, r4, r5)
        L6c:
            r0.a(r2)
            if (r6 == 0) goto Lc2
            java.lang.Boolean r1 = r6.enable_exit_on_video_close
            boolean r1 = r1.booleanValue()
            r0.b(r1)
            java.lang.Integer r1 = r6.skip_percent
            int r1 = r1.intValue()
            r0.i(r1)
            java.lang.Integer r1 = r6.skip_seconds
            int r1 = r1.intValue()
            r0.k(r1)
            java.lang.Integer r1 = r6.endcard_close_position
            int r1 = r1.intValue()
            r0.d(r1)
            java.lang.Integer r1 = r6.video_close_position
            int r1 = r1.intValue()
            r0.e(r1)
            java.lang.Integer r1 = r6.mute_postion
            int r1 = r1.intValue()
            r0.f(r1)
            java.lang.Float r1 = r6.finished
            float r1 = r1.floatValue()
            r0.a(r1)
            java.lang.Integer r1 = r6.if_mute
            int r1 = r1.intValue()
            r0.g(r1)
            java.lang.Integer r6 = r6.end_time
            int r6 = r6.intValue()
            r0.c(r6)
        Lc2:
            return r0
    }

    public static com.sigmob.sdk.videoAd.h g(com.sigmob.sdk.base.models.BaseAdUnit r13) {
            if (r13 == 0) goto L3a
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r13.getMaterial()
            java.lang.Integer r1 = r0.click_type
            int r1 = r1.intValue()
            r2 = 2
            if (r1 != r2) goto L12
            com.sigmob.sdk.base.views.k$a r1 = com.sigmob.sdk.base.views.k.a.b
            goto L14
        L12:
            com.sigmob.sdk.base.views.k$a r1 = com.sigmob.sdk.base.views.k.a.c
        L14:
            r5 = r1
            java.lang.String r3 = r13.resourcePath()
            com.sigmob.sdk.base.views.k$b r4 = r13.getCreativeResourceType()
            com.sigmob.sdk.base.views.k r12 = new com.sigmob.sdk.base.views.k
            r6 = 720(0x2d0, float:1.009E-42)
            r7 = 1024(0x400, float:1.435E-42)
            r2 = r12
            r2.<init>(r3, r4, r5, r6, r7)
            com.sigmob.sdk.videoAd.h r1 = new com.sigmob.sdk.videoAd.h
            r7 = 768(0x300, float:1.076E-42)
            r8 = 1024(0x400, float:1.435E-42)
            int r9 = r13.getInteractionType()
            java.lang.String r10 = r0.landing_page
            java.lang.String r11 = r0.deeplink_url
            r6 = r1
            r6.<init>(r7, r8, r9, r10, r11, r12)
            return r1
        L3a:
            r13 = 0
            return r13
    }

    public void a(float r1) {
            r0 = this;
            r0.p = r1
            return
    }

    public void a(android.content.Context r1, int r2) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            return
    }

    public void a(android.content.Context r1, int r2, int r3, com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            return
    }

    @Override
    public void a(android.content.Context r1, int r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            return
    }

    public void a(com.sigmob.sdk.videoAd.e r1) {
            r0 = this;
            r0.x = r1
            return
    }

    @Override
    public void a(java.lang.String r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void a(boolean r1, int r2, int r3, com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r0 = this;
            return
    }

    public int b(int r3) {
            r2 = this;
            int r0 = r2.y
            if (r0 == 0) goto Lc
            int r1 = r0 * 1000
            if (r1 <= r3) goto L9
            goto Lc
        L9:
            int r0 = r0 * 1000
            return r0
        Lc:
            return r3
    }

    @Override
    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.h
            return r0
    }

    public void b(android.content.Context r1, int r2) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            return
    }

    public void b(android.content.Context r1, int r2, int r3, com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            return
    }

    @Override
    public void b(android.content.Context r1, int r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            return
    }

    public void b(boolean r1) {
            r0 = this;
            r0.w = r1
            return
    }

    public void c(int r1) {
            r0 = this;
            r0.y = r1
            return
    }

    public void c(android.content.Context r1, int r2, int r3, com.sigmob.sdk.base.models.BaseAdUnit r4) {
            r0 = this;
            java.lang.String r2 = "context cannot be null"
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkNotNull(r1, r2)
            return
    }

    public void c(boolean r1) {
            r0 = this;
            r0.s = r1
            return
    }

    public void d(int r2) {
            r1 = this;
            if (r2 <= 0) goto L7
            r0 = 5
            if (r2 >= r0) goto L7
            r1.n = r2
        L7:
            return
    }

    public void e(int r2) {
            r1 = this;
            if (r2 <= 0) goto L7
            r0 = 5
            if (r2 >= r0) goto L7
            r1.i = r2
        L7:
            return
    }

    @Override
    public void e(java.lang.String r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.e = r1
        L4:
            return
    }

    @Override
    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public void f(int r2) {
            r1 = this;
            if (r2 <= 0) goto L7
            r0 = 5
            if (r2 >= r0) goto L7
            r1.o = r2
        L7:
            return
    }

    @Override
    public void f(java.lang.String r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.f = r1
        L4:
            return
    }

    @Override
    public java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public void g(int r1) {
            r0 = this;
            r0.v = r1
            return
    }

    @Override
    public void g(java.lang.String r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.g = r1
        L4:
            return
    }

    @Override
    public java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }

    public void h(int r1) {
            r0 = this;
            if (r1 == 0) goto L4
            r0.q = r1
        L4:
            return
    }

    public void i(int r2) {
            r1 = this;
            if (r2 >= 0) goto L6
            r2 = 0
        L3:
            r1.r = r2
            goto Lc
        L6:
            r0 = 100
            if (r2 <= r0) goto L3
            r1.r = r0
        Lc:
            return
    }

    public int j(int r3) {
            r2 = this;
            float r3 = (float) r3
            int r0 = r2.r
            float r0 = (float) r0
            r1 = 1120403456(0x42c80000, float:100.0)
            float r0 = r0 / r1
            float r3 = r3 * r0
            int r3 = (int) r3
            return r3
    }

    public void k(int r1) {
            r0 = this;
            r0.u = r1
            return
    }

    public int l() {
            r1 = this;
            int r0 = r1.y
            return r0
    }

    public boolean m() {
            r1 = this;
            boolean r0 = r1.w
            return r0
    }

    public int n() {
            r1 = this;
            int r0 = r1.n
            return r0
    }

    public int o() {
            r1 = this;
            int r0 = r1.i
            return r0
    }

    public int p() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    public float q() {
            r1 = this;
            float r0 = r1.p
            return r0
    }

    public int r() {
            r1 = this;
            int r0 = r1.v
            return r0
    }

    public int s() {
            r1 = this;
            int r0 = r1.q
            return r0
    }

    public boolean t() {
            r1 = this;
            boolean r0 = r1.s
            return r0
    }

    public com.sigmob.sdk.videoAd.e u() {
            r1 = this;
            com.sigmob.sdk.videoAd.e r0 = r1.x
            return r0
    }

    public int v() {
            r1 = this;
            r0 = 0
            return r0
    }

    public int w() {
            r1 = this;
            int r0 = r1.r
            return r0
    }

    public boolean x() {
            r1 = this;
            boolean r0 = r1.m
            return r0
    }

    public int y() {
            r1 = this;
            int r0 = r1.u
            return r0
    }
}
