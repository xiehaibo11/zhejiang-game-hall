package com.meizu.cloud.pushsdk.d.a;

public class c implements com.meizu.cloud.pushsdk.d.a.a {
    private final java.lang.String a;
    private final java.util.HashMap<java.lang.String, java.lang.Object> b;

    public c() {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.meizu.cloud.pushsdk.d.a.c> r0 = com.meizu.cloud.pushsdk.d.a.c.class
            java.lang.String r0 = r0.getSimpleName()
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            return
    }

    @Override
    public java.util.Map a() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r1.b
            return r0
    }

    public void a(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            if (r4 != 0) goto L1c
            java.lang.String r4 = r2.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "The keys value is empty, returning without adding key: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.meizu.cloud.pushsdk.d.f.c.c(r4, r3, r0)
            return
        L1c:
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r2.b
            r0.put(r3, r4)
            return
    }

    @Override
    public void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            if (r4 == 0) goto Lf
            boolean r0 = r4.isEmpty()
            if (r0 == 0) goto L9
            goto Lf
        L9:
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r2.b
            r0.put(r3, r4)
            return
        Lf:
            java.lang.String r4 = r2.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "The keys value is empty, returning without adding key: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.meizu.cloud.pushsdk.d.f.c.c(r4, r3, r0)
            return
    }

    public void a(java.util.Map<java.lang.String, java.lang.Object> r3) {
            r2 = this;
            if (r3 != 0) goto Ld
            java.lang.String r3 = r2.a
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "Map passed in is null, returning without adding map."
            com.meizu.cloud.pushsdk.d.f.c.c(r3, r1, r0)
            return
        Ld:
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r2.b
            r0.putAll(r3)
            return
    }

    @Override
    public long b() {
            r2 = this;
            java.lang.String r0 = r2.toString()
            long r0 = com.meizu.cloud.pushsdk.d.f.e.a(r0)
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r1.b
            org.json.JSONObject r0 = com.meizu.cloud.pushsdk.d.f.e.a(r0)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
