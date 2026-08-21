package org.bouncycastle.util;

public class IPAddress {
    private static final java.math.BigInteger ZERO = null;

    static {
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.util.IPAddress.ZERO = r0
            return
    }

    public IPAddress() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean isValid(java.lang.String r1) {
            boolean r0 = isValidIPv4(r1)
            if (r0 != 0) goto Lf
            boolean r1 = isValidIPv6(r1)
            if (r1 == 0) goto Ld
            goto Lf
        Ld:
            r1 = 0
            goto L10
        Lf:
            r1 = 1
        L10:
            return r1
    }

    private static boolean isValidIPv4(java.lang.String r8) {
            int r0 = r8.length()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r8)
            java.lang.String r8 = "."
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r0 = 0
            r2 = 0
        L1b:
            int r3 = r8.length()
            r4 = 4
            r5 = 1
            if (r0 >= r3) goto L53
            r3 = 46
            int r3 = r8.indexOf(r3, r0)
            if (r3 <= r0) goto L53
            if (r2 != r4) goto L2e
            return r1
        L2e:
            java.math.BigInteger r4 = new java.math.BigInteger     // Catch: java.lang.NumberFormatException -> L52
            java.lang.String r0 = r8.substring(r0, r3)     // Catch: java.lang.NumberFormatException -> L52
            r4.<init>(r0)     // Catch: java.lang.NumberFormatException -> L52
            java.math.BigInteger r0 = org.bouncycastle.util.IPAddress.ZERO
            int r0 = r4.compareTo(r0)
            r6 = -1
            if (r0 == r6) goto L52
            r6 = 255(0xff, double:1.26E-321)
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r6)
            int r0 = r4.compareTo(r0)
            if (r0 != r5) goto L4d
            goto L52
        L4d:
            int r0 = r3 + 1
            int r2 = r2 + 1
            goto L1b
        L52:
            return r1
        L53:
            if (r2 != r4) goto L56
            r1 = 1
        L56:
            return r1
    }

    private static boolean isValidIPv6(java.lang.String r8) {
            int r0 = r8.length()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r8)
            java.lang.String r8 = ":"
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            r0 = 0
            r2 = 0
        L1b:
            int r3 = r8.length()
            r4 = 8
            r5 = 1
            if (r0 >= r3) goto L57
            r3 = 58
            int r3 = r8.indexOf(r3, r0)
            if (r3 <= r0) goto L57
            if (r2 != r4) goto L2f
            return r1
        L2f:
            java.math.BigInteger r4 = new java.math.BigInteger     // Catch: java.lang.NumberFormatException -> L56
            java.lang.String r0 = r8.substring(r0, r3)     // Catch: java.lang.NumberFormatException -> L56
            r6 = 16
            r4.<init>(r0, r6)     // Catch: java.lang.NumberFormatException -> L56
            java.math.BigInteger r0 = org.bouncycastle.util.IPAddress.ZERO
            int r0 = r4.compareTo(r0)
            r6 = -1
            if (r0 == r6) goto L56
            r6 = 65535(0xffff, double:3.23786E-319)
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r6)
            int r0 = r4.compareTo(r0)
            if (r0 != r5) goto L51
            goto L56
        L51:
            int r0 = r3 + 1
            int r2 = r2 + 1
            goto L1b
        L56:
            return r1
        L57:
            if (r2 != r4) goto L5a
            r1 = 1
        L5a:
            return r1
    }
}
