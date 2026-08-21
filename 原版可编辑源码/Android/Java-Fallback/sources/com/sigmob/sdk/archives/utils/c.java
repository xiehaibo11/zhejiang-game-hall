package com.sigmob.sdk.archives.utils;

public final class c {
    private c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static long a(java.io.InputStream r1, java.io.OutputStream r2) throws java.io.IOException {
            r0 = 8024(0x1f58, float:1.1244E-41)
            long r1 = a(r1, r2, r0)
            return r1
    }

    public static long a(java.io.InputStream r4, java.io.OutputStream r5, int r6) throws java.io.IOException {
            byte[] r6 = new byte[r6]
            r0 = 0
        L4:
            r2 = -1
            int r3 = r4.read(r6)
            if (r2 == r3) goto L12
            r2 = 0
            r5.write(r6, r2, r3)
            long r2 = (long) r3
            long r0 = r0 + r2
            goto L4
        L12:
            return r0
    }
}
