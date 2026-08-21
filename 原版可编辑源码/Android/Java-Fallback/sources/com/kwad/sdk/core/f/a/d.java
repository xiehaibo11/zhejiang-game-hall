package com.kwad.sdk.core.f.a;

public final class d {
    private android.content.Context mContext;

    public d(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    private static java.lang.String f(android.database.Cursor r2) {
            java.lang.String r0 = ""
            if (r2 == 0) goto L30
            boolean r1 = r2.isClosed()
            if (r1 == 0) goto Lb
            goto L30
        Lb:
            r2.moveToFirst()
            java.lang.String r1 = "value"
            int r1 = r2.getColumnIndex(r1)
            if (r1 <= 0) goto L1a
            java.lang.String r0 = r2.getString(r1)
        L1a:
            java.lang.String r1 = "code"
            int r1 = r2.getColumnIndex(r1)
            if (r1 <= 0) goto L25
            r2.getInt(r1)
        L25:
            java.lang.String r1 = "expired"
            int r1 = r2.getColumnIndex(r1)
            if (r1 <= 0) goto L30
            r2.getLong(r1)
        L30:
            return r0
    }

    public final java.lang.String getOAID() {
            r9 = this;
            java.lang.String r0 = ""
            r1 = 0
            java.lang.String r2 = "content://com.meizu.flyme.openidsdk/"
            android.net.Uri r4 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L2e
            android.content.Context r2 = r9.mContext     // Catch: java.lang.Throwable -> L2e
            android.content.ContentResolver r3 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L2e
            r5 = 0
            r6 = 0
            java.lang.String r2 = "oaid"
            java.lang.String[] r7 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L2e
            r8 = 0
            android.database.Cursor r1 = r3.query(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r0 = f(r1)     // Catch: java.lang.Throwable -> L2e
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = "getOAID oaid:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L2e
            r2.append(r0)     // Catch: java.lang.Throwable -> L2e
        L2a:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)     // Catch: java.lang.Exception -> L38
            goto L38
        L2e:
            r2 = move-exception
            r2.printStackTrace()     // Catch: java.lang.Throwable -> L33
            goto L2a
        L33:
            r2 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)     // Catch: java.lang.Exception -> L38
            throw r2     // Catch: java.lang.Exception -> L38
        L38:
            return r0
    }
}
