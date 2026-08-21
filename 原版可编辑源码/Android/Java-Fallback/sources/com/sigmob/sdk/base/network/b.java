package com.sigmob.sdk.base.network;

public class b extends com.czhj.sdk.common.network.SigmobRequest<com.czhj.volley.NetworkResponse> {
    private final com.sigmob.sdk.base.network.b.a a;



    public interface a extends com.czhj.volley.Response.ErrorListener {
        void a(com.czhj.volley.NetworkResponse r1);
    }

    public b(java.lang.String r3, int r4, com.sigmob.sdk.base.network.b.a r5) {
            r2 = this;
            r0 = 0
            r2.<init>(r3, r0, r5)
            r2.a = r5
            r3 = 1
            r2.setShouldRetryServerErrors(r3)
            com.czhj.volley.DefaultRetryPolicy r3 = new com.czhj.volley.DefaultRetryPolicy
            r5 = 10000(0x2710, float:1.4013E-41)
            r1 = 0
            r3.<init>(r4, r5, r0, r1)
            r2.setRetryPolicy(r3)
            r2.setShouldCache(r0)
            return
    }

    public b(java.lang.String r2, com.sigmob.sdk.base.network.b.a r3) {
            r1 = this;
            r0 = 10000(0x2710, float:1.4013E-41)
            r1.<init>(r2, r0, r3)
            return
    }

    public static void a(java.lang.String r2, java.lang.String r3, com.sigmob.windad.WindAdRequest r4, com.czhj.volley.NetworkResponse r5, com.sigmob.sdk.base.models.BaseAdUnit r6) {
            java.lang.String r0 = "hb_tracking"
            com.sigmob.sdk.base.common.ae r0 = com.sigmob.sdk.base.common.ae.a(r0)
            java.lang.String r1 = r4.getPlacementId()
            com.sigmob.sdk.base.common.ae r0 = r0.e(r1)
            int r4 = r4.getAdType()
            java.lang.String r4 = java.lang.String.valueOf(r4)
            com.sigmob.sdk.base.common.ae r4 = r0.b(r4)
            com.sigmob.sdk.base.network.b$2 r0 = new com.sigmob.sdk.base.network.b$2
            r0.<init>(r2, r3, r6, r5)
            com.sigmob.sdk.base.common.ae r2 = r4.a(r0)
            r2.a()
            return
    }

    public static void a(java.lang.String r2, java.lang.String r3, com.sigmob.windad.WindAdRequest r4, com.sigmob.sdk.base.models.BaseAdUnit r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L1d
            com.sigmob.sdk.base.network.b r0 = new com.sigmob.sdk.base.network.b
            com.sigmob.sdk.base.network.b$1 r1 = new com.sigmob.sdk.base.network.b$1
            r1.<init>(r2, r3, r4, r5)
            r0.<init>(r2, r1)
            com.czhj.sdk.common.network.SigmobRequestQueue r2 = com.czhj.sdk.common.network.Networking.getRequestQueue()
            if (r2 == 0) goto L1d
            com.czhj.sdk.common.network.SigmobRequestQueue r2 = com.czhj.sdk.common.network.Networking.getRequestQueue()
            r2.add(r0)
        L1d:
            return
    }

    protected void a(com.czhj.volley.NetworkResponse r4) {
            r3 = this;
            java.lang.Object r0 = r3.mLock
            monitor-enter(r0)
            com.sigmob.sdk.base.network.b$a r1 = r3.a     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "send tracking: "
            r0.append(r2)
            java.lang.String r2 = r3.getUrl()
            r0.append(r2)
            java.lang.String r2 = " success"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            if (r1 == 0) goto L28
            r1.a(r4)
        L28:
            return
        L29:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r4
    }

    @Override
    public void deliverError(com.czhj.volley.VolleyError r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "send tracking: "
            r0.append(r1)
            java.lang.String r1 = r2.getUrl()
            r0.append(r1)
            java.lang.String r1 = " fail"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            super.deliverError(r3)
            return
    }

    @Override
    protected void deliverResponse(java.lang.Object r1) {
            r0 = this;
            com.czhj.volley.NetworkResponse r1 = (com.czhj.volley.NetworkResponse) r1
            r0.a(r1)
            return
    }

    @Override
    public int getMaxLength() {
            r1 = this;
            r0 = 100
            return r0
    }

    @Override
    protected com.czhj.volley.Response<com.czhj.volley.NetworkResponse> parseNetworkResponse(com.czhj.volley.NetworkResponse r2) {
            r1 = this;
            r0 = 0
            com.czhj.volley.Response r2 = com.czhj.volley.Response.success(r2, r0)
            return r2
    }
}
