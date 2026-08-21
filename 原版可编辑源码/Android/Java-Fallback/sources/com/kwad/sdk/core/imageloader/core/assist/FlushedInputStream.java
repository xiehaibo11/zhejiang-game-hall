package com.kwad.sdk.core.imageloader.core.assist;

public class FlushedInputStream extends java.io.FilterInputStream {
    public FlushedInputStream(java.io.InputStream r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public long skip(long r8) {
            r7 = this;
            r0 = 0
            r2 = r0
        L3:
            int r4 = (r2 > r8 ? 1 : (r2 == r8 ? 0 : -1))
            if (r4 >= 0) goto L1d
            java.io.InputStream r4 = r7.in
            long r5 = r8 - r2
            long r4 = r4.skip(r5)
            int r6 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r6 != 0) goto L1b
            int r4 = r7.read()
            if (r4 < 0) goto L1d
            r4 = 1
        L1b:
            long r2 = r2 + r4
            goto L3
        L1d:
            return r2
    }
}
