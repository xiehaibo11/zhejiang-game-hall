package com.tkay.basead.g;

public class e extends com.tkay.core.common.h.a {
    private static java.lang.String f;
    int a;
    java.lang.String b;
    com.tkay.core.common.f.z c;
    java.util.Map<java.lang.String, java.lang.Object> d;
    boolean e;

    static {
            java.lang.Class<com.tkay.basead.g.e> r0 = com.tkay.basead.g.e.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.g.e.f = r0
            return
    }

    public e(int r2, java.lang.String r3, com.tkay.core.common.f.z r4, java.util.Map<java.lang.String, java.lang.Object> r5) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.e = r0
            r1.a = r2
            r1.b = r3
            r1.c = r4
            r1.d = r5
            return
    }

    private void p() {
            r5 = this;
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> Le
            java.util.Map r1 = r5.c()     // Catch: java.lang.Throwable -> Le
            r0.<init>(r1)     // Catch: java.lang.Throwable -> Le
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Le
            goto L17
        Le:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r0 = r0.toString()
        L17:
            com.tkay.core.common.t r1 = com.tkay.core.common.t.a()
            java.lang.String r2 = r5.o
            com.tkay.core.common.f.z r3 = r5.c
            long r3 = r3.O()
            r1.a(r2, r0, r3)
            return
    }

    @Override
    protected final int a() {
            r1 = this;
            r0 = 2
            return r0
    }

    @Override
    protected final java.lang.Object a(java.lang.String r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected final void a(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }

    @Override
    protected final boolean a(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected final java.lang.String b() {
            r6 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r6.d
            if (r0 == 0) goto L4e
            java.lang.String r0 = r6.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L4e
            java.util.Map<java.lang.String, java.lang.Object> r0 = r6.d     // Catch: java.lang.Throwable -> L4a
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L4a
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L4a
        L16:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L4a
            if (r1 == 0) goto L4e
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L4a
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L4a
            java.lang.Object r2 = r1.getKey()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Throwable -> L4a
            java.lang.String r3 = r6.b     // Catch: java.lang.Throwable -> L4a
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L4a
            java.lang.String r5 = "\\{"
            r4.<init>(r5)     // Catch: java.lang.Throwable -> L4a
            r4.append(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = "\\}"
            r4.append(r2)     // Catch: java.lang.Throwable -> L4a
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L4a
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L4a
            java.lang.String r1 = r3.replaceAll(r2, r1)     // Catch: java.lang.Throwable -> L4a
            r6.b = r1     // Catch: java.lang.Throwable -> L4a
            goto L16
        L4a:
            r0 = move-exception
            r0.printStackTrace()
        L4e:
            java.lang.String r0 = r6.b
            return r0
    }

    @Override
    protected final void b(int r5) {
            r4 = this;
            boolean r0 = r4.e
            if (r0 == 0) goto L3f
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "handleErrorStatusCode, start to check, url: "
            r0.<init>(r1)
            java.lang.String r1 = r4.b
            r0.append(r1)
            com.tkay.core.common.t.a()
            boolean r5 = com.tkay.core.common.t.a(r5)
            if (r5 == 0) goto L3f
            org.json.JSONObject r5 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L27
            java.util.Map r0 = r4.c()     // Catch: java.lang.Throwable -> L27
            r5.<init>(r0)     // Catch: java.lang.Throwable -> L27
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L27
            goto L30
        L27:
            org.json.JSONObject r5 = new org.json.JSONObject
            r5.<init>()
            java.lang.String r5 = r5.toString()
        L30:
            com.tkay.core.common.t r0 = com.tkay.core.common.t.a()
            java.lang.String r1 = r4.o
            com.tkay.core.common.f.z r2 = r4.c
            long r2 = r2.O()
            r0.a(r1, r5, r2)
        L3f:
            return
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> c() {
            r3 = this;
            com.tkay.core.common.f.z r0 = r3.c
            if (r0 == 0) goto L29
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.core.common.f.z r1 = r3.c
            com.tkay.core.common.f.j r1 = r1.k()
            if (r1 == 0) goto L28
            int r2 = r3.a
            boolean r1 = com.tkay.basead.a.b.a(r2, r1)
            if (r1 == 0) goto L28
            java.lang.String r1 = com.tkay.core.common.l.d.i()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L28
            java.lang.String r2 = "User-Agent"
            r0.put(r2, r1)
        L28:
            return r0
        L29:
            r0 = 0
            return r0
    }

    @Override
    protected final byte[] d() {
            r1 = this;
            r0 = 0
            byte[] r0 = new byte[r0]
            return r0
    }

    @Override
    protected final java.lang.String g() {
            r1 = this;
            java.lang.String r0 = ""
            return r0
    }

    @Override
    protected final java.lang.String h() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final android.content.Context i() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final java.lang.String j() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final java.lang.String k() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.Object> l() {
            r1 = this;
            r0 = 0
            return r0
    }
}
