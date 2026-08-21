package com.igexin.push.core.b;

public class e implements com.igexin.push.core.b.b {
    private static com.igexin.push.core.b.e a;
    private java.util.List<com.igexin.push.core.bean.h> b;

    private e() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.b = r0
            return
    }

    private int a(byte r4) {
            r3 = this;
            java.util.List<com.igexin.push.core.bean.h> r0 = r3.b
            java.util.Iterator r0 = r0.iterator()
            r1 = 0
        L7:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L1c
            java.lang.Object r2 = r0.next()
            com.igexin.push.core.bean.h r2 = (com.igexin.push.core.bean.h) r2
            byte r2 = r2.c()
            if (r2 != r4) goto L7
            int r1 = r1 + 1
            goto L7
        L1c:
            return r1
    }

    public static com.igexin.push.core.b.e a() {
            com.igexin.push.core.b.e r0 = com.igexin.push.core.b.e.a
            if (r0 != 0) goto Lb
            com.igexin.push.core.b.e r0 = new com.igexin.push.core.b.e
            r0.<init>()
            com.igexin.push.core.b.e.a = r0
        Lb:
            com.igexin.push.core.b.e r0 = com.igexin.push.core.b.e.a
            return r0
    }

    private com.igexin.push.core.bean.h a(long r5) {
            r4 = this;
            java.util.List<com.igexin.push.core.bean.h> r0 = r4.b
            java.util.Iterator r0 = r0.iterator()
        L6:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.igexin.push.core.bean.h r1 = (com.igexin.push.core.bean.h) r1
            long r2 = r1.a()
            int r2 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r2 != 0) goto L6
            return r1
        L1b:
            r5 = 0
            return r5
    }

    private static android.content.ContentValues b(com.igexin.push.core.bean.h r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            long r1 = r3.a()
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            java.lang.String r2 = "id"
            r0.put(r2, r1)
            java.lang.String r1 = r3.b()
            byte[] r1 = r1.getBytes()
            byte[] r1 = com.igexin.b.b.a.b(r1)
            java.lang.String r2 = "data"
            r0.put(r2, r1)
            byte r1 = r3.c()
            java.lang.Byte r1 = java.lang.Byte.valueOf(r1)
            java.lang.String r2 = "type"
            r0.put(r2, r1)
            long r1 = r3.d()
            java.lang.Long r3 = java.lang.Long.valueOf(r1)
            java.lang.String r1 = "time"
            r0.put(r1, r3)
            return r0
    }

    private void b(byte r5) {
            r4 = this;
            r0 = 0
            java.util.List<com.igexin.push.core.bean.h> r1 = r4.b     // Catch: java.lang.Throwable -> L24
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L24
        L7:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L24
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L24
            com.igexin.push.core.bean.h r2 = (com.igexin.push.core.bean.h) r2     // Catch: java.lang.Throwable -> L24
            byte r3 = r2.c()     // Catch: java.lang.Throwable -> L24
            if (r3 != r5) goto L7
            r0 = r2
        L1a:
            if (r0 == 0) goto L24
            long r0 = r0.a()     // Catch: java.lang.Throwable -> L24
            r5 = 1
            r4.a(r0, r5, r5)     // Catch: java.lang.Throwable -> L24
        L24:
            return
    }

    public void a(long r3, boolean r5, boolean r6) {
            r2 = this;
            com.igexin.push.core.bean.h r0 = r2.a(r3)
            if (r0 == 0) goto Lb
            java.util.List<com.igexin.push.core.bean.h> r1 = r2.b
            r1.remove(r0)
        Lb:
            if (r5 == 0) goto L1f
            com.igexin.b.a.b.c r5 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.g r1 = new com.igexin.push.core.b.g
            android.content.ContentValues r0 = b(r0)
            r1.<init>(r2, r0, r3)
            r3 = r6 ^ 1
            r5.a(r1, r6, r3)
        L1f:
            return
    }

    @Override
    public void a(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            return
    }

    public void a(com.igexin.push.core.bean.h r4) {
            r3 = this;
            if (r4 == 0) goto L6e
            java.util.List<com.igexin.push.core.bean.h> r0 = r3.b
            int r0 = r0.size()
            r1 = 319(0x13f, float:4.47E-43)
            if (r0 < r1) goto L23
            byte r0 = r4.c()
            r1 = 2
            if (r0 == r1) goto L23
            byte r0 = r4.c()
            r1 = 7
            if (r0 == r1) goto L23
            byte r0 = r4.c()
            r1 = 9
            if (r0 == r1) goto L23
            goto L6e
        L23:
            byte r0 = r4.c()
            r1 = 3
            switch(r0) {
                case 2: goto L50;
                case 3: goto L47;
                case 4: goto L2b;
                case 5: goto L3f;
                case 6: goto L35;
                case 7: goto L50;
                case 8: goto L2c;
                case 9: goto L50;
                default: goto L2b;
            }
        L2b:
            goto L57
        L2c:
            r0 = 8
            int r0 = r3.a(r0)
            if (r0 < r1) goto L57
            return
        L35:
            r0 = 6
            int r0 = r3.a(r0)
            r1 = 10
            if (r0 < r1) goto L57
            return
        L3f:
            r0 = 5
            int r0 = r3.a(r0)
            if (r0 < r1) goto L57
            return
        L47:
            int r0 = r3.a(r1)
            r1 = 300(0x12c, float:4.2E-43)
            if (r0 < r1) goto L57
            return
        L50:
            byte r0 = r4.c()
            r3.b(r0)
        L57:
            java.util.List<com.igexin.push.core.bean.h> r0 = r3.b
            r0.add(r4)
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.f r1 = new com.igexin.push.core.b.f
            android.content.ContentValues r4 = b(r4)
            r1.<init>(r3, r4)
            r4 = 0
            r2 = 1
            r0.a(r1, r4, r2)
        L6e:
            return
    }

    public boolean a(long r2, long r4) {
            r1 = this;
            com.igexin.push.core.bean.h r0 = r1.a(r2)
            if (r0 == 0) goto L1b
            r0.a(r4)
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.h r5 = new com.igexin.push.core.b.h
            android.content.ContentValues r0 = b(r0)
            r5.<init>(r1, r0, r2)
            r2 = 1
            r4.a(r5, r2, r2)
            return r2
        L1b:
            r2 = 0
            return r2
    }

    public java.util.List<com.igexin.push.core.bean.h> b() {
            r1 = this;
            java.util.List<com.igexin.push.core.bean.h> r0 = r1.b
            return r0
    }

    @Override
    public void b(android.database.sqlite.SQLiteDatabase r15) {
            r14 = this;
            r0 = 0
            java.lang.String r2 = "ral"
            java.lang.String r1 = "id"
            java.lang.String r3 = "data"
            java.lang.String r4 = "type"
            java.lang.String r5 = "time"
            java.lang.String[] r3 = new java.lang.String[]{r1, r3, r4, r5}     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            r4 = 0
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r1 = r15
            android.database.Cursor r0 = r1.query(r2, r3, r4, r5, r6, r7, r8)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            if (r0 == 0) goto L5c
        L1f:
            boolean r15 = r0.moveToNext()     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            if (r15 == 0) goto L5c
            r15 = 0
            long r4 = r0.getLong(r15)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            r15 = 2
            int r15 = r0.getInt(r15)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            byte r7 = (byte) r15     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            r15 = 3
            long r8 = r0.getLong(r15)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            long r10 = r1 - r8
            r12 = 259200000(0xf731400, double:1.280618154E-315)
            int r15 = (r10 > r12 ? 1 : (r10 == r12 ? 0 : -1))
            r3 = 1
            if (r15 <= 0) goto L43
            r14.a(r4, r3, r3)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            goto L1f
        L43:
            java.util.List<com.igexin.push.core.bean.h> r15 = r14.b     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            com.igexin.push.core.bean.h r10 = new com.igexin.push.core.bean.h     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            java.lang.String r6 = new java.lang.String     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            byte[] r3 = r0.getBlob(r3)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            byte[] r3 = com.igexin.b.b.a.c(r3)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            r6.<init>(r3)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            r3 = r10
            r3.<init>(r4, r6, r7, r8)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            r15.add(r10)     // Catch: java.lang.Throwable -> L5f java.lang.Exception -> L66
            goto L1f
        L5c:
            if (r0 == 0) goto L6b
            goto L68
        L5f:
            r15 = move-exception
            if (r0 == 0) goto L65
            r0.close()
        L65:
            throw r15
        L66:
            if (r0 == 0) goto L6b
        L68:
            r0.close()
        L6b:
            return
    }

    @Override
    public void c(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            return
    }
}
