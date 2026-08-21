package com.kwad.sdk.utils;

public final class bk {
    public static boolean aw(java.lang.String r5, java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 != 0) goto L3c
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto Le
            goto L3c
        Le:
            java.lang.String r0 = "\\."
            java.lang.String[] r5 = r5.split(r0)
            java.lang.String[] r6 = r6.split(r0)
            r0 = r1
        L19:
            int r2 = r5.length
            r3 = 1
            if (r0 >= r2) goto L37
            int r2 = r6.length
            if (r0 >= r2) goto L37
            r2 = r5[r0]     // Catch: java.lang.NumberFormatException -> L36
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.NumberFormatException -> L36
            r4 = r6[r0]     // Catch: java.lang.NumberFormatException -> L36
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.NumberFormatException -> L36
            int r2 = r2 - r4
            if (r2 <= 0) goto L30
            return r3
        L30:
            if (r2 >= 0) goto L33
            return r1
        L33:
            int r0 = r0 + 1
            goto L19
        L36:
            return r1
        L37:
            int r5 = r5.length
            int r6 = r6.length
            if (r5 < r6) goto L3c
            return r3
        L3c:
            return r1
    }
}
