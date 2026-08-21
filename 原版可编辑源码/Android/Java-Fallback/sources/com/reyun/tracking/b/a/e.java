package com.reyun.tracking.b.a;

public class e {
    private android.content.Context a;

    public e(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private java.lang.String a(android.database.Cursor r3) {
            r2 = this;
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            boolean r1 = r3.isClosed()
            if (r1 == 0) goto Lb
            return r0
        Lb:
            r3.moveToFirst()
            java.lang.String r1 = "value"
            int r1 = r3.getColumnIndex(r1)
            if (r1 <= 0) goto L1a
            java.lang.String r0 = r3.getString(r1)
        L1a:
            java.lang.String r1 = "code"
            int r1 = r3.getColumnIndex(r1)
            if (r1 <= 0) goto L25
            r3.getInt(r1)
        L25:
            java.lang.String r1 = "expired"
            int r1 = r3.getColumnIndex(r1)
            if (r1 <= 0) goto L30
            r3.getLong(r1)
        L30:
            return r0
    }

    public void a(com.reyun.tracking.b.d r9) {
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
            java.lang.String[] r6 = new java.lang.String[]{r1}     // Catch: java.lang.Throwable -> L39
            r7 = 0
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L39
            java.lang.String r2 = r8.a(r1)     // Catch: java.lang.Throwable -> L39
            if (r9 == 0) goto L33
            r9.a(r2, r0)     // Catch: java.lang.Throwable -> L39
        L33:
            if (r1 == 0) goto L3d
            r1.close()     // Catch: java.lang.Throwable -> L39
            goto L3d
        L39:
            r9 = move-exception
            r9.printStackTrace()
        L3d:
            return
    }
}
