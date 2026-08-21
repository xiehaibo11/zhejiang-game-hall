package com.tkay.expressad.foundation.g.f;

public abstract class i<T> implements java.lang.Comparable<com.tkay.expressad.foundation.g.f.i<T>> {
    private static final java.lang.String c = null;
    protected java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> a;
    protected com.tkay.expressad.foundation.g.f.e<T> b;
    private final int d;
    private final java.lang.String e;
    private java.lang.Integer f;
    private com.tkay.expressad.foundation.g.f.j g;
    private boolean h;
    private com.tkay.expressad.foundation.g.f.l i;
    private java.lang.Object j;

    public interface a {
        public static final int a = 0;
        public static final int b = 1;
        public static final int c = 2;
        public static final int d = 3;
        public static final int e = 4;
        public static final int f = 5;
        public static final int g = 6;
        public static final int h = 7;
    }

    public class b {
        public static final int a = 1;
        public static final int b = 2;
        public static final int c = 3;
        public static final int d = 4;
        final com.tkay.expressad.foundation.g.f.i e;

        private b(com.tkay.expressad.foundation.g.f.i r1) {
                r0 = this;
                r0.e = r1
                r0.<init>()
                return
        }
    }

    static {
            java.lang.Class<com.tkay.expressad.foundation.g.f.i> r0 = com.tkay.expressad.foundation.g.f.i.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.foundation.g.f.i.c = r0
            return
    }

    public i(int r2, java.lang.String r3, com.tkay.expressad.foundation.g.f.e<T> r4) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.a = r0
            r0 = 0
            r1.b = r0
            r0 = 0
            r1.h = r0
            r1.e = r3
            r1.d = r2
            r1.b = r4
            com.tkay.expressad.foundation.g.f.b r2 = new com.tkay.expressad.foundation.g.f.b
            r2.<init>()
            r1.i = r2
            return
    }

    public i(java.lang.String r2) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.a = r0
            r0 = 0
            r1.b = r0
            r0 = 0
            r1.h = r0
            r1.e = r2
            r1.d = r0
            com.tkay.expressad.foundation.g.f.b r2 = new com.tkay.expressad.foundation.g.f.b
            r2.<init>()
            r1.i = r2
            return
    }

    private int a(com.tkay.expressad.foundation.g.f.i<T> r3) {
            r2 = this;
            int r0 = r2.j()
            int r1 = r3.j()
            if (r0 != r1) goto L18
            java.lang.Integer r0 = r2.f
            int r0 = r0.intValue()
            java.lang.Integer r3 = r3.f
            int r3 = r3.intValue()
            int r0 = r0 - r3
            return r0
        L18:
            int r1 = r1 - r0
            return r1
    }

    protected static com.tkay.expressad.foundation.g.f.a.a a(com.tkay.expressad.foundation.g.f.a.a r0) {
            return r0
    }

    private com.tkay.expressad.foundation.g.f.i<?> a(java.lang.Object r1) {
            r0 = this;
            r0.j = r1
            return r0
    }

    private void a(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = r1.a
            r0.remove(r2)
            return
    }

    private static byte[] a(com.tkay.expressad.foundation.g.f.f.b r5) {
            r0 = 0
            java.io.InputStream r1 = r5.c()     // Catch: java.lang.Throwable -> L53
            java.util.List r5 = r5.b()     // Catch: java.lang.Throwable -> L4e
            boolean r5 = com.tkay.expressad.foundation.g.f.g.e.b(r5)     // Catch: java.lang.Throwable -> L4e
            if (r5 == 0) goto L19
            boolean r5 = r1 instanceof java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L4e
            if (r5 != 0) goto L19
            java.util.zip.GZIPInputStream r5 = new java.util.zip.GZIPInputStream     // Catch: java.lang.Throwable -> L4e
            r5.<init>(r1)     // Catch: java.lang.Throwable -> L4e
            r1 = r5
        L19:
            if (r1 == 0) goto L47
            java.io.ByteArrayOutputStream r5 = new java.io.ByteArrayOutputStream     // Catch: java.lang.Throwable -> L4e
            r5.<init>()     // Catch: java.lang.Throwable -> L4e
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L42
        L24:
            int r2 = r1.read(r0)     // Catch: java.lang.Throwable -> L42
            r3 = -1
            if (r2 == r3) goto L30
            r3 = 0
            r5.write(r0, r3, r2)     // Catch: java.lang.Throwable -> L42
            goto L24
        L30:
            byte[] r0 = r5.toByteArray()     // Catch: java.lang.Throwable -> L42
            if (r1 == 0) goto L39
            r1.close()     // Catch: java.io.IOException -> L3d
        L39:
            r5.close()     // Catch: java.io.IOException -> L3d
            goto L41
        L3d:
            r5 = move-exception
            r5.getMessage()
        L41:
            return r0
        L42:
            r0 = move-exception
            r4 = r1
            r1 = r5
            r5 = r0
            goto L51
        L47:
            com.tkay.expressad.foundation.g.f.a.a r5 = new com.tkay.expressad.foundation.g.f.a.a     // Catch: java.lang.Throwable -> L4e
            r2 = 7
            r5.<init>(r2, r0)     // Catch: java.lang.Throwable -> L4e
            throw r5     // Catch: java.lang.Throwable -> L4e
        L4e:
            r5 = move-exception
            r4 = r1
            r1 = r0
        L51:
            r0 = r4
            goto L55
        L53:
            r5 = move-exception
            r1 = r0
        L55:
            if (r0 == 0) goto L5d
            r0.close()     // Catch: java.io.IOException -> L5b
            goto L5d
        L5b:
            r0 = move-exception
            goto L63
        L5d:
            if (r1 == 0) goto L66
            r1.close()     // Catch: java.io.IOException -> L5b
            goto L66
        L63:
            r0.getMessage()
        L66:
            throw r5
    }

    private int p() {
            r2 = this;
            java.lang.Integer r0 = r2.f
            if (r0 == 0) goto L9
            int r0 = r0.intValue()
            return r0
        L9:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "getSequence called before setSequence"
            r0.<init>(r1)
            throw r0
    }

    private static void q() {
            return
    }

    private static void r() {
            return
    }

    public final int a() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public final com.tkay.expressad.foundation.g.f.i<?> a(int r1) {
            r0 = this;
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.f = r1
            return r0
    }

    public final com.tkay.expressad.foundation.g.f.i<?> a(com.tkay.expressad.foundation.g.f.j r1) {
            r0 = this;
            r0.g = r1
            return r0
    }

    public final com.tkay.expressad.foundation.g.f.i<?> a(com.tkay.expressad.foundation.g.f.l r1) {
            r0 = this;
            r0.i = r1
            return r0
    }

    protected abstract com.tkay.expressad.foundation.g.f.k<T> a(com.tkay.expressad.foundation.g.f.f.c r1);

    public final void a(long r2, long r4) {
            r1 = this;
            com.tkay.expressad.foundation.g.f.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.a(r2, r4)
        L7:
            return
    }

    public final void a(com.tkay.expressad.foundation.g.f.e<T> r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(com.tkay.expressad.foundation.g.f.k<T> r2) {
            r1 = this;
            com.tkay.expressad.foundation.g.f.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public void a(java.io.OutputStream r1) {
            r0 = this;
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

    public final void a(java.util.Map<java.lang.String, java.lang.String> r3) {
            r2 = this;
            java.util.Set r3 = r3.entrySet()
            java.util.Iterator r3 = r3.iterator()
        L8:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L24
            java.lang.Object r0 = r3.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            java.lang.Object r1 = r0.getKey()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.Object r0 = r0.getValue()
            java.lang.String r0 = (java.lang.String) r0
            r2.a(r1, r0)
            goto L8
        L24:
            return
    }

    public byte[] a(com.tkay.expressad.foundation.g.f.f.b r1, com.tkay.expressad.foundation.g.f.c r2) {
            r0 = this;
            java.io.InputStream r2 = r1.c()
            if (r2 == 0) goto Lb
            byte[] r1 = a(r1)
            return r1
        Lb:
            r1 = 0
            byte[] r1 = new byte[r1]
            return r1
    }

    public final java.lang.Object b() {
            r1 = this;
            java.lang.Object r0 = r1.j
            return r0
    }

    public final void b(com.tkay.expressad.foundation.g.f.a.a r2) {
            r1 = this;
            com.tkay.expressad.foundation.g.f.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.a(r2)
        L7:
            return
    }

    public final void c() {
            r1 = this;
            com.tkay.expressad.foundation.g.f.j r0 = r1.g
            if (r0 == 0) goto L7
            r0.b(r1)
        L7:
            return
    }

    @Override
    public int compareTo(java.lang.Object r3) {
            r2 = this;
            com.tkay.expressad.foundation.g.f.i r3 = (com.tkay.expressad.foundation.g.f.i) r3
            int r0 = r2.j()
            int r1 = r3.j()
            if (r0 != r1) goto L1a
            java.lang.Integer r0 = r2.f
            int r0 = r0.intValue()
            java.lang.Integer r3 = r3.f
            int r3 = r3.intValue()
            int r0 = r0 - r3
            return r0
        L1a:
            int r1 = r1 - r0
            return r1
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.e
            return r0
    }

    public final void e() {
            r1 = this;
            r0 = 1
            r1.h = r0
            return
    }

    public final boolean f() {
            r1 = this;
            boolean r0 = r1.h
            return r0
    }

    public final java.util.Map<java.lang.String, java.lang.String> g() {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.String> r0 = r1.a
            return r0
    }

    public byte[] h() {
            r1 = this;
            r0 = 0
            return r0
    }

    public void i() {
            r2 = this;
            java.lang.String r0 = "Connection"
            java.lang.String r1 = "close"
            r2.a(r0, r1)
            java.lang.String r0 = "Charset"
            java.lang.String r1 = "UTF-8"
            r2.a(r0, r1)
            return
    }

    public int j() {
            r1 = this;
            r0 = 2
            return r0
    }

    public final int k() {
            r1 = this;
            com.tkay.expressad.foundation.g.f.l r0 = r1.i
            int r0 = r0.b()
            return r0
    }

    public final com.tkay.expressad.foundation.g.f.l l() {
            r1 = this;
            com.tkay.expressad.foundation.g.f.l r0 = r1.i
            return r0
    }

    public final void m() {
            r1 = this;
            com.tkay.expressad.foundation.g.f.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.c()
        L7:
            return
    }

    public final void n() {
            r1 = this;
            com.tkay.expressad.foundation.g.f.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.b()
        L7:
            return
    }

    public final void o() {
            r1 = this;
            com.tkay.expressad.foundation.g.f.e<T> r0 = r1.b
            if (r0 == 0) goto L7
            r0.a()
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
            int r2 = r3.j()
            r0.append(r2)
            r0.append(r1)
            java.lang.Integer r1 = r3.f
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
