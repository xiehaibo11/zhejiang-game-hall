package com.mbridge.msdk.mbnative.a;

public final class a extends com.mbridge.msdk.mbnative.a.b<java.lang.String, java.util.List<com.mbridge.msdk.out.Campaign>> {
    private com.mbridge.msdk.foundation.db.f a;
    private int b;


    public a(int r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            com.mbridge.msdk.foundation.controller.a r1 = com.mbridge.msdk.foundation.controller.a.f()
            android.content.Context r1 = r1.j()
            com.mbridge.msdk.foundation.db.i r1 = com.mbridge.msdk.foundation.db.i.a(r1)
            com.mbridge.msdk.foundation.db.f r1 = com.mbridge.msdk.foundation.db.f.a(r1)
            r0.a = r1
            return
    }

    static com.mbridge.msdk.foundation.db.f a(com.mbridge.msdk.mbnative.a.a r0) {
            com.mbridge.msdk.foundation.db.f r0 = r0.a
            return r0
    }

    private boolean a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r10, int r11) {
            r9 = this;
            r0 = 0
            if (r10 == 0) goto L4c
            int r1 = r10.size()
            if (r1 <= 0) goto L4c
            long r1 = java.lang.System.currentTimeMillis()
            java.lang.Object r10 = r10.get(r0)
            com.mbridge.msdk.foundation.entity.CampaignEx r10 = (com.mbridge.msdk.foundation.entity.CampaignEx) r10
            long r3 = r10.getTimestamp()
            r5 = 0
            r10 = 1
            if (r11 == r10) goto L42
            r7 = 2
            if (r11 == r7) goto L20
            goto L46
        L20:
            com.mbridge.msdk.c.b r11 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r5 = r5.k()
            com.mbridge.msdk.c.a r11 = r11.b(r5)
            if (r11 != 0) goto L3a
            com.mbridge.msdk.c.b r11 = com.mbridge.msdk.c.b.a()
            com.mbridge.msdk.c.a r11 = r11.b()
        L3a:
            long r5 = r11.W()
            r7 = 1000(0x3e8, double:4.94E-321)
            long r5 = r5 * r7
            goto L46
        L42:
            long r5 = r9.a()
        L46:
            long r1 = r1 - r3
            int r11 = (r1 > r5 ? 1 : (r1 == r5 ? 0 : -1))
            if (r11 <= 0) goto L4c
            return r10
        L4c:
            return r0
    }

    @Override
    public final java.util.List<com.mbridge.msdk.out.Campaign> a(java.lang.String r4, int r5) {
            r3 = this;
            java.lang.String r4 = (java.lang.String) r4
            com.mbridge.msdk.foundation.db.f r0 = r3.a
            int r1 = r3.b
            r2 = 2
            java.util.List r5 = r0.a(r4, r5, r2, r1)
            r0 = 0
            if (r5 != 0) goto Lf
            goto L25
        Lf:
            boolean r1 = r3.a(r5, r2)
            if (r1 == 0) goto L1d
            com.mbridge.msdk.foundation.db.f r5 = r3.a
            int r1 = r3.b
            r5.a(r4, r2, r1)
            goto L25
        L1d:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.addAll(r5)
        L25:
            return r0
    }

    @Override
    public final void a(java.lang.String r6, java.util.List<com.mbridge.msdk.out.Campaign> r7) {
            r5 = this;
            java.lang.String r6 = (java.lang.String) r6
            java.util.List r7 = (java.util.List) r7
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L3a
            if (r7 == 0) goto L3a
            int r0 = r7.size()
            if (r0 <= 0) goto L3a
            com.mbridge.msdk.foundation.db.f r0 = r5.a
            int r1 = r5.b
            r2 = 0
            r3 = 1
            r0.a(r6, r3, r1, r2)
            com.mbridge.msdk.foundation.db.f r0 = r5.a
            r1 = 2
            int r4 = r5.b
            r0.a(r6, r1, r4, r2)
        L23:
            int r0 = r7.size()
            if (r2 >= r0) goto L3a
            java.lang.Object r0 = r7.get(r2)
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            r0.setCacheLevel(r3)
            com.mbridge.msdk.foundation.db.f r1 = r5.a
            r1.a(r0, r6, r3)
            int r2 = r2 + 1
            goto L23
        L3a:
            return
    }

    @Override
    public final void a(java.lang.String r4, java.util.List<com.mbridge.msdk.out.Campaign> r5, java.lang.String r6) {
            r3 = this;
            java.lang.String r4 = (java.lang.String) r4
            java.util.List r5 = (java.util.List) r5
            boolean r6 = android.text.TextUtils.isEmpty(r6)
            r0 = 1
            r6 = r6 ^ r0
            boolean r1 = android.text.TextUtils.isEmpty(r4)
            if (r1 != 0) goto L33
            if (r5 == 0) goto L33
            int r1 = r5.size()
            if (r1 <= 0) goto L33
            com.mbridge.msdk.foundation.db.f r1 = r3.a
            int r2 = r3.b
            r1.a(r4, r0, r2, r6)
            com.mbridge.msdk.foundation.db.f r0 = r3.a
            r1 = 2
            int r2 = r3.b
            r0.a(r4, r1, r2, r6)
            java.util.concurrent.ThreadPoolExecutor r6 = com.mbridge.msdk.foundation.same.f.b.a()
            com.mbridge.msdk.mbnative.a.a$1 r0 = new com.mbridge.msdk.mbnative.a.a$1
            r0.<init>(r3, r5, r4)
            r6.execute(r0)
        L33:
            return
    }

    @Override
    public final void a(java.lang.String r1) {
            r0 = this;
            return
    }

    @Override
    public final void a(java.lang.String r8, com.mbridge.msdk.out.Campaign r9, java.lang.String r10) {
            r7 = this;
            boolean r10 = android.text.TextUtils.isEmpty(r10)
            r10 = r10 ^ 1
            if (r9 == 0) goto L40
            boolean r0 = android.text.TextUtils.isEmpty(r8)
            if (r0 != 0) goto L40
            com.mbridge.msdk.foundation.entity.CampaignEx r9 = (com.mbridge.msdk.foundation.entity.CampaignEx) r9     // Catch: java.lang.Exception -> L3c
            com.mbridge.msdk.foundation.db.f r0 = r7.a     // Catch: java.lang.Exception -> L3c
            java.lang.String r1 = r9.getId()     // Catch: java.lang.Exception -> L3c
            int r2 = r9.getTab()     // Catch: java.lang.Exception -> L3c
            int r4 = r9.getCacheLevel()     // Catch: java.lang.Exception -> L3c
            int r5 = r9.getType()     // Catch: java.lang.Exception -> L3c
            r3 = r8
            r6 = r10
            boolean r0 = r0.a(r1, r2, r3, r4, r5, r6)     // Catch: java.lang.Exception -> L3c
            if (r0 == 0) goto L40
            com.mbridge.msdk.foundation.db.f r0 = r7.a     // Catch: java.lang.Exception -> L3c
            java.lang.String r1 = r9.getId()     // Catch: java.lang.Exception -> L3c
            int r3 = r9.getCacheLevel()     // Catch: java.lang.Exception -> L3c
            int r4 = r7.b     // Catch: java.lang.Exception -> L3c
            r2 = r8
            r5 = r10
            r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Exception -> L3c
            goto L40
        L3c:
            r8 = move-exception
            r8.printStackTrace()
        L40:
            return
    }

    @Override
    public final java.util.List<com.mbridge.msdk.out.Campaign> b(java.lang.String r6, int r7) {
            r5 = this;
            java.lang.String r6 = (java.lang.String) r6
            com.mbridge.msdk.foundation.db.f r0 = r5.a
            int r1 = r5.b
            r2 = 1
            java.util.List r7 = r0.a(r6, r7, r2, r1)
            r0 = 0
            if (r7 != 0) goto Lf
            goto L36
        Lf:
            boolean r1 = r5.a(r7, r2)
            if (r1 == 0) goto L2e
            r1 = 0
        L16:
            int r3 = r7.size()
            if (r1 >= r3) goto L36
            java.lang.Object r3 = r7.get(r1)
            com.mbridge.msdk.foundation.entity.CampaignEx r3 = (com.mbridge.msdk.foundation.entity.CampaignEx) r3
            r4 = 2
            r3.setCacheLevel(r4)
            com.mbridge.msdk.foundation.db.f r4 = r5.a
            r4.a(r3, r6, r2)
            int r1 = r1 + 1
            goto L16
        L2e:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r0.addAll(r7)
        L36:
            return r0
    }
}
