package com.cmic.gen.sdk.e;

public class e {
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.cmic.gen.sdk.auth.GenTokenListener> a;
    private static java.util.concurrent.ConcurrentHashMap<java.lang.String, com.cmic.gen.sdk.a> b;

    static {
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 16
            r0.<init>(r1)
            com.cmic.gen.sdk.e.e.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            com.cmic.gen.sdk.e.e.b = r0
            return
    }

    public static void a(java.lang.String r1, com.cmic.gen.sdk.a r2) {
            if (r1 == 0) goto L9
            if (r2 == 0) goto L9
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.cmic.gen.sdk.a> r0 = com.cmic.gen.sdk.e.e.b
            r0.put(r1, r2)
        L9:
            return
    }

    public static void a(java.lang.String r1, com.cmic.gen.sdk.auth.GenTokenListener r2) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.cmic.gen.sdk.auth.GenTokenListener> r0 = com.cmic.gen.sdk.e.e.a
            r0.put(r1, r2)
            return
    }

    public static boolean a(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.cmic.gen.sdk.auth.GenTokenListener> r0 = com.cmic.gen.sdk.e.e.a
            boolean r1 = r0.containsKey(r1)
            r1 = r1 ^ 1
            return r1
    }

    public static void b(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.cmic.gen.sdk.auth.GenTokenListener> r0 = com.cmic.gen.sdk.e.e.a
            r0.remove(r1)
            return
    }

    public static com.cmic.gen.sdk.auth.GenTokenListener c(java.lang.String r1) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.cmic.gen.sdk.auth.GenTokenListener> r0 = com.cmic.gen.sdk.e.e.a
            java.lang.Object r1 = r0.get(r1)
            com.cmic.gen.sdk.auth.GenTokenListener r1 = (com.cmic.gen.sdk.auth.GenTokenListener) r1
            return r1
    }

    public static com.cmic.gen.sdk.a d(java.lang.String r1) {
            if (r1 == 0) goto Lb
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.cmic.gen.sdk.a> r0 = com.cmic.gen.sdk.e.e.b
            java.lang.Object r1 = r0.get(r1)
            com.cmic.gen.sdk.a r1 = (com.cmic.gen.sdk.a) r1
            return r1
        Lb:
            com.cmic.gen.sdk.a r1 = new com.cmic.gen.sdk.a
            r0 = 0
            r1.<init>(r0)
            return r1
    }
}
