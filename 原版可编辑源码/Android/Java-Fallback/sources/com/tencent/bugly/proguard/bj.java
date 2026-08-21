package com.tencent.bugly.proguard;

public final class bj implements com.tencent.bugly.proguard.bi {
    public bj() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final byte[] a(byte[] r3) throws java.lang.Exception {
            r2 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.util.zip.GZIPOutputStream r1 = new java.util.zip.GZIPOutputStream
            r1.<init>(r0)
            r1.write(r3)
            r1.finish()
            r1.close()
            byte[] r3 = r0.toByteArray()
            r0.close()
            return r3
    }

    @Override
    public final byte[] b(byte[] r8) throws java.lang.Exception {
            r7 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r8)
            java.util.zip.GZIPInputStream r8 = new java.util.zip.GZIPInputStream
            r8.<init>(r0)
            r1 = 1024(0x400, float:1.435E-42)
            byte[] r2 = new byte[r1]
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream
            r3.<init>()
        L13:
            r4 = 0
            int r5 = r8.read(r2, r4, r1)
            r6 = -1
            if (r5 == r6) goto L1f
            r3.write(r2, r4, r5)
            goto L13
        L1f:
            byte[] r1 = r3.toByteArray()
            r3.flush()
            r3.close()
            r8.close()
            r0.close()
            return r1
    }
}
