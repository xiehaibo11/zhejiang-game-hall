package com.mbridge.msdk.mbnative.a;

public final class f {
    public static java.util.Map<java.lang.Integer, com.mbridge.msdk.mbnative.a.b<java.lang.String, java.util.List<com.mbridge.msdk.out.Campaign>>> a;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbnative.a.f.a = r0
            return
    }

    public static com.mbridge.msdk.mbnative.a.b<java.lang.String, java.util.List<com.mbridge.msdk.out.Campaign>> a(int r2) {
            java.util.Map<java.lang.Integer, com.mbridge.msdk.mbnative.a.b<java.lang.String, java.util.List<com.mbridge.msdk.out.Campaign>>> r0 = com.mbridge.msdk.mbnative.a.f.a
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L19
            java.util.Map<java.lang.Integer, com.mbridge.msdk.mbnative.a.b<java.lang.String, java.util.List<com.mbridge.msdk.out.Campaign>>> r0 = com.mbridge.msdk.mbnative.a.f.a
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            java.lang.Object r2 = r0.get(r2)
            com.mbridge.msdk.mbnative.a.b r2 = (com.mbridge.msdk.mbnative.a.b) r2
            return r2
        L19:
            r0 = 1
            if (r2 == r0) goto L46
            r0 = 2
            if (r2 == r0) goto L40
            r0 = 3
            if (r2 == r0) goto L3a
            r0 = 6
            if (r2 == r0) goto L34
            r0 = 7
            if (r2 == r0) goto L2e
            com.mbridge.msdk.mbnative.a.a r0 = new com.mbridge.msdk.mbnative.a.a
            r0.<init>(r2)
            goto L4b
        L2e:
            com.mbridge.msdk.mbnative.a.e r0 = new com.mbridge.msdk.mbnative.a.e
            r0.<init>()
            goto L4b
        L34:
            com.mbridge.msdk.mbnative.a.c r0 = new com.mbridge.msdk.mbnative.a.c
            r0.<init>()
            goto L4b
        L3a:
            com.mbridge.msdk.mbnative.a.d r0 = new com.mbridge.msdk.mbnative.a.d
            r0.<init>()
            goto L4b
        L40:
            com.mbridge.msdk.mbnative.a.a r0 = new com.mbridge.msdk.mbnative.a.a
            r0.<init>(r2)
            goto L4b
        L46:
            com.mbridge.msdk.mbnative.a.a r0 = new com.mbridge.msdk.mbnative.a.a
            r0.<init>(r2)
        L4b:
            java.util.Map<java.lang.Integer, com.mbridge.msdk.mbnative.a.b<java.lang.String, java.util.List<com.mbridge.msdk.out.Campaign>>> r1 = com.mbridge.msdk.mbnative.a.f.a
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.put(r2, r0)
            return r0
    }
}
