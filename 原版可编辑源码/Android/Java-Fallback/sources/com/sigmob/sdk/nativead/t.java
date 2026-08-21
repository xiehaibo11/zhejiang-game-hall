package com.sigmob.sdk.nativead;

public class t implements com.sigmob.sdk.base.network.d.a {
    public static final int a = 1;
    public static final int b = 2;
    public static final int c = 3;
    private android.os.Handler d;
    private com.sigmob.sdk.nativead.v e;
    private com.sigmob.windad.natives.WindNativeAdRequest f;
    private boolean g;
    private final int h;
    private java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> i;




    public t(com.sigmob.windad.natives.WindNativeAdRequest r2, com.sigmob.sdk.nativead.v r3) {
            r1 = this;
            r1.<init>()
            r0 = 20481(0x5001, float:2.87E-41)
            r1.h = r0
            r1.f = r2
            r1.e = r3
            com.sigmob.sdk.nativead.t$1 r2 = new com.sigmob.sdk.nativead.t$1
            android.os.Looper r3 = android.os.Looper.getMainLooper()
            r2.<init>(r1, r3)
            r1.d = r2
            return
    }

    private com.sigmob.windad.natives.WindNativeAdData a(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            com.sigmob.sdk.nativead.ab r0 = new com.sigmob.sdk.nativead.ab
            r0.<init>(r2)
            return r0
    }

    static void a(com.sigmob.sdk.nativead.t r0, java.util.List r1, int r2, java.lang.String r3) {
            r0.a(r1, r2, r3)
            return
    }

    private void a(java.util.List<com.sigmob.windad.natives.WindNativeAdData> r3, int r4, java.lang.String r5) {
            r2 = this;
            r0 = 0
            r2.g = r0
            android.os.Handler r0 = r2.d
            r1 = 20481(0x5001, float:2.87E-41)
            r0.removeMessages(r1)
            android.os.Handler r0 = r2.d
            com.sigmob.sdk.nativead.t$2 r1 = new com.sigmob.sdk.nativead.t$2
            r1.<init>(r2, r4, r5, r3)
            r0.post(r1)
            return
    }

    static boolean a(com.sigmob.sdk.nativead.t r0) {
            boolean r0 = r0.g
            return r0
    }

    static android.os.Handler b(com.sigmob.sdk.nativead.t r0) {
            android.os.Handler r0 = r0.d
            return r0
    }

    static com.sigmob.sdk.nativead.v c(com.sigmob.sdk.nativead.t r0) {
            com.sigmob.sdk.nativead.v r0 = r0.e
            return r0
    }

    public java.lang.String a() {
            r2 = this;
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r2.i
            if (r0 == 0) goto L22
            int r0 = r0.size()
            if (r0 <= 0) goto L22
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r2.i
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0
            if (r0 == 0) goto L22
            com.sigmob.sdk.base.models.rtb.BiddingResponse r1 = r0.bidding_response
            if (r1 == 0) goto L22
            com.sigmob.sdk.base.models.rtb.BiddingResponse r0 = r0.bidding_response
            java.lang.Integer r0 = r0.ecpm
            java.lang.String r0 = java.lang.String.valueOf(r0)
            return r0
        L22:
            r0 = 0
            return r0
    }

    public void a(int r5, java.lang.String r6, int r7, java.lang.String r8) {
            r4 = this;
            r0 = 1
            r4.g = r0
            android.os.Handler r0 = r4.d
            com.sigmob.sdk.base.i r1 = com.sigmob.sdk.base.i.a()
            long r1 = r1.u()
            r3 = 20481(0x5001, float:2.87E-41)
            r0.sendEmptyMessageDelayed(r3, r1)
            com.sigmob.sdk.base.models.LoadAdRequest r0 = new com.sigmob.sdk.base.models.LoadAdRequest
            com.sigmob.windad.natives.WindNativeAdRequest r1 = r4.f
            r0.<init>(r1)
            r0.setBidToken(r6)
            r0.setBidFloor(r7)
            r0.setCurrency(r8)
            r0.setAd_count(r5)
            com.sigmob.sdk.base.network.d.a(r0, r4)
            return
    }

    @Override
    public void a(int r2, java.lang.String r3, java.lang.String r4, com.sigmob.sdk.base.models.LoadAdRequest r5) {
            r1 = this;
            java.lang.String r4 = "respond"
            java.lang.String r0 = "0"
            com.sigmob.sdk.base.common.z.a(r4, r0, r5)
            r4 = 0
            r1.a(r4, r2, r3)
            return
    }

    @Override
    public void a(java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r7, com.sigmob.sdk.base.models.LoadAdRequest r8) {
            r6 = this;
            r6.i = r7
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
            r2 = r1
        L9:
            int r3 = r7.size()
            if (r2 >= r3) goto L26
            java.lang.Object r3 = r7.get(r2)
            com.sigmob.sdk.base.models.BaseAdUnit r3 = (com.sigmob.sdk.base.models.BaseAdUnit) r3
            com.sigmob.windad.natives.WindNativeAdData r4 = r6.a(r3)
            r0.add(r4)
            com.sigmob.sdk.base.common.f r4 = com.sigmob.sdk.base.common.f.e()
            r4.e(r3)
            int r2 = r2 + 1
            goto L9
        L26:
            com.sigmob.sdk.nativead.t$3 r2 = new com.sigmob.sdk.nativead.t$3
            r2.<init>(r6, r7)
            r3 = 0
            java.lang.String r4 = "respond"
            java.lang.String r5 = "1"
            com.sigmob.sdk.base.common.z.a(r4, r5, r3, r8, r2)
            java.lang.Object r7 = r7.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r7 = (com.sigmob.sdk.base.models.BaseAdUnit) r7
            java.lang.String r2 = "ready"
            com.sigmob.sdk.base.common.z.a(r2, r3, r7, r8, r3)
            r6.a(r0, r1, r3)
            return
    }

    public java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> b() {
            r1 = this;
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r1.i
            return r0
    }
}
