package com.mbridge.msdk.mbnative.a;

public final class e extends com.mbridge.msdk.mbnative.a.b<java.lang.String, java.util.List<com.mbridge.msdk.out.Campaign>> {
    private static java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> a;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.mbnative.a.e.a = r0
            return
    }

    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void a(java.lang.String r2, java.util.List<com.mbridge.msdk.out.Campaign> r3) {
            r1 = this;
            java.lang.String r2 = (java.lang.String) r2
            java.util.List r3 = (java.util.List) r3
            java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> r0 = com.mbridge.msdk.mbnative.a.e.a
            r1.a(r2, r3, r0)
            return
    }

    @Override
    public final void a(java.lang.String r1, java.util.List<com.mbridge.msdk.out.Campaign> r2, java.lang.String r3) {
            r0 = this;
            java.lang.String r1 = (java.lang.String) r1
            java.util.List r2 = (java.util.List) r2
            return
    }

    @Override
    public final void a(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> r0 = com.mbridge.msdk.mbnative.a.e.a     // Catch: java.lang.Exception -> L6
            r1.a(r2, r0)     // Catch: java.lang.Exception -> L6
            goto La
        L6:
            r2 = move-exception
            r2.printStackTrace()
        La:
            return
    }

    @Override
    public final void a(java.lang.String r1, com.mbridge.msdk.out.Campaign r2, java.lang.String r3) {
            r0 = this;
            return
    }

    @Override
    public final java.util.List<com.mbridge.msdk.out.Campaign> b(java.lang.String r2, int r3) {
            r1 = this;
            java.lang.String r2 = (java.lang.String) r2
            java.util.Map<java.lang.String, java.util.Map<java.lang.Long, java.lang.Object>> r0 = com.mbridge.msdk.mbnative.a.e.a
            java.util.List r2 = r1.a(r2, r0, r3)
            return r2
    }
}
