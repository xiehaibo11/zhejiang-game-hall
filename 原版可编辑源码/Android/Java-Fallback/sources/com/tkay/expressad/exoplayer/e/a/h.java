package com.tkay.expressad.exoplayer.e.a;

public final class h {
    private static final java.lang.String a = "PsshAtomUtil";

    private static class a {
        private final java.util.UUID a;
        private final int b;
        private final byte[] c;

        public a(java.util.UUID r1, int r2, byte[] r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        static java.util.UUID a(com.tkay.expressad.exoplayer.e.a.h.a r0) {
                java.util.UUID r0 = r0.a
                return r0
        }

        static int b(com.tkay.expressad.exoplayer.e.a.h.a r0) {
                int r0 = r0.b
                return r0
        }

        static byte[] c(com.tkay.expressad.exoplayer.e.a.h.a r0) {
                byte[] r0 = r0.c
                return r0
        }
    }

    private h() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.util.UUID a(byte[] r0) {
            com.tkay.expressad.exoplayer.e.a.h$a r0 = c(r0)
            if (r0 != 0) goto L8
            r0 = 0
            return r0
        L8:
            java.util.UUID r0 = com.tkay.expressad.exoplayer.e.a.h.a.a(r0)
            return r0
    }

    private static byte[] a(java.util.UUID r6, byte[] r7) {
            r0 = 0
            if (r7 == 0) goto L5
            int r1 = r7.length
            goto L6
        L5:
            r1 = r0
        L6:
            int r2 = r1 + 32
            java.nio.ByteBuffer r3 = java.nio.ByteBuffer.allocate(r2)
            r3.putInt(r2)
            int r2 = com.tkay.expressad.exoplayer.e.a.a.Z
            r3.putInt(r2)
            r3.putInt(r0)
            long r4 = r6.getMostSignificantBits()
            r3.putLong(r4)
            long r4 = r6.getLeastSignificantBits()
            r3.putLong(r4)
            if (r1 == 0) goto L2e
            int r6 = r7.length
            r3.putInt(r6)
            r3.put(r7)
        L2e:
            byte[] r6 = r3.array()
            return r6
    }

    private static byte[] a(java.util.UUID r7, java.util.UUID[] r8, byte[] r9) {
            r0 = 0
            if (r8 == 0) goto L5
            r1 = 1
            goto L6
        L5:
            r1 = r0
        L6:
            if (r9 == 0) goto La
            int r2 = r9.length
            goto Lb
        La:
            r2 = r0
        Lb:
            int r3 = r2 + 32
            if (r1 == 0) goto L15
            int r4 = r8.length
            int r4 = r4 * 16
            int r4 = r4 + 4
            int r3 = r3 + r4
        L15:
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.allocate(r3)
            r4.putInt(r3)
            int r3 = com.tkay.expressad.exoplayer.e.a.a.Z
            r4.putInt(r3)
            if (r1 == 0) goto L26
            r3 = 16777216(0x1000000, float:2.3509887E-38)
            goto L27
        L26:
            r3 = r0
        L27:
            r4.putInt(r3)
            long r5 = r7.getMostSignificantBits()
            r4.putLong(r5)
            long r5 = r7.getLeastSignificantBits()
            r4.putLong(r5)
            if (r1 == 0) goto L54
            int r7 = r8.length
            r4.putInt(r7)
            int r7 = r8.length
        L3f:
            if (r0 >= r7) goto L54
            r1 = r8[r0]
            long r5 = r1.getMostSignificantBits()
            r4.putLong(r5)
            long r5 = r1.getLeastSignificantBits()
            r4.putLong(r5)
            int r0 = r0 + 1
            goto L3f
        L54:
            if (r2 == 0) goto L5d
            int r7 = r9.length
            r4.putInt(r7)
            r4.put(r9)
        L5d:
            byte[] r7 = r4.array()
            return r7
    }

    public static byte[] a(byte[] r3, java.util.UUID r4) {
            com.tkay.expressad.exoplayer.e.a.h$a r3 = c(r3)
            r0 = 0
            if (r3 != 0) goto L8
            return r0
        L8:
            if (r4 == 0) goto L39
            java.util.UUID r1 = com.tkay.expressad.exoplayer.e.a.h.a.a(r3)
            boolean r1 = r4.equals(r1)
            if (r1 != 0) goto L39
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "UUID mismatch. Expected: "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = ", got: "
            r1.append(r4)
            java.util.UUID r3 = com.tkay.expressad.exoplayer.e.a.h.a.a(r3)
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r4 = "PsshAtomUtil"
            android.util.Log.w(r4, r3)
            return r0
        L39:
            byte[] r3 = com.tkay.expressad.exoplayer.e.a.h.a.c(r3)
            return r3
    }

    public static int b(byte[] r0) {
            com.tkay.expressad.exoplayer.e.a.h$a r0 = c(r0)
            if (r0 != 0) goto L8
            r0 = -1
            return r0
        L8:
            int r0 = com.tkay.expressad.exoplayer.e.a.h.a.b(r0)
            return r0
    }

    private static com.tkay.expressad.exoplayer.e.a.h.a c(byte[] r9) {
            com.tkay.expressad.exoplayer.k.s r0 = new com.tkay.expressad.exoplayer.k.s
            r0.<init>(r9)
            int r9 = r0.b()
            r1 = 0
            r2 = 32
            if (r9 >= r2) goto Lf
            return r1
        Lf:
            r9 = 0
            r0.c(r9)
            int r2 = r0.i()
            int r3 = r0.a()
            int r3 = r3 + 4
            if (r2 == r3) goto L20
            return r1
        L20:
            int r2 = r0.i()
            int r3 = com.tkay.expressad.exoplayer.e.a.a.Z
            if (r2 == r3) goto L29
            return r1
        L29:
            int r2 = r0.i()
            int r2 = com.tkay.expressad.exoplayer.e.a.a.a(r2)
            r3 = 1
            if (r2 <= r3) goto L44
            java.lang.String r9 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "Unsupported pssh version: "
            java.lang.String r9 = r0.concat(r9)
            java.lang.String r0 = "PsshAtomUtil"
            android.util.Log.w(r0, r9)
            return r1
        L44:
            java.util.UUID r4 = new java.util.UUID
            long r5 = r0.j()
            long r7 = r0.j()
            r4.<init>(r5, r7)
            if (r2 != r3) goto L5c
            int r3 = r0.m()
            int r3 = r3 * 16
            r0.d(r3)
        L5c:
            int r3 = r0.m()
            int r5 = r0.a()
            if (r3 == r5) goto L67
            return r1
        L67:
            byte[] r1 = new byte[r3]
            r0.a(r1, r9, r3)
            com.tkay.expressad.exoplayer.e.a.h$a r9 = new com.tkay.expressad.exoplayer.e.a.h$a
            r9.<init>(r4, r2, r1)
            return r9
    }
}
