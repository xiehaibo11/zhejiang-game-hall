package com.tkay.basead;

public final class b {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.Map<java.lang.String, java.lang.Object> a(com.tkay.basead.d.b r0) {
            if (r0 == 0) goto Lb
            com.tkay.core.common.f.h r0 = r0.e()
            java.util.Map r0 = a(r0)
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.Object> a(com.tkay.basead.f.c r0) {
            if (r0 == 0) goto Lb
            com.tkay.core.common.f.r r0 = r0.e()
            java.util.Map r0 = a(r0)
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static java.util.Map<java.lang.String, java.lang.Object> a(com.tkay.core.common.f.h r3) {
            if (r3 == 0) goto L49
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = r3.p()
            java.lang.String r2 = "offer_id"
            r0.put(r2, r1)
            java.lang.String r1 = r3.q()
            java.lang.String r2 = "creative_id"
            r0.put(r2, r1)
            java.lang.String r1 = r3.o()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L2f
            java.lang.String r1 = r3.z()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L2f
            r1 = 0
            goto L30
        L2f:
            r1 = 1
        L30:
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "is_deeplink"
            r0.put(r2, r1)
            boolean r1 = r3 instanceof com.tkay.core.common.f.z
            if (r1 == 0) goto L48
            com.tkay.core.common.f.z r3 = (com.tkay.core.common.f.z) r3
            java.lang.String r3 = r3.T()
            java.lang.String r1 = "dsp_id"
            r0.put(r1, r3)
        L48:
            return r0
        L49:
            r3 = 0
            return r3
    }
}
