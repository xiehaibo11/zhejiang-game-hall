package com.kwad.sdk.api.loader;

final class r {
    public static boolean a(java.io.File r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r1 = 0
            return r1
        L8:
            java.lang.String r2 = r2.toLowerCase()
            java.lang.String r1 = com.kwad.sdk.api.loader.s.getFileMD5(r1)
            java.lang.String r1 = r1.toLowerCase()
            boolean r1 = r2.equals(r1)
            return r1
    }

    public static boolean k(java.io.File r4) {
            if (r4 == 0) goto L20
            boolean r0 = r4.exists()
            if (r0 == 0) goto L20
            long r0 = r4.length()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L20
            java.lang.String r4 = r4.getName()
            java.lang.String r0 = ".apk"
            boolean r4 = r4.endsWith(r0)
            if (r4 == 0) goto L20
            r4 = 1
            return r4
        L20:
            r4 = 0
            return r4
    }
}
