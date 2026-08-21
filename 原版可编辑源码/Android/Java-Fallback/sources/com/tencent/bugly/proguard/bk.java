package com.tencent.bugly.proguard;

public final class bk implements com.tencent.bugly.proguard.bi {
    @Override
    public final byte[] a(byte[] r6) throws java.lang.Exception {
            r5 = this;
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.util.zip.ZipOutputStream r1 = new java.util.zip.ZipOutputStream
            r1.<init>(r0)
            java.util.zip.ZipEntry r2 = new java.util.zip.ZipEntry
            java.lang.String r3 = "zip"
            r2.<init>(r3)
            int r3 = r6.length
            long r3 = (long) r3
            r2.setSize(r3)
            r1.putNextEntry(r2)
            r1.write(r6)
            r1.closeEntry()
            r1.close()
            byte[] r6 = r0.toByteArray()
            r0.close()
            return r6
    }

    @Override
    public final byte[] b(byte[] r8) throws java.lang.Exception {
            r7 = this;
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            r0.<init>(r8)
            java.util.zip.ZipInputStream r8 = new java.util.zip.ZipInputStream
            r8.<init>(r0)
            r1 = 0
        Lb:
            java.util.zip.ZipEntry r2 = r8.getNextEntry()
            if (r2 == 0) goto L31
            r1 = 1024(0x400, float:1.435E-42)
            byte[] r2 = new byte[r1]
            java.io.ByteArrayOutputStream r3 = new java.io.ByteArrayOutputStream
            r3.<init>()
        L1a:
            r4 = 0
            int r5 = r8.read(r2, r4, r1)
            r6 = -1
            if (r5 == r6) goto L26
            r3.write(r2, r4, r5)
            goto L1a
        L26:
            byte[] r1 = r3.toByteArray()
            r3.flush()
            r3.close()
            goto Lb
        L31:
            r8.close()
            r0.close()
            return r1
    }
}
