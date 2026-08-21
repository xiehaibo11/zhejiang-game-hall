package com.sigmob.sdk.videocache.file;

public class g extends com.sigmob.sdk.videocache.file.e {
    private final int a;

    public g(int r2) {
            r1 = this;
            r1.<init>()
            if (r2 <= 0) goto L8
            r1.a = r2
            return
        L8:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Max count must be positive number!"
            r2.<init>(r0)
            throw r2
    }

    @Override
    protected boolean a(java.io.File r1, long r2, int r4) {
            r0 = this;
            int r1 = r0.a
            if (r4 > r1) goto L6
            r1 = 1
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }
}
