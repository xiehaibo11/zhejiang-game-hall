package com.igexin.push.core.b;

public class i implements com.igexin.push.core.b.b {
    private static final java.lang.String a = null;
    private static com.igexin.push.core.b.i b;
    private boolean c;

    static {
            java.lang.Class<com.igexin.push.core.b.i> r0 = com.igexin.push.core.b.i.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.core.b.i.a = r0
            return
    }

    private i() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.push.core.b.i a() {
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.b
            if (r0 != 0) goto Lb
            com.igexin.push.core.b.i r0 = new com.igexin.push.core.b.i
            r0.<init>()
            com.igexin.push.core.b.i.b = r0
        Lb:
            com.igexin.push.core.b.i r0 = com.igexin.push.core.b.i.b
            return r0
    }

    private void a(android.database.sqlite.SQLiteDatabase r3, int r4, java.lang.String r5) {
            r2 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r1 = "id"
            r0.put(r1, r4)
            java.lang.String r4 = "value"
            r0.put(r4, r5)
            java.lang.String r4 = "runtime"
            r5 = 0
            r3.replace(r4, r5, r0)
            return
    }

    private void a(android.database.sqlite.SQLiteDatabase r3, int r4, byte[] r5) {
            r2 = this;
            android.content.ContentValues r0 = new android.content.ContentValues
            r0.<init>()
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            java.lang.String r1 = "id"
            r0.put(r1, r4)
            java.lang.String r4 = "value"
            r0.put(r4, r5)
            java.lang.String r4 = "runtime"
            r5 = 0
            r3.replace(r4, r5, r0)
            return
    }

    static void a(com.igexin.push.core.b.i r0) {
            r0.g()
            return
    }

    static void a(com.igexin.push.core.b.i r0, android.database.sqlite.SQLiteDatabase r1, int r2, java.lang.String r3) {
            r0.a(r1, r2, r3)
            return
    }

    static void a(com.igexin.push.core.b.i r0, android.database.sqlite.SQLiteDatabase r1, int r2, byte[] r3) {
            r0.a(r1, r2, r3)
            return
    }

    private byte[] a(android.database.sqlite.SQLiteDatabase r11, int r12) {
            r10 = this;
            java.lang.String r0 = "value"
            r1 = 0
            java.lang.String r3 = "runtime"
            java.lang.String[] r4 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            r2.<init>()     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            java.lang.String r5 = "id="
            r2.append(r5)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            r2.append(r12)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r2 = r11
            android.database.Cursor r11 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L45 java.lang.Exception -> L4c
            if (r11 == 0) goto L42
            boolean r12 = r11.moveToFirst()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L4d
            if (r12 == 0) goto L42
            int r12 = r11.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L4d
            byte[] r12 = r11.getBlob(r12)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L4d
            java.lang.String r0 = com.igexin.push.core.d.E     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L4d
            byte[] r12 = com.igexin.b.a.a.a.c(r12, r0)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L4d
            if (r11 == 0) goto L3e
            r11.close()
        L3e:
            return r12
        L3f:
            r12 = move-exception
            r1 = r11
            goto L46
        L42:
            if (r11 == 0) goto L52
            goto L4f
        L45:
            r12 = move-exception
        L46:
            if (r1 == 0) goto L4b
            r1.close()
        L4b:
            throw r12
        L4c:
            r11 = r1
        L4d:
            if (r11 == 0) goto L52
        L4f:
            r11.close()
        L52:
            return r1
    }

    static byte[] a(com.igexin.push.core.b.i r0, java.lang.String r1) {
            byte[] r0 = r0.g(r1)
            return r0
    }

    private java.lang.String b(android.database.sqlite.SQLiteDatabase r11, int r12) {
            r10 = this;
            java.lang.String r0 = "value"
            r1 = 0
            java.lang.String r3 = "runtime"
            java.lang.String[] r4 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            r2.<init>()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            java.lang.String r5 = "id="
            r2.append(r5)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            r2.append(r12)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            r6 = 0
            r7 = 0
            r8 = 0
            r9 = 0
            r2 = r11
            android.database.Cursor r11 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L3f java.lang.Exception -> L46
            if (r11 == 0) goto L3c
            boolean r12 = r11.moveToFirst()     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L47
            if (r12 == 0) goto L3c
            int r12 = r11.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L47
            java.lang.String r12 = r11.getString(r12)     // Catch: java.lang.Throwable -> L39 java.lang.Exception -> L47
            if (r11 == 0) goto L38
            r11.close()
        L38:
            return r12
        L39:
            r12 = move-exception
            r1 = r11
            goto L40
        L3c:
            if (r11 == 0) goto L4c
            goto L49
        L3f:
            r12 = move-exception
        L40:
            if (r1 == 0) goto L45
            r1.close()
        L45:
            throw r12
        L46:
            r11 = r1
        L47:
            if (r11 == 0) goto L4c
        L49:
            r11.close()
        L4c:
            return r1
    }

    private void e() {
            r6 = this;
            java.lang.String r0 = "V"
            java.lang.String r1 = com.igexin.push.core.d.w
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            java.lang.String r3 = "|"
            r4 = 0
            if (r2 != 0) goto L15
            int r2 = r1.length()
            r5 = 8
            if (r2 > r5) goto L76
        L15:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L45
            r1.<init>()     // Catch: java.lang.Throwable -> L45
            r1.append(r0)     // Catch: java.lang.Throwable -> L45
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L45
            r2.<init>()     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = r6.h()     // Catch: java.lang.Throwable -> L45
            r2.append(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.String r5 = com.igexin.push.core.d.e     // Catch: java.lang.Throwable -> L45
            r2.append(r5)     // Catch: java.lang.Throwable -> L45
            java.util.UUID r5 = java.util.UUID.randomUUID()     // Catch: java.lang.Throwable -> L45
            r2.append(r5)     // Catch: java.lang.Throwable -> L45
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L45
            java.lang.String r2 = com.igexin.b.b.a.a(r2)     // Catch: java.lang.Throwable -> L45
            r1.append(r2)     // Catch: java.lang.Throwable -> L45
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L45
            goto L76
        L45:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = com.igexin.push.core.b.i.a
            r2.append(r5)
            r2.append(r3)
            java.lang.String r1 = r1.toString()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.Object[] r2 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = r6.h()
            r1.append(r0)
            java.lang.String r1 = r1.toString()
        L76:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "A-"
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.core.d.D = r0
            java.lang.String r0 = com.igexin.push.core.d.D
            int r0 = r0.length()
            r1 = 64
            if (r0 < r1) goto Lc8
            java.lang.String r0 = com.igexin.push.core.d.D     // Catch: java.lang.Throwable -> Laa
            r1 = 62
            java.lang.String r0 = r0.substring(r4, r1)     // Catch: java.lang.Throwable -> Laa
            com.igexin.push.core.d.D = r0     // Catch: java.lang.Throwable -> Laa
            goto Lc8
        Laa:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.core.b.i.a
            r1.append(r2)
            r1.append(r3)
            java.lang.String r0 = r0.toString()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            java.lang.Object[] r1 = new java.lang.Object[r4]
            com.igexin.b.a.c.b.a(r0, r1)
        Lc8:
            return
    }

    private void e(android.database.sqlite.SQLiteDatabase r11) {
            r10 = this;
            java.lang.String r0 = "value"
            r1 = 0
            java.lang.String r3 = "runtime"
            java.lang.String[] r4 = new java.lang.String[]{r0}     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            java.lang.String r5 = "id=?"
            java.lang.String r2 = "25"
            java.lang.String[] r6 = new java.lang.String[]{r2}     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            r7 = 0
            r8 = 0
            r9 = 0
            r2 = r11
            android.database.Cursor r1 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            if (r1 == 0) goto L3e
            boolean r11 = r1.moveToFirst()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            if (r11 == 0) goto L3e
            java.lang.String r11 = new java.lang.String     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            int r0 = r1.getColumnIndex(r0)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            byte[] r0 = r1.getBlob(r0)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            android.content.Context r2 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            java.lang.String r2 = com.igexin.b.b.a.a(r2)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            byte[] r0 = com.igexin.b.a.a.a.c(r0, r2)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            r11.<init>(r0)     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
            com.igexin.push.core.d.E = r11     // Catch: java.lang.Throwable -> L41 java.lang.Exception -> L48
        L3e:
            if (r1 == 0) goto L4d
            goto L4a
        L41:
            r11 = move-exception
            if (r1 == 0) goto L47
            r1.close()
        L47:
            throw r11
        L48:
            if (r1 == 0) goto L4d
        L4a:
            r1.close()
        L4d:
            java.lang.String r11 = com.igexin.push.core.d.E
            if (r11 != 0) goto L60
            java.lang.String r11 = com.igexin.push.core.d.w
            if (r11 != 0) goto L58
            java.lang.String r11 = "cantgetimei"
            goto L5a
        L58:
            java.lang.String r11 = com.igexin.push.core.d.w
        L5a:
            java.lang.String r11 = com.igexin.b.b.a.a(r11)
            com.igexin.push.core.d.E = r11
        L60:
            return
    }

    private void f(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            r0 = 2
            java.lang.String r2 = r1.b(r2, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L16
            java.lang.String r0 = "null"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L14
            r2 = 0
        L14:
            com.igexin.push.core.d.A = r2
        L16:
            return
    }

    private boolean f() {
            r4 = this;
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.y r1 = new com.igexin.push.core.b.y
            r1.<init>(r4)
            r2 = 0
            r3 = 1
            boolean r0 = r0.a(r1, r2, r3)
            return r0
    }

    private void g() {
            r4 = this;
            com.igexin.push.core.d.d r0 = com.igexin.push.core.d.d.a()
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.String r2 = com.igexin.push.core.d.u
            r0.b(r1, r2)
            com.igexin.push.core.d.d r0 = com.igexin.push.core.d.d.a()
            android.content.Context r1 = com.igexin.push.core.d.g
            long r2 = com.igexin.push.core.d.t
            r0.a(r1, r2)
            java.lang.String r0 = com.igexin.push.util.c.c()
            if (r0 == 0) goto L23
            int r0 = r0.length()
            r1 = 5
            if (r0 > r1) goto L26
        L23:
            com.igexin.push.util.c.e()
        L26:
            return
    }

    private void g(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            r0 = 46
            java.lang.String r2 = r1.b(r2, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L17
            java.lang.String r0 = "null"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L15
            r2 = 0
        L15:
            com.igexin.push.core.d.B = r2
        L17:
            return
    }

    private byte[] g(java.lang.String r1) {
            r0 = this;
            byte[] r1 = r1.getBytes()
            byte[] r1 = com.igexin.push.util.EncryptUtils.getBytesEncrypted(r1)
            return r1
    }

    private java.lang.String h() {
            r4 = this;
            java.util.Random r0 = new java.util.Random
            java.util.Random r1 = new java.util.Random
            r1.<init>()
            long r1 = r1.nextLong()
            long r1 = java.lang.Math.abs(r1)
            r0.<init>(r1)
            java.lang.String r1 = ""
            r2 = 0
        L15:
            r3 = 15
            if (r2 >= r3) goto L31
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r1)
            r1 = 10
            int r1 = r0.nextInt(r1)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            int r2 = r2 + 1
            goto L15
        L31:
            return r1
    }

    private void h(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            r0 = 48
            java.lang.String r2 = r1.b(r2, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L17
            java.lang.String r0 = "null"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L15
            r2 = 0
        L15:
            com.igexin.push.core.d.C = r2
        L17:
            return
    }

    private void i(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            r0 = 3
            java.lang.String r2 = r1.b(r2, r0)
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L16
            java.lang.String r0 = "null"
            boolean r0 = r2.equals(r0)
            if (r0 == 0) goto L14
            r2 = 0
        L14:
            com.igexin.push.core.d.D = r2
        L16:
            return
    }

    private void j(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            r0 = 1
            byte[] r3 = r2.a(r3, r0)
            if (r3 == 0) goto L3b
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L1d
            r0.<init>(r3)     // Catch: java.lang.Exception -> L1d
            java.lang.String r3 = "null"
            boolean r3 = r0.equals(r3)     // Catch: java.lang.Exception -> L1d
            if (r3 == 0) goto L17
            r0 = 0
            goto L1b
        L17:
            long r0 = java.lang.Long.parseLong(r0)     // Catch: java.lang.Exception -> L1d
        L1b:
            com.igexin.push.core.d.t = r0     // Catch: java.lang.Exception -> L1d
        L1d:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = com.igexin.push.core.b.i.a
            r3.append(r0)
            java.lang.String r0 = "|db version changed, save session = "
            r3.append(r0)
            long r0 = com.igexin.push.core.d.t
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r3, r0)
        L3b:
            return
    }

    private void k(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            r0 = 20
            byte[] r3 = r2.a(r3, r0)
            if (r3 == 0) goto L36
            java.lang.String r0 = new java.lang.String
            r0.<init>(r3)
            java.lang.String r3 = "null"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L16
            r0 = 0
        L16:
            com.igexin.push.core.d.v = r0
            com.igexin.push.core.d.u = r0
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = com.igexin.push.core.b.i.a
            r3.append(r1)
            java.lang.String r1 = "|db version changed, save cid = "
            r3.append(r1)
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r3, r0)
        L36:
            return
    }

    @Override
    public void a(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            return
    }

    public boolean a(int r4) {
            r3 = this;
            com.igexin.push.core.d.P = r4
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.o r0 = new com.igexin.push.core.b.o
            r0.<init>(r3)
            r1 = 0
            r2 = 1
            boolean r4 = r4.a(r0, r1, r2)
            return r4
    }

    public boolean a(long r3) {
            r2 = this;
            com.igexin.push.core.d.a(r3)
            com.igexin.b.a.b.c r3 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.z r4 = new com.igexin.push.core.b.z
            r4.<init>(r2)
            r0 = 0
            r1 = 1
            boolean r3 = r3.a(r4, r0, r1)
            return r3
    }

    public boolean a(java.lang.String r4) {
            r3 = this;
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.x r1 = new com.igexin.push.core.b.x
            r1.<init>(r3, r4)
            r4 = 0
            r2 = 1
            boolean r4 = r0.a(r1, r4, r2)
            return r4
    }

    public boolean a(java.lang.String r1, java.lang.String r2, long r3) {
            r0 = this;
            com.igexin.push.core.d.t = r3
            java.lang.String r3 = com.igexin.push.core.d.A
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto Lc
            com.igexin.push.core.d.A = r2
        Lc:
            com.igexin.push.core.d.u = r1
            boolean r1 = r0.f()
            return r1
    }

    public boolean a(java.lang.String r5, boolean r6) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            r1 = 1
            r2 = 0
            java.lang.String r3 = "null"
            if (r6 == 0) goto L2a
            java.lang.String r6 = com.igexin.push.core.d.ah
            boolean r6 = r5.equals(r6)
            if (r6 != 0) goto L46
            boolean r6 = r5.equals(r3)
            if (r6 == 0) goto L19
            goto L1a
        L19:
            r2 = r5
        L1a:
            com.igexin.push.core.d.ah = r2
            com.igexin.b.a.b.c r6 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.p r2 = new com.igexin.push.core.b.p
            r2.<init>(r4, r5)
        L25:
            boolean r5 = r6.a(r2, r0, r1)
            return r5
        L2a:
            java.lang.String r6 = com.igexin.push.core.d.ai
            boolean r6 = r5.equals(r6)
            if (r6 != 0) goto L46
            boolean r6 = r5.equals(r3)
            if (r6 == 0) goto L39
            goto L3a
        L39:
            r2 = r5
        L3a:
            com.igexin.push.core.d.ai = r2
            com.igexin.b.a.b.c r6 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.q r2 = new com.igexin.push.core.b.q
            r2.<init>(r4, r5)
            goto L25
        L46:
            return r0
    }

    public boolean a(boolean r4) {
            r3 = this;
            boolean r0 = com.igexin.push.core.d.K
            r1 = 0
            if (r0 == r4) goto L1b
            com.igexin.push.core.d.K = r4
            if (r4 != 0) goto Lc
            com.igexin.push.f.a.k()
        Lc:
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.l r0 = new com.igexin.push.core.b.l
            r0.<init>(r3)
            r2 = 1
            boolean r4 = r4.a(r0, r1, r2)
            return r4
        L1b:
            return r1
    }

    public void b() {
            r4 = this;
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.j r1 = new com.igexin.push.core.b.j
            r1.<init>(r4)
            r2 = 0
            r3 = 1
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public void b(android.database.sqlite.SQLiteDatabase r22) {
            r21 = this;
            r1 = r21
            r10 = r22
            java.lang.String r11 = "null"
            r21.e(r22)
            r13 = 14
            r9 = 20
            r8 = 1
            r16 = 0
            r7 = 0
            r18 = 0
            java.lang.String r3 = "runtime"
            java.lang.String r0 = "id"
            java.lang.String r2 = "value"
            java.lang.String[] r4 = new java.lang.String[]{r0, r2}     // Catch: java.lang.Throwable -> L306 java.lang.Exception -> L30d
            r5 = 0
            r6 = 0
            r0 = 0
            r19 = 0
            java.lang.String r20 = "id"
            r2 = r22
            r15 = r7
            r7 = r0
            r14 = r8
            r8 = r19
            r12 = r9
            r9 = r20
            android.database.Cursor r2 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> L306 java.lang.Exception -> L310
            if (r2 == 0) goto L303
        L34:
            boolean r0 = r2.moveToNext()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L303
            int r0 = r2.getInt(r15)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r3 = 31
            r4 = 30
            if (r0 == r14) goto L6d
            if (r0 == r13) goto L6d
            r5 = 19
            if (r0 == r5) goto L6d
            if (r0 == r12) goto L6d
            r5 = 23
            if (r0 == r5) goto L6d
            r5 = 25
            if (r0 == r5) goto L6d
            r5 = 22
            if (r0 == r5) goto L6d
            if (r0 == r3) goto L6d
            if (r0 == r4) goto L6d
            r5 = 49
            if (r0 == r5) goto L6d
            r5 = 50
            if (r0 != r5) goto L65
            goto L6d
        L65:
            java.lang.String r5 = r2.getString(r14)     // Catch: java.lang.Throwable -> L2dd
            r6 = r5
            r5 = r18
            goto L7b
        L6d:
            byte[] r5 = r2.getBlob(r14)     // Catch: java.lang.Throwable -> L2dd
            if (r5 == 0) goto L79
            java.lang.String r6 = com.igexin.push.core.d.E     // Catch: java.lang.Throwable -> L2dd
            byte[] r5 = com.igexin.b.a.a.a.c(r5, r6)     // Catch: java.lang.Throwable -> L2dd
        L79:
            r6 = r18
        L7b:
            if (r5 != 0) goto L80
            if (r6 != 0) goto L80
            goto L34
        L80:
            if (r0 == r14) goto L2c3
            r7 = 2
            if (r0 == r7) goto L2b7
            r7 = 3
            if (r0 == r7) goto L2ab
            r7 = 4
            if (r0 == r7) goto L297
            r7 = 6
            if (r0 == r7) goto L286
            r7 = 40
            if (r0 == r7) goto L26e
            if (r0 == r4) goto L240
            if (r0 == r3) goto L212
            switch(r0) {
                case 13: goto L206;
                case 14: goto L1fd;
                case 15: goto L1ef;
                case 16: goto L1de;
                case 17: goto L1d2;
                case 18: goto L1c2;
                case 19: goto L1b1;
                case 20: goto L19e;
                case 21: goto L18d;
                case 22: goto L15f;
                case 23: goto L131;
                default: goto L99;
            }
        L99:
            switch(r0) {
                case 46: goto L125;
                case 47: goto L115;
                case 48: goto L109;
                case 49: goto Ldb;
                case 50: goto Lad;
                case 51: goto L9d;
                default: goto L9c;
            }
        L9c:
            goto L34
        L9d:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto La6
            r3 = r16
            goto Laa
        La6:
            long r3 = java.lang.Long.parseLong(r6)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
        Laa:
            com.igexin.push.core.d.T = r3     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        Lad:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            boolean r3 = r0.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r3 == 0) goto Lba
            r0 = r18
        Lba:
            com.igexin.push.core.d.ak = r0     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.b.i.a     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = "|read last mobileRedirectCmList = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.d.ak     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.Object[] r3 = new java.lang.Object[r15]     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        Ldb:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            boolean r3 = r0.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r3 == 0) goto Le8
            r0 = r18
        Le8:
            com.igexin.push.core.d.aj = r0     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.b.i.a     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = "|read last wifiRedirectCmList = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.d.aj     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.Object[] r3 = new java.lang.Object[r15]     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L109:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L111
            r6 = r18
        L111:
            com.igexin.push.core.d.C = r6     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L115:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L11d
            r7 = r15
            goto L121
        L11d:
            int r7 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
        L121:
            com.igexin.push.core.d.am = r7     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L125:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L12d
            r6 = r18
        L12d:
            com.igexin.push.core.d.B = r6     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L131:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            boolean r3 = r0.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r3 == 0) goto L13e
            r0 = r18
        L13e:
            com.igexin.push.core.d.af = r0     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.b.i.a     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = "|DT_ read last mobile result = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.d.af     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.Object[] r3 = new java.lang.Object[r15]     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L15f:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            boolean r3 = r0.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r3 == 0) goto L16c
            r0 = r18
        L16c:
            com.igexin.push.core.d.ag = r0     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.b.i.a     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = "|DT_ read last wifi result = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.d.ag     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.Object[] r3 = new java.lang.Object[r15]     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L18d:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L196
            r3 = r16
            goto L19a
        L196:
            long r3 = java.lang.Long.parseLong(r6)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
        L19a:
            com.igexin.push.core.d.ae = r3     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L19e:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            boolean r3 = r0.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r3 == 0) goto L1ab
            r0 = r18
        L1ab:
            com.igexin.push.core.d.v = r0     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            com.igexin.push.core.d.u = r0     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L1b1:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            boolean r3 = r0.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r3 == 0) goto L1be
            r0 = r18
        L1be:
            com.igexin.push.core.d.z = r0     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L1c2:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L1ca
            r7 = r15
            goto L1ce
        L1ca:
            int r7 = java.lang.Integer.parseInt(r6)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
        L1ce:
            com.igexin.push.core.d.P = r7     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L1d2:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L1da
            r6 = r18
        L1da:
            com.igexin.push.core.d.N = r6     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L1de:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L1e7
            r3 = r16
            goto L1eb
        L1e7:
            long r3 = java.lang.Long.parseLong(r6)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
        L1eb:
            com.igexin.push.core.d.L = r3     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L1ef:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 != 0) goto L34
            boolean r0 = java.lang.Boolean.parseBoolean(r6)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            com.igexin.push.core.d.K = r0     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L1fd:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            com.igexin.push.core.d.ad = r0     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L206:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L20e
            r6 = r18
        L20e:
            com.igexin.push.core.d.J = r6     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L212:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            boolean r3 = r0.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r3 == 0) goto L21f
            r0 = r18
        L21f:
            com.igexin.push.core.d.ah = r0     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.b.i.a     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = "|DT_ read last domainMobileStatus = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.d.ah     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.Object[] r3 = new java.lang.Object[r15]     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L240:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            boolean r3 = r0.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r3 == 0) goto L24d
            r0 = r18
        L24d:
            com.igexin.push.core.d.ai = r0     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.b.i.a     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = "|DT_ read last domainWifiStatus = "
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r3 = com.igexin.push.core.d.ai     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.append(r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.Object[] r3 = new java.lang.Object[r15]     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L26e:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 != 0) goto L27c
            boolean r0 = java.lang.Boolean.parseBoolean(r6)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L27c
            r8 = r14
            goto L27d
        L27c:
            r8 = r15
        L27d:
            com.igexin.push.d.b r0 = com.igexin.push.d.b.a()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.a(r8)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L286:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L28f
            r3 = r16
            goto L293
        L28f:
            long r3 = java.lang.Long.parseLong(r6)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
        L293:
            com.igexin.push.core.d.H = r3     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L297:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 != 0) goto L2a6
            boolean r0 = java.lang.Boolean.parseBoolean(r6)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L2a4
            goto L2a6
        L2a4:
            r8 = r15
            goto L2a7
        L2a6:
            r8 = r14
        L2a7:
            com.igexin.push.core.d.m = r8     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L2ab:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L2b3
            r6 = r18
        L2b3:
            com.igexin.push.core.d.D = r6     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L2b7:
            boolean r0 = r6.equals(r11)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            if (r0 == 0) goto L2bf
            r6 = r18
        L2bf:
            com.igexin.push.core.d.A = r6     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L2c3:
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r0.<init>(r5)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            boolean r3 = r0.equals(r11)     // Catch: java.lang.Exception -> L2d9 java.lang.Throwable -> L2ff
            if (r3 == 0) goto L2d1
            r3 = r16
            goto L2d5
        L2d1:
            long r3 = java.lang.Long.parseLong(r0)     // Catch: java.lang.Exception -> L2d9 java.lang.Throwable -> L2ff
        L2d5:
            com.igexin.push.core.d.t = r3     // Catch: java.lang.Exception -> L2d9 java.lang.Throwable -> L2ff
            goto L34
        L2d9:
            com.igexin.push.core.d.t = r16     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L2dd:
            r0 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r3.<init>()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r4 = com.igexin.push.core.b.i.a     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r3.append(r4)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r4 = "|"
            r3.append(r4)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            r3.append(r0)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.String r0 = r3.toString()     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            java.lang.Object[] r3 = new java.lang.Object[r15]     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            com.igexin.b.a.c.b.a(r0, r3)     // Catch: java.lang.Throwable -> L2ff java.lang.Exception -> L312
            goto L34
        L2ff:
            r0 = move-exception
            r18 = r2
            goto L307
        L303:
            if (r2 == 0) goto L317
            goto L314
        L306:
            r0 = move-exception
        L307:
            if (r18 == 0) goto L30c
            r18.close()
        L30c:
            throw r0
        L30d:
            r15 = r7
            r14 = r8
            r12 = r9
        L310:
            r2 = r18
        L312:
            if (r2 == 0) goto L317
        L314:
            r2.close()
        L317:
            long r2 = com.igexin.push.core.d.t
            int r0 = (r2 > r16 ? 1 : (r2 == r16 ? 0 : -1))
            if (r0 != 0) goto L336
            long r2 = com.igexin.push.util.c.d()
            int r0 = (r2 > r16 ? 1 : (r2 == r16 ? 0 : -1))
            if (r0 == 0) goto L336
            com.igexin.push.core.d.t = r2
            java.lang.String r0 = java.lang.String.valueOf(r2)
            byte[] r0 = r0.getBytes()
            byte[] r0 = com.igexin.push.util.EncryptUtils.getBytesEncrypted(r0)
            r1.a(r10, r14, r0)
        L336:
            java.lang.String r0 = com.igexin.push.core.d.u
            if (r0 != 0) goto L351
            java.lang.String r0 = com.igexin.push.util.c.b()
            if (r0 == 0) goto L351
            com.igexin.push.core.d.v = r0
            com.igexin.push.core.d.u = r0
            java.lang.String r0 = com.igexin.push.core.d.u
            byte[] r0 = r0.getBytes()
            byte[] r0 = com.igexin.push.util.EncryptUtils.getBytesEncrypted(r0)
            r1.a(r10, r12, r0)
        L351:
            java.lang.String r0 = com.igexin.push.core.d.u
            if (r0 != 0) goto L379
            long r2 = com.igexin.push.core.d.t
            int r0 = (r2 > r16 ? 1 : (r2 == r16 ? 0 : -1))
            if (r0 == 0) goto L379
            long r2 = com.igexin.push.core.d.t
            java.lang.String r0 = java.lang.String.valueOf(r2)
            java.lang.String r0 = com.igexin.b.b.a.a(r0)
            com.igexin.push.core.d.v = r0
            long r2 = com.igexin.push.core.d.t
            com.igexin.push.core.d.a(r2)
            java.lang.String r0 = com.igexin.push.core.d.u
            byte[] r0 = r0.getBytes()
            byte[] r0 = com.igexin.push.util.EncryptUtils.getBytesEncrypted(r0)
            r1.a(r10, r12, r0)
        L379:
            java.lang.String r0 = com.igexin.push.core.d.u
            java.lang.String r2 = "cfcd208495d565ef66e7dff9f98764da"
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L391
            java.lang.String r0 = com.igexin.push.core.d.u
            if (r0 == 0) goto L3ae
            java.lang.String r0 = com.igexin.push.core.d.u
            java.lang.String r2 = "([a-f]|[0-9]){32}"
            boolean r0 = r0.matches(r2)
            if (r0 != 0) goto L3ae
        L391:
            long r2 = com.igexin.push.core.d.t
            int r0 = (r2 > r16 ? 1 : (r2 == r16 ? 0 : -1))
            if (r0 == 0) goto L3a8
            com.igexin.push.core.b.i r0 = a()
            long r2 = com.igexin.push.core.d.t
            r0.a(r2)
            java.lang.String r0 = com.igexin.push.core.d.u
            com.igexin.push.core.d.v = r0
            com.igexin.push.util.c.f()
            goto L3ae
        L3a8:
            com.igexin.push.core.d.v = r18
            com.igexin.push.core.d.u = r11
            com.igexin.push.core.d.t = r16
        L3ae:
            java.lang.String r0 = com.igexin.push.core.d.ad
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3be
            java.lang.String r0 = com.igexin.push.core.d.ad
            boolean r0 = r11.equals(r0)
            if (r0 == 0) goto L3d3
        L3be:
            r0 = 32
            java.lang.String r0 = com.igexin.b.b.a.a(r0)
            com.igexin.push.core.d.ad = r0
            java.lang.String r0 = com.igexin.push.core.d.ad
            byte[] r0 = r0.getBytes()
            byte[] r0 = com.igexin.push.util.EncryptUtils.getBytesEncrypted(r0)
            r1.a(r10, r13, r0)
        L3d3:
            java.lang.String r0 = com.igexin.push.util.c.c()
            java.lang.String r2 = com.igexin.push.core.d.A
            r3 = 5
            if (r2 != 0) goto L3ec
            if (r0 == 0) goto L3ec
            int r2 = r0.length()
            if (r2 <= r3) goto L3ec
            com.igexin.push.core.d.A = r0
            java.lang.String r0 = com.igexin.push.core.d.A
            r2 = 2
            r1.a(r10, r2, r0)
        L3ec:
            java.lang.String r0 = com.igexin.push.core.d.D
            if (r0 != 0) goto L411
            r21.e()
            java.lang.String r0 = com.igexin.push.core.d.D
            r2 = 3
            r1.a(r10, r2, r0)
            java.lang.String r0 = com.igexin.push.core.b.i.a
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r4 = "new registerId : "
            r2.append(r4)
            java.lang.String r4 = com.igexin.push.core.d.D
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            com.igexin.b.a.c.b.a(r0, r2)
        L411:
            boolean r0 = r1.c
            if (r0 == 0) goto L4a6
            r1.c = r15
            java.lang.String r0 = com.igexin.push.core.d.E
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L438
            java.lang.String r0 = com.igexin.push.core.d.E
            byte[] r0 = r0.getBytes()
            android.content.Context r2 = com.igexin.push.core.d.g
            java.lang.String r2 = r2.getPackageName()
            java.lang.String r2 = com.igexin.b.b.a.a(r2)
            byte[] r0 = com.igexin.b.a.a.a.d(r0, r2)
            r2 = 25
            r1.a(r10, r2, r0)
        L438:
            long r4 = com.igexin.push.core.d.t
            int r0 = (r4 > r16 ? 1 : (r4 == r16 ? 0 : -1))
            if (r0 == 0) goto L44f
            long r4 = com.igexin.push.core.d.t
            java.lang.String r0 = java.lang.String.valueOf(r4)
            byte[] r0 = r0.getBytes()
            byte[] r0 = com.igexin.push.util.EncryptUtils.getBytesEncrypted(r0)
            r1.a(r10, r14, r0)
        L44f:
            java.lang.String r0 = com.igexin.push.core.d.u
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L464
            java.lang.String r0 = com.igexin.push.core.d.u
            byte[] r0 = r0.getBytes()
            byte[] r0 = com.igexin.push.util.EncryptUtils.getBytesEncrypted(r0)
            r1.a(r10, r12, r0)
        L464:
            java.lang.String r0 = com.igexin.push.core.d.A
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L47a
            java.lang.String r0 = com.igexin.push.core.d.A
            int r0 = r0.length()
            if (r0 <= r3) goto L47a
            java.lang.String r0 = com.igexin.push.core.d.A
            r2 = 2
            r1.a(r10, r2, r0)
        L47a:
            java.lang.String r0 = com.igexin.push.core.d.D
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L488
            java.lang.String r0 = com.igexin.push.core.d.D
            r2 = 3
            r1.a(r10, r2, r0)
        L488:
            java.lang.String r0 = com.igexin.push.core.d.B
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L497
            r0 = 46
            java.lang.String r2 = com.igexin.push.core.d.B
            r1.a(r10, r0, r2)
        L497:
            java.lang.String r0 = com.igexin.push.core.d.C
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4a6
            r0 = 48
            java.lang.String r2 = com.igexin.push.core.d.C
            r1.a(r10, r0, r2)
        L4a6:
            return
    }

    public boolean b(int r4) {
            r3 = this;
            int r0 = com.igexin.push.core.d.am
            r1 = 0
            if (r0 == r4) goto L16
            com.igexin.push.core.d.am = r4
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.u r0 = new com.igexin.push.core.b.u
            r0.<init>(r3)
            r2 = 1
            boolean r4 = r4.a(r0, r1, r2)
            return r4
        L16:
            return r1
    }

    public boolean b(long r4) {
            r3 = this;
            com.igexin.push.core.d.ae = r4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.core.b.i.a
            r0.append(r1)
            java.lang.String r1 = "|save idc config failed time : "
            r0.append(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.ad r2 = new com.igexin.push.core.b.ad
            r2.<init>(r3, r4)
            r4 = 1
            boolean r4 = r0.a(r2, r1, r4)
            return r4
    }

    public boolean b(java.lang.String r4) {
            r3 = this;
            com.igexin.push.core.d.A = r4
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.aa r0 = new com.igexin.push.core.b.aa
            r0.<init>(r3)
            r1 = 0
            r2 = 1
            boolean r4 = r4.a(r0, r1, r2)
            return r4
    }

    public boolean b(java.lang.String r5, boolean r6) {
            r4 = this;
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            r1 = 1
            r2 = 0
            java.lang.String r3 = "null"
            if (r6 == 0) goto L2a
            java.lang.String r6 = com.igexin.push.core.d.af
            boolean r6 = r5.equals(r6)
            if (r6 != 0) goto L46
            boolean r6 = r5.equals(r3)
            if (r6 == 0) goto L19
            goto L1a
        L19:
            r2 = r5
        L1a:
            com.igexin.push.core.d.af = r2
            com.igexin.b.a.b.c r6 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.r r2 = new com.igexin.push.core.b.r
            r2.<init>(r4, r5)
        L25:
            boolean r5 = r6.a(r2, r0, r1)
            return r5
        L2a:
            java.lang.String r6 = com.igexin.push.core.d.ag
            boolean r6 = r5.equals(r6)
            if (r6 != 0) goto L46
            boolean r6 = r5.equals(r3)
            if (r6 == 0) goto L39
            goto L3a
        L39:
            r2 = r5
        L3a:
            com.igexin.push.core.d.ag = r2
            com.igexin.b.a.b.c r6 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.s r2 = new com.igexin.push.core.b.s
            r2.<init>(r4, r5)
            goto L25
        L46:
            return r0
    }

    public boolean b(boolean r4) {
            r3 = this;
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.v r1 = new com.igexin.push.core.b.v
            r1.<init>(r3, r4)
            r4 = 0
            r2 = 1
            boolean r4 = r0.a(r1, r4, r2)
            return r4
    }

    public void c() {
            r2 = this;
            r0 = 0
            com.igexin.push.core.d.t = r0
            java.lang.String r0 = "null"
            com.igexin.push.core.d.u = r0
            r2.f()
            return
    }

    @Override
    public void c(android.database.sqlite.SQLiteDatabase r3) {
            r2 = this;
            long r0 = com.igexin.push.core.d.t
            java.lang.String r0 = java.lang.String.valueOf(r0)
            byte[] r0 = r0.getBytes()
            java.lang.String r1 = com.igexin.push.core.d.E
            byte[] r0 = com.igexin.b.a.a.a.d(r0, r1)
            r1 = 1
            r2.a(r3, r1, r0)
            boolean r0 = com.igexin.push.core.d.m
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1 = 4
            r2.a(r3, r1, r0)
            java.lang.String r0 = com.igexin.push.core.d.D
            r1 = 3
            r2.a(r3, r1, r0)
            java.lang.String r0 = com.igexin.push.core.d.u
            byte[] r0 = r0.getBytes()
            java.lang.String r1 = com.igexin.push.core.d.E
            byte[] r0 = com.igexin.b.a.a.a.d(r0, r1)
            r1 = 20
            r2.a(r3, r1, r0)
            java.lang.String r0 = com.igexin.push.core.d.A
            r1 = 2
            r2.a(r3, r1, r0)
            java.lang.String r0 = com.igexin.push.core.d.E
            byte[] r0 = r0.getBytes()
            android.content.Context r1 = com.igexin.push.core.d.g
            java.lang.String r1 = r1.getPackageName()
            java.lang.String r1 = com.igexin.b.b.a.a(r1)
            byte[] r0 = com.igexin.b.a.a.a.d(r0, r1)
            r1 = 25
            r2.a(r3, r1, r0)
            return
    }

    public boolean c(long r3) {
            r2 = this;
            long r0 = com.igexin.push.core.d.L
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            r1 = 0
            if (r0 == 0) goto L18
            com.igexin.push.core.d.L = r3
            com.igexin.b.a.b.c r3 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.m r4 = new com.igexin.push.core.b.m
            r4.<init>(r2)
            r0 = 1
            boolean r3 = r3.a(r4, r1, r0)
            return r3
        L18:
            return r1
    }

    public boolean c(java.lang.String r4) {
            r3 = this;
            com.igexin.push.core.d.B = r4
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.ab r0 = new com.igexin.push.core.b.ab
            r0.<init>(r3)
            r1 = 0
            r2 = 1
            boolean r4 = r4.a(r0, r1, r2)
            return r4
    }

    public boolean c(java.lang.String r4, boolean r5) {
            r3 = this;
            r0 = 0
            if (r4 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "null"
            boolean r1 = r4.equals(r1)
            if (r1 == 0) goto Le
            r1 = 0
            goto Lf
        Le:
            r1 = r4
        Lf:
            if (r5 == 0) goto L1c
            java.lang.String r2 = com.igexin.push.core.d.ak
            boolean r2 = android.text.TextUtils.equals(r2, r4)
            if (r2 != 0) goto L1c
            com.igexin.push.core.d.ak = r1
            goto L28
        L1c:
            if (r5 != 0) goto L5a
            java.lang.String r2 = com.igexin.push.core.d.aj
            boolean r2 = android.text.TextUtils.equals(r2, r4)
            if (r2 != 0) goto L5a
            com.igexin.push.core.d.aj = r1
        L28:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = com.igexin.push.core.b.i.a
            r1.append(r2)
            java.lang.String r2 = "|saveLastRedirectCmList isMobile = "
            r1.append(r2)
            r1.append(r5)
            java.lang.String r2 = ", lastRedirectCmList = "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            java.lang.Object[] r2 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r2)
            com.igexin.b.a.b.c r1 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.w r2 = new com.igexin.push.core.b.w
            r2.<init>(r3, r5, r4)
            r4 = 1
            boolean r4 = r1.a(r2, r0, r4)
            return r4
        L5a:
            return r0
    }

    public void d() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.core.b.i.a
            r0.append(r1)
            java.lang.String r1 = "| found a duplicate cid "
            r0.append(r1)
            java.lang.String r1 = com.igexin.push.core.d.u
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r1 = 0
            java.lang.Object[] r2 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r2)
            r0 = 0
            com.igexin.push.core.d.D = r0
            r3.e()
            com.igexin.push.core.b.i r0 = a()
            java.lang.String r2 = com.igexin.push.core.d.D
            r0.a(r2)
            com.igexin.push.core.b.i r0 = a()
            r0.c()
            com.igexin.push.core.d.q = r1
            com.igexin.push.f.b.f r0 = com.igexin.push.f.b.f.i()
            long r1 = android.os.SystemClock.elapsedRealtime()
            r0.a(r1)
            return
    }

    public void d(android.database.sqlite.SQLiteDatabase r2) {
            r1 = this;
            r0 = 1
            r1.c = r0
            r1.e(r2)
            r1.j(r2)
            r1.k(r2)
            r1.i(r2)
            r1.f(r2)
            r1.g(r2)
            r1.h(r2)
            return
    }

    public boolean d(long r3) {
            r2 = this;
            long r0 = com.igexin.push.core.d.H
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            r1 = 0
            if (r0 == 0) goto L18
            com.igexin.push.core.d.H = r3
            com.igexin.b.a.b.c r3 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.t r4 = new com.igexin.push.core.b.t
            r4.<init>(r2)
            r0 = 1
            boolean r3 = r3.a(r4, r1, r0)
            return r3
        L18:
            return r1
    }

    public boolean d(java.lang.String r4) {
            r3 = this;
            com.igexin.push.core.d.C = r4
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.ac r0 = new com.igexin.push.core.b.ac
            r0.<init>(r3)
            r1 = 0
            r2 = 1
            boolean r4 = r4.a(r0, r1, r2)
            return r4
    }

    public boolean e(java.lang.String r4) {
            r3 = this;
            r0 = 0
            if (r4 == 0) goto L1b
            java.lang.String r1 = com.igexin.push.core.d.J
            boolean r1 = r4.equals(r1)
            if (r1 != 0) goto L1b
            com.igexin.push.core.d.J = r4
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.k r1 = new com.igexin.push.core.b.k
            r1.<init>(r3)
            r2 = 1
            r4.a(r1, r0, r2)
            return r2
        L1b:
            return r0
    }

    public boolean f(java.lang.String r4) {
            r3 = this;
            java.lang.String r0 = com.igexin.push.core.d.N
            boolean r0 = r4.equals(r0)
            r1 = 0
            if (r0 != 0) goto L1a
            com.igexin.push.core.d.N = r4
            com.igexin.b.a.b.c r4 = com.igexin.b.a.b.c.b()
            com.igexin.push.core.b.n r0 = new com.igexin.push.core.b.n
            r0.<init>(r3)
            r2 = 1
            boolean r4 = r4.a(r0, r1, r2)
            return r4
        L1a:
            return r1
    }
}
