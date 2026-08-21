package com.sigmob.sdk.base.network;

public class d {

    public interface a {
        void a(int r1, java.lang.String r2, java.lang.String r3, com.sigmob.sdk.base.models.LoadAdRequest r4);

        void a(java.util.List<com.sigmob.sdk.base.models.BaseAdUnit> r1, com.sigmob.sdk.base.models.LoadAdRequest r2);
    }

    public interface b {
        void a();

        void a(com.czhj.volley.VolleyError r1);
    }

    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static void a(com.sigmob.sdk.base.models.LoadAdRequest r3, com.sigmob.sdk.base.network.d.a r4) {
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.getRequestQueue()
            r1 = 0
            if (r0 != 0) goto L15
            if (r4 == 0) goto L14
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_NETWORK
            int r0 = r0.getErrorCode()
            java.lang.String r2 = "request queue is null"
            r4.a(r0, r2, r1, r3)
        L14:
            return
        L15:
            com.sigmob.sdk.base.i r0 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L62
            java.lang.String r0 = r0.l()     // Catch: java.lang.Throwable -> L62
            java.lang.String r2 = r3.getBidToken()     // Catch: java.lang.Throwable -> L30
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L30
            if (r2 != 0) goto L38
            com.sigmob.sdk.base.i r2 = com.sigmob.sdk.base.i.a()     // Catch: java.lang.Throwable -> L30
            java.lang.String r0 = r2.m()     // Catch: java.lang.Throwable -> L30
            goto L38
        L30:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()     // Catch: java.lang.Throwable -> L62
            com.czhj.sdk.logger.SigmobLog.e(r2)     // Catch: java.lang.Throwable -> L62
        L38:
            java.net.URL r2 = new java.net.URL     // Catch: java.lang.Throwable -> L62
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L62
            java.lang.String r2 = r2.getHost()     // Catch: java.lang.Throwable -> L62
            boolean r2 = com.czhj.sdk.common.network.SigmobRequestUtil.isConnection(r2)     // Catch: java.lang.Throwable -> L62
            if (r2 != 0) goto L55
            if (r4 == 0) goto L54
            com.sigmob.windad.WindAdError r0 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_NETWORK     // Catch: java.lang.Throwable -> L62
            int r0 = r0.getErrorCode()     // Catch: java.lang.Throwable -> L62
            java.lang.String r2 = "network is disconnection"
            r4.a(r0, r2, r1, r3)     // Catch: java.lang.Throwable -> L62
        L54:
            return
        L55:
            com.sigmob.sdk.base.network.a r2 = new com.sigmob.sdk.base.network.a     // Catch: java.lang.Throwable -> L62
            r2.<init>(r0, r3, r4)     // Catch: java.lang.Throwable -> L62
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.getRequestQueue()     // Catch: java.lang.Throwable -> L62
            r0.add(r2)     // Catch: java.lang.Throwable -> L62
            goto L79
        L62:
            r0 = move-exception
            java.lang.String r2 = r0.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r2)
            if (r4 == 0) goto L79
            com.sigmob.windad.WindAdError r2 = com.sigmob.windad.WindAdError.ERROR_SIGMOB_NETWORK
            int r2 = r2.getErrorCode()
            java.lang.String r0 = r0.getMessage()
            r4.a(r2, r0, r1, r3)
        L79:
            return
    }
}
