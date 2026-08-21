package com.czhj.sdk.common.network;

public class BuriedPointRequest extends com.czhj.sdk.common.network.SigmobRequest<com.czhj.volley.NetworkResponse> {
    private final com.czhj.sdk.common.network.BuriedPointRequest.RequestListener a;
    private java.lang.String b;

    public interface RequestListener {
        void onErrorResponse(com.czhj.volley.VolleyError r1);

        void onSuccess();
    }

    private BuriedPointRequest(java.lang.String r3, java.lang.String r4, com.czhj.sdk.common.network.BuriedPointRequest.RequestListener r5) {
            r2 = this;
            r0 = 1
            r1 = 0
            r2.<init>(r3, r0, r1)
            java.lang.String r3 = ""
            r2.b = r3
            r2.a = r5
            r2.b = r4
            com.czhj.volley.DefaultRetryPolicy r3 = new com.czhj.volley.DefaultRetryPolicy
            r4 = 10000(0x2710, float:1.4013E-41)
            r5 = 2
            r0 = 0
            r3.<init>(r4, r5, r0)
            r2.setRetryPolicy(r3)
            r3 = 0
            r2.setShouldCache(r3)
            return
    }

    public static void BuriedPointSend(java.lang.String r2, com.czhj.sdk.common.network.BuriedPointRequest.RequestListener r3) {
            if (r2 == 0) goto L8
            int r0 = r2.length()
            if (r0 != 0) goto L14
        L8:
            if (r3 == 0) goto L14
            com.czhj.volley.VolleyError r0 = new com.czhj.volley.VolleyError
            java.lang.String r1 = "body is empty"
            r0.<init>(r1)
            r3.onErrorResponse(r0)
        L14:
            com.czhj.sdk.common.network.SigmobRequestQueue r0 = com.czhj.sdk.common.network.Networking.getBuriedPointRequestQueue()
            if (r0 != 0) goto L27
            if (r3 == 0) goto L26
            com.czhj.volley.VolleyError r2 = new com.czhj.volley.VolleyError
            java.lang.String r0 = "BuriedPointRequestQueue is empty"
            r2.<init>(r0)
            r3.onErrorResponse(r2)
        L26:
            return
        L27:
            com.czhj.sdk.common.network.BuriedPointRequest r0 = new com.czhj.sdk.common.network.BuriedPointRequest     // Catch: java.lang.Throwable -> L3c
            com.czhj.sdk.common.models.Config r1 = com.czhj.sdk.common.models.Config.sharedInstance()     // Catch: java.lang.Throwable -> L3c
            java.lang.String r1 = r1.getLogUrl()     // Catch: java.lang.Throwable -> L3c
            r0.<init>(r1, r2, r3)     // Catch: java.lang.Throwable -> L3c
            com.czhj.sdk.common.network.SigmobRequestQueue r2 = com.czhj.sdk.common.network.Networking.getBuriedPointRequestQueue()     // Catch: java.lang.Throwable -> L3c
            r2.add(r0)     // Catch: java.lang.Throwable -> L3c
            goto L50
        L3c:
            r2 = move-exception
            java.lang.String r2 = r2.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r2)
            if (r3 == 0) goto L50
            com.czhj.volley.VolleyError r2 = new com.czhj.volley.VolleyError
            java.lang.String r0 = "network is disconnect "
            r2.<init>(r0)
            r3.onErrorResponse(r2)
        L50:
            return
    }

    @Override
    public void deliverError(com.czhj.volley.VolleyError r4) {
            r3 = this;
            java.lang.Object r0 = r3.mLock
            monitor-enter(r0)
            com.czhj.sdk.common.network.BuriedPointRequest$RequestListener r1 = r3.a     // Catch: java.lang.Throwable -> L29
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "send dclog: "
            r0.append(r2)
            java.lang.String r2 = r3.getUrl()
            r0.append(r2)
            java.lang.String r2 = " onErrorResponse"
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.i(r0)
            if (r1 == 0) goto L28
            r1.onErrorResponse(r4)
        L28:
            return
        L29:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r4
    }

    protected void deliverResponse(com.czhj.volley.NetworkResponse r3) {
            r2 = this;
            java.lang.Object r3 = r2.mLock
            monitor-enter(r3)
            com.czhj.sdk.common.network.BuriedPointRequest$RequestListener r0 = r2.a     // Catch: java.lang.Throwable -> L29
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L29
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r1 = "send dclog: "
            r3.append(r1)
            java.lang.String r1 = r2.getUrl()
            r3.append(r1)
            java.lang.String r1 = " success"
            r3.append(r1)
            java.lang.String r3 = r3.toString()
            com.czhj.sdk.logger.SigmobLog.i(r3)
            if (r0 == 0) goto L28
            r0.onSuccess()
        L28:
            return
        L29:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L29
            throw r0
    }

    @Override
    protected void deliverResponse(java.lang.Object r1) {
            r0 = this;
            com.czhj.volley.NetworkResponse r1 = (com.czhj.volley.NetworkResponse) r1
            r0.deliverResponse(r1)
            return
    }

    @Override
    public byte[] getBody() {
            r1 = this;
            java.lang.String r0 = r1.b
            byte[] r0 = r0.getBytes()
            return r0
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> getHeaders() {
            r3 = this;
            java.util.Map r0 = super.getHeaders()
            java.lang.String r1 = "gz"
            java.lang.String r2 = "on"
            r0.put(r1, r2)
            return r0
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
