package com.xiaomi.push;

public class fl {
    private static long a;
    private static final byte[] a = null;
    private static java.lang.String b;
    int a;
    private com.xiaomi.push.dx.a a;
    public com.xiaomi.push.service.ao a;
    java.lang.String a;
    private short a;
    private byte[] b;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 5
            java.lang.String r1 = com.xiaomi.push.gy.a(r1)
            r0.append(r1)
            java.lang.String r1 = "-"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.xiaomi.push.fl.b = r0
            r0 = 0
            com.xiaomi.push.fl.a = r0
            r0 = 0
            byte[] r0 = new byte[r0]
            com.xiaomi.push.fl.a = r0
            return
    }

    public fl() {
            r1 = this;
            r1.<init>()
            r0 = 2
            r1.a = r0
            byte[] r0 = com.xiaomi.push.fl.a
            r1.b = r0
            r0 = 0
            r1.a = r0
            r1.a = r0
            com.xiaomi.push.dx$a r0 = new com.xiaomi.push.dx$a
            r0.<init>()
            r1.a = r0
            r0 = 1
            r1.a = r0
            return
    }

    fl(com.xiaomi.push.dx.a r3, short r4, byte[] r5) {
            r2 = this;
            r2.<init>()
            r0 = 2
            r2.a = r0
            byte[] r1 = com.xiaomi.push.fl.a
            r2.b = r1
            r1 = 0
            r2.a = r1
            r2.a = r1
            r2.a = r3
            r2.a = r4
            r2.b = r5
            r2.a = r0
            return
    }

    @java.lang.Deprecated
    public static com.xiaomi.push.fl a(com.xiaomi.push.gn r4, java.lang.String r5) {
            com.xiaomi.push.fl r0 = new com.xiaomi.push.fl
            r0.<init>()
            java.lang.String r1 = r4.k()     // Catch: java.lang.Exception -> Le
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.Exception -> Le
            goto L28
        Le:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Blob parse chid err "
            r2.append(r3)
            java.lang.String r1 = r1.getMessage()
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r1)
            r1 = 1
        L28:
            r0.a(r1)
            java.lang.String r1 = r4.j()
            r0.a(r1)
            java.lang.String r1 = r4.m()
            r0.c(r1)
            java.lang.String r1 = r4.n()
            r0.b(r1)
            r1 = 0
            java.lang.String r2 = "XMLMSG"
            r0.a(r2, r1)
            java.lang.String r4 = r4.a()     // Catch: java.io.UnsupportedEncodingException -> L68
            java.lang.String r2 = "utf8"
            byte[] r4 = r4.getBytes(r2)     // Catch: java.io.UnsupportedEncodingException -> L68
            r0.a(r4, r5)     // Catch: java.io.UnsupportedEncodingException -> L68
            boolean r4 = android.text.TextUtils.isEmpty(r5)     // Catch: java.io.UnsupportedEncodingException -> L68
            if (r4 == 0) goto L5e
            r4 = 3
            r0.a(r4)     // Catch: java.io.UnsupportedEncodingException -> L68
            goto L81
        L5e:
            r4 = 2
            r0.a(r4)     // Catch: java.io.UnsupportedEncodingException -> L68
            java.lang.String r4 = "SECMSG"
            r0.a(r4, r1)     // Catch: java.io.UnsupportedEncodingException -> L68
            goto L81
        L68:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r1 = "Blob setPayload err： "
            r5.append(r1)
            java.lang.String r4 = r4.getMessage()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r4)
        L81:
            return r0
    }

    static com.xiaomi.push.fl a(java.nio.ByteBuffer r7) {
            java.nio.ByteBuffer r7 = r7.slice()     // Catch: java.lang.Exception -> L35
            r0 = 0
            short r1 = r7.getShort(r0)     // Catch: java.lang.Exception -> L35
            r2 = 2
            short r2 = r7.getShort(r2)     // Catch: java.lang.Exception -> L35
            r3 = 4
            int r3 = r7.getInt(r3)     // Catch: java.lang.Exception -> L35
            com.xiaomi.push.dx$a r4 = new com.xiaomi.push.dx$a     // Catch: java.lang.Exception -> L35
            r4.<init>()     // Catch: java.lang.Exception -> L35
            byte[] r5 = r7.array()     // Catch: java.lang.Exception -> L35
            int r6 = r7.arrayOffset()     // Catch: java.lang.Exception -> L35
            int r6 = r6 + 8
            r4.a(r5, r6, r2)     // Catch: java.lang.Exception -> L35
            byte[] r5 = new byte[r3]     // Catch: java.lang.Exception -> L35
            int r2 = r2 + 8
            r7.position(r2)     // Catch: java.lang.Exception -> L35
            r7.get(r5, r0, r3)     // Catch: java.lang.Exception -> L35
            com.xiaomi.push.fl r7 = new com.xiaomi.push.fl     // Catch: java.lang.Exception -> L35
            r7.<init>(r4, r1, r5)     // Catch: java.lang.Exception -> L35
            return r7
        L35:
            r7 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "read Blob err :"
            r0.append(r1)
            java.lang.String r7 = r7.getMessage()
            r0.append(r7)
            java.lang.String r7 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r7)
            java.io.IOException r7 = new java.io.IOException
            java.lang.String r0 = "Malformed Input"
            r7.<init>(r0)
            throw r7
    }

    public static synchronized java.lang.String d() {
            java.lang.Class<com.xiaomi.push.fl> r0 = com.xiaomi.push.fl.class
            monitor-enter(r0)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L21
            r1.<init>()     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = com.xiaomi.push.fl.b     // Catch: java.lang.Throwable -> L21
            r1.append(r2)     // Catch: java.lang.Throwable -> L21
            long r2 = com.xiaomi.push.fl.a     // Catch: java.lang.Throwable -> L21
            r4 = 1
            long r4 = r4 + r2
            com.xiaomi.push.fl.a = r4     // Catch: java.lang.Throwable -> L21
            java.lang.String r2 = java.lang.Long.toString(r2)     // Catch: java.lang.Throwable -> L21
            r1.append(r2)     // Catch: java.lang.Throwable -> L21
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Throwable -> L21
            monitor-exit(r0)
            return r1
        L21:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    public int a() {
            r1 = this;
            com.xiaomi.push.dx$a r0 = r1.a
            int r0 = r0.c()
            return r0
    }

    public java.lang.String a() {
            r1 = this;
            com.xiaomi.push.dx$a r0 = r1.a
            java.lang.String r0 = r0.c()
            return r0
    }

    java.nio.ByteBuffer a(java.nio.ByteBuffer r6) {
            r5 = this;
            if (r6 != 0) goto La
            int r6 = r5.c()
            java.nio.ByteBuffer r6 = java.nio.ByteBuffer.allocate(r6)
        La:
            short r0 = r5.a
            r6.putShort(r0)
            com.xiaomi.push.dx$a r0 = r5.a
            int r0 = r0.a()
            short r0 = (short) r0
            r6.putShort(r0)
            byte[] r0 = r5.b
            int r0 = r0.length
            r6.putInt(r0)
            int r0 = r6.position()
            com.xiaomi.push.dx$a r1 = r5.a
            byte[] r2 = r6.array()
            int r3 = r6.arrayOffset()
            int r3 = r3 + r0
            com.xiaomi.push.dx$a r4 = r5.a
            int r4 = r4.a()
            r1.a(r2, r3, r4)
            com.xiaomi.push.dx$a r1 = r5.a
            int r1 = r1.a()
            int r0 = r0 + r1
            r6.position(r0)
            byte[] r0 = r5.b
            r6.put(r0)
            return r6
    }

    public short a() {
            r1 = this;
            short r0 = r1.a
            return r0
    }

    public void a(int r2) {
            r1 = this;
            com.xiaomi.push.dx$a r0 = r1.a
            r0.a(r2)
            return
    }

    public void a(long r3, java.lang.String r5, java.lang.String r6) {
            r2 = this;
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 == 0) goto Lb
            com.xiaomi.push.dx$a r0 = r2.a
            r0.a(r3)
        Lb:
            boolean r3 = android.text.TextUtils.isEmpty(r5)
            if (r3 != 0) goto L16
            com.xiaomi.push.dx$a r3 = r2.a
            r3.a(r5)
        L16:
            boolean r3 = android.text.TextUtils.isEmpty(r6)
            if (r3 != 0) goto L21
            com.xiaomi.push.dx$a r3 = r2.a
            r3.b(r6)
        L21:
            return
    }

    public void a(java.lang.String r2) {
            r1 = this;
            com.xiaomi.push.dx$a r0 = r1.a
            r0.e(r2)
            return
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1c
            com.xiaomi.push.dx$a r0 = r1.a
            r0.c(r2)
            com.xiaomi.push.dx$a r2 = r1.a
            r2.a()
            boolean r2 = android.text.TextUtils.isEmpty(r3)
            if (r2 != 0) goto L1b
            com.xiaomi.push.dx$a r2 = r1.a
            r2.d(r3)
        L1b:
            return
        L1c:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "command should not be empty"
            r2.<init>(r3)
            throw r2
    }

    public void a(short r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void a(byte[] r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 != 0) goto L1b
            com.xiaomi.push.dx$a r0 = r2.a
            r1 = 1
            r0.c(r1)
            java.lang.String r0 = r2.e()
            byte[] r4 = com.xiaomi.push.service.bp.a(r4, r0)
            byte[] r3 = com.xiaomi.push.service.bp.a(r4, r3)
            r2.b = r3
            goto L23
        L1b:
            com.xiaomi.push.dx$a r4 = r2.a
            r0 = 0
            r4.c(r0)
            r2.b = r3
        L23:
            return
    }

    public boolean a() {
            r1 = this;
            com.xiaomi.push.dx$a r0 = r1.a
            boolean r0 = r0.j()
            return r0
    }

    public byte[] a() {
            r1 = this;
            byte[] r0 = r1.b
            byte[] r0 = com.xiaomi.push.fm.a(r1, r0)
            return r0
    }

    public byte[] a(java.lang.String r3) {
            r2 = this;
            com.xiaomi.push.dx$a r0 = r2.a
            int r0 = r0.e()
            r1 = 1
            if (r0 != r1) goto L1c
            java.lang.String r0 = r2.e()
            byte[] r3 = com.xiaomi.push.service.bp.a(r3, r0)
            byte[] r0 = r2.b
            byte[] r3 = com.xiaomi.push.service.bp.a(r3, r0)
            byte[] r3 = com.xiaomi.push.fm.a(r2, r3)
            return r3
        L1c:
            com.xiaomi.push.dx$a r3 = r2.a
            int r3 = r3.e()
            if (r3 != 0) goto L2b
            byte[] r3 = r2.b
            byte[] r3 = com.xiaomi.push.fm.a(r2, r3)
            return r3
        L2b:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r0 = "unknow cipher = "
            r3.append(r0)
            com.xiaomi.push.dx$a r0 = r2.a
            int r0 = r0.e()
            r3.append(r0)
            java.lang.String r3 = r3.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r3)
            byte[] r3 = r2.b
            byte[] r3 = com.xiaomi.push.fm.a(r2, r3)
            return r3
    }

    public int b() {
            r1 = this;
            com.xiaomi.push.dx$a r0 = r1.a
            int r0 = r0.f()
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            com.xiaomi.push.dx$a r0 = r1.a
            java.lang.String r0 = r0.d()
            return r0
    }

    public void b(int r2) {
            r1 = this;
            com.xiaomi.push.service.ao r0 = new com.xiaomi.push.service.ao
            r0.<init>()
            r1.a = r0
            r0.a = r2
            return
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public int c() {
            r2 = this;
            com.xiaomi.push.dx$a r0 = r2.a
            int r0 = r0.b()
            int r0 = r0 + 8
            byte[] r1 = r2.b
            int r1 = r1.length
            int r0 = r0 + r1
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            com.xiaomi.push.dx$a r0 = r1.a
            java.lang.String r0 = r0.f()
            return r0
    }

    public void c(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L50
            java.lang.String r0 = "@"
            int r0 = r5.indexOf(r0)
            r1 = 0
            java.lang.String r1 = r5.substring(r1, r0)     // Catch: java.lang.Exception -> L37
            long r1 = java.lang.Long.parseLong(r1)     // Catch: java.lang.Exception -> L37
            java.lang.String r3 = "/"
            int r3 = r5.indexOf(r3, r0)     // Catch: java.lang.Exception -> L37
            int r0 = r0 + 1
            java.lang.String r0 = r5.substring(r0, r3)     // Catch: java.lang.Exception -> L37
            int r3 = r3 + 1
            java.lang.String r5 = r5.substring(r3)     // Catch: java.lang.Exception -> L37
            com.xiaomi.push.dx$a r3 = r4.a     // Catch: java.lang.Exception -> L37
            r3.a(r1)     // Catch: java.lang.Exception -> L37
            com.xiaomi.push.dx$a r1 = r4.a     // Catch: java.lang.Exception -> L37
            r1.a(r0)     // Catch: java.lang.Exception -> L37
            com.xiaomi.push.dx$a r0 = r4.a     // Catch: java.lang.Exception -> L37
            r0.b(r5)     // Catch: java.lang.Exception -> L37
            goto L50
        L37:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Blob parse user err "
            r0.append(r1)
            java.lang.String r5 = r5.getMessage()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r5)
        L50:
            return
    }

    public java.lang.String e() {
            r2 = this;
            com.xiaomi.push.dx$a r0 = r2.a
            java.lang.String r0 = r0.e()
            java.lang.String r1 = "ID_NOT_AVAILABLE"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L10
            r0 = 0
            return r0
        L10:
            com.xiaomi.push.dx$a r1 = r2.a
            boolean r1 = r1.g()
            if (r1 != 0) goto L21
            java.lang.String r0 = d()
            com.xiaomi.push.dx$a r1 = r2.a
            r1.e(r0)
        L21:
            return r0
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String g() {
            r3 = this;
            com.xiaomi.push.dx$a r0 = r3.a
            boolean r0 = r0.b()
            if (r0 == 0) goto L3b
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.xiaomi.push.dx$a r1 = r3.a
            long r1 = r1.a()
            java.lang.String r1 = java.lang.Long.toString(r1)
            r0.append(r1)
            java.lang.String r1 = "@"
            r0.append(r1)
            com.xiaomi.push.dx$a r1 = r3.a
            java.lang.String r1 = r1.a()
            r0.append(r1)
            java.lang.String r1 = "/"
            r0.append(r1)
            com.xiaomi.push.dx$a r1 = r3.a
            java.lang.String r1 = r1.b()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
        L3b:
            r0 = 0
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Blob [chid="
            r0.append(r1)
            int r1 = r2.a()
            r0.append(r1)
            java.lang.String r1 = "; Id="
            r0.append(r1)
            java.lang.String r1 = r2.e()
            r0.append(r1)
            java.lang.String r1 = "; cmd="
            r0.append(r1)
            java.lang.String r1 = r2.a()
            r0.append(r1)
            java.lang.String r1 = "; type="
            r0.append(r1)
            short r1 = r2.a()
            r0.append(r1)
            java.lang.String r1 = "; from="
            r0.append(r1)
            java.lang.String r1 = r2.g()
            r0.append(r1)
            java.lang.String r1 = " ]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
