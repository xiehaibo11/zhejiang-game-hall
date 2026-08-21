package com.mbridge.msdk.interstitial.b;

public class a {
    private static final java.lang.String a = null;
    private static com.mbridge.msdk.interstitial.b.a c;
    private com.mbridge.msdk.foundation.db.f b;

    static {
            java.lang.Class<com.mbridge.msdk.interstitial.b.a> r0 = com.mbridge.msdk.interstitial.b.a.class
            java.lang.String r0 = r0.getName()
            com.mbridge.msdk.interstitial.b.a.a = r0
            r0 = 0
            com.mbridge.msdk.interstitial.b.a.c = r0
            return
    }

    private a() {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Exception -> L20
            android.content.Context r0 = r0.j()     // Catch: java.lang.Exception -> L20
            if (r0 == 0) goto L18
            com.mbridge.msdk.foundation.db.i r0 = com.mbridge.msdk.foundation.db.i.a(r0)     // Catch: java.lang.Exception -> L20
            com.mbridge.msdk.foundation.db.f r0 = com.mbridge.msdk.foundation.db.f.a(r0)     // Catch: java.lang.Exception -> L20
            r2.b = r0     // Catch: java.lang.Exception -> L20
            goto L24
        L18:
            java.lang.String r0 = com.mbridge.msdk.interstitial.b.a.a     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = "InterstitialCamapignCache get Context is null"
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)     // Catch: java.lang.Exception -> L20
            goto L24
        L20:
            r0 = move-exception
            r0.printStackTrace()
        L24:
            return
    }

    public static com.mbridge.msdk.interstitial.b.a a() {
            com.mbridge.msdk.interstitial.b.a r0 = com.mbridge.msdk.interstitial.b.a.c
            if (r0 != 0) goto L1b
            java.lang.Class<com.mbridge.msdk.interstitial.b.a> r0 = com.mbridge.msdk.interstitial.b.a.class
            monitor-enter(r0)     // Catch: java.lang.Exception -> L17
            com.mbridge.msdk.interstitial.b.a r1 = com.mbridge.msdk.interstitial.b.a.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.mbridge.msdk.interstitial.b.a r1 = new com.mbridge.msdk.interstitial.b.a     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.mbridge.msdk.interstitial.b.a.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L1b
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1     // Catch: java.lang.Exception -> L17
        L17:
            r0 = move-exception
            r0.printStackTrace()
        L1b:
            com.mbridge.msdk.interstitial.b.a r0 = com.mbridge.msdk.interstitial.b.a.c
            return r0
    }

    public final java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> a(java.lang.String r5, int r6) {
            r4 = this;
            r0 = 0
            boolean r1 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Exception -> L2f
            if (r1 != 0) goto L33
            com.mbridge.msdk.foundation.db.f r1 = r4.b     // Catch: java.lang.Exception -> L2f
            r2 = 0
            r3 = 1
            java.util.List r5 = r1.a(r5, r6, r2, r3)     // Catch: java.lang.Exception -> L2f
            if (r5 == 0) goto L33
            java.util.ArrayList r6 = new java.util.ArrayList     // Catch: java.lang.Exception -> L2f
            r6.<init>()     // Catch: java.lang.Exception -> L2f
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Exception -> L2c
        L1a:
            boolean r0 = r5.hasNext()     // Catch: java.lang.Exception -> L2c
            if (r0 == 0) goto L2a
            java.lang.Object r0 = r5.next()     // Catch: java.lang.Exception -> L2c
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0     // Catch: java.lang.Exception -> L2c
            r6.add(r0)     // Catch: java.lang.Exception -> L2c
            goto L1a
        L2a:
            r0 = r6
            goto L33
        L2c:
            r5 = move-exception
            r0 = r6
            goto L30
        L2f:
            r5 = move-exception
        L30:
            r5.printStackTrace()
        L33:
            return r0
    }

    public final synchronized void a(long r3, java.lang.String r5) {
            r2 = this;
            monitor-enter(r2)
            com.mbridge.msdk.foundation.db.f r0 = r2.b     // Catch: java.lang.Throwable -> L17 java.lang.Exception -> L19
            if (r0 == 0) goto L26
            r0 = 0
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 == 0) goto L26
            boolean r0 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> L17 java.lang.Exception -> L19
            if (r0 != 0) goto L26
            com.mbridge.msdk.foundation.db.f r0 = r2.b     // Catch: java.lang.Throwable -> L17 java.lang.Exception -> L19
            r0.b(r3, r5)     // Catch: java.lang.Throwable -> L17 java.lang.Exception -> L19
            goto L26
        L17:
            r3 = move-exception
            goto L28
        L19:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L17
            java.lang.String r4 = com.mbridge.msdk.interstitial.b.a.a     // Catch: java.lang.Throwable -> L17
            java.lang.String r3 = r3.getMessage()     // Catch: java.lang.Throwable -> L17
            com.mbridge.msdk.foundation.tools.z.d(r4, r3)     // Catch: java.lang.Throwable -> L17
        L26:
            monitor-exit(r2)
            return
        L28:
            monitor-exit(r2)
            throw r3
    }

    public final void a(com.mbridge.msdk.foundation.entity.CampaignEx r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L12
            if (r0 != 0) goto L16
            com.mbridge.msdk.foundation.db.f r0 = r1.b     // Catch: java.lang.Exception -> L12
            java.lang.String r2 = r2.getId()     // Catch: java.lang.Exception -> L12
            r0.a(r2, r3)     // Catch: java.lang.Exception -> L12
            goto L16
        L12:
            r2 = move-exception
            r2.printStackTrace()
        L16:
            return
    }

    public final void a(java.util.List<com.mbridge.msdk.foundation.entity.CampaignEx> r2, java.lang.String r3) {
            r1 = this;
            if (r2 == 0) goto L22
            int r0 = r2.size()
            if (r0 <= 0) goto L22
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L22
            java.util.Iterator r2 = r2.iterator()
        L12:
            boolean r0 = r2.hasNext()
            if (r0 == 0) goto L22
            java.lang.Object r0 = r2.next()
            com.mbridge.msdk.foundation.entity.CampaignEx r0 = (com.mbridge.msdk.foundation.entity.CampaignEx) r0
            r1.a(r0, r3)
            goto L12
        L22:
            return
    }

    public final void b(com.mbridge.msdk.foundation.entity.CampaignEx r3, java.lang.String r4) {
            r2 = this;
            com.mbridge.msdk.foundation.db.f r0 = r2.b     // Catch: java.lang.Exception -> L13
            if (r0 == 0) goto L17
            if (r3 == 0) goto L17
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L13
            if (r0 != 0) goto L17
            com.mbridge.msdk.foundation.db.f r0 = r2.b     // Catch: java.lang.Exception -> L13
            r1 = 0
            r0.a(r3, r4, r1)     // Catch: java.lang.Exception -> L13
            goto L17
        L13:
            r3 = move-exception
            r3.printStackTrace()
        L17:
            return
    }
}
