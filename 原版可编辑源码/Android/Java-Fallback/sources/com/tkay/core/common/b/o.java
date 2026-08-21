package com.tkay.core.common.b;

public final class o implements com.tkay.core.api.TYCustomLoadListener {
    com.tkay.core.api.TYCustomLoadListener a;
    java.util.Map<java.lang.String, java.lang.Object> b;


    public o(com.tkay.core.api.TYCustomLoadListener r1, java.util.Map<java.lang.String, java.lang.Object> r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    @Override
    public final void onAdCacheLoaded(com.tkay.core.api.BaseAd... r6) {
            r5 = this;
            int r0 = r6.length
            if (r0 <= 0) goto L41
            r0 = 0
            r6 = r6[r0]
            java.lang.String r1 = r6.getMainImageUrl()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L22
            com.tkay.core.api.TYCustomLoadListener r1 = r5.a
            r2 = 1
            com.tkay.core.api.BaseAd[] r2 = new com.tkay.core.api.BaseAd[r2]
            com.tkay.core.common.f.a.e r3 = new com.tkay.core.common.f.a.e
            java.util.Map<java.lang.String, java.lang.Object> r4 = r5.b
            r3.<init>(r6, r4)
            r2[r0] = r3
            r1.onAdCacheLoaded(r2)
            return
        L22:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.res.b r1 = com.tkay.core.common.res.b.a(r1)
            com.tkay.core.common.res.e r2 = new com.tkay.core.common.res.e
            r3 = 2
            java.lang.String r4 = r6.getMainImageUrl()
            r2.<init>(r3, r4)
            com.tkay.core.common.b.o$1 r3 = new com.tkay.core.common.b.o$1
            r3.<init>(r5, r6)
            r1.a(r2, r0, r0, r3)
            return
        L41:
            com.tkay.core.api.TYCustomLoadListener r6 = r5.a
            if (r6 == 0) goto L4c
            java.lang.String r0 = "10011"
            java.lang.String r1 = "load fail with no adObject"
            r6.onAdLoadError(r0, r1)
        L4c:
            return
    }

    @Override
    public final void onAdDataLoaded() {
            r1 = this;
            com.tkay.core.api.TYCustomLoadListener r0 = r1.a
            if (r0 == 0) goto L7
            r0.onAdDataLoaded()
        L7:
            return
    }

    @Override
    public final void onAdLoadError(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.tkay.core.api.TYCustomLoadListener r0 = r1.a
            if (r0 == 0) goto L7
            r0.onAdLoadError(r2, r3)
        L7:
            return
    }
}
