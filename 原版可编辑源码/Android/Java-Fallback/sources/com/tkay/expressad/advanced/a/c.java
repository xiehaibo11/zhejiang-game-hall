package com.tkay.expressad.advanced.a;

public final class c {
    private static java.util.Map<java.lang.String, java.lang.Boolean> a;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.advanced.a.c.a = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a() {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.tkay.expressad.advanced.a.c.a
            r0.clear()
            return
    }

    public static void a(java.lang.String r2) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.tkay.expressad.advanced.a.c.a
            java.lang.Boolean r1 = java.lang.Boolean.TRUE
            r0.put(r2, r1)
            return
    }

    public static boolean b(java.lang.String r1) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.tkay.expressad.advanced.a.c.a
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.tkay.expressad.advanced.a.c.a
            java.lang.Object r1 = r0.get(r1)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            return r1
        L15:
            r1 = 0
            return r1
    }

    public static void c(java.lang.String r1) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.tkay.expressad.advanced.a.c.a
            r0.remove(r1)
            return
    }
}
