package com.igexin.push.config;

public class a implements com.igexin.push.core.b.b {
    public static final java.lang.String a = null;
    private static com.igexin.push.config.a b;

    static {
            java.lang.Class<com.igexin.push.config.a> r0 = com.igexin.push.config.a.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.config.a.a = r0
            return
    }

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.push.config.a a() {
            com.igexin.push.config.a r0 = com.igexin.push.config.a.b
            if (r0 != 0) goto Lb
            com.igexin.push.config.a r0 = new com.igexin.push.config.a
            r0.<init>()
            com.igexin.push.config.a.b = r0
        Lb:
            com.igexin.push.config.a r0 = com.igexin.push.config.a.b
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
            java.lang.String r4 = "config"
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
            java.lang.String r4 = "config"
            r5 = 0
            r3.replace(r4, r5, r0)
            return
    }

    static void a(com.igexin.push.config.a r0, android.database.sqlite.SQLiteDatabase r1, int r2, java.lang.String r3) {
            r0.a(r1, r2, r3)
            return
    }

    static void a(com.igexin.push.config.a r0, android.database.sqlite.SQLiteDatabase r1, int r2, byte[] r3) {
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public void a(android.database.sqlite.SQLiteDatabase r1) {
            r0 = this;
            return
    }

    public void a(java.lang.String r4) {
            r3 = this;
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.config.f r1 = new com.igexin.push.config.f
            r1.<init>(r3, r4)
            r4 = 1
            r2 = 0
            r0.a(r1, r4, r2)
            return
    }

    public void b() {
            r4 = this;
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.config.b r1 = new com.igexin.push.config.b
            r1.<init>(r4)
            r2 = 0
            r3 = 1
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public void b(android.database.sqlite.SQLiteDatabase r11) {
            r10 = this;
            r0 = 0
            r1 = 0
            java.lang.String r3 = "config"
            java.lang.String r2 = "id"
            java.lang.String r4 = "value"
            java.lang.String[] r4 = new java.lang.String[]{r2, r4}     // Catch: java.lang.Throwable -> Lea
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            java.lang.String r9 = "id"
            r2 = r11
            android.database.Cursor r11 = r2.query(r3, r4, r5, r6, r7, r8, r9)     // Catch: java.lang.Throwable -> Lea
            if (r11 == 0) goto Le4
        L19:
            boolean r2 = r11.moveToNext()     // Catch: java.lang.Throwable -> Le2
            if (r2 == 0) goto Le4
            int r2 = r11.getInt(r1)     // Catch: java.lang.Throwable -> Le2
            r3 = 26
            r4 = 24
            r5 = 1
            if (r2 == r4) goto L38
            if (r2 == r3) goto L38
            r6 = 64
            if (r2 != r6) goto L31
            goto L38
        L31:
            java.lang.String r6 = r11.getString(r5)     // Catch: java.lang.Throwable -> Lc0
            r7 = r6
            r6 = r0
            goto L45
        L38:
            byte[] r6 = r11.getBlob(r5)     // Catch: java.lang.Throwable -> Lc0
            if (r6 == 0) goto L44
            java.lang.String r7 = com.igexin.push.core.d.E     // Catch: java.lang.Throwable -> Lc0
            byte[] r6 = com.igexin.b.a.a.a.c(r6, r7)     // Catch: java.lang.Throwable -> Lc0
        L44:
            r7 = r0
        L45:
            if (r6 != 0) goto L4a
            if (r7 != 0) goto L4a
            goto L19
        L4a:
            java.lang.String r8 = "null"
            if (r2 == r5) goto Lb2
            r5 = 2
            if (r2 == r5) goto La4
            r5 = 3
            if (r2 == r5) goto L96
            r5 = 15
            if (r2 == r5) goto L89
            r5 = 16
            if (r2 == r5) goto L7c
            if (r2 == r4) goto L73
            if (r2 == r3) goto L61
            goto L19
        L61:
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> Le2
            r2.<init>(r6)     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> Le2
            org.json.JSONArray r3 = new org.json.JSONArray     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> Le2
            r3.<init>(r2)     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> Le2
            java.lang.String[] r2 = com.igexin.push.core.a.q.a(r3)     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> Le2
            com.igexin.push.config.SDKUrlConfig.setIdcConfigUrl(r2)     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> Le2
            goto L19
        L73:
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> Le2
            r2.<init>(r6)     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> Le2
            com.igexin.push.config.l.a(r2, r1)     // Catch: java.lang.Exception -> L19 java.lang.Throwable -> Le2
            goto L19
        L7c:
            boolean r2 = r7.equals(r8)     // Catch: java.lang.Throwable -> Le2
            if (r2 != 0) goto L19
            int r2 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Throwable -> Le2
            com.igexin.push.config.j.e = r2     // Catch: java.lang.Throwable -> Le2
            goto L19
        L89:
            boolean r2 = r7.equals(r8)     // Catch: java.lang.Throwable -> Le2
            if (r2 != 0) goto L19
            int r2 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Throwable -> Le2
            com.igexin.push.config.j.d = r2     // Catch: java.lang.Throwable -> Le2
            goto L19
        L96:
            boolean r2 = r7.equals(r8)     // Catch: java.lang.Throwable -> Le2
            if (r2 != 0) goto L19
            long r2 = java.lang.Long.parseLong(r7)     // Catch: java.lang.Throwable -> Le2
            com.igexin.push.config.j.c = r2     // Catch: java.lang.Throwable -> Le2
            goto L19
        La4:
            boolean r2 = r7.equals(r8)     // Catch: java.lang.Throwable -> Le2
            if (r2 != 0) goto L19
            int r2 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Throwable -> Le2
            com.igexin.push.config.j.b = r2     // Catch: java.lang.Throwable -> Le2
            goto L19
        Lb2:
            boolean r2 = r7.equals(r8)     // Catch: java.lang.Throwable -> Le2
            if (r2 != 0) goto L19
            int r2 = java.lang.Integer.parseInt(r7)     // Catch: java.lang.Throwable -> Le2
            com.igexin.push.config.j.a = r2     // Catch: java.lang.Throwable -> Le2
            goto L19
        Lc0:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Le2
            r3.<init>()     // Catch: java.lang.Throwable -> Le2
            java.lang.String r4 = com.igexin.push.config.a.a     // Catch: java.lang.Throwable -> Le2
            r3.append(r4)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r4 = "|"
            r3.append(r4)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> Le2
            r3.append(r2)     // Catch: java.lang.Throwable -> Le2
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> Le2
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> Le2
            com.igexin.b.a.c.b.a(r2, r3)     // Catch: java.lang.Throwable -> Le2
            goto L19
        Le2:
            r0 = r11
            goto Lea
        Le4:
            if (r11 == 0) goto Lef
            r11.close()
            goto Lef
        Lea:
            if (r0 == 0) goto Lef
            r0.close()
        Lef:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r0 = com.igexin.push.config.a.a
            r11.append(r0)
            java.lang.String r0 = "|current ver = "
            r11.append(r0)
            java.lang.String r0 = "4.6.4.0"
            r11.append(r0)
            java.lang.String r2 = ", last ver = "
            r11.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.J
            r11.append(r2)
            java.lang.String r11 = r11.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r11, r1)
            java.lang.String r11 = com.igexin.push.core.d.J
            boolean r11 = r0.equals(r11)
            if (r11 != 0) goto L125
            com.igexin.push.core.b.i r11 = com.igexin.push.core.b.i.a()
            r11.e(r0)
        L125:
            return
    }

    public void b(java.lang.String r4) {
            r3 = this;
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.config.g r1 = new com.igexin.push.config.g
            r1.<init>(r3, r4)
            r4 = 1
            r2 = 0
            r0.a(r1, r4, r2)
            return
    }

    public void c() {
            r4 = this;
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.config.c r1 = new com.igexin.push.config.c
            r1.<init>(r4)
            r2 = 0
            r3 = 1
            r0.a(r1, r2, r3)
            return
    }

    @Override
    public void c(android.database.sqlite.SQLiteDatabase r5) {
            r4 = this;
            int r0 = com.igexin.push.config.j.a
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1 = 1
            r4.a(r5, r1, r0)
            int r0 = com.igexin.push.config.j.b
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1 = 2
            r4.a(r5, r1, r0)
            long r0 = com.igexin.push.config.j.c
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1 = 3
            r4.a(r5, r1, r0)
            int r0 = com.igexin.push.config.j.d
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r2 = 15
            r4.a(r5, r2, r0)
            long r2 = com.igexin.push.config.j.c
            java.lang.String r0 = java.lang.String.valueOf(r2)
            r4.a(r5, r1, r0)
            return
    }

    public void d() {
            r4 = this;
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.config.d r1 = new com.igexin.push.config.d
            r1.<init>(r4)
            r2 = 0
            r3 = 1
            r0.a(r1, r2, r3)
            return
    }

    public void e() {
            r4 = this;
            com.igexin.b.a.b.c r0 = com.igexin.b.a.b.c.b()
            com.igexin.push.config.e r1 = new com.igexin.push.config.e
            r1.<init>(r4)
            r2 = 0
            r3 = 1
            r0.a(r1, r2, r3)
            return
    }
}
