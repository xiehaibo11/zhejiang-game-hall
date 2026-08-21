package org.bouncycastle.util.test;

public final class NumberParsing {
    private NumberParsing() {
            r0 = this;
            r0.<init>()
            return
    }

    public static int decodeIntFromHex(java.lang.String r4) {
            r0 = 1
            char r1 = r4.charAt(r0)
            r2 = 16
            r3 = 120(0x78, float:1.68E-43)
            if (r1 == r3) goto L19
            char r0 = r4.charAt(r0)
            r1 = 88
            if (r0 != r1) goto L14
            goto L19
        L14:
            int r4 = java.lang.Integer.parseInt(r4, r2)
            return r4
        L19:
            r0 = 2
            java.lang.String r4 = r4.substring(r0)
            int r4 = java.lang.Integer.parseInt(r4, r2)
            return r4
    }

    public static long decodeLongFromHex(java.lang.String r4) {
            r0 = 1
            char r1 = r4.charAt(r0)
            r2 = 16
            r3 = 120(0x78, float:1.68E-43)
            if (r1 == r3) goto L19
            char r0 = r4.charAt(r0)
            r1 = 88
            if (r0 != r1) goto L14
            goto L19
        L14:
            long r0 = java.lang.Long.parseLong(r4, r2)
            return r0
        L19:
            r0 = 2
            java.lang.String r4 = r4.substring(r0)
            long r0 = java.lang.Long.parseLong(r4, r2)
            return r0
    }
}
