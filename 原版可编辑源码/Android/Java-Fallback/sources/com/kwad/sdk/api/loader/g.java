package com.kwad.sdk.api.loader;

final class g {
    static java.lang.String air = "autoRevert";

    static {
            return
    }

    static boolean F(java.lang.String r5, java.lang.String r6) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto L15
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L15
            return r1
        L15:
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r2 = 1
            if (r0 != 0) goto L23
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 == 0) goto L23
            return r2
        L23:
            java.lang.String r0 = "\\."
            java.lang.String[] r5 = r5.split(r0)
            java.lang.String[] r6 = r6.split(r0)
            r0 = r1
        L2e:
            int r3 = r5.length
            if (r0 >= r3) goto L4b
            int r3 = r6.length
            if (r0 >= r3) goto L4b
            r3 = r5[r0]     // Catch: java.lang.NumberFormatException -> L4a
            int r3 = java.lang.Integer.parseInt(r3)     // Catch: java.lang.NumberFormatException -> L4a
            r4 = r6[r0]     // Catch: java.lang.NumberFormatException -> L4a
            int r4 = java.lang.Integer.parseInt(r4)     // Catch: java.lang.NumberFormatException -> L4a
            int r3 = r3 - r4
            if (r3 <= 0) goto L44
            return r2
        L44:
            if (r3 >= 0) goto L47
            return r1
        L47:
            int r0 = r0 + 1
            goto L2e
        L4a:
            return r1
        L4b:
            int r5 = r5.length
            int r6 = r6.length
            if (r5 <= r6) goto L50
            return r2
        L50:
            return r1
    }

    static java.lang.String aA(android.content.Context r1) {
            java.lang.String r0 = "apiversion"
            java.lang.String r1 = getVersion(r1, r0)
            return r1
    }

    public static java.lang.String ay(android.content.Context r1) {
            java.lang.String r0 = "curversion"
            java.lang.String r1 = getVersion(r1, r0)
            return r1
    }

    public static java.lang.String az(android.content.Context r1) {
            java.lang.String r0 = "newversion"
            java.lang.String r1 = getVersion(r1, r0)
            return r1
    }

    private static void b(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            com.kwad.sdk.api.loader.t.c(r0, r1, r2)
            return
    }

    private static java.lang.String getVersion(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = ""
            java.lang.String r1 = com.kwad.sdk.api.loader.t.d(r1, r2, r0)
            return r1
    }

    public static void k(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "curversion"
            b(r1, r0, r2)
            return
    }

    public static void l(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "newversion"
            b(r1, r0, r2)
            return
    }

    static void m(android.content.Context r1, java.lang.String r2) {
            java.lang.String r0 = "apiversion"
            b(r1, r0, r2)
            return
    }
}
