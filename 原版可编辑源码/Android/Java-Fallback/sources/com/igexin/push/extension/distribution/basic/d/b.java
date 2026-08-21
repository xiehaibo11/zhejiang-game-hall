package com.igexin.push.extension.distribution.basic.d;

public class b {
    public static com.igexin.push.extension.distribution.basic.d.b a;
    private static final java.lang.String b = null;
    private static com.igexin.push.extension.distribution.basic.e.a c;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "EXT-"
            r0.append(r1)
            java.lang.Class<com.igexin.push.extension.distribution.basic.d.b> r1 = com.igexin.push.extension.distribution.basic.d.b.class
            java.lang.String r1 = r1.getName()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.extension.distribution.basic.d.b.b = r0
            r0 = 0
            com.igexin.push.extension.distribution.basic.d.b.c = r0
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.push.extension.distribution.basic.d.b a() {
            com.igexin.push.extension.distribution.basic.d.b r0 = com.igexin.push.extension.distribution.basic.d.b.a
            if (r0 != 0) goto L14
            com.igexin.push.extension.distribution.basic.d.b r0 = new com.igexin.push.extension.distribution.basic.d.b
            r0.<init>()
            com.igexin.push.extension.distribution.basic.d.b.a = r0
            com.igexin.push.extension.distribution.basic.e.a r0 = new com.igexin.push.extension.distribution.basic.e.a
            android.content.Context r1 = com.igexin.push.extension.distribution.basic.c.e.a
            r0.<init>(r1)
            com.igexin.push.extension.distribution.basic.d.b.c = r0
        L14:
            com.igexin.push.extension.distribution.basic.d.b r0 = com.igexin.push.extension.distribution.basic.d.b.a
            return r0
    }

    public void a(int r3, java.lang.String r4) {
            r2 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            java.lang.String r1 = "key"
            r0.put(r1, r3)
            java.lang.String r3 = "value"
            r0.put(r3, r4)
            com.igexin.push.extension.distribution.basic.e.a r3 = com.igexin.push.extension.distribution.basic.d.b.c
            java.lang.String r4 = "extconfig"
            r1 = 0
            r3.a(r4, r1, r0)
            return
    }

    public void a(long r1) {
            r0 = this;
            com.igexin.push.extension.distribution.basic.c.e.i = r1
            java.lang.String r1 = java.lang.String.valueOf(r1)
            r2 = 6
            r0.a(r2, r1)
            return
    }

    public void b() {
            r4 = this;
            r0 = 0
            com.igexin.push.extension.distribution.basic.e.a r1 = com.igexin.push.extension.distribution.basic.c.e.e     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L65
            java.lang.String r2 = "select key, value from extconfig order by key"
            android.database.Cursor r0 = r1.a(r2, r0)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L65
            if (r0 == 0) goto L5b
        Lb:
            boolean r1 = r0.moveToNext()     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L65
            if (r1 == 0) goto L5b
            java.lang.String r1 = "key"
            int r1 = r0.getColumnIndex(r1)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L65
            int r1 = r0.getInt(r1)     // Catch: java.lang.Throwable -> L5e java.lang.Exception -> L65
            r2 = 11
            java.lang.String r3 = "value"
            if (r1 == r2) goto L33
            r2 = 12
            if (r1 == r2) goto L33
            r2 = 14
            if (r1 != r2) goto L2a
            goto L33
        L2a:
            int r2 = r0.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lb
            java.lang.String r2 = r0.getString(r2)     // Catch: java.lang.Throwable -> Lb
            goto L4a
        L33:
            int r2 = r0.getColumnIndex(r3)     // Catch: java.lang.Throwable -> Lb
            byte[] r2 = r0.getBlob(r2)     // Catch: java.lang.Throwable -> Lb
            if (r2 == 0) goto L41
            byte[] r2 = com.igexin.b.b.a.c(r2)     // Catch: java.lang.Throwable -> Lb
        L41:
            if (r2 != 0) goto L44
            goto Lb
        L44:
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Throwable -> Lb
            r3.<init>(r2)     // Catch: java.lang.Throwable -> Lb
            r2 = r3
        L4a:
            r3 = 4
            if (r1 == r3) goto L58
            r3 = 6
            if (r1 == r3) goto L51
            goto Lb
        L51:
            long r1 = java.lang.Long.parseLong(r2)     // Catch: java.lang.Throwable -> Lb
            com.igexin.push.extension.distribution.basic.c.e.i = r1     // Catch: java.lang.Throwable -> Lb
            goto Lb
        L58:
            com.igexin.push.extension.distribution.basic.c.e.d = r2     // Catch: java.lang.Throwable -> Lb
            goto Lb
        L5b:
            if (r0 == 0) goto L6a
            goto L67
        L5e:
            r1 = move-exception
            if (r0 == 0) goto L64
            r0.close()
        L64:
            throw r1
        L65:
            if (r0 == 0) goto L6a
        L67:
            r0.close()
        L6a:
            return
    }
}
