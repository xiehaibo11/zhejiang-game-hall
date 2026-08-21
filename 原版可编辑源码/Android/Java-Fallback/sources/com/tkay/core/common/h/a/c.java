package com.tkay.core.common.h.a;

public abstract class c {
    public static final int d = 1;
    public static final int e = 2;
    public static final int f = 2;
    public static final int g = 3;
    public static final int h = 4;
    private final int a;
    protected int i;
    protected java.lang.String j;

    public interface a {
        void a(java.lang.Object r1);

        void a(java.lang.Throwable r1);
    }

    public c() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    private static org.json.JSONObject a() {
            org.json.JSONObject r0 = com.tkay.core.common.h.c.a()
            return r0
    }

    protected static byte[] a(java.lang.String r3) {
            if (r3 == 0) goto L29
            int r0 = r3.length()
            if (r0 != 0) goto L9
            goto L29
        L9:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.util.zip.GZIPOutputStream r1 = new java.util.zip.GZIPOutputStream     // Catch: java.lang.Exception -> L20
            r1.<init>(r0)     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = "utf-8"
            byte[] r3 = r3.getBytes(r2)     // Catch: java.lang.Exception -> L20
            r1.write(r3)     // Catch: java.lang.Exception -> L20
            r1.close()     // Catch: java.lang.Exception -> L20
            goto L24
        L20:
            r3 = move-exception
            r3.printStackTrace()
        L24:
            byte[] r3 = r0.toByteArray()
            return r3
        L29:
            r3 = 0
            return r3
    }

    public final void a(int r1, java.lang.String r2) {
            r0 = this;
            r0.i = r1
            r0.j = r2
            return
    }

    public final void a(com.tkay.core.common.h.a.c.a r3) {
            r2 = this;
            com.tkay.core.common.h.a.d r0 = com.tkay.core.common.h.a.d.a()
            com.tkay.core.common.h.a.d$1 r1 = new com.tkay.core.common.h.a.d$1
            r1.<init>(r0, r2, r3)
            com.tkay.core.common.l.b.a r3 = com.tkay.core.common.l.b.a.a()
            r0 = 4
            r3.a(r1, r0)
            return
    }

    public void a(java.lang.String r1, java.lang.String r2, java.lang.String r3, int r4) {
            r0 = this;
            return
    }

    public abstract int c();

    public abstract int d();

    public abstract byte[] e();

    public abstract boolean f();

    protected int g() {
            r1 = this;
            r0 = 0
            return r0
    }

    protected final org.json.JSONObject h() {
            r1 = this;
            int r0 = r1.g()
            org.json.JSONObject r0 = com.tkay.core.common.h.c.a(r0)
            return r0
    }
}
