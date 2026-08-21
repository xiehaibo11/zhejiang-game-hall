package com.czhj.devicehelper.oaId.helpers;

public class i {
    java.lang.String a;
    private android.content.Context b;
    private android.os.HandlerThread c;
    private android.os.Handler d;
    private boolean e;


    public i(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.e = r0
            r0 = 0
            r1.a = r0
            r1.b = r2
            return
    }

    static java.lang.String a(com.czhj.devicehelper.oaId.helpers.i r0, int r1, java.lang.String r2) {
            java.lang.String r0 = r0.b(r1, r2)
            return r0
    }

    private java.lang.String a(java.lang.String r8, java.lang.String r9) {
            r7 = this;
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L26
            java.lang.String r1 = "get"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L26
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L26
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Exception -> L26
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L26
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L26
            r2[r5] = r8     // Catch: java.lang.Exception -> L26
            r2[r6] = r9     // Catch: java.lang.Exception -> L26
            java.lang.Object r8 = r1.invoke(r0, r2)     // Catch: java.lang.Exception -> L26
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Exception -> L26
            return r8
        L26:
            r8 = move-exception
            java.lang.String r8 = r8.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r8)
            return r9
    }

    private void a(int r5, java.lang.String r6) {
            r4 = this;
            android.os.Handler r0 = r4.d
            android.os.Message r0 = r0.obtainMessage()
            r1 = 11
            r0.what = r1
            android.os.Bundle r1 = new android.os.Bundle
            r1.<init>()
            java.lang.String r2 = "type"
            r3 = 0
            r1.putInt(r2, r3)
            r2 = 1
            if (r5 == r2) goto L1b
            r2 = 2
            if (r5 != r2) goto L20
        L1b:
            java.lang.String r5 = "appid"
            r1.putString(r5, r6)
        L20:
            r0.setData(r1)
            android.os.Handler r5 = r4.d
            r5.sendMessage(r0)
            return
    }

    private java.lang.String b(int r7, java.lang.String r8) {
            r6 = this;
            r8 = 0
            if (r7 == 0) goto L5
            r1 = r8
            goto Lc
        L5:
            java.lang.String r7 = "content://com.vivo.vms.IdProvider/IdentifierId/OAID"
            android.net.Uri r7 = android.net.Uri.parse(r7)
            r1 = r7
        Lc:
            android.content.Context r7 = r6.b
            android.content.ContentResolver r0 = r7.getContentResolver()
            r2 = 0
            r3 = 0
            r4 = 0
            r5 = 0
            android.database.Cursor r7 = r0.query(r1, r2, r3, r4, r5)
            if (r7 == 0) goto L2f
            boolean r0 = r7.moveToNext()
            if (r0 == 0) goto L2c
            java.lang.String r8 = "value"
            int r8 = r7.getColumnIndex(r8)
            java.lang.String r8 = r7.getString(r8)
        L2c:
            r7.close()
        L2f:
            return r8
    }

    private boolean c() {
            r2 = this;
            java.lang.String r0 = "persist.sys.identifierid.supported"
            java.lang.String r1 = "0"
            java.lang.String r0 = r2.a(r0, r1)
            java.lang.String r1 = "1"
            boolean r0 = r0.equals(r1)
            r2.e = r0
            return r0
    }

    private void d() {
            r2 = this;
            android.os.HandlerThread r0 = new android.os.HandlerThread
            java.lang.String r1 = "SqlWorkThread"
            r0.<init>(r1)
            r2.c = r0
            r0.start()
            com.czhj.devicehelper.oaId.helpers.i$1 r0 = new com.czhj.devicehelper.oaId.helpers.i$1
            android.os.HandlerThread r1 = r2.c
            android.os.Looper r1 = r1.getLooper()
            r0.<init>(r2, r1)
            r2.d = r0
            return
    }

    public java.lang.String a() {
            r7 = this;
            java.lang.String r0 = "content://com.vivo.vms.IdProvider/IdentifierId/OAID"
            android.net.Uri r2 = android.net.Uri.parse(r0)
            android.content.Context r0 = r7.b
            android.content.ContentResolver r1 = r0.getContentResolver()
            r3 = 0
            r4 = 0
            r5 = 0
            r6 = 0
            android.database.Cursor r0 = r1.query(r2, r3, r4, r5, r6)
            r1 = 0
            if (r0 == 0) goto L2a
            boolean r2 = r0.moveToNext()
            if (r2 == 0) goto L27
            java.lang.String r1 = "value"
            int r1 = r0.getColumnIndex(r1)
            java.lang.String r1 = r0.getString(r1)
        L27:
            r0.close()
        L2a:
            return r1
    }

    public java.lang.String b() {
            r2 = this;
            r2.d()
            boolean r0 = r2.e
            r1 = 0
            if (r0 != 0) goto L9
            return r1
        L9:
            java.lang.String r0 = r2.a
            if (r0 == 0) goto Le
            return r1
        Le:
            r0 = 0
            r2.a(r0, r1)
            return r1
    }
}
