package com.xiaomi.push;

public class fp {
    public static final byte[] a = null;
    private byte a;
    private int a;
    private short a;
    private byte[] b;

    public class a {
        public static final com.xiaomi.push.fp.c a = null;
        public static final com.xiaomi.push.fp.d a = null;

        static {
                com.xiaomi.push.fp$c r0 = new com.xiaomi.push.fp$c
                r0.<init>()
                com.xiaomi.push.fp.a.a = r0
                com.xiaomi.push.fp$d r0 = new com.xiaomi.push.fp$d
                r0.<init>()
                com.xiaomi.push.fp.a.a = r0
                return
        }

        public static byte[] a(byte[] r1) {
                com.xiaomi.push.fp$d r0 = com.xiaomi.push.fp.a.a
                byte[] r1 = a(r1, r0)
                return r1
        }

        public static byte[] a(byte[] r2, com.xiaomi.push.fp.b r3) {
                boolean r0 = com.xiaomi.push.fp.a(r2)
                if (r0 == 0) goto L2c
                com.xiaomi.push.fp r2 = com.xiaomi.push.fp.a(r2)
                byte r0 = com.xiaomi.push.fp.a(r2)
                if (r0 == 0) goto L28
                byte r0 = com.xiaomi.push.fp.a(r2)
                byte r1 = r3.a()
                if (r0 == r1) goto L1b
                goto L28
            L1b:
                byte[] r0 = com.xiaomi.push.fp.a(r2)
                int r2 = com.xiaomi.push.fp.a(r2)
                byte[] r2 = r3.a(r0, r2)
                return r2
            L28:
                byte[] r2 = com.xiaomi.push.fp.a(r2)
            L2c:
                return r2
        }
    }

    public interface b {
        byte a();

        byte[] a(byte[] r1, int r2);
    }

    public final class c {
        public c() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public final class d implements com.xiaomi.push.fp.b {
        public d() {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public byte a() {
                r1 = this;
                r0 = 2
                return r0
        }

        @Override
        public byte[] a(byte[] r4, int r5) {
                r3 = this;
                r0 = 0
                java.util.zip.GZIPInputStream r1 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L20
                java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L20
                r2.<init>(r4)     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L20
                r1.<init>(r2, r5)     // Catch: java.lang.Throwable -> L19 java.io.IOException -> L20
                byte[] r5 = new byte[r5]     // Catch: java.lang.Throwable -> L14 java.io.IOException -> L17
                r1.read(r5)     // Catch: java.lang.Throwable -> L14 java.io.IOException -> L17
                r1.close()     // Catch: java.io.IOException -> L13
            L13:
                return r5
            L14:
                r4 = move-exception
                r0 = r1
                goto L1a
            L17:
                r0 = r1
                goto L20
            L19:
                r4 = move-exception
            L1a:
                if (r0 == 0) goto L1f
                r0.close()     // Catch: java.io.IOException -> L1f
            L1f:
                throw r4
            L20:
                if (r0 == 0) goto L25
                r0.close()     // Catch: java.io.IOException -> L25
            L25:
                return r4
        }
    }

    static {
            r0 = 4
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [80, 85, 83, 72} // fill-array
            com.xiaomi.push.fp.a = r0
            return
    }

    protected fp(byte r2, int r3, byte[] r4) {
            r1 = this;
            r0 = 1
            r1.<init>(r0, r2, r3, r4)
            return
    }

    protected fp(short r2, byte r3, int r4, byte[] r5) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.a = r0
            r1.a = r2
            r1.a = r3
            r1.a = r4
            r1.b = r5
            return
    }

    static byte a(com.xiaomi.push.fp r0) {
            byte r0 = r0.a
            return r0
    }

    static int a(com.xiaomi.push.fp r0) {
            int r0 = r0.a
            return r0
    }

    public static com.xiaomi.push.fp a(byte r1, int r2, byte[] r3) {
            com.xiaomi.push.fp r0 = new com.xiaomi.push.fp
            r0.<init>(r1, r2, r3)
            return r0
    }

    public static com.xiaomi.push.fp a(short r1, byte r2, int r3, byte[] r4) {
            com.xiaomi.push.fp r0 = new com.xiaomi.push.fp
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    public static com.xiaomi.push.fp a(byte[] r4) {
            boolean r0 = a(r4)
            if (r0 == 0) goto L2d
            java.nio.ByteBuffer r4 = java.nio.ByteBuffer.wrap(r4)
            java.nio.ByteOrder r0 = java.nio.ByteOrder.BIG_ENDIAN
            java.nio.ByteBuffer r4 = r4.order(r0)
            r4.getInt()
            short r0 = r4.getShort()
            byte r1 = r4.get()
            int r2 = r4.getInt()
            int r3 = r4.getInt()
            byte[] r3 = new byte[r3]
            r4.get(r3)
            com.xiaomi.push.fp r4 = a(r0, r1, r2, r3)
            return r4
        L2d:
            r0 = 0
            int r1 = r4.length
            com.xiaomi.push.fp r4 = a(r0, r1, r4)
            return r4
    }

    public static boolean a(byte[] r2) {
            byte[] r0 = com.xiaomi.push.fp.a
            int r1 = r0.length
            boolean r2 = a(r0, r2, r1)
            return r2
    }

    public static boolean a(byte[] r4, byte[] r5, int r6) {
            int r0 = r4.length
            r1 = 0
            if (r0 < r6) goto L17
            int r0 = r5.length
            if (r0 >= r6) goto L8
            goto L17
        L8:
            r0 = r1
        L9:
            if (r0 >= r6) goto L15
            r2 = r4[r0]
            r3 = r5[r0]
            if (r2 == r3) goto L12
            return r1
        L12:
            int r0 = r0 + 1
            goto L9
        L15:
            r4 = 1
            return r4
        L17:
            return r1
    }

    static byte[] a(com.xiaomi.push.fp r0) {
            byte[] r0 = r0.b
            return r0
    }
}
