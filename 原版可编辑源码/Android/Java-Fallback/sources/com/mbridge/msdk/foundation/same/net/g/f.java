package com.mbridge.msdk.foundation.same.net.g;

public class f extends com.mbridge.msdk.foundation.same.net.g.b {
    public f(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    public void addExtraParams(java.lang.String r4, com.mbridge.msdk.foundation.same.net.g.d r5) {
            r3 = this;
            int r0 = com.mbridge.msdk.foundation.tools.ae.e()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.ae.f()     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
            if (r5 == 0) goto L1e
            java.lang.String r2 = "misk_spt"
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
            r5.a(r2, r0)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
            if (r0 != 0) goto L1e
            java.lang.String r0 = "misk_spt_det"
            r5.a(r0, r1)     // Catch: java.lang.Throwable -> L22 java.lang.Exception -> L24
        L1e:
            super.addExtraParams(r4, r5)
            goto L2f
        L22:
            r0 = move-exception
            goto L30
        L24:
            r0 = move-exception
            java.lang.String r1 = "CampaignRequest"
            java.lang.String r0 = r0.getMessage()     // Catch: java.lang.Throwable -> L22
            com.mbridge.msdk.foundation.tools.z.a(r1, r0)     // Catch: java.lang.Throwable -> L22
            goto L1e
        L2f:
            return
        L30:
            super.addExtraParams(r4, r5)
            throw r0
    }
}
