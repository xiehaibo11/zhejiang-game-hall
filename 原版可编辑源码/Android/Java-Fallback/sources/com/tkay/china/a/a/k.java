package com.tkay.china.a.a;

public final class k {
    java.lang.String a;
    private android.content.Context b;
    private boolean c;

    public k(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r0 = 0
            r1.a = r0
            r1.b = r2
            return
    }

    public final java.lang.String a() {
            r8 = this;
            r0 = 0
            java.lang.String r1 = "content://com.vivo.vms.IdProvider/IdentifierId/OAID"
            android.net.Uri r3 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
            android.content.Context r1 = r8.b     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
            android.content.ContentResolver r2 = r1.getContentResolver()     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
            r4 = r0
            java.lang.String[] r4 = (java.lang.String[]) r4     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
            r5 = r0
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
            r6 = r0
            java.lang.String[] r6 = (java.lang.String[]) r6     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
            r7 = r0
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
            if (r1 == 0) goto L3c
            boolean r2 = r1.moveToNext()     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
            if (r2 == 0) goto L2f
            java.lang.String r2 = "value"
            int r2 = r1.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
            java.lang.String r0 = r1.getString(r2)     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
        L2f:
            r1.close()     // Catch: java.lang.Throwable -> L33 java.lang.Exception -> L38
            goto L3c
        L33:
            r1 = move-exception
            r1.printStackTrace()
            goto L3c
        L38:
            r1 = move-exception
            r1.printStackTrace()
        L3c:
            return r0
    }
}
