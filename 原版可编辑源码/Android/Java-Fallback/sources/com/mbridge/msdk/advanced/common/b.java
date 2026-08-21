package com.mbridge.msdk.advanced.common;

public final class b {
    private static java.util.Map<java.lang.String, java.lang.Boolean> a;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.advanced.common.b.a = r0
            return
    }

    public static void a(java.lang.String r1, boolean r2) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.mbridge.msdk.advanced.common.b.a
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)
            r0.put(r1, r2)
            return
    }

    public static boolean a(java.lang.String r1) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.mbridge.msdk.advanced.common.b.a
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L15
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.mbridge.msdk.advanced.common.b.a
            java.lang.Object r1 = r0.get(r1)
            java.lang.Boolean r1 = (java.lang.Boolean) r1
            boolean r1 = r1.booleanValue()
            return r1
        L15:
            r1 = 0
            return r1
    }

    public static void b(java.lang.String r1) {
            java.util.Map<java.lang.String, java.lang.Boolean> r0 = com.mbridge.msdk.advanced.common.b.a
            r0.remove(r1)
            return
    }
}
