package com.sigmob.sdk.videocache.file;

public class h extends com.sigmob.sdk.videocache.file.e {
    private final long a;

    public h(long r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto Lc
            r2.a = r3
            return
        Lc:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Max size must be positive number!"
            r3.<init>(r4)
            throw r3
    }

    @Override
    protected boolean a(java.io.File r3, long r4, int r6) {
            r2 = this;
            long r0 = r2.a
            int r3 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r3 > 0) goto L8
            r3 = 1
            goto L9
        L8:
            r3 = 0
        L9:
            return r3
    }
}
