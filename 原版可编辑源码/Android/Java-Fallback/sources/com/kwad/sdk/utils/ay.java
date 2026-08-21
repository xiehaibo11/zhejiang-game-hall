package com.kwad.sdk.utils;

public final class ay {
    private static java.lang.String TAG = "plugin.signature";

    static {
            return
    }

    private static android.content.pm.Signature[] cV(android.content.Context r4) {
            r0 = 0
            android.content.pm.PackageManager r1 = r4.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L15
            java.lang.String r4 = r4.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L15
            r2 = 64
            android.content.pm.PackageInfo r4 = r1.getPackageInfo(r4, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L15
            if (r4 == 0) goto L32
            android.content.pm.Signature[] r4 = r4.signatures     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L15
            r0 = r4
            goto L32
        L15:
            r4 = move-exception
            java.lang.String r1 = com.kwad.sdk.utils.ay.TAG
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "Can not get signature, error = "
            r2.<init>(r3)
            java.lang.String r3 = r4.getLocalizedMessage()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            com.kwad.sdk.core.e.c.w(r1, r2)
            java.lang.String r1 = com.kwad.sdk.utils.ay.TAG
            com.kwad.sdk.core.e.c.w(r1, r4)
        L32:
            return r0
    }

    public static java.lang.String cW(android.content.Context r2) {
            java.lang.String r0 = ""
            android.content.pm.Signature[] r2 = cV(r2)     // Catch: java.lang.Exception -> L19
            if (r2 == 0) goto L18
            int r1 = r2.length     // Catch: java.lang.Exception -> L19
            if (r1 > 0) goto Lc
            goto L18
        Lc:
            r1 = 0
            r2 = r2[r1]     // Catch: java.lang.Exception -> L19
            byte[] r2 = r2.toByteArray()     // Catch: java.lang.Exception -> L19
            java.lang.String r2 = com.kwad.sdk.utils.ad.l(r2)     // Catch: java.lang.Exception -> L19
            return r2
        L18:
            return r0
        L19:
            r2 = move-exception
            java.lang.String r1 = com.kwad.sdk.utils.ay.TAG
            com.kwad.sdk.core.e.c.w(r1, r2)
            return r0
    }
}
