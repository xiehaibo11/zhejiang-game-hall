package com.reyun.tracking.b.a;

public class m {
    java.lang.String a;
    private android.content.Context b;
    private boolean c;

    public m(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r0 = 0
            r1.a = r0
            r1.b = r2
            return
    }

    public java.lang.String a() {
            r8 = this;
            r0 = 0
            java.lang.String r1 = "content://com.vivo.vms.IdProvider/IdentifierId/OAID"
            android.net.Uri r3 = android.net.Uri.parse(r1)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L30
            android.content.Context r1 = r8.b     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L30
            android.content.ContentResolver r2 = r1.getContentResolver()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L30
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L30
            if (r1 == 0) goto L34
            boolean r2 = r1.moveToNext()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L30
            if (r2 == 0) goto L27
            java.lang.String r2 = "value"
            int r2 = r1.getColumnIndex(r2)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L30
            java.lang.String r0 = r1.getString(r2)     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L30
        L27:
            r1.close()     // Catch: java.lang.Throwable -> L2b java.lang.Exception -> L30
            goto L34
        L2b:
            r1 = move-exception
            r1.printStackTrace()
            goto L34
        L30:
            r1 = move-exception
            r1.printStackTrace()
        L34:
            return r0
    }
}
