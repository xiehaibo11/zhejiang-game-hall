package com.kwad.sdk.core.config;

public final class a {
    private static final java.lang.String[] akj = null;

    static {
            java.lang.String r0 = "gifshow.com"
            java.lang.String r1 = "kuaishou.com"
            java.lang.String r2 = "static.yximgs.com"
            java.lang.String[] r0 = new java.lang.String[]{r0, r1, r2}
            com.kwad.sdk.core.config.a.akj = r0
            return
    }

    public static boolean bS(java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.net.URI r0 = new java.net.URI     // Catch: java.lang.Exception -> L21
            r0.<init>(r2)     // Catch: java.lang.Exception -> L21
            java.lang.String r2 = r0.getHost()     // Catch: java.lang.Exception -> L21
            boolean r0 = ct(r2)     // Catch: java.lang.Exception -> L21
            if (r0 != 0) goto L1f
            boolean r2 = cu(r2)     // Catch: java.lang.Exception -> L21
            if (r2 == 0) goto L1e
            goto L1f
        L1e:
            return r1
        L1f:
            r2 = 1
            return r2
        L21:
            return r1
    }

    private static boolean ct(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String[] r0 = com.kwad.sdk.core.config.a.akj
            int r2 = r0.length
            r3 = r1
        Lc:
            if (r3 >= r2) goto L1b
            r4 = r0[r3]
            boolean r4 = r5.contains(r4)
            if (r4 == 0) goto L18
            r5 = 1
            return r5
        L18:
            int r3 = r3 + 1
            goto Lc
        L1b:
            return r1
    }

    private static boolean cu(java.lang.String r3) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.util.List r0 = com.kwad.sdk.core.config.d.zc()
            java.util.Iterator r0 = r0.iterator()
        L10:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L24
            java.lang.Object r2 = r0.next()
            java.lang.String r2 = (java.lang.String) r2
            boolean r2 = r3.contains(r2)
            if (r2 == 0) goto L10
            r3 = 1
            return r3
        L24:
            return r1
    }
}
