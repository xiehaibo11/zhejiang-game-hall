package com.qihoo360.replugin.component.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public class ApkCommentReader {
    private static final byte[] MAGIC = null;

    static {
            r0 = 8
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [40, 77, 83, 45, 80, 76, 71, 41} // fill-array
            com.qihoo360.replugin.component.utils.ApkCommentReader.MAGIC = r0
            return
    }

    public ApkCommentReader() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String decompress(byte[] r5) {
            java.lang.String r0 = ""
            if (r5 != 0) goto L5
            return r0
        L5:
            r1 = 0
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L39 java.io.IOException -> L3b
            r2.<init>()     // Catch: java.lang.Throwable -> L39 java.io.IOException -> L3b
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L36
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L36
            java.util.zip.GZIPInputStream r5 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L36
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L36
            r1 = 256(0x100, float:3.59E-43)
            byte[] r1 = new byte[r1]     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L36
        L19:
            int r3 = r5.read(r1)     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L36
            if (r3 < 0) goto L24
            r4 = 0
            r2.write(r1, r4, r3)     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L36
            goto L19
        L24:
            java.lang.String r5 = "utf-8"
            java.lang.String r5 = r2.toString(r5)     // Catch: java.lang.Throwable -> L33 java.io.IOException -> L36
            r2.close()     // Catch: java.io.IOException -> L2e
            goto L32
        L2e:
            r0 = move-exception
            r0.printStackTrace()
        L32:
            return r5
        L33:
            r5 = move-exception
            r1 = r2
            goto L4a
        L36:
            r5 = move-exception
            r1 = r2
            goto L3c
        L39:
            r5 = move-exception
            goto L4a
        L3b:
            r5 = move-exception
        L3c:
            r5.printStackTrace()     // Catch: java.lang.Throwable -> L39
            if (r1 == 0) goto L49
            r1.close()     // Catch: java.io.IOException -> L45
            goto L49
        L45:
            r5 = move-exception
            r5.printStackTrace()
        L49:
            return r0
        L4a:
            if (r1 == 0) goto L54
            r1.close()     // Catch: java.io.IOException -> L50
            goto L54
        L50:
            r0 = move-exception
            r0.printStackTrace()
        L54:
            throw r5
    }

    private static byte[] getComment(java.io.RandomAccessFile r6) {
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            long r1 = r6.length()     // Catch: java.io.IOException -> L49
            byte[] r3 = com.qihoo360.replugin.component.utils.ApkCommentReader.MAGIC     // Catch: java.io.IOException -> L49
            int r3 = r3.length     // Catch: java.io.IOException -> L49
            long r3 = (long) r3     // Catch: java.io.IOException -> L49
            long r1 = r1 - r3
            r6.seek(r1)     // Catch: java.io.IOException -> L49
            byte[] r3 = com.qihoo360.replugin.component.utils.ApkCommentReader.MAGIC     // Catch: java.io.IOException -> L49
            int r3 = r3.length     // Catch: java.io.IOException -> L49
            byte[] r3 = new byte[r3]     // Catch: java.io.IOException -> L49
            r6.readFully(r3)     // Catch: java.io.IOException -> L49
            byte[] r4 = com.qihoo360.replugin.component.utils.ApkCommentReader.MAGIC     // Catch: java.io.IOException -> L49
            boolean r3 = java.util.Arrays.equals(r3, r4)     // Catch: java.io.IOException -> L49
            if (r3 != 0) goto L21
            return r0
        L21:
            r3 = 2
            long r1 = r1 - r3
            r6.seek(r1)     // Catch: java.io.IOException -> L49
            r3 = 2
            byte[] r3 = new byte[r3]     // Catch: java.io.IOException -> L49
            r6.readFully(r3)     // Catch: java.io.IOException -> L49
            r4 = 1
            r4 = r3[r4]     // Catch: java.io.IOException -> L49
            int r4 = r4 << 8
            r5 = 65280(0xff00, float:9.1477E-41)
            r4 = r4 & r5
            r5 = 0
            r3 = r3[r5]     // Catch: java.io.IOException -> L49
            r3 = r3 & 255(0xff, float:3.57E-43)
            r3 = r3 | r4
            if (r3 <= 0) goto L4d
            long r4 = (long) r3     // Catch: java.io.IOException -> L49
            long r1 = r1 - r4
            r6.seek(r1)     // Catch: java.io.IOException -> L49
            byte[] r1 = new byte[r3]     // Catch: java.io.IOException -> L49
            r6.readFully(r1)     // Catch: java.io.IOException -> L49
            return r1
        L49:
            r6 = move-exception
            r6.printStackTrace()
        L4d:
            return r0
    }

    public static java.lang.String readComment(java.lang.String r3) {
            r0 = 0
            java.io.RandomAccessFile r1 = new java.io.RandomAccessFile     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
            java.lang.String r2 = "r"
            r1.<init>(r3, r2)     // Catch: java.lang.Throwable -> L1f java.io.IOException -> L21
            byte[] r3 = getComment(r1)     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1c
            java.lang.String r3 = decompress(r3)     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L1c
            r1.close()     // Catch: java.io.IOException -> L14
            goto L18
        L14:
            r0 = move-exception
            r0.printStackTrace()
        L18:
            return r3
        L19:
            r3 = move-exception
            r0 = r1
            goto L32
        L1c:
            r3 = move-exception
            r0 = r1
            goto L22
        L1f:
            r3 = move-exception
            goto L32
        L21:
            r3 = move-exception
        L22:
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L1f
            if (r0 == 0) goto L2f
            r0.close()     // Catch: java.io.IOException -> L2b
            goto L2f
        L2b:
            r3 = move-exception
            r3.printStackTrace()
        L2f:
            java.lang.String r3 = ""
            return r3
        L32:
            if (r0 == 0) goto L3c
            r0.close()     // Catch: java.io.IOException -> L38
            goto L3c
        L38:
            r0 = move-exception
            r0.printStackTrace()
        L3c:
            throw r3
    }
}
