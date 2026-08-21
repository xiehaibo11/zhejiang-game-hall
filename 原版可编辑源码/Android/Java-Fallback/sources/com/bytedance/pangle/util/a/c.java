package com.bytedance.pangle.util.a;

public final class c {
    static long a(java.nio.ByteBuffer r2, int r3) {
            int r2 = r2.getInt(r3)
            long r2 = (long) r2
            r0 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r2 = r2 & r0
            return r2
    }

    static android.util.Pair<java.nio.ByteBuffer, java.lang.Long> a(java.io.RandomAccessFile r8, int r9) {
            if (r9 < 0) goto L5d
            r0 = 65535(0xffff, float:9.1834E-41)
            if (r9 > r0) goto L5d
            long r0 = r8.length()
            r2 = 22
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r5 = 0
            if (r4 >= 0) goto L13
            return r5
        L13:
            long r6 = (long) r9
            long r2 = r0 - r2
            long r2 = java.lang.Math.min(r6, r2)
            int r9 = (int) r2
            int r9 = r9 + 22
            java.nio.ByteBuffer r9 = java.nio.ByteBuffer.allocate(r9)
            java.nio.ByteOrder r2 = java.nio.ByteOrder.LITTLE_ENDIAN
            r9.order(r2)
            int r2 = r9.capacity()
            long r2 = (long) r2
            long r0 = r0 - r2
            r8.seek(r0)
            byte[] r2 = r9.array()
            int r3 = r9.arrayOffset()
            int r4 = r9.capacity()
            r8.readFully(r2, r3, r4)
            int r8 = b(r9)
            r2 = -1
            if (r8 != r2) goto L46
            return r5
        L46:
            r9.position(r8)
            java.nio.ByteBuffer r9 = r9.slice()
            java.nio.ByteOrder r2 = java.nio.ByteOrder.LITTLE_ENDIAN
            r9.order(r2)
            long r2 = (long) r8
            long r0 = r0 + r2
            java.lang.Long r8 = java.lang.Long.valueOf(r0)
            android.util.Pair r8 = android.util.Pair.create(r9, r8)
            return r8
        L5d:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = java.lang.String.valueOf(r9)
            java.lang.String r0 = "maxCommentSize: "
            java.lang.String r9 = r0.concat(r9)
            r8.<init>(r9)
            throw r8
    }

    static void a(java.nio.ByteBuffer r1) {
            java.nio.ByteOrder r1 = r1.order()
            java.nio.ByteOrder r0 = java.nio.ByteOrder.LITTLE_ENDIAN
            if (r1 != r0) goto L9
            return
        L9:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "ByteBuffer byte order must be little endian"
            r1.<init>(r0)
            throw r1
    }

    public static void a(java.util.zip.ZipFile r0) {
            if (r0 != 0) goto L3
            return
        L3:
            r0.close()     // Catch: java.lang.Throwable -> L6
        L6:
            return
    }

    private static int b(java.nio.ByteBuffer r8) {
            a(r8)
            int r0 = r8.capacity()
            r1 = -1
            r2 = 22
            if (r0 >= r2) goto Ld
            return r1
        Ld:
            int r0 = r0 - r2
            r2 = 65535(0xffff, float:9.1834E-41)
            int r3 = java.lang.Math.min(r0, r2)
            r4 = 0
        L16:
            if (r4 > r3) goto L30
            int r5 = r0 - r4
            int r6 = r8.getInt(r5)
            r7 = 101010256(0x6054b50, float:2.506985E-35)
            if (r6 != r7) goto L2d
            int r6 = r5 + 20
            short r6 = r8.getShort(r6)
            r6 = r6 & r2
            if (r6 != r4) goto L2d
            return r5
        L2d:
            int r4 = r4 + 1
            goto L16
        L30:
            return r1
    }
}
