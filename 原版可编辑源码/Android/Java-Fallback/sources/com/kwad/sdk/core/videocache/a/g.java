package com.kwad.sdk.core.videocache.a;

public final class g extends com.kwad.sdk.core.videocache.a.e {
    private final long maxSize;

    public g(long r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 <= 0) goto Lc
            r2.maxSize = r3
            return
        Lc:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "Max size must be positive number!"
            r3.<init>(r4)
            throw r3
    }

    @Override
    protected final boolean aj(long r3) {
            r2 = this;
            long r0 = r2.maxSize
            int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r3 > 0) goto L8
            r3 = 1
            return r3
        L8:
            r3 = 0
            return r3
    }
}
