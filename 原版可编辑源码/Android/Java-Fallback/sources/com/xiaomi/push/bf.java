package com.xiaomi.push;

class bf implements com.xiaomi.push.au {
    private static java.lang.String a = "content://com.vivo.vms.IdProvider/IdentifierId/";
    private static java.lang.String b;
    private static java.lang.String c;
    private static java.lang.String d;
    private static java.lang.String e;
    private static java.lang.String f;
    private android.content.Context a;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.xiaomi.push.bf.a
            r0.append(r1)
            java.lang.String r1 = "OAID"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.push.bf.b = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.xiaomi.push.bf.a
            r0.append(r1)
            java.lang.String r1 = "VAID_"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.push.bf.c = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.xiaomi.push.bf.a
            r0.append(r1)
            java.lang.String r1 = "AAID_"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.push.bf.d = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.xiaomi.push.bf.a
            r0.append(r1)
            java.lang.String r1 = "OAIDSTATUS"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.push.bf.e = r0
            java.lang.String r0 = "persist.sys.identifierid.supported"
            com.xiaomi.push.bf.f = r0
            return
    }

    public bf(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            return
    }

    private java.lang.String a(java.lang.String r10) {
            r9 = this;
            r0 = 0
            android.content.Context r1 = r9.a     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L38
            android.content.ContentResolver r2 = r1.getContentResolver()     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L38
            android.net.Uri r3 = android.net.Uri.parse(r10)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L38
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            android.database.Cursor r10 = r2.query(r3, r4, r5, r6, r7)     // Catch: java.lang.Throwable -> L2e java.lang.Exception -> L38
            if (r10 == 0) goto L28
            boolean r1 = r10.moveToNext()     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L39
            if (r1 == 0) goto L28
            java.lang.String r1 = "value"
            int r1 = r10.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L39
            java.lang.String r0 = r10.getString(r1)     // Catch: java.lang.Throwable -> L26 java.lang.Exception -> L39
            goto L28
        L26:
            r0 = move-exception
            goto L32
        L28:
            if (r10 == 0) goto L3c
        L2a:
            r10.close()
            goto L3c
        L2e:
            r10 = move-exception
            r8 = r0
            r0 = r10
            r10 = r8
        L32:
            if (r10 == 0) goto L37
            r10.close()
        L37:
            throw r0
        L38:
            r10 = r0
        L39:
            if (r10 == 0) goto L3c
            goto L2a
        L3c:
            return r0
    }

    public static boolean a(android.content.Context r3) {
            r0 = 0
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Exception -> L25
            java.lang.String r1 = com.xiaomi.push.bf.a     // Catch: java.lang.Exception -> L25
            android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Exception -> L25
            java.lang.String r1 = r1.getAuthority()     // Catch: java.lang.Exception -> L25
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.ProviderInfo r3 = r3.resolveContentProvider(r1, r2)     // Catch: java.lang.Exception -> L25
            if (r3 == 0) goto L25
            android.content.pm.ApplicationInfo r3 = r3.applicationInfo     // Catch: java.lang.Exception -> L25
            int r3 = r3.flags     // Catch: java.lang.Exception -> L25
            r1 = 1
            r3 = r3 & r1
            if (r3 == 0) goto L21
            r3 = r1
            goto L22
        L21:
            r3 = r0
        L22:
            if (r3 == 0) goto L25
            return r1
        L25:
            return r0
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = com.xiaomi.push.bf.b
            java.lang.String r0 = r1.a(r0)
            return r0
    }

    @Override
    public boolean a() {
            r2 = this;
            java.lang.String r0 = com.xiaomi.push.bf.f
            java.lang.String r1 = "0"
            java.lang.String r0 = com.xiaomi.push.u.a(r0, r1)
            java.lang.String r1 = "1"
            boolean r0 = r1.equals(r0)
            return r0
    }
}
