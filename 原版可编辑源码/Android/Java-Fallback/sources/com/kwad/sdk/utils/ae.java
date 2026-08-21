package com.kwad.sdk.utils;

public final class ae {
    private static java.lang.String aIN;
    private static boolean aIO;

    public static java.lang.String ch(android.content.Context r8) {
            java.lang.String r0 = com.kwad.sdk.utils.ae.aIN
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L3a
            boolean r0 = com.kwad.sdk.utils.ae.aIO
            if (r0 != 0) goto L3a
            boolean r0 = com.kwad.sdk.utils.as.IT()
            if (r0 != 0) goto L13
            goto L3a
        L13:
            r0 = 0
            java.lang.String r1 = "content://com.xiaomi.market.provider.DirectMailProvider"
            android.net.Uri r3 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> L2c
            android.content.ContentResolver r2 = r8.getContentResolver()     // Catch: java.lang.Throwable -> L2c
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r0 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L2c
            java.lang.String r8 = k(r0)     // Catch: java.lang.Throwable -> L2c
            com.kwad.sdk.utils.ae.aIN = r8     // Catch: java.lang.Throwable -> L2c
        L2c:
            com.kwad.sdk.crash.utils.b.closeQuietly(r0)
            java.lang.String r8 = com.kwad.sdk.utils.ae.aIN
            boolean r8 = android.text.TextUtils.isEmpty(r8)
            com.kwad.sdk.utils.ae.aIO = r8
            java.lang.String r8 = com.kwad.sdk.utils.ae.aIN
            return r8
        L3a:
            java.lang.String r8 = com.kwad.sdk.utils.ae.aIN
            return r8
    }

    private static java.lang.String k(android.database.Cursor r2) {
            java.lang.String r0 = ""
            if (r2 == 0) goto L2a
            boolean r1 = r2.isClosed()
            if (r1 == 0) goto Lb
            goto L2a
        Lb:
            r2.moveToFirst()
            java.lang.String r1 = "support"
            int r1 = r2.getColumnIndex(r1)
            if (r1 <= 0) goto L1d
            int r1 = r2.getInt(r1)
            if (r1 != 0) goto L1d
            return r0
        L1d:
            java.lang.String r1 = "detailStyle"
            int r1 = r2.getColumnIndex(r1)
            if (r1 <= 0) goto L29
            java.lang.String r0 = r2.getString(r1)
        L29:
            return r0
        L2a:
            java.lang.String r2 = "MiMarketHelper"
            java.lang.String r1 = "cursor is null"
            com.kwad.sdk.core.e.c.i(r2, r1)
            return r0
    }
}
