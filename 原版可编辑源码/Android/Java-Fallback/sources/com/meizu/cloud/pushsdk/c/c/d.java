package com.meizu.cloud.pushsdk.c.c;

public class d {
    public static boolean a(java.lang.String r1) {
            java.lang.String r0 = "POST"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.lang.String r0 = "PUT"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.lang.String r0 = "PATCH"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.lang.String r0 = "PROPPATCH"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L2b
            java.lang.String r0 = "REPORT"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L29
            goto L2b
        L29:
            r1 = 0
            goto L2c
        L2b:
            r1 = 1
        L2c:
            return r1
    }

    public static boolean b(java.lang.String r1) {
            boolean r0 = a(r1)
            if (r0 != 0) goto L31
            java.lang.String r0 = "OPTIONS"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L31
            java.lang.String r0 = "DELETE"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L31
            java.lang.String r0 = "PROPFIND"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L31
            java.lang.String r0 = "MKCOL"
            boolean r0 = r0.equals(r1)
            if (r0 != 0) goto L31
            java.lang.String r0 = "LOCK"
            boolean r1 = r0.equals(r1)
            if (r1 == 0) goto L2f
            goto L31
        L2f:
            r1 = 0
            goto L32
        L31:
            r1 = 1
        L32:
            return r1
    }
}
