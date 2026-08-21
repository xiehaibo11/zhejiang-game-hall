package com.tkay.expressad.exoplayer.f;

public final class e {
    private e() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a(android.media.MediaFormat r2, com.tkay.expressad.exoplayer.l.b r3) {
            if (r3 == 0) goto L24
            int r0 = r3.c
            java.lang.String r1 = "color-transfer"
            a(r2, r1, r0)
            int r0 = r3.a
            java.lang.String r1 = "color-standard"
            a(r2, r1, r0)
            int r0 = r3.b
            java.lang.String r1 = "color-range"
            a(r2, r1, r0)
            byte[] r3 = r3.d
            if (r3 == 0) goto L24
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.wrap(r3)
            java.lang.String r0 = "hdr-static-info"
            r2.setByteBuffer(r0, r3)
        L24:
            return
    }

    private static void a(android.media.MediaFormat r1, java.lang.String r2, float r3) {
            r0 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 == 0) goto L9
            r1.setFloat(r2, r3)
        L9:
            return
    }

    public static void a(android.media.MediaFormat r1, java.lang.String r2, int r3) {
            r0 = -1
            if (r3 == r0) goto L6
            r1.setInteger(r2, r3)
        L6:
            return
    }

    private static void a(android.media.MediaFormat r0, java.lang.String r1, java.lang.String r2) {
            r0.setString(r1, r2)
            return
    }

    private static void a(android.media.MediaFormat r0, java.lang.String r1, byte[] r2) {
            if (r2 == 0) goto L9
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.wrap(r2)
            r0.setByteBuffer(r1, r2)
        L9:
            return
    }

    public static void a(android.media.MediaFormat r3, java.util.List<byte[]> r4) {
            r0 = 0
        L1:
            int r1 = r4.size()
            if (r0 >= r1) goto L21
            java.lang.String r1 = java.lang.String.valueOf(r0)
            java.lang.String r2 = "csd-"
            java.lang.String r1 = r2.concat(r1)
            java.lang.Object r2 = r4.get(r0)
            byte[] r2 = (byte[]) r2
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.wrap(r2)
            r3.setByteBuffer(r1, r2)
            int r0 = r0 + 1
            goto L1
        L21:
            return
    }
}
