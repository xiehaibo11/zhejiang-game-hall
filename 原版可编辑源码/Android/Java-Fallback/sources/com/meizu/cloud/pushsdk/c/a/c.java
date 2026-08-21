package com.meizu.cloud.pushsdk.c.a;

public class c<T> {
    private final T a;
    private final com.meizu.cloud.pushsdk.c.b.a b;
    private com.meizu.cloud.pushsdk.c.c.k c;

    public c(com.meizu.cloud.pushsdk.c.b.a r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r2
            return
    }

    public c(T r1) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r1 = 0
            r0.b = r1
            return
    }

    public static <T> com.meizu.cloud.pushsdk.c.a.c<T> a(com.meizu.cloud.pushsdk.c.b.a r1) {
            com.meizu.cloud.pushsdk.c.a.c r0 = new com.meizu.cloud.pushsdk.c.a.c
            r0.<init>(r1)
            return r0
    }

    public static <T> com.meizu.cloud.pushsdk.c.a.c<T> a(T r1) {
            com.meizu.cloud.pushsdk.c.a.c r0 = new com.meizu.cloud.pushsdk.c.a.c
            r0.<init>(r1)
            return r0
    }

    public T a() {
            r1 = this;
            T r0 = r1.a
            return r0
    }

    public void a(com.meizu.cloud.pushsdk.c.c.k r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public boolean b() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.b.a r0 = r1.b
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public com.meizu.cloud.pushsdk.c.b.a c() {
            r1 = this;
            com.meizu.cloud.pushsdk.c.b.a r0 = r1.b
            return r0
    }
}
