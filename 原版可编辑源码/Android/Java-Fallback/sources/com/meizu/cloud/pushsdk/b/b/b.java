package com.meizu.cloud.pushsdk.b.b;

public class b {
    private final com.meizu.cloud.pushsdk.b.b.a a;
    private final java.lang.Class<?>[] b;

    b(com.meizu.cloud.pushsdk.b.b.a r1, java.lang.Class<?>... r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public <T> com.meizu.cloud.pushsdk.b.b.d<T> a(java.lang.Object... r4) {
            r3 = this;
            com.meizu.cloud.pushsdk.b.b.d r0 = new com.meizu.cloud.pushsdk.b.b.d
            r0.<init>()
            com.meizu.cloud.pushsdk.b.b.a r1 = r3.a     // Catch: java.lang.Exception -> L1e
            java.lang.Class r1 = r1.a()     // Catch: java.lang.Exception -> L1e
            java.lang.Class<?>[] r2 = r3.b     // Catch: java.lang.Exception -> L1e
            java.lang.reflect.Constructor r1 = r1.getDeclaredConstructor(r2)     // Catch: java.lang.Exception -> L1e
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Exception -> L1e
            java.lang.Object r4 = r1.newInstance(r4)     // Catch: java.lang.Exception -> L1e
            r0.b = r4     // Catch: java.lang.Exception -> L1e
            r0.a = r2     // Catch: java.lang.Exception -> L1e
            goto L26
        L1e:
            r4 = move-exception
            java.lang.String r1 = "ReflectConstructor"
            java.lang.String r2 = "newInstance"
            com.meizu.cloud.pushinternal.DebugLogger.e(r1, r2, r4)
        L26:
            return r0
    }
}
