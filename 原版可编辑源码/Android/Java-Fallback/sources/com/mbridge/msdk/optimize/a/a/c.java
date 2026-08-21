package com.mbridge.msdk.optimize.a.a;

public final class c {
    private android.content.Context a;

    public c(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public final void a(com.mbridge.msdk.optimize.a.b r9) {
            r8 = this;
            r0 = 0
            android.content.Context r1 = r8.a     // Catch: java.lang.Exception -> Ld
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Exception -> Ld
            java.lang.String r2 = "com.meizu.flyme.openidsdk"
            r1.getPackageInfo(r2, r0)     // Catch: java.lang.Exception -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            java.lang.String r1 = "content://com.meizu.flyme.openidsdk/"
            android.net.Uri r3 = android.net.Uri.parse(r1)
            android.content.Context r1 = r8.a
            android.content.ContentResolver r2 = r1.getContentResolver()
            r4 = 0
            r5 = 0
            java.lang.String r1 = "oaid"
            java.lang.String[] r6 = new java.lang.String[]{r1}     // Catch: java.lang.Throwable -> L65
            r7 = 0
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L65
            r2 = 0
            if (r1 != 0) goto L2e
            goto L5a
        L2e:
            boolean r3 = r1.isClosed()     // Catch: java.lang.Throwable -> L65
            if (r3 == 0) goto L35
            goto L5a
        L35:
            r1.moveToFirst()     // Catch: java.lang.Throwable -> L65
            java.lang.String r3 = "value"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L65
            if (r3 <= 0) goto L44
            java.lang.String r2 = r1.getString(r3)     // Catch: java.lang.Throwable -> L65
        L44:
            java.lang.String r3 = "code"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L65
            if (r3 <= 0) goto L4f
            r1.getInt(r3)     // Catch: java.lang.Throwable -> L65
        L4f:
            java.lang.String r3 = "expired"
            int r3 = r1.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L65
            if (r3 <= 0) goto L5a
            r1.getLong(r3)     // Catch: java.lang.Throwable -> L65
        L5a:
            if (r9 == 0) goto L5f
            r9.a(r2, r0)     // Catch: java.lang.Throwable -> L65
        L5f:
            if (r1 == 0) goto L69
            r1.close()     // Catch: java.lang.Throwable -> L65 java.lang.Exception -> L69
            goto L69
        L65:
            r9 = move-exception
            r9.printStackTrace()
        L69:
            return
    }
}
