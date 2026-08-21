package com.tkay.basead.d;

public class f extends com.tkay.basead.d.b {
    public static final java.lang.String a = null;



    static {
            java.lang.Class<com.tkay.basead.d.f> r0 = com.tkay.basead.d.f.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.basead.d.f.a = r0
            return
    }

    public f(android.content.Context r1, com.tkay.basead.d.b.a r2, com.tkay.core.common.f.i r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            return
    }

    public final void a(android.app.Activity r8, java.util.Map<java.lang.String, java.lang.Object> r9) {
            r7 = this;
            r0 = 0
            boolean r1 = r7.c()     // Catch: java.lang.Exception -> L81
            if (r1 != 0) goto L1b
            com.tkay.basead.e.a r8 = r7.h     // Catch: java.lang.Exception -> L81
            if (r8 == 0) goto L18
            com.tkay.basead.e.a r8 = r7.h     // Catch: java.lang.Exception -> L81
            java.lang.String r9 = "30001"
            java.lang.String r1 = "No fill, offer = null!"
            com.tkay.basead.c.e r9 = com.tkay.basead.c.f.a(r9, r1)     // Catch: java.lang.Exception -> L81
            r8.onShowFailed(r9)     // Catch: java.lang.Exception -> L81
        L18:
            r7.e = r0     // Catch: java.lang.Exception -> L81
            return
        L1b:
            java.lang.String r1 = "extra_scenario"
            java.lang.Object r1 = r9.get(r1)     // Catch: java.lang.Exception -> L81
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> L81
            java.lang.String r2 = "extra_orientation"
            java.lang.Object r9 = r9.get(r2)     // Catch: java.lang.Exception -> L81
            java.lang.Integer r9 = (java.lang.Integer) r9     // Catch: java.lang.Exception -> L81
            int r9 = r9.intValue()     // Catch: java.lang.Exception -> L81
            com.tkay.core.common.f.z r2 = r7.e     // Catch: java.lang.Exception -> L81
            java.lang.String r2 = r7.a(r2)     // Catch: java.lang.Exception -> L81
            com.tkay.core.common.a.g r3 = r7.f     // Catch: java.lang.Exception -> L81
            boolean r3 = r3 instanceof com.tkay.expressad.reward.b.a     // Catch: java.lang.Exception -> L81
            if (r3 == 0) goto L5b
            com.tkay.core.common.a.g r9 = r7.f     // Catch: java.lang.Exception -> L81
            com.tkay.expressad.reward.b.a r9 = (com.tkay.expressad.reward.b.a) r9     // Catch: java.lang.Exception -> L81
            com.tkay.basead.d.f$1 r2 = new com.tkay.basead.d.f$1     // Catch: java.lang.Exception -> L81
            r2.<init>(r7, r1)     // Catch: java.lang.Exception -> L81
            r9.a(r2)     // Catch: java.lang.Exception -> L81
            com.tkay.core.common.a.g r9 = r7.f     // Catch: java.lang.Exception -> L81
            r1 = r9
            com.tkay.expressad.reward.b.a r1 = (com.tkay.expressad.reward.b.a) r1     // Catch: java.lang.Exception -> L81
            java.lang.String r3 = ""
            java.lang.String r4 = ""
            java.lang.String r5 = ""
            com.tkay.core.common.f.i r6 = r7.c     // Catch: java.lang.Exception -> L81
            r2 = r8
            r1.a(r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L81
            return
        L5b:
            com.tkay.basead.e.b r3 = com.tkay.basead.e.b.a()     // Catch: java.lang.Exception -> L81
            com.tkay.basead.d.f$2 r4 = new com.tkay.basead.d.f$2     // Catch: java.lang.Exception -> L81
            r4.<init>(r7, r2)     // Catch: java.lang.Exception -> L81
            r3.a(r2, r4)     // Catch: java.lang.Exception -> L81
            com.tkay.core.basead.b.a r3 = new com.tkay.core.basead.b.a     // Catch: java.lang.Exception -> L81
            r3.<init>()     // Catch: java.lang.Exception -> L81
            com.tkay.core.common.f.z r4 = r7.e     // Catch: java.lang.Exception -> L81
            r3.c = r4     // Catch: java.lang.Exception -> L81
            r3.d = r2     // Catch: java.lang.Exception -> L81
            r2 = 1
            r3.a = r2     // Catch: java.lang.Exception -> L81
            com.tkay.core.common.f.i r2 = r7.c     // Catch: java.lang.Exception -> L81
            r3.h = r2     // Catch: java.lang.Exception -> L81
            r3.e = r9     // Catch: java.lang.Exception -> L81
            r3.b = r1     // Catch: java.lang.Exception -> L81
            com.tkay.basead.ui.BaseATActivity.a(r8, r3)     // Catch: java.lang.Exception -> L81
            return
        L81:
            r8 = move-exception
            r8.printStackTrace()
            com.tkay.basead.e.a r9 = r7.h
            if (r9 == 0) goto L98
            com.tkay.basead.e.a r9 = r7.h
            java.lang.String r8 = r8.getMessage()
            java.lang.String r1 = "-9999"
            com.tkay.basead.c.e r8 = com.tkay.basead.c.f.a(r1, r8)
            r9.onShowFailed(r8)
        L98:
            r7.e = r0
            return
    }

    @Override
    public final void b() {
            r1 = this;
            super.b()
            r0 = 0
            r1.h = r0
            return
    }
}
