package com.igexin.push.core.d;

class a implements com.igexin.push.core.d.c {
    static final byte[] a = null;
    private static final java.lang.String b = null;
    private java.lang.String c;
    private java.lang.String d;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "gt"
            r0.append(r1)
            java.lang.String r1 = android.os.Build.MODEL
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.core.d.a.b = r0
            r0 = 22
            byte[] r0 = new byte[r0]
            r0 = {x0020: FILL_ARRAY_DATA , data: [47, 115, 100, 99, 97, 114, 100, 47, 65, 110, 100, 114, 111, 105, 100, 47, 109, 101, 100, 105, 97, 47} // fill-array
            com.igexin.push.core.d.a.a = r0
            return
    }

    protected a() {
            r4 = this;
            r4.<init>()
            r0 = 0
            android.content.Context r1 = com.igexin.push.core.d.g     // Catch: java.lang.Throwable -> L63
            boolean r1 = r4.e(r1)     // Catch: java.lang.Throwable -> L63
            if (r1 != 0) goto Ld
            return
        Ld:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Throwable -> L63
            byte[] r3 = com.igexin.push.core.d.a.a     // Catch: java.lang.Throwable -> L63
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L63
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = "."
            r1.append(r2)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = com.igexin.push.core.d.a.b     // Catch: java.lang.Throwable -> L63
            int r2 = r2.hashCode()     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = java.lang.Integer.toHexString(r2)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = r2.toUpperCase()     // Catch: java.lang.Throwable -> L63
            r1.append(r2)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = "/"
            r1.append(r2)     // Catch: java.lang.Throwable -> L63
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L63
            r4.c = r1     // Catch: java.lang.Throwable -> L63
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L63
            r1.<init>()     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = "AndroidQSDStorage|dir = "
            r1.append(r2)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> L63
            r1.append(r2)     // Catch: java.lang.Throwable -> L63
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L63
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L63
            com.igexin.b.a.c.b.a(r1, r2)     // Catch: java.lang.Throwable -> L63
            java.io.File r1 = new java.io.File     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = r4.c     // Catch: java.lang.Throwable -> L63
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L63
            boolean r2 = r1.exists()     // Catch: java.lang.Throwable -> L63
            if (r2 != 0) goto L7a
            r1.mkdirs()     // Catch: java.lang.Throwable -> L63
            goto L7a
        L63:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "AndroidQSDStorage|e = "
            r2.append(r3)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r1, r0)
        L7a:
            return
    }

    private java.lang.String a(java.lang.String r2) {
            r1 = this;
            byte[] r2 = r2.getBytes()
            java.lang.String r0 = com.igexin.push.core.d.a.b
            byte[] r2 = com.igexin.b.a.a.a.d(r2, r0)
            java.lang.String r2 = com.igexin.b.a.c.a.a(r2)
            java.lang.String r2 = r2.toUpperCase()
            return r2
    }

    private java.lang.String b(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = new java.lang.String
            byte[] r3 = com.igexin.b.a.c.a.a(r3)
            java.lang.String r1 = com.igexin.push.core.d.a.b
            byte[] r3 = com.igexin.b.a.a.a.c(r3, r1)
            r0.<init>(r3)
            return r0
    }

    private void d(android.content.Context r3) {
            r2 = this;
            java.lang.String r0 = r2.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L36
            java.lang.String r3 = r3.getPackageName()
            byte[] r3 = r3.getBytes()
            java.lang.String r0 = com.igexin.push.core.d.a.b
            byte[] r3 = com.igexin.b.a.a.a.d(r3, r0)
            java.lang.String r3 = com.igexin.b.a.c.a.a(r3)
            java.lang.String r3 = r3.toUpperCase()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.c
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "/"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r2.d = r3
        L36:
            return
    }

    private boolean e(android.content.Context r2) {
            r1 = this;
            com.igexin.sdk.a.b r0 = new com.igexin.sdk.a.b
            r0.<init>(r2)
            boolean r2 = r0.a()
            return r2
    }

    @Override
    public java.lang.String a(android.content.Context r4) {
            r3 = this;
            boolean r4 = r3.e(r4)
            r0 = 0
            if (r4 != 0) goto L8
            return r0
        L8:
            java.io.File r4 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r3.c
            r1.append(r2)
            java.lang.String r2 = "di/"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r4.<init>(r1)
            boolean r1 = r4.exists()
            if (r1 != 0) goto L27
            return r0
        L27:
            java.io.File[] r4 = r4.listFiles()
            r1 = 0
            if (r4 == 0) goto L41
            int r2 = r4.length
            if (r2 != 0) goto L32
            goto L41
        L32:
            r4 = r4[r1]
            java.lang.String r1 = r4.getName()     // Catch: java.lang.Throwable -> L3d
            java.lang.String r4 = r3.b(r1)     // Catch: java.lang.Throwable -> L3d
            return r4
        L3d:
            r4.delete()
            return r0
        L41:
            java.lang.Object[] r4 = new java.lang.Object[r1]
            java.lang.String r1 = "AndroidQSDStorage|getDeviceId() childs = NULL"
            com.igexin.b.a.c.b.a(r1, r4)
            return r0
    }

    @Override
    public void a(android.content.Context r4, long r5) {
            r3 = this;
            boolean r0 = r3.e(r4)
            if (r0 != 0) goto L7
            return
        L7:
            r3.d(r4)
            java.io.File r4 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.d
            r0.append(r1)
            java.lang.String r1 = "ss"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            r1 = 0
            if (r0 != 0) goto L2f
            java.lang.String[] r5 = new java.lang.String[r1]
            com.igexin.push.util.c.a(r4, r5)
            return
        L2f:
            java.lang.String r5 = java.lang.String.valueOf(r5)
            java.lang.String r5 = r3.a(r5)
            java.io.File r6 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r4.getAbsolutePath()
            r0.append(r2)
            java.lang.String r2 = "/"
            r0.append(r2)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            r6.<init>(r0)
            boolean r0 = r6.exists()
            if (r0 != 0) goto L7e
            boolean r6 = r6.mkdirs()
            if (r6 == 0) goto L68
            r0 = 1
            java.lang.String[] r0 = new java.lang.String[r0]
            r0[r1] = r5
            com.igexin.push.util.c.a(r4, r0)
        L68:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "AndroidQSDStorage|saveSession() isCreated = "
            r4.append(r5)
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            java.lang.Object[] r5 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r4, r5)
        L7e:
            return
    }

    @Override
    public void a(android.content.Context r4, java.lang.String r5) {
            r3 = this;
            boolean r4 = r3.e(r4)
            if (r4 != 0) goto L7
            return
        L7:
            boolean r4 = android.text.TextUtils.isEmpty(r5)
            if (r4 == 0) goto Le
            return
        Le:
            java.lang.String r4 = r3.a(r5)
            java.io.File r5 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.c
            r0.append(r1)
            java.lang.String r1 = "di"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r5.getAbsolutePath()
            r1.append(r2)
            java.lang.String r2 = "/"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r1 = r1.toString()
            r0.<init>(r1)
            boolean r1 = r0.exists()
            if (r1 != 0) goto L72
            boolean r0 = r0.mkdirs()
            r1 = 0
            if (r0 == 0) goto L5c
            r2 = 1
            java.lang.String[] r2 = new java.lang.String[r2]
            r2[r1] = r4
            com.igexin.push.util.c.a(r5, r2)
        L5c:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "AndroidQSDStorage|saveDeviceId() isCreated = "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.Object[] r5 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r4, r5)
        L72:
            return
    }

    @Override
    public java.lang.String b(android.content.Context r4) {
            r3 = this;
            boolean r0 = r3.e(r4)
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            r3.d(r4)
            java.io.File r4 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = r3.d
            r0.append(r2)
            java.lang.String r2 = "c"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r4.<init>(r0)
            boolean r0 = r4.exists()
            if (r0 != 0) goto L2a
            return r1
        L2a:
            java.io.File[] r4 = r4.listFiles()
            r0 = 0
            if (r4 == 0) goto L44
            int r2 = r4.length
            if (r2 != 0) goto L35
            goto L44
        L35:
            r4 = r4[r0]
            java.lang.String r0 = r4.getName()     // Catch: java.lang.Throwable -> L40
            java.lang.String r4 = r3.b(r0)     // Catch: java.lang.Throwable -> L40
            return r4
        L40:
            r4.delete()
            return r1
        L44:
            java.lang.Object[] r4 = new java.lang.Object[r0]
            java.lang.String r0 = "AndroidQSDStorage|getCid() childs = NULL"
            com.igexin.b.a.c.b.a(r0, r4)
            return r1
    }

    @Override
    public void b(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            boolean r0 = r4.e(r5)
            if (r0 != 0) goto L7
            return
        L7:
            r4.d(r5)
            java.io.File r5 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.d
            r0.append(r1)
            java.lang.String r1 = "c"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            r1 = 0
            if (r0 == 0) goto L2f
            java.lang.String[] r6 = new java.lang.String[r1]
            com.igexin.push.util.c.a(r5, r6)
            return
        L2f:
            java.lang.String r6 = r4.a(r6)
            java.io.File r0 = new java.io.File
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = r5.getAbsolutePath()
            r2.append(r3)
            java.lang.String r3 = "/"
            r2.append(r3)
            r2.append(r6)
            java.lang.String r2 = r2.toString()
            r0.<init>(r2)
            boolean r2 = r0.exists()
            if (r2 != 0) goto L7a
            boolean r0 = r0.mkdirs()
            if (r0 == 0) goto L64
            r2 = 1
            java.lang.String[] r2 = new java.lang.String[r2]
            r2[r1] = r6
            com.igexin.push.util.c.a(r5, r2)
        L64:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "AndroidQSDStorage|saveCid() isCreated = "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r5 = r5.toString()
            java.lang.Object[] r6 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r5, r6)
        L7a:
            return
    }

    @Override
    public long c(android.content.Context r5) {
            r4 = this;
            boolean r0 = r4.e(r5)
            r1 = 0
            if (r0 != 0) goto L9
            return r1
        L9:
            r4.d(r5)
            java.io.File r5 = new java.io.File
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = r4.d
            r0.append(r3)
            java.lang.String r3 = "ss"
            r0.append(r3)
            java.lang.String r0 = r0.toString()
            r5.<init>(r0)
            boolean r0 = r5.exists()
            if (r0 != 0) goto L2b
            return r1
        L2b:
            java.io.File[] r5 = r5.listFiles()
            r0 = 0
            if (r5 == 0) goto L49
            int r3 = r5.length
            if (r3 != 0) goto L36
            goto L49
        L36:
            r5 = r5[r0]
            java.lang.String r0 = r5.getName()     // Catch: java.lang.Throwable -> L45
            java.lang.String r0 = r4.b(r0)     // Catch: java.lang.Throwable -> L45
            long r0 = java.lang.Long.parseLong(r0)     // Catch: java.lang.Throwable -> L45
            return r0
        L45:
            r5.delete()
            return r1
        L49:
            java.lang.Object[] r5 = new java.lang.Object[r0]
            java.lang.String r0 = "AndroidQSDStorage|getSession() childs = NULL"
            com.igexin.b.a.c.b.a(r0, r5)
            return r1
    }
}
