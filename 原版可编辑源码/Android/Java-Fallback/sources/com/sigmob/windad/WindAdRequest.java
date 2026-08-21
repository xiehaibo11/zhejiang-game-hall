package com.sigmob.windad;

public class WindAdRequest {
    protected int a;
    protected int b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private java.util.Map<java.lang.String, java.lang.Object> f;
    private java.util.Map<java.lang.String, java.lang.Object> g;
    private boolean h;

    protected WindAdRequest(java.lang.String r2, java.lang.String r3, java.util.Map<java.lang.String, java.lang.Object> r4) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.b = r0
            r1.c = r2
            r1.d = r3
            r1.f = r4
            r1.a = r0
            return
    }

    public static boolean isPlacementEmpty(com.sigmob.windad.WindAdRequest r0) {
            if (r0 == 0) goto Lf
            java.lang.String r0 = r0.getPlacementId()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Ld
            goto Lf
        Ld:
            r0 = 0
            goto L10
        Lf:
            r0 = 1
        L10:
            return r0
    }

    public int getAdCount() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    public int getAdType() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public java.lang.String getLoadId() {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.g
            if (r0 == 0) goto L11
            java.lang.String r1 = "loadId"
            java.lang.Object r0 = r0.get(r1)
            boolean r1 = r0 instanceof java.lang.String
            if (r1 == 0) goto L11
            java.lang.String r0 = (java.lang.String) r0
            return r0
        L11:
            r0 = 0
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.Object> getOptions() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.f
            return r0
    }

    public java.lang.String getPlacementId() {
            r1 = this;
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String getUserId() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public boolean hasOptions() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.f
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public boolean isHalfInterstitial() {
            r1 = this;
            boolean r0 = r1.h
            return r0
    }

    public void setExtOptions(java.util.Map<java.lang.String, java.lang.Object> r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void setHalfInterstitial(boolean r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void setOptions(java.util.Map<java.lang.String, java.lang.Object> r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public void setUserId(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }
}
