package com.bytedance.pangle.util;

public final class h {


    public static void a(java.lang.String r8, java.lang.String r9) {
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L6f
            boolean r0 = android.text.TextUtils.isEmpty(r9)
            if (r0 == 0) goto Ld
            goto L6f
        Ld:
            java.io.File r0 = new java.io.File
            r0.<init>(r8)
            java.io.File r1 = new java.io.File
            r1.<init>(r9)
            boolean r2 = r0.exists()
            if (r2 == 0) goto L6f
            boolean r2 = r0.isFile()
            if (r2 == 0) goto L6f
            boolean r0 = r0.canRead()
            if (r0 != 0) goto L2a
            goto L6f
        L2a:
            java.io.File r0 = r1.getParentFile()
            if (r0 == 0) goto L41
            java.io.File r0 = r1.getParentFile()
            boolean r0 = r0.exists()
            if (r0 != 0) goto L41
            java.io.File r0 = r1.getParentFile()
            r0.mkdirs()
        L41:
            java.io.FileInputStream r0 = new java.io.FileInputStream
            r0.<init>(r8)
            java.io.FileOutputStream r8 = new java.io.FileOutputStream
            r8.<init>(r9)
            java.nio.channels.FileChannel r9 = r0.getChannel()
            java.nio.channels.FileChannel r7 = r8.getChannel()
            java.nio.channels.FileChannel$MapMode r2 = java.nio.channels.FileChannel.MapMode.READ_ONLY
            r3 = 0
            long r5 = r9.size()
            r1 = r9
            java.nio.MappedByteBuffer r1 = r1.map(r2, r3, r5)
            r7.write(r1)
            r9.close()
            r7.close()
            r0.close()
            r8.close()
        L6f:
            return
    }

    public static void a(java.nio.channels.ReadableByteChannel r3, java.nio.channels.WritableByteChannel r4) {
            r0 = 4096(0x1000, float:5.74E-42)
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocateDirect(r0)
        L6:
            int r1 = r3.read(r0)
            r2 = -1
            if (r1 == r2) goto L1e
            r0.flip()
        L10:
            boolean r1 = r0.hasRemaining()
            if (r1 == 0) goto L1a
            r4.write(r0)
            goto L10
        L1a:
            r0.clear()
            goto L6
        L1e:
            return
    }

    public static boolean a(java.lang.String r1, java.io.File r2, java.lang.StringBuilder r3) {
            java.io.FileOutputStream r0 = new java.io.FileOutputStream     // Catch: java.io.IOException -> L1c
            r0.<init>(r2)     // Catch: java.io.IOException -> L1c
            java.nio.channels.FileChannel r2 = r0.getChannel()     // Catch: java.io.IOException -> L1c
            byte[] r1 = r1.getBytes()     // Catch: java.io.IOException -> L1c
            java.nio.ByteBuffer r1 = java.nio.ByteBuffer.wrap(r1)     // Catch: java.io.IOException -> L1c
            r2.write(r1)     // Catch: java.io.IOException -> L1c
            r2.close()     // Catch: java.io.IOException -> L1c
            r0.close()     // Catch: java.io.IOException -> L1c
            r1 = 1
            return r1
        L1c:
            r1 = move-exception
            java.lang.String r1 = r1.getMessage()
            r3.append(r1)
            r1 = 0
            return r1
    }
}
