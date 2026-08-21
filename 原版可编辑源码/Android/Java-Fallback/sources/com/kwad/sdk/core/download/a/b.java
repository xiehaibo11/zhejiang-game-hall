package com.kwad.sdk.core.download.a;

public class b {
    public static int j(android.content.Context r4, java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 != 0) goto L4f
            if (r4 != 0) goto La
            goto L4f
        La:
            java.lang.String r0 = "BaseDeepLinkHelper"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4a
            java.lang.String r3 = "handleDeepLink: "
            r2.<init>(r3)     // Catch: java.lang.Exception -> L4a
            r2.append(r5)     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L4a
            com.kwad.sdk.core.e.c.d(r0, r2)     // Catch: java.lang.Exception -> L4a
            android.net.Uri r5 = android.net.Uri.parse(r5)     // Catch: java.lang.Exception -> L4a
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L4a
            r0.<init>()     // Catch: java.lang.Exception -> L4a
            java.lang.String r2 = "android.intent.action.VIEW"
            r0.setAction(r2)     // Catch: java.lang.Exception -> L4a
            r0.setData(r5)     // Catch: java.lang.Exception -> L4a
            r5 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r5)     // Catch: java.lang.Exception -> L4a
            android.content.pm.PackageManager r5 = r4.getPackageManager()     // Catch: java.lang.Exception -> L4a
            r2 = 65536(0x10000, float:9.1835E-41)
            java.util.List r5 = r5.queryIntentActivities(r0, r2)     // Catch: java.lang.Exception -> L4a
            if (r5 == 0) goto L4f
            int r5 = r5.size()     // Catch: java.lang.Exception -> L4a
            if (r5 <= 0) goto L4f
            r4.startActivity(r0)     // Catch: java.lang.Exception -> L4a
            r1 = 1
            goto L4f
        L4a:
            r4 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r4)
            r1 = -1
        L4f:
            return r1
    }
}
