package com.tkay.basead.f;

public class f extends com.tkay.basead.f.c {
    public static final java.lang.String a = null;
    private com.tkay.basead.e.g k;


    static {
            java.lang.Class<com.tkay.basead.f.f> r0 = com.tkay.basead.f.f.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.f.f.a = r0
            return
    }

    public f(android.content.Context r1, com.tkay.core.common.f.i r2, java.lang.String r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            return
    }

    static com.tkay.basead.e.g a(com.tkay.basead.f.f r0) {
            com.tkay.basead.e.g r0 = r0.k
            return r0
    }

    @Override
    public final void a(android.app.Activity r5, java.util.Map<java.lang.String, java.lang.Object> r6) {
            r4 = this;
            android.content.Context r0 = r4.c     // Catch: java.lang.Exception -> L73
            if (r0 != 0) goto L16
            com.tkay.basead.e.g r5 = r4.k     // Catch: java.lang.Exception -> L73
            if (r5 == 0) goto L15
            com.tkay.basead.e.g r5 = r4.k     // Catch: java.lang.Exception -> L73
            java.lang.String r6 = "30001"
            java.lang.String r0 = "context = null!"
            com.tkay.basead.c.e r6 = com.tkay.basead.c.f.a(r6, r0)     // Catch: java.lang.Exception -> L73
            r5.onShowFailed(r6)     // Catch: java.lang.Exception -> L73
        L15:
            return
        L16:
            java.lang.String r0 = "extra_request_id"
            r6.get(r0)     // Catch: java.lang.Exception -> L73
            java.lang.String r0 = "extra_scenario"
            java.lang.Object r0 = r6.get(r0)     // Catch: java.lang.Exception -> L73
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> L73
            java.lang.String r1 = "extra_orientation"
            java.lang.Object r6 = r6.get(r1)     // Catch: java.lang.Exception -> L73
            java.lang.Integer r6 = (java.lang.Integer) r6     // Catch: java.lang.Exception -> L73
            int r6 = r6.intValue()     // Catch: java.lang.Exception -> L73
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L73
            r1.<init>()     // Catch: java.lang.Exception -> L73
            com.tkay.core.common.f.i r2 = r4.d     // Catch: java.lang.Exception -> L73
            java.lang.String r2 = r2.b     // Catch: java.lang.Exception -> L73
            r1.append(r2)     // Catch: java.lang.Exception -> L73
            java.lang.String r2 = r4.e     // Catch: java.lang.Exception -> L73
            r1.append(r2)     // Catch: java.lang.Exception -> L73
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L73
            r1.append(r2)     // Catch: java.lang.Exception -> L73
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L73
            com.tkay.basead.e.b r2 = com.tkay.basead.e.b.a()     // Catch: java.lang.Exception -> L73
            com.tkay.basead.f.f$1 r3 = new com.tkay.basead.f.f$1     // Catch: java.lang.Exception -> L73
            r3.<init>(r4, r1)     // Catch: java.lang.Exception -> L73
            r2.a(r1, r3)     // Catch: java.lang.Exception -> L73
            com.tkay.core.basead.b.a r2 = new com.tkay.core.basead.b.a     // Catch: java.lang.Exception -> L73
            r2.<init>()     // Catch: java.lang.Exception -> L73
            com.tkay.core.common.f.r r3 = r4.g     // Catch: java.lang.Exception -> L73
            r2.c = r3     // Catch: java.lang.Exception -> L73
            r2.d = r1     // Catch: java.lang.Exception -> L73
            r1 = 1
            r2.a = r1     // Catch: java.lang.Exception -> L73
            com.tkay.core.common.f.i r1 = r4.d     // Catch: java.lang.Exception -> L73
            r2.h = r1     // Catch: java.lang.Exception -> L73
            r2.e = r6     // Catch: java.lang.Exception -> L73
            r2.b = r0     // Catch: java.lang.Exception -> L73
            com.tkay.basead.ui.BaseATActivity.a(r5, r2)     // Catch: java.lang.Exception -> L73
            return
        L73:
            r5 = move-exception
            r5.printStackTrace()
            com.tkay.basead.e.g r6 = r4.k
            if (r6 == 0) goto L88
            java.lang.String r5 = r5.getMessage()
            java.lang.String r0 = "-9999"
            com.tkay.basead.c.e r5 = com.tkay.basead.c.f.a(r0, r5)
            r6.onShowFailed(r5)
        L88:
            return
    }

    public final void a(com.tkay.basead.e.g r1) {
            r0 = this;
            r0.k = r1
            return
    }
}
