package com.mbridge.msdk.widget.custom.b;

public final class e {
    public static boolean a(java.lang.String r2) {
            r0 = 0
            if (r2 == 0) goto L17
            int r1 = r2.length()
            if (r1 != 0) goto La
            goto L17
        La:
            r1 = 1
            java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> Lf
            return r1
        Lf:
            java.lang.Double.parseDouble(r2)     // Catch: java.lang.NumberFormatException -> L13
            return r1
        L13:
            java.lang.Float.parseFloat(r2)     // Catch: java.lang.NumberFormatException -> L17
            return r1
        L17:
            return r0
    }
}
