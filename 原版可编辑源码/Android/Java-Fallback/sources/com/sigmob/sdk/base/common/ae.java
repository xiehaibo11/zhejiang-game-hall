package com.sigmob.sdk.base.common;

public class ae {
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.String d;
    private java.lang.String e;
    private com.sigmob.windad.WindAdRequest f;
    private com.sigmob.sdk.base.models.LoadAdRequest g;
    private com.sigmob.sdk.base.common.z.a h;
    private com.sigmob.sdk.base.models.BaseAdUnit i;

    private ae() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "5"
            r1.e = r0
            return
    }

    public static com.sigmob.sdk.base.common.ae a(java.lang.String r1) {
            com.sigmob.sdk.base.common.ae r0 = new com.sigmob.sdk.base.common.ae
            r0.<init>()
            r0.a = r1
            return r0
    }

    public com.sigmob.sdk.base.common.ae a(com.sigmob.sdk.base.common.z.a r1) {
            r0 = this;
            r0.h = r1
            return r0
    }

    public com.sigmob.sdk.base.common.ae a(com.sigmob.sdk.base.models.BaseAdUnit r1) {
            r0 = this;
            r0.i = r1
            return r0
    }

    public com.sigmob.sdk.base.common.ae a(com.sigmob.sdk.base.models.LoadAdRequest r1) {
            r0 = this;
            r0.g = r1
            return r0
    }

    public com.sigmob.sdk.base.common.ae a(com.sigmob.windad.WindAdRequest r1) {
            r0 = this;
            r0.f = r1
            return r0
    }

    public void a() {
            r4 = this;
            com.sigmob.sdk.base.mta.PointEntitySigmob r0 = new com.sigmob.sdk.base.mta.PointEntitySigmob
            r0.<init>()
            java.lang.String r1 = r4.e
            r0.setAc_type(r1)
            java.lang.String r1 = r4.a
            r0.setCategory(r1)
            java.lang.String r1 = r4.b
            r0.setSub_category(r1)
            java.lang.String r1 = r4.c
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L21
            java.lang.String r1 = r4.c
            r0.setAdtype(r1)
        L21:
            java.lang.String r1 = r4.a
            java.lang.String r2 = r4.b
            com.sigmob.sdk.base.models.BaseAdUnit r3 = r4.i
            com.sigmob.sdk.base.common.z.a(r1, r2, r3, r0)
            java.lang.String r1 = r4.a
            java.lang.String r2 = r4.b
            com.sigmob.windad.WindAdRequest r3 = r4.f
            com.sigmob.sdk.base.common.z.a(r1, r2, r0, r3)
            java.lang.String r1 = r4.a
            java.lang.String r2 = r4.b
            com.sigmob.sdk.base.models.LoadAdRequest r3 = r4.g
            com.sigmob.sdk.base.common.z.a(r1, r2, r0, r3)
            com.sigmob.sdk.base.common.z$a r1 = r4.h
            if (r1 == 0) goto L43
            r1.a(r0)
        L43:
            com.sigmob.sdk.base.common.z.a(r0)
            r0.commit()
            return
    }

    public com.sigmob.sdk.base.common.ae b(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return r0
    }

    public com.sigmob.sdk.base.common.ae c(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = r0.c
            r0.c = r1
            return r0
    }

    public com.sigmob.sdk.base.common.ae d(java.lang.String r1) {
            r0 = this;
            r0.b = r1
            return r0
    }

    public com.sigmob.sdk.base.common.ae e(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return r0
    }
}
