package com.meizu.cloud.pushsdk.c.c;

public class m {
    public static final byte[] a = null;
    public static final java.lang.String[] b = null;
    public static final java.nio.charset.Charset c = null;
    public static final java.util.TimeZone d = null;
    private static final java.util.regex.Pattern e = null;

    static {
            r0 = 0
            byte[] r1 = new byte[r0]
            com.meizu.cloud.pushsdk.c.c.m.a = r1
            java.lang.String[] r0 = new java.lang.String[r0]
            com.meizu.cloud.pushsdk.c.c.m.b = r0
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.meizu.cloud.pushsdk.c.c.m.c = r0
            java.lang.String r0 = "GMT"
            java.util.TimeZone r0 = java.util.TimeZone.getTimeZone(r0)
            com.meizu.cloud.pushsdk.c.c.m.d = r0
            java.lang.String r0 = "([0-9a-fA-F]*:[0-9a-fA-F:.]*)|([\\d.]+)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.meizu.cloud.pushsdk.c.c.m.e = r0
            return
    }

    public static int a(java.lang.String r2, int r3, int r4) {
        L0:
            if (r3 >= r4) goto L1e
            char r0 = r2.charAt(r3)
            r1 = 9
            if (r0 == r1) goto L1b
            r1 = 10
            if (r0 == r1) goto L1b
            r1 = 12
            if (r0 == r1) goto L1b
            r1 = 13
            if (r0 == r1) goto L1b
            r1 = 32
            if (r0 == r1) goto L1b
            return r3
        L1b:
            int r3 = r3 + 1
            goto L0
        L1e:
            return r4
    }

    public static int a(java.lang.String r1, int r2, int r3, char r4) {
        L0:
            if (r2 >= r3) goto Lc
            char r0 = r1.charAt(r2)
            if (r0 != r4) goto L9
            return r2
        L9:
            int r2 = r2 + 1
            goto L0
        Lc:
            return r3
    }

    public static int a(java.lang.String r2, int r3, int r4, java.lang.String r5) {
        L0:
            if (r3 >= r4) goto L11
            char r0 = r2.charAt(r3)
            int r0 = r5.indexOf(r0)
            r1 = -1
            if (r0 == r1) goto Le
            return r3
        Le:
            int r3 = r3 + 1
            goto L0
        L11:
            return r4
    }

    public static java.lang.String a(java.lang.String r2) {
            r0 = 0
            java.lang.String r2 = java.net.IDN.toASCII(r2)     // Catch: java.lang.IllegalArgumentException -> L1a
            java.util.Locale r1 = java.util.Locale.US     // Catch: java.lang.IllegalArgumentException -> L1a
            java.lang.String r2 = r2.toLowerCase(r1)     // Catch: java.lang.IllegalArgumentException -> L1a
            boolean r1 = r2.isEmpty()     // Catch: java.lang.IllegalArgumentException -> L1a
            if (r1 == 0) goto L12
            return r0
        L12:
            boolean r1 = b(r2)     // Catch: java.lang.IllegalArgumentException -> L1a
            if (r1 == 0) goto L19
            return r0
        L19:
            return r2
        L1a:
            return r0
    }

    public static <T> java.util.List<T> a(java.util.List<T> r1) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r1)
            java.util.List r1 = java.util.Collections.unmodifiableList(r0)
            return r1
    }

    public static void a(long r4, long r6, long r8) {
            long r0 = r6 | r8
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L12
            int r0 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r0 > 0) goto L12
            long r4 = r4 - r6
            int r4 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r4 < 0) goto L12
            return
        L12:
            java.lang.ArrayIndexOutOfBoundsException r4 = new java.lang.ArrayIndexOutOfBoundsException
            r4.<init>()
            throw r4
    }

    public static void a(java.io.Closeable r0) {
            if (r0 == 0) goto L8
            r0.close()     // Catch: java.lang.RuntimeException -> L6 java.lang.Exception -> L8
            goto L8
        L6:
            r0 = move-exception
            throw r0
        L8:
            return
    }

    public static int b(java.lang.String r2, int r3, int r4) {
            int r4 = r4 + (-1)
        L2:
            if (r4 < r3) goto L22
            char r0 = r2.charAt(r4)
            r1 = 9
            if (r0 == r1) goto L1f
            r1 = 10
            if (r0 == r1) goto L1f
            r1 = 12
            if (r0 == r1) goto L1f
            r1 = 13
            if (r0 == r1) goto L1f
            r1 = 32
            if (r0 == r1) goto L1f
            int r4 = r4 + 1
            return r4
        L1f:
            int r4 = r4 + (-1)
            goto L2
        L22:
            return r3
    }

    private static boolean b(java.lang.String r5) {
            r0 = 0
            r1 = r0
        L2:
            int r2 = r5.length()
            if (r1 >= r2) goto L24
            char r2 = r5.charAt(r1)
            r3 = 31
            r4 = 1
            if (r2 <= r3) goto L23
            r3 = 127(0x7f, float:1.78E-43)
            if (r2 < r3) goto L16
            goto L23
        L16:
            java.lang.String r3 = " #%/:?@[\\]"
            int r2 = r3.indexOf(r2)
            r3 = -1
            if (r2 == r3) goto L20
            return r4
        L20:
            int r1 = r1 + 1
            goto L2
        L23:
            return r4
        L24:
            return r0
    }
}
