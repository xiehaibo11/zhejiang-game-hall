package com.mbridge.msdk.foundation.same.net;

public abstract class i<T> implements java.lang.Comparable<com.mbridge.msdk.foundation.same.net.i<T>> {
    private static final java.lang.String c = null;
    protected java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> a;
    protected com.mbridge.msdk.foundation.same.net.e<T> b;
    private final int d;
    private final java.lang.String e;
    private java.lang.Integer f;
    private com.mbridge.msdk.foundation.same.net.j g;
    private boolean h;
    private com.mbridge.msdk.foundation.same.net.l i;
    private int j;

    static {
            java.lang.Class<com.mbridge.msdk.foundation.same.net.i> r0 = com.mbridge.msdk.foundation.same.net.i.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.foundation.same.net.i.c = r0
            return
    }

    public i(int r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.a = r0
            r0 = 0
            r1.b = r0
            r0 = 0
            r1.h = r0
            r0 = 2
            r1.j = r0
            r1.e = r3
            r1.d = r2
            com.mbridge.msdk.foundation.same.net.b r2 = new com.mbridge.msdk.foundation.same.net.b
            r2.<init>()
            r1.i = r2
            return
    }

    public i(int r2, java.lang.String r3, com.mbridge.msdk.foundation.same.net.e<T> r4) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.a = r0
            r0 = 0
            r1.b = r0
            r0 = 0
            r1.h = r0
            r0 = 2
            r1.j = r0
            r1.e = r3
            r1.d = r2
            r1.b = r4
            com.mbridge.msdk.foundation.same.net.b r2 = new com.mbridge.msdk.foundation.same.net.b
            r2.<init>()
            r1.i = r2
            return
    }

    private byte[] a(com.mbridge.msdk.foundation.same.net.e.b r6) throws java.io.IOException, com.mbridge.msdk.foundation.same.net.a.a {
            r5 = this;
            r0 = 0
            java.io.InputStream r1 = r6.c()     // Catch: java.lang.Throwable -> L5b
            java.util.List r6 = r6.b()     // Catch: java.lang.Throwable -> L56
            boolean r6 = com.mbridge.msdk.foundation.same.net.f.b.b(r6)     // Catch: java.lang.Throwable -> L56
            if (r6 == 0) goto L19
            boolean r6 = r1 instanceof java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L56
            if (r6 != 0) goto L19
            java.util.zip.GZIPInputStream r6 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L56
            r6.<init>(r1)     // Catch: java.lang.Throwable -> L56
            r1 = r6
        L19:
            if (r1 == 0) goto L4f
            java.io.ByteArrayOutputStream r6 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L56
            r6.<init>()     // Catch: java.lang.Throwable -> L56
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L4a
        L24:
            int r2 = r1.read(r0)     // Catch: java.lang.Throwable -> L4a
            r3 = -1
            if (r2 == r3) goto L30
            r3 = 0
            r6.write(r0, r3, r2)     // Catch: java.lang.Throwable -> L4a
            goto L24
        L30:
            byte[] r0 = r6.toByteArray()     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L3c
            r1.close()     // Catch: java.io.IOException -> L3a
            goto L3c
        L3a:
            r6 = move-exception
            goto L40
        L3c:
            r6.close()     // Catch: java.io.IOException -> L3a
            goto L49
        L40:
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.i.c
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r6)
        L49:
            return r0
        L4a:
            r0 = move-exception
            r4 = r1
            r1 = r6
            r6 = r0
            goto L59
        L4f:
            com.mbridge.msdk.foundation.same.net.a.a r6 = new com.mbridge.msdk.foundation.same.net.a.a     // Catch: java.lang.Throwable -> L56
            r2 = 7
            r6.<init>(r2, r0)     // Catch: java.lang.Throwable -> L56
            throw r6     // Catch: java.lang.Throwable -> L56
        L56:
            r6 = move-exception
            r4 = r1
            r1 = r0
        L59:
            r0 = r4
            goto L5d
        L5b:
            r6 = move-exception
            r1 = r0
        L5d:
            if (r0 == 0) goto L65
            r0.close()     // Catch: java.io.IOException -> L63
            goto L65
        L63:
            r0 = move-exception
            goto L6b
        L65:
            if (r1 == 0) goto L74
            r1.close()     // Catch: java.io.IOException -> L63
            goto L74
        L6b:
            java.lang.String r1 = com.mbridge.msdk.foundation.same.net.i.c
            java.lang.String r0 = r0.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r0)
        L74:
            throw r6
    }

    public final int a() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public final com.mbridge.msdk.foundation.same.net.i<?> a(int r1) {
            r0 = this;
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.f = r1
            return r0
    }

    public final com.mbridge.msdk.foundation.same.net.i<?> a(com.mbridge.msdk.foundation.same.net.j r1) {
            r0 = this;
            r0.g = r1
            return r0
    }

    public final com.mbridge.msdk.foundation.same.net.i<?> a(com.mbridge.msdk.foundation.same.net.l r1) {
            r0 = this;
            r0.i = r1
            return r0
    }

    protected abstract com.mbridge.msdk.foundation.same.net.k<T> a(com.mbridge.msdk.foundation.same.net.e.c r1);

    public final void a(long r2, long r4) {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.onProgressChange(r2, r4)
        L7:
            return
    }

    public final void a(com.mbridge.msdk.foundation.same.net.a.a r2) {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.onError(r2)
        L7:
            return
    }

    public final void a(com.mbridge.msdk.foundation.same.net.e<T> r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(com.mbridge.msdk.foundation.same.net.k<T> r2) {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.onSuccess(r2)
        L7:
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            com.mbridge.msdk.foundation.same.net.j r1 = r0.g
            if (r1 == 0) goto L7
            r1.b(r0)
        L7:
            return
    }

    public final void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = r1.a
            r0.remove(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = r1.a
            r0.put(r2, r3)
            return
    }

    public byte[] a(com.mbridge.msdk.foundation.same.net.e.b r1, com.mbridge.msdk.foundation.same.net.c r2) throws java.io.IOException, com.mbridge.msdk.foundation.same.net.a.a {
            r0 = this;
            java.io.InputStream r2 = r1.c()
            if (r2 == 0) goto Lb
            byte[] r1 = r0.a(r1)
            return r1
        Lb:
            r1 = 0
            byte[] r1 = new byte[r1]
            return r1
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public final void b(int r2) {
            r1 = this;
            r0 = 1
            if (r2 < r0) goto L8
            r0 = 4
            if (r2 > r0) goto L8
            r1.j = r2
        L8:
            return
    }

    public final boolean c() {
            r1 = this;
            boolean r0 = r1.h
            return r0
    }

    @Override
    public int compareTo(java.lang.Object r3) {
            r2 = this;
            com.mbridge.msdk.foundation.same.net.i r3 = (com.mbridge.msdk.foundation.same.net.i) r3
            int r0 = r2.g()
            int r1 = r3.g()
            if (r0 != r1) goto L1a
            java.lang.Integer r0 = r2.f
            int r0 = r0.intValue()
            java.lang.Integer r3 = r3.f
            int r3 = r3.intValue()
            int r0 = r0 - r3
            goto L1c
        L1a:
            int r0 = r1 - r0
        L1c:
            return r0
    }

    public final java.util.Map<java.lang.String, java.lang.String> d() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = r1.a
            return r0
    }

    public byte[] e() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final void f() {
            r2 = this;
            java.lang.String r0 = "Charset"
            java.lang.String r1 = "UTF-8"
            r2.a(r0, r1)
            java.lang.String r0 = "Connection"
            java.lang.String r1 = "close"
            r2.a(r0, r1)
            return
    }

    public int g() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    public final int h() {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.l r0 = r1.i     // Catch: java.lang.Exception -> L7
            int r0 = r0.b()     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = 10
            return r0
    }

    public final int i() {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.l r0 = r1.i     // Catch: java.lang.Exception -> L7
            int r0 = r0.d()     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = 10
            return r0
    }

    public final int j() {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.l r0 = r1.i     // Catch: java.lang.Exception -> L7
            int r0 = r0.e()     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = 10
            return r0
    }

    public final int k() {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.l r0 = r1.i     // Catch: java.lang.Exception -> L7
            int r0 = r0.f()     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = 10
            return r0
    }

    public final int l() {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.l r0 = r1.i     // Catch: java.lang.Exception -> L7
            int r0 = r0.g()     // Catch: java.lang.Exception -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    public final com.mbridge.msdk.foundation.same.net.l m() {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.l r0 = r1.i
            return r0
    }

    public final void n() {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.onCancel()
        L7:
            return
    }

    public final void o() {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.onPreExecute()
        L7:
            return
    }

    public final void p() {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.onFinish()
        L7:
            return
    }

    public final void q() {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.onRetry()
        L7:
            return
    }

    public final void r() {
            r1 = this;
            com.mbridge.msdk.foundation.same.net.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.onNetworking()
        L7:
            return
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            boolean r1 = r3.h
            if (r1 == 0) goto Lc
            java.lang.String r1 = "[X] "
            goto Le
        Lc:
            java.lang.String r1 = "[ ] "
        Le:
            r0.append(r1)
            java.lang.String r1 = r3.e
            r0.append(r1)
            java.lang.String r1 = " "
            r0.append(r1)
            int r2 = r3.g()
            r0.append(r2)
            r0.append(r1)
            java.lang.Integer r1 = r3.f
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
