package com.sigmob.sdk.nativead;

public class b extends com.sigmob.sdk.base.common.h {
    private int k;
    private int l;
    private int m;
    private int n;
    private int o;
    private int p;
    private boolean q;
    private java.lang.Boolean r;



    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.sigmob.sdk.nativead.b f(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            com.sigmob.sdk.nativead.b r0 = new com.sigmob.sdk.nativead.b
            r0.<init>()
            r0.b(r1)
            return r0
    }

    @Override
    public void a(android.content.Context r2, com.czhj.sdk.common.utils.TouchLocation r3, com.czhj.sdk.common.utils.TouchLocation r4, com.sigmob.sdk.base.a r5, com.sigmob.sdk.base.models.BaseAdUnit r6) {
            r1 = this;
            com.sigmob.sdk.base.models.SigMacroCommon r2 = r6.getMacroCommon()
            if (r2 == 0) goto L3a
            int r6 = r3.getX()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r0 = "_DOWNX_"
            r2.addMarcoKey(r0, r6)
            int r6 = r3.getY()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r0 = "_DOWNY_"
            r2.addMarcoKey(r0, r6)
            int r6 = r4.getX()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r0 = "_UPX_"
            r2.addMarcoKey(r0, r6)
            int r6 = r4.getY()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r0 = "_UPY_"
            r2.addMarcoKey(r0, r6)
        L3a:
            r2 = 4
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r6 = 0
            int r0 = r3.getX()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r2[r6] = r0
            int r3 = r3.getY()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r6 = 1
            r2[r6] = r3
            r3 = 2
            int r0 = r4.getX()
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r2[r3] = r0
            r3 = 3
            int r4 = r4.getY()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r2[r3] = r4
            java.lang.String r3 = "%d,%d,%d,%d"
            java.lang.String r2 = java.lang.String.format(r3, r2)
            r1.a(r5, r2, r6)
            return
    }

    public void a(com.sigmob.sdk.base.models.BaseAdUnit r4, int r5, int r6) {
            r3 = this;
            com.sigmob.sdk.nativead.b$1 r0 = new com.sigmob.sdk.nativead.b$1
            r0.<init>(r3, r5, r6)
            java.lang.String r1 = "video_start"
            r2 = 0
            com.sigmob.sdk.base.common.z.a(r1, r2, r4, r0)
            com.sigmob.sdk.base.models.SigMacroCommon r0 = r4.getMacroCommon()
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r1 = "_VIDEOTIME_"
            r0.addMarcoKey(r1, r6)
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r6 = "_BEGINTIME_"
            r0.addMarcoKey(r6, r5)
            com.sigmob.sdk.base.common.a r5 = com.sigmob.sdk.base.common.a.Q
            com.sigmob.sdk.base.network.f.a(r4, r5)
            return
    }

    public void a(com.sigmob.sdk.base.models.BaseAdUnit r4, int r5, int r6, int r7) {
            r3 = this;
            com.sigmob.sdk.nativead.b$2 r0 = new com.sigmob.sdk.nativead.b$2
            r0.<init>(r3, r7, r6, r5)
            java.lang.String r1 = "video_pause"
            r2 = 0
            com.sigmob.sdk.base.common.z.a(r1, r2, r4, r0)
            com.sigmob.sdk.base.models.SigMacroCommon r0 = r4.getMacroCommon()
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r1 = "_VIDEOTIME_"
            r0.addMarcoKey(r1, r7)
            java.lang.String r7 = java.lang.String.valueOf(r6)
            java.lang.String r1 = "_BEGINTIME_"
            r0.addMarcoKey(r1, r7)
            java.lang.String r7 = java.lang.String.valueOf(r5)
            java.lang.String r1 = "_ENDTIME_"
            r0.addMarcoKey(r1, r7)
            if (r6 != 0) goto L2e
            r6 = 1
            goto L2f
        L2e:
            r6 = 0
        L2f:
            java.lang.String r6 = java.lang.String.valueOf(r6)
            java.lang.String r7 = "_PLAYFIRSTFRAME_"
            r0.addMarcoKey(r7, r6)
            java.lang.String r6 = java.lang.String.valueOf(r5)
            r0.addMarcoKey(r1, r6)
            java.lang.String r5 = java.lang.String.valueOf(r5)
            r0.addMarcoKey(r1, r5)
            com.sigmob.sdk.base.common.a r5 = com.sigmob.sdk.base.common.a.R
            com.sigmob.sdk.base.network.f.a(r4, r5)
            return
    }

    @Override
    public void b(com.sigmob.sdk.base.models.BaseAdUnit r5) {
            r4 = this;
            super.b(r5)
            com.sigmob.sdk.base.models.rtb.NativeAdSetting r0 = r5.getNativeAdSetting()
            com.sigmob.sdk.base.models.rtb.SingleNativeAdSetting r5 = r5.getSingleNativeSetting()
            if (r5 == 0) goto L15
            java.lang.Boolean r5 = r5.use_na_video_component
            boolean r5 = r5.booleanValue()
            r4.q = r5
        L15:
            if (r0 == 0) goto L47
            java.lang.Integer r5 = r0.preview_page_video_mute
            int r5 = r5.intValue()
            r4.l = r5
            java.lang.Integer r5 = r0.detail_page_video_mute
            int r5 = r5.intValue()
            r4.m = r5
            java.lang.Integer r5 = r0.impression_percent
            int r5 = r5.intValue()
            r4.n = r5
            java.lang.Integer r5 = r0.impression_time
            int r5 = r5.intValue()
            r4.o = r5
            java.lang.Integer r5 = r0.video_auto_play
            int r5 = r5.intValue()
            r4.k = r5
            java.lang.Integer r5 = r0.end_impression_time
            int r5 = r5.intValue()
            r4.p = r5
        L47:
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            com.sigmob.sdk.videoAd.f r0 = new com.sigmob.sdk.videoAd.f
            com.sigmob.sdk.base.common.g$a r1 = com.sigmob.sdk.base.common.g.a.b
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.n
            r3 = 1048576000(0x3e800000, float:0.25)
            r0.<init>(r1, r2, r3)
            r5.add(r0)
            com.sigmob.sdk.videoAd.f r0 = new com.sigmob.sdk.videoAd.f
            com.sigmob.sdk.base.common.g$a r1 = com.sigmob.sdk.base.common.g.a.b
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.o
            r3 = 1056964608(0x3f000000, float:0.5)
            r0.<init>(r1, r2, r3)
            r5.add(r0)
            com.sigmob.sdk.videoAd.f r0 = new com.sigmob.sdk.videoAd.f
            com.sigmob.sdk.base.common.g$a r1 = com.sigmob.sdk.base.common.g.a.b
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.p
            r3 = 1061158912(0x3f400000, float:0.75)
            r0.<init>(r1, r2, r3)
            r5.add(r0)
            r4.a(r5)
            return
    }

    public void b(boolean r1) {
            r0 = this;
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.r = r1
            return
    }

    public void c(android.content.Context r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r1 = this;
            java.lang.String r2 = "template_show"
            r0 = 0
            com.sigmob.sdk.base.common.z.a(r2, r0, r3)
            return
    }

    public void d(android.content.Context r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r1 = this;
            java.lang.String r2 = "template_close"
            r0 = 0
            com.sigmob.sdk.base.common.z.a(r2, r0, r3)
            return
    }

    public void e(android.content.Context r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r1 = this;
            java.lang.String r2 = "ad_show"
            r0 = 0
            com.sigmob.sdk.base.common.z.b(r2, r0, r3)
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.O
            com.sigmob.sdk.base.network.f.a(r3, r2)
            return
    }

    public void f(android.content.Context r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            r1 = this;
            java.lang.String r2 = "feed_click"
            r0 = 0
            com.sigmob.sdk.base.common.z.b(r2, r0, r3)
            com.sigmob.sdk.base.common.a r2 = com.sigmob.sdk.base.common.a.P
            com.sigmob.sdk.base.network.f.a(r3, r2)
            return
    }

    public boolean l() {
            r1 = this;
            boolean r0 = r1.q
            return r0
    }

    public int m() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    public boolean n() {
            r1 = this;
            java.lang.Boolean r0 = r1.r
            if (r0 == 0) goto L9
            boolean r0 = r0.booleanValue()
            goto L10
        L9:
            int r0 = r1.l
            if (r0 != 0) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    public boolean o() {
            r1 = this;
            int r0 = r1.m
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public int p() {
            r1 = this;
            int r0 = r1.n
            return r0
    }

    public int q() {
            r1 = this;
            int r0 = r1.o
            return r0
    }

    public int r() {
            r1 = this;
            int r0 = r1.p
            return r0
    }

    public int s() {
            r1 = this;
            int r0 = r1.n
            if (r0 == 0) goto L5
            goto L7
        L5:
            r0 = 50
        L7:
            return r0
    }

    public int t() {
            r1 = this;
            int r0 = r1.o
            if (r0 == 0) goto L5
            goto L6
        L5:
            r0 = 1
        L6:
            return r0
    }

    public boolean u() {
            r3 = this;
            int r0 = r3.m()
            r1 = 1
            if (r0 == 0) goto L1b
            int r0 = r3.m()
            if (r0 != r1) goto L1a
            com.czhj.sdk.common.ClientMetadata r0 = com.czhj.sdk.common.ClientMetadata.getInstance()
            int r0 = r0.getActiveNetworkType()
            r2 = 100
            if (r0 != r2) goto L1a
            goto L1b
        L1a:
            r1 = 0
        L1b:
            return r1
    }
}
