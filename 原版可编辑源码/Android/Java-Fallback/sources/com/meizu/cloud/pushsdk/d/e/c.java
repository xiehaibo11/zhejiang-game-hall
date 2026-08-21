package com.meizu.cloud.pushsdk.d.e;

public class c {
    private static final java.lang.String a = null;
    private final java.util.HashMap<java.lang.String, java.lang.String> b;
    private final java.util.HashMap<java.lang.String, java.lang.Object> c;
    private final java.util.HashMap<java.lang.String, java.lang.String> d;

    class 1 {
    }

    public class a {
        private android.content.Context a;

        public a() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                return
        }

        static android.content.Context a(com.meizu.cloud.pushsdk.d.e.c.a r0) {
                android.content.Context r0 = r0.a
                return r0
        }

        public com.meizu.cloud.pushsdk.d.e.c.a a(android.content.Context r1) {
                r0 = this;
                r0.a = r1
                return r0
        }

        public com.meizu.cloud.pushsdk.d.e.c a() {
                r2 = this;
                com.meizu.cloud.pushsdk.d.e.c r0 = new com.meizu.cloud.pushsdk.d.e.c
                r1 = 0
                r0.<init>(r2, r1)
                return r0
        }
    }

    static {
            java.lang.Class<com.meizu.cloud.pushsdk.d.e.c> r0 = com.meizu.cloud.pushsdk.d.e.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.meizu.cloud.pushsdk.d.e.c.a = r0
            return
    }

    private c(com.meizu.cloud.pushsdk.d.e.c.a r3) {
            r2 = this;
            r2.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.b = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.c = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r2.d = r0
            r2.d()
            r2.e()
            r2.f()
            r2.g()
            android.content.Context r0 = com.meizu.cloud.pushsdk.d.e.c.a.a(r3)
            if (r0 == 0) goto L31
            android.content.Context r3 = com.meizu.cloud.pushsdk.d.e.c.a.a(r3)
            r2.a(r3)
        L31:
            java.lang.String r3 = com.meizu.cloud.pushsdk.d.e.c.a
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "Subject created successfully."
            com.meizu.cloud.pushsdk.d.f.c.c(r3, r1, r0)
            return
    }

    c(com.meizu.cloud.pushsdk.d.e.c.a r1, com.meizu.cloud.pushsdk.d.e.c.1 r2) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    private void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto L15
            if (r3 == 0) goto L15
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L15
            boolean r0 = r3.isEmpty()
            if (r0 != 0) goto L15
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.d
            r0.put(r2, r3)
        L15:
            return
    }

    private void d() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "android-"
            r0.append(r1)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "ot"
            r2.a(r1, r0)
            return
    }

    private void e() {
            r2 = this;
            java.lang.String r0 = android.os.Build.DISPLAY
            java.lang.String r1 = "ov"
            r2.a(r1, r0)
            return
    }

    private void f() {
            r2 = this;
            java.lang.String r0 = android.os.Build.MODEL
            java.lang.String r1 = "dm"
            r2.a(r1, r0)
            return
    }

    private void g() {
            r2 = this;
            java.lang.String r0 = android.os.Build.MANUFACTURER
            java.lang.String r1 = "df"
            r2.a(r1, r0)
            return
    }

    public java.util.Map<java.lang.String, java.lang.Object> a() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r1.c
            return r0
    }

    public void a(android.content.Context r1) {
            r0 = this;
            r0.b(r1)
            return
    }

    public java.util.Map<java.lang.String, java.lang.String> b() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.d
            return r0
    }

    public void b(android.content.Context r2) {
            r1 = this;
            java.lang.String r2 = com.meizu.cloud.pushsdk.d.f.e.b(r2)
            if (r2 == 0) goto Lb
            java.lang.String r0 = "ca"
            r1.a(r0, r2)
        Lb:
            return
    }

    public java.util.Map<java.lang.String, java.lang.String> c() {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.String> r0 = r1.b
            return r0
    }
}
