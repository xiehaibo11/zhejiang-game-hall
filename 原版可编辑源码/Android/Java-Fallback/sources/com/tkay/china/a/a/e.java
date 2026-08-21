package com.tkay.china.a.a;

public final class e {
    private android.content.Context a;

    public e(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    public final void a(com.tkay.china.a.a r9) {
            r8 = this;
            r0 = 0
            android.content.Context r1 = r8.a     // Catch: java.lang.Throwable -> Ld
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> Ld
            java.lang.String r2 = "com.meizu.flyme.openidsdk"
            r1.getPackageInfo(r2, r0)     // Catch: java.lang.Throwable -> Ld
            goto L11
        Ld:
            r1 = move-exception
            r1.printStackTrace()
        L11:
            java.lang.String r1 = "content://com.meizu.flyme.openidsdk/"
            android.net.Uri r3 = android.net.Uri.parse(r1)
            android.content.Context r1 = r8.a
            android.content.ContentResolver r2 = r1.getContentResolver()
            r1 = 0
            r4 = r1
            java.lang.String[] r4 = (java.lang.String[]) r4     // Catch: java.lang.Throwable -> L53
            r5 = r1
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L53
            java.lang.String r6 = "oaid"
            java.lang.String[] r6 = new java.lang.String[]{r6}     // Catch: java.lang.Throwable -> L53
            r7 = r1
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L53
            android.database.Cursor r2 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L53
            if (r2 != 0) goto L34
            goto L4a
        L34:
            boolean r3 = r2.isClosed()     // Catch: java.lang.Throwable -> L53
            if (r3 == 0) goto L3b
            goto L4a
        L3b:
            r2.moveToFirst()     // Catch: java.lang.Throwable -> L53
            java.lang.String r3 = "value"
            int r3 = r2.getColumnIndex(r3)     // Catch: java.lang.Throwable -> L53
            if (r3 <= 0) goto L4a
            java.lang.String r1 = r2.getString(r3)     // Catch: java.lang.Throwable -> L53
        L4a:
            r9.a(r1, r0)     // Catch: java.lang.Throwable -> L53
            if (r2 == 0) goto L57
            r2.close()     // Catch: java.lang.Throwable -> L53 java.lang.Exception -> L57
            goto L57
        L53:
            r0 = move-exception
            r0.getMessage()
        L57:
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto L60
            r9.a()
        L60:
            return
    }
}
