package com.cmic.gen.sdk;

public class a {
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> a;

    public a(int r2) {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>(r2)
            r1.a = r0
            return
    }

    public com.cmic.gen.sdk.d.b a() {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r2.a
            java.lang.String r1 = "logBean"
            java.lang.Object r0 = r0.get(r1)
            com.cmic.gen.sdk.d.b r0 = (com.cmic.gen.sdk.d.b) r0
            if (r0 == 0) goto Ld
            return r0
        Ld:
            com.cmic.gen.sdk.d.b r0 = new com.cmic.gen.sdk.d.b
            r0.<init>()
            return r0
    }

    public void a(com.cmic.gen.sdk.a.a r3) {
            r2 = this;
            if (r3 == 0) goto L9
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r2.a
            java.lang.String r1 = "current_config"
            r0.put(r1, r3)
        L9:
            return
    }

    public void a(com.cmic.gen.sdk.d.b r3) {
            r2 = this;
            if (r3 == 0) goto L9
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r2.a
            java.lang.String r1 = "logBean"
            r0.put(r1, r3)
        L9:
            return
    }

    public void a(java.lang.String r2, int r3) {
            r1 = this;
            if (r2 == 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.a
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r0.put(r2, r3)
        Lb:
            return
    }

    public void a(java.lang.String r2, long r3) {
            r1 = this;
            if (r2 == 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.a
            java.lang.Long r3 = java.lang.Long.valueOf(r3)
            r0.put(r2, r3)
        Lb:
            return
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto L9
            if (r3 == 0) goto L9
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.a
            r0.put(r2, r3)
        L9:
            return
    }

    public void a(java.lang.String r2, boolean r3) {
            r1 = this;
            if (r2 == 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.a
            java.lang.Boolean r3 = java.lang.Boolean.valueOf(r3)
            r0.put(r2, r3)
        Lb:
            return
    }

    public void a(java.lang.String r2, byte[] r3) {
            r1 = this;
            if (r2 == 0) goto L9
            if (r3 == 0) goto L9
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.a
            r0.put(r2, r3)
        L9:
            return
    }

    public byte[] a(java.lang.String r2) {
            r1 = this;
            if (r2 == 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.a
            java.lang.Object r2 = r0.get(r2)
            byte[] r2 = (byte[]) r2
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public int b(java.lang.String r2, int r3) {
            r1 = this;
            if (r2 == 0) goto L17
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.a
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L17
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r3 = r1.a
            java.lang.Object r2 = r3.get(r2)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
            return r2
        L17:
            return r3
    }

    public long b(java.lang.String r2, long r3) {
            r1 = this;
            if (r2 == 0) goto L17
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.a
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L17
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r3 = r1.a
            java.lang.Object r2 = r3.get(r2)
            java.lang.Long r2 = (java.lang.Long) r2
            long r2 = r2.longValue()
            return r2
        L17:
            return r3
    }

    public com.cmic.gen.sdk.a.a b() {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r2.a
            java.lang.String r1 = "current_config"
            java.lang.Object r0 = r0.get(r1)
            com.cmic.gen.sdk.a.a r0 = (com.cmic.gen.sdk.a.a) r0
            if (r0 == 0) goto Ld
            return r0
        Ld:
            java.lang.String r0 = "UmcConfigBean为空"
            java.lang.String r1 = "请核查"
            com.cmic.gen.sdk.e.c.a(r0, r1)
            com.cmic.gen.sdk.a.a$a r0 = new com.cmic.gen.sdk.a.a$a
            r0.<init>()
            com.cmic.gen.sdk.a.a r0 = r0.a()
            return r0
    }

    public java.lang.String b(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = ""
            java.lang.String r2 = r1.b(r2, r0)
            return r2
    }

    public java.lang.String b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto L13
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.a
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L13
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r3 = r1.a
            java.lang.Object r2 = r3.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
        L13:
            return r3
    }

    public boolean b(java.lang.String r2, boolean r3) {
            r1 = this;
            if (r2 == 0) goto L17
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r0 = r1.a
            boolean r0 = r0.containsKey(r2)
            if (r0 == 0) goto L17
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Object> r3 = r1.a
            java.lang.Object r2 = r3.get(r2)
            java.lang.Boolean r2 = (java.lang.Boolean) r2
            boolean r2 = r2.booleanValue()
            return r2
        L17:
            return r3
    }

    public int c(java.lang.String r2) {
            r1 = this;
            r0 = 0
            int r2 = r1.b(r2, r0)
            return r2
    }
}
