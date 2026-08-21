package com.sigmob.sdk.videoAd;

public class f extends com.sigmob.sdk.base.common.g implements java.io.Serializable, java.lang.Comparable<com.sigmob.sdk.videoAd.f> {
    private static final long serialVersionUID = 0;
    private final float a;

    public f(com.sigmob.sdk.base.common.a r2, float r3) {
            r1 = this;
            com.sigmob.sdk.base.common.g$a r0 = com.sigmob.sdk.base.common.g.a.b
            r1.<init>(r0, r2, r3)
            return
    }

    public f(com.sigmob.sdk.base.common.g.a r7, com.sigmob.sdk.base.common.a r8, float r9) {
            r6 = this;
            r2 = 0
            r3 = 0
            r5 = 0
            r0 = r6
            r1 = r7
            r4 = r8
            r0.<init>(r1, r2, r3, r4, r5)
            r7 = 0
            int r7 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r7 < 0) goto L10
            r7 = 1
            goto L11
        L10:
            r7 = 0
        L11:
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkArgument(r7)
            r6.a = r9
            return
    }

    f(com.sigmob.sdk.base.common.g.a r2, java.lang.String r3, float r4, java.lang.String r5) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r5, r0)
            r2 = 0
            int r2 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            if (r2 < 0) goto Lb
            r2 = 1
            goto Lc
        Lb:
            r2 = 0
        Lc:
            com.czhj.sdk.common.utils.Preconditions.NoThrow.checkArgument(r2)
            r1.a = r4
            return
    }

    private float q() {
            r1 = this;
            float r0 = r1.a
            return r0
    }

    public int a(com.sigmob.sdk.videoAd.f r5) {
            r4 = this;
            float r5 = r5.q()
            float r0 = r4.q()
            double r0 = (double) r0
            double r2 = (double) r5
            int r5 = java.lang.Double.compare(r0, r2)
            return r5
    }

    @Override
    public int compareTo(com.sigmob.sdk.videoAd.f r1) {
            r0 = this;
            com.sigmob.sdk.videoAd.f r1 = (com.sigmob.sdk.videoAd.f) r1
            int r1 = r0.a(r1)
            return r1
    }

    public java.lang.String toString() {
            r4 = this;
            java.util.Locale r0 = java.util.Locale.US
            r1 = 2
            java.lang.Object[] r1 = new java.lang.Object[r1]
            float r2 = r4.a
            java.lang.Float r2 = java.lang.Float.valueOf(r2)
            r3 = 0
            r1[r3] = r2
            java.lang.String r2 = r4.k()
            r3 = 1
            r1[r3] = r2
            java.lang.String r2 = "%2f: %s"
            java.lang.String r0 = java.lang.String.format(r0, r2, r1)
            return r0
    }
}
