package org.cocos2dx.okio;

final class Util {
    public static final java.nio.charset.Charset UTF_8 = null;

    static {
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            org.cocos2dx.okio.Util.UTF_8 = r0
            return
    }

    private Util() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean arrayRangeEquals(byte[] r4, int r5, byte[] r6, int r7, int r8) {
            r0 = 0
            r1 = 0
        L2:
            if (r1 >= r8) goto L12
            int r2 = r1 + r5
            r2 = r4[r2]
            int r3 = r1 + r7
            r3 = r6[r3]
            if (r2 == r3) goto Lf
            return r0
        Lf:
            int r1 = r1 + 1
            goto L2
        L12:
            r4 = 1
            return r4
    }

    public static void checkOffsetAndCount(long r5, long r7, long r9) {
            long r0 = r7 | r9
            r2 = 0
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 < 0) goto L13
            int r0 = (r7 > r5 ? 1 : (r7 == r5 ? 0 : -1))
            if (r0 > 0) goto L13
            long r0 = r5 - r7
            int r2 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            if (r2 < 0) goto L13
            return
        L13:
            java.lang.ArrayIndexOutOfBoundsException r0 = new java.lang.ArrayIndexOutOfBoundsException
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Long r5 = java.lang.Long.valueOf(r5)
            r1[r2] = r5
            r5 = 1
            java.lang.Long r6 = java.lang.Long.valueOf(r7)
            r1[r5] = r6
            r5 = 2
            java.lang.Long r6 = java.lang.Long.valueOf(r9)
            r1[r5] = r6
            java.lang.String r5 = "size=%s offset=%s byteCount=%s"
            java.lang.String r5 = java.lang.String.format(r5, r1)
            r0.<init>(r5)
            throw r0
    }

    public static int reverseBytesInt(int r2) {
            r0 = -16777216(0xffffffffff000000, float:-1.7014118E38)
            r0 = r0 & r2
            int r0 = r0 >>> 24
            r1 = 16711680(0xff0000, float:2.3418052E-38)
            r1 = r1 & r2
            int r1 = r1 >>> 8
            r0 = r0 | r1
            r1 = 65280(0xff00, float:9.1477E-41)
            r1 = r1 & r2
            int r1 = r1 << 8
            r0 = r0 | r1
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 24
            r2 = r2 | r0
            return r2
    }

    public static long reverseBytesLong(long r8) {
            r0 = -72057594037927936(0xff00000000000000, double:-5.486124068793689E303)
            long r0 = r0 & r8
            r2 = 56
            long r0 = r0 >>> r2
            r3 = 71776119061217280(0xff000000000000, double:7.06327445644526E-304)
            long r3 = r3 & r8
            r5 = 40
            long r3 = r3 >>> r5
            long r0 = r0 | r3
            r3 = 280375465082880(0xff0000000000, double:1.38523885234213E-309)
            long r3 = r3 & r8
            r6 = 24
            long r3 = r3 >>> r6
            long r0 = r0 | r3
            r3 = 1095216660480(0xff00000000, double:5.41108926696E-312)
            long r3 = r3 & r8
            r7 = 8
            long r3 = r3 >>> r7
            long r0 = r0 | r3
            r3 = 4278190080(0xff000000, double:2.113706745E-314)
            long r3 = r3 & r8
            long r3 = r3 << r7
            long r0 = r0 | r3
            r3 = 16711680(0xff0000, double:8.256667E-317)
            long r3 = r3 & r8
            long r3 = r3 << r6
            long r0 = r0 | r3
            r3 = 65280(0xff00, double:3.22526E-319)
            long r3 = r3 & r8
            long r3 = r3 << r5
            long r0 = r0 | r3
            r3 = 255(0xff, double:1.26E-321)
            long r8 = r8 & r3
            long r8 = r8 << r2
            long r8 = r8 | r0
            return r8
    }

    public static short reverseBytesShort(short r1) {
            r0 = 65535(0xffff, float:9.1834E-41)
            r1 = r1 & r0
            r0 = 65280(0xff00, float:9.1477E-41)
            r0 = r0 & r1
            int r0 = r0 >>> 8
            r1 = r1 & 255(0xff, float:3.57E-43)
            int r1 = r1 << 8
            r1 = r1 | r0
            short r1 = (short) r1
            return r1
    }

    public static void sneakyRethrow(java.lang.Throwable r0) {
            sneakyThrow2(r0)
            return
    }

    private static <T extends java.lang.Throwable> void sneakyThrow2(java.lang.Throwable r0) throws java.lang.Throwable {
            throw r0
    }
}
