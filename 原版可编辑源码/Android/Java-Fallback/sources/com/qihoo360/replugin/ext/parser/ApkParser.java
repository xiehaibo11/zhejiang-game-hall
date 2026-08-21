package com.qihoo360.replugin.ext.parser;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ApkParser extends com.qihoo360.replugin.ext.parser.AbstractApkParser implements java.io.Closeable {
    private final java.util.zip.ZipFile zf;

    public ApkParser(java.io.File r2) throws java.io.IOException {
            r1 = this;
            r1.<init>()
            java.util.zip.ZipFile r0 = new java.util.zip.ZipFile
            r0.<init>(r2)
            r1.zf = r0
            return
    }

    public ApkParser(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            java.io.File r0 = new java.io.File
            r0.<init>(r2)
            r1.<init>(r0)
            return
    }

    private static byte[] toByteArray(java.io.InputStream r4) throws java.io.IOException {
            r0 = 8192(0x2000, float:1.148E-41)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L2d
            r1 = 0
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L26
            r2.<init>()     // Catch: java.lang.Throwable -> L26
        La:
            int r1 = r4.read(r0)     // Catch: java.lang.Throwable -> L23
            r3 = -1
            if (r1 == r3) goto L16
            r3 = 0
            r2.write(r0, r3, r1)     // Catch: java.lang.Throwable -> L23
            goto La
        L16:
            byte[] r0 = r2.toByteArray()     // Catch: java.lang.Throwable -> L23
            r2.close()     // Catch: java.lang.Throwable -> L2d
            if (r4 == 0) goto L22
            r4.close()
        L22:
            return r0
        L23:
            r0 = move-exception
            r1 = r2
            goto L27
        L26:
            r0 = move-exception
        L27:
            if (r1 == 0) goto L2c
            r1.close()     // Catch: java.lang.Throwable -> L2d
        L2c:
            throw r0     // Catch: java.lang.Throwable -> L2d
        L2d:
            r0 = move-exception
            if (r4 == 0) goto L33
            r4.close()
        L33:
            throw r0
    }

    @Override
    public void close() throws java.io.IOException {
            r1 = this;
            super.close()
            java.util.zip.ZipFile r0 = r1.zf
            r0.close()
            return
    }

    @Override
    public byte[] getFileData(java.lang.String r2) throws java.io.IOException {
            r1 = this;
            java.util.zip.ZipFile r0 = r1.zf
            java.util.zip.ZipEntry r2 = r0.getEntry(r2)
            if (r2 != 0) goto La
            r2 = 0
            return r2
        La:
            java.util.zip.ZipFile r0 = r1.zf
            java.io.InputStream r2 = r0.getInputStream(r2)
            byte[] r2 = toByteArray(r2)
            return r2
    }
}
