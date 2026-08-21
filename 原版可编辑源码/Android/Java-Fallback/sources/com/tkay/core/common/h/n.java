package com.tkay.core.common.h;

public final class n extends com.tkay.core.common.h.a {
    com.tkay.core.common.f.n a;
    boolean b;

    public n(com.tkay.core.common.f.n r2) {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.b = r0
            r1.a = r2
            return
    }

    @Override
    protected final int a() {
            r1 = this;
            com.tkay.core.common.f.n r0 = r1.a
            int r0 = r0.b
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

    @Override
    protected final boolean a(int r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected final java.lang.String b() {
            r1 = this;
            com.tkay.core.common.f.n r0 = r1.a
            java.lang.String r0 = r0.d
            return r0
    }

    @Override
    protected final void b(com.tkay.core.api.AdError r1) {
            r0 = this;
            return
    }

    @Override
    protected final java.util.Map<java.lang.String, java.lang.String> c() {
            r5 = this;
            com.tkay.core.common.f.n r0 = r5.a
            java.lang.String r0 = r0.c
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Exception -> L26
            r2.<init>(r0)     // Catch: java.lang.Exception -> L26
            java.util.Iterator r0 = r2.keys()     // Catch: java.lang.Exception -> L26
        L12:
            boolean r3 = r0.hasNext()     // Catch: java.lang.Exception -> L26
            if (r3 == 0) goto L26
            java.lang.Object r3 = r0.next()     // Catch: java.lang.Exception -> L26
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L26
            java.lang.String r4 = r2.optString(r3)     // Catch: java.lang.Exception -> L26
            r1.put(r3, r4)     // Catch: java.lang.Exception -> L26
            goto L12
        L26:
            return r1
    }

    @Override
    protected final byte[] d() {
            r6 = this;
            com.tkay.core.common.f.n r0 = r6.a
            java.lang.String r0 = r0.c
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L16
            com.tkay.core.common.f.n r0 = r6.a
            java.lang.String r0 = r0.c
            java.lang.String r3 = "gzip"
            boolean r0 = r0.contains(r3)
            if (r0 == 0) goto L16
            r0 = r1
            goto L17
        L16:
            r0 = r2
        L17:
            r3 = 0
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L2e
            com.tkay.core.common.f.n r5 = r6.a     // Catch: java.lang.Exception -> L2e
            java.lang.String r5 = r5.e     // Catch: java.lang.Exception -> L2e
            r4.<init>(r5)     // Catch: java.lang.Exception -> L2e
            boolean r3 = r6.b     // Catch: java.lang.Exception -> L2b
            if (r3 == 0) goto L33
            java.lang.String r3 = "ofl"
            r4.put(r3, r1)     // Catch: java.lang.Exception -> L2b
            goto L33
        L2b:
            r1 = move-exception
            r3 = r4
            goto L2f
        L2e:
            r1 = move-exception
        L2f:
            r1.printStackTrace()
            r4 = r3
        L33:
            if (r0 == 0) goto L43
            if (r4 == 0) goto L40
            java.lang.String r0 = r4.toString()
            byte[] r0 = c(r0)
            return r0
        L40:
            byte[] r0 = new byte[r2]
            return r0
        L43:
            if (r4 == 0) goto L4e
            java.lang.String r0 = r4.toString()
            byte[] r0 = r0.getBytes()
            return r0
        L4e:
            byte[] r0 = new byte[r2]
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

    @Override
    protected final boolean o() {
            r1 = this;
            r0 = 1
            return r0
    }

    public final void p() {
            r1 = this;
            r0 = 0
            r1.b = r0
            return
    }

    public final com.tkay.core.common.f.n q() {
            r1 = this;
            com.tkay.core.common.f.n r0 = r1.a
            return r0
    }
}
