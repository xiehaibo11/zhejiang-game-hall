package com.sigmob.sdk.base.common;

public class c implements com.sigmob.sdk.base.common.f.b {
    private java.lang.String a;
    private final java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> b;
    private final com.sigmob.sdk.base.common.f.b c;
    private com.sigmob.sdk.base.models.LoadAdRequest d;
    private java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> e;

    public c(java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r2, com.sigmob.sdk.base.common.f.b r3, com.sigmob.sdk.base.models.LoadAdRequest r4) {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = "AdListCacheManger"
            r1.a = r0
            r1.b = r2
            r1.c = r3
            r1.d = r4
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r1.e = r2
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r2) {
            r1 = this;
            com.sigmob.sdk.base.common.f$b r0 = r1.c
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    @Override
    public void a(com.sigmob.sdk.base.models.BaseAdUnit r10, java.lang.String r11) {
            r9 = this;
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r9.b
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            java.lang.String r2 = "--------loadEnd--------"
            if (r10 == r0) goto L30
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 == 0) goto L14
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.z
            goto L16
        L14:
            com.sigmob.sdk.base.common.a r0 = com.sigmob.sdk.base.common.a.A
        L16:
            com.sigmob.sdk.base.network.f.a(r10, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r11)
            if (r0 == 0) goto L22
            java.lang.String r0 = "1"
            goto L24
        L22:
            java.lang.String r0 = "0"
        L24:
            r4 = r0
            r6 = 0
            com.sigmob.sdk.base.models.LoadAdRequest r7 = r9.d
            r8 = 0
            java.lang.String r3 = "loadend"
            r5 = r10
            com.sigmob.sdk.base.common.z.a(r3, r4, r5, r6, r7, r8)
            goto L4a
        L30:
            java.lang.String r0 = r9.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r2)
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r4 = r9.e
            int r4 = r4.size()
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            android.util.Log.d(r0, r3)
        L4a:
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r9.e
            boolean r10 = r0.remove(r10)
            java.lang.String r0 = r9.a
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r10)
            r3.append(r2)
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r10 = r9.e
            int r10 = r10.size()
            r3.append(r10)
            java.lang.String r10 = r3.toString()
            android.util.Log.d(r0, r10)
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r10 = r9.e
            int r10 = r10.size()
            if (r10 > 0) goto L84
            com.sigmob.sdk.base.common.f$b r10 = r9.c
            if (r10 == 0) goto L84
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r0 = r9.b
            java.lang.Object r0 = r0.get(r1)
            com.sigmob.sdk.base.models.BaseAdUnit r0 = (com.sigmob.sdk.base.models.BaseAdUnit) r0
            r10.a(r0, r11)
        L84:
            return
    }

    public boolean a(boolean r6) {
            r5 = this;
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r6 = r5.b
            r0 = 0
            r1 = 1
            if (r6 == 0) goto L4c
            r6 = r0
        L7:
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r2 = r5.b
            int r2 = r2.size()
            if (r6 >= r2) goto L30
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r2 = r5.b
            java.lang.Object r2 = r2.get(r6)
            com.sigmob.sdk.base.models.BaseAdUnit r2 = (com.sigmob.sdk.base.models.BaseAdUnit) r2
            int r3 = r2.getPlayMode()
            r4 = 2
            if (r3 == r4) goto L26
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r3 = r5.e
            r3.add(r2)
            r2.setCatchVideo(r1)
        L26:
            com.sigmob.sdk.base.common.f r3 = com.sigmob.sdk.base.common.f.e()
            r3.a(r2, r5)
            int r6 = r6 + 1
            goto L7
        L30:
            java.lang.String r6 = r5.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "--------cache--------"
            r2.append(r3)
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r3 = r5.e
            int r3 = r3.size()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            android.util.Log.d(r6, r2)
        L4c:
            java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r6 = r5.e
            int r6 = r6.size()
            if (r6 <= 0) goto L55
            r0 = r1
        L55:
            return r0
    }
}
