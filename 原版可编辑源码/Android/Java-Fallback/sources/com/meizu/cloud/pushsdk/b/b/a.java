package com.meizu.cloud.pushsdk.b.b;

public class a {
    private static final java.util.HashMap<java.lang.String, java.lang.Class<?>> a = null;
    private java.lang.Class<?> b;
    private java.lang.String c;
    private java.lang.Object d;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.meizu.cloud.pushsdk.b.b.a.a = r0
            return
    }

    private a(java.lang.Object r1) {
            r0 = this;
            r0.<init>()
            r0.d = r1
            return
    }

    private a(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            r0.c = r1
            return
    }

    public static com.meizu.cloud.pushsdk.b.b.a a(java.lang.Object r1) {
            com.meizu.cloud.pushsdk.b.b.a r0 = new com.meizu.cloud.pushsdk.b.b.a
            r0.<init>(r1)
            return r0
    }

    public static com.meizu.cloud.pushsdk.b.b.a a(java.lang.String r1) {
            com.meizu.cloud.pushsdk.b.b.a r0 = new com.meizu.cloud.pushsdk.b.b.a
            r0.<init>(r1)
            return r0
    }

    public com.meizu.cloud.pushsdk.b.b.b a(java.lang.Class<?>... r2) {
            r1 = this;
            com.meizu.cloud.pushsdk.b.b.b r0 = new com.meizu.cloud.pushsdk.b.b.b
            r0.<init>(r1, r2)
            return r0
    }

    public com.meizu.cloud.pushsdk.b.b.c a(java.lang.String r2, java.lang.Class<?>... r3) {
            r1 = this;
            com.meizu.cloud.pushsdk.b.b.c r0 = new com.meizu.cloud.pushsdk.b.b.c
            r0.<init>(r1, r2, r3)
            return r0
    }

    java.lang.Class<?> a() {
            r3 = this;
            java.lang.Class<?> r0 = r3.b
            if (r0 == 0) goto L5
            goto L27
        L5:
            java.lang.Object r0 = r3.d
            if (r0 == 0) goto Le
            java.lang.Class r0 = r0.getClass()
            goto L27
        Le:
            java.util.HashMap<java.lang.String, java.lang.Class<?>> r0 = com.meizu.cloud.pushsdk.b.b.a.a
            java.lang.String r1 = r3.c
            java.lang.Object r0 = r0.get(r1)
            java.lang.Class r0 = (java.lang.Class) r0
            if (r0 != 0) goto L27
            java.lang.String r0 = r3.c
            java.lang.Class r0 = java.lang.Class.forName(r0)
            java.util.HashMap<java.lang.String, java.lang.Class<?>> r1 = com.meizu.cloud.pushsdk.b.b.a.a
            java.lang.String r2 = r3.c
            r1.put(r2, r0)
        L27:
            return r0
    }
}
