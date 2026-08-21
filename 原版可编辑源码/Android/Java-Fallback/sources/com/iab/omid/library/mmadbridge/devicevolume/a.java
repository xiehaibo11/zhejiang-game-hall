package com.iab.omid.library.mmadbridge.devicevolume;

public class a {
    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public float a(int r2, int r3) {
            r1 = this;
            if (r3 <= 0) goto L10
            if (r2 > 0) goto L5
            goto L10
        L5:
            float r2 = (float) r2
            float r3 = (float) r3
            float r2 = r2 / r3
            r3 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r0 <= 0) goto Lf
            r2 = r3
        Lf:
            return r2
        L10:
            r2 = 0
            return r2
    }
}
