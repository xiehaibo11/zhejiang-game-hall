package com.sigmob.sdk.splash;

class d extends android.widget.RelativeLayout {
    protected int a;

    public d(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.sigmob.sdk.splash.d a(android.content.Context r2, com.sigmob.sdk.base.models.BaseAdUnit r3) {
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r3.getMaterial()
            java.lang.Integer r0 = r0.creative_type
            if (r0 != 0) goto La
            r2 = 0
            return r2
        La:
            com.sigmob.sdk.base.models.rtb.MaterialMeta r0 = r3.getMaterial()
            java.lang.Integer r0 = r0.creative_type
            int r0 = r0.intValue()
            com.sigmob.sdk.base.common.l r1 = com.sigmob.sdk.base.common.l.g
            int r1 = r1.a()
            if (r0 != r1) goto L22
            com.sigmob.sdk.splash.h r0 = new com.sigmob.sdk.splash.h
            r0.<init>(r2, r3)
            return r0
        L22:
            com.sigmob.sdk.splash.e r3 = new com.sigmob.sdk.splash.e
            r3.<init>(r2)
            return r3
    }

    public void a() {
            r1 = this;
            r0 = 0
            r1.setVisibility(r0)
            return
    }

    public boolean a(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    public void b() {
            r0 = this;
            return
    }

    public void c() {
            r0 = this;
            return
    }

    public int getDuration() {
            r1 = this;
            int r0 = r1.a
            return r0
    }
}
