package com.kwad.sdk.utils;

public final class az {
    private final int mHeight;
    private final int mWidth;

    public az(int r1, int r2) {
            r0 = this;
            r0.<init>()
            r0.mWidth = r1
            r0.mHeight = r2
            return
    }

    public final float Ju() {
            r1 = this;
            int r0 = r1.mWidth
            float r0 = (float) r0
            return r0
    }

    public final float Jv() {
            r1 = this;
            int r0 = r1.mHeight
            float r0 = (float) r0
            return r0
    }

    public final boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            r1 = 1
            if (r4 != r5) goto L8
            return r1
        L8:
            boolean r2 = r5 instanceof com.kwad.sdk.utils.az
            if (r2 == 0) goto L1b
            com.kwad.sdk.utils.az r5 = (com.kwad.sdk.utils.az) r5
            int r2 = r4.mWidth
            int r3 = r5.mWidth
            if (r2 != r3) goto L1b
            int r2 = r4.mHeight
            int r5 = r5.mHeight
            if (r2 != r5) goto L1b
            return r1
        L1b:
            return r0
    }

    public final int getHeight() {
            r1 = this;
            int r0 = r1.mHeight
            return r0
    }

    public final int hashCode() {
            r3 = this;
            int r0 = r3.mHeight
            int r1 = r3.mWidth
            int r2 = r1 << 16
            int r1 = r1 >>> 16
            r1 = r1 | r2
            r0 = r0 ^ r1
            return r0
    }

    public final java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r2.mWidth
            r0.append(r1)
            java.lang.String r1 = "x"
            r0.append(r1)
            int r1 = r2.mHeight
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
