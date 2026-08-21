package com.kwad.sdk.core.f.a;

public final class h {
    private android.content.Context mContext;

    public h(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.mContext = r1
            return
    }

    public final java.lang.String getOAID() {
            r9 = this;
            java.lang.String r0 = ""
            r1 = 0
            java.lang.String r2 = "content://com.vivo.vms.IdProvider/IdentifierId/OAID"
            android.net.Uri r4 = android.net.Uri.parse(r2)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            android.content.Context r2 = r9.mContext     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            android.content.ContentResolver r3 = r2.getContentResolver()     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            android.database.Cursor r1 = r3.query(r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            if (r1 == 0) goto L39
            boolean r2 = r1.moveToNext()     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            if (r2 == 0) goto L39
            java.lang.String r2 = "value"
            int r2 = r1.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            java.lang.String r0 = r1.getString(r2)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            java.lang.String r3 = "getOAID oaid:"
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            r2.append(r0)     // Catch: java.lang.Throwable -> L34 java.lang.Exception -> L39
            goto L39
        L34:
            r0 = move-exception
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            throw r0
        L39:
            com.kwad.sdk.crash.utils.b.closeQuietly(r1)
            return r0
    }
}
