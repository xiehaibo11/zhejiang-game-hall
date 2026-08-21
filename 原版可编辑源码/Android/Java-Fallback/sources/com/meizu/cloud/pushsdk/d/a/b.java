package com.meizu.cloud.pushsdk.d.a;

public class b implements com.meizu.cloud.pushsdk.d.a.a {
    private final java.lang.String a;
    private final java.util.HashMap<java.lang.String, java.lang.Object> b;

    public b(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            r1.<init>()
            java.lang.Class<com.meizu.cloud.pushsdk.d.a.b> r0 = com.meizu.cloud.pushsdk.d.a.b.class
            java.lang.String r0 = r0.getSimpleName()
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            r1.a(r2)
            r1.a(r3)
            return
    }

    public com.meizu.cloud.pushsdk.d.a.b a(java.lang.Object r3) {
            r2 = this;
            if (r3 != 0) goto L3
            return r2
        L3:
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r2.b
            java.lang.String r1 = "dt"
            r0.put(r1, r3)
            return r2
    }

    public com.meizu.cloud.pushsdk.d.a.b a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "schema cannot be null"
            com.meizu.cloud.pushsdk.d.f.d.a(r3, r0)
            boolean r0 = r3.isEmpty()
            r0 = r0 ^ 1
            java.lang.String r1 = "schema cannot be empty."
            com.meizu.cloud.pushsdk.d.f.d.a(r0, r1)
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r2.b
            java.lang.String r1 = "sa"
            r0.put(r1, r3)
            return r2
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.Object> a() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r1.b
            return r0
    }

    @Override
    @java.lang.Deprecated
    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.lang.String r2 = r1.a
            r3 = 0
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r0 = "Payload: add(String, String) method called - Doing nothing."
            com.meizu.cloud.pushsdk.d.f.c.c(r2, r0, r3)
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
