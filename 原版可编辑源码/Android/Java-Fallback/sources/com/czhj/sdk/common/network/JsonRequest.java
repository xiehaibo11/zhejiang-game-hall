package com.czhj.sdk.common.network;

public class JsonRequest extends com.czhj.sdk.common.network.SigmobRequest<org.json.JSONObject> {
    protected static final java.lang.String PROTOCOL_CHARSET = "utf-8";
    private static final int a = 0;
    private final com.czhj.sdk.common.network.JsonRequest.Listener b;

    public interface Listener extends com.czhj.volley.Response.ErrorListener {
        void onSuccess(org.json.JSONObject r1);
    }

    public JsonRequest(java.lang.String r3, com.czhj.sdk.common.network.JsonRequest.Listener r4, int r5) {
            r2 = this;
            r5 = 0
            r2.<init>(r3, r5, r4)
            r2.b = r4
            com.czhj.volley.DefaultRetryPolicy r3 = new com.czhj.volley.DefaultRetryPolicy
            r4 = 10000(0x2710, float:1.4013E-41)
            r0 = 2
            r1 = 0
            r3.<init>(r4, r0, r1)
            r2.setRetryPolicy(r3)
            r2.setShouldCache(r5)
            return
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
            org.json.JSONObject r1 = (org.json.JSONObject) r1
            r0.deliverResponse(r1)
            return
    }

    protected void deliverResponse(org.json.JSONObject r4) {
            r3 = this;
            java.lang.Object r0 = r3.mLock
            monitor-enter(r0)
            com.czhj.sdk.common.network.JsonRequest$Listener r1 = r3.b     // Catch: java.lang.Throwable -> L29
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
            r1.onSuccess(r4)
        L28:
            return
        L29:
            r4 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L29
            throw r4
    }

    @Override
    protected com.czhj.volley.Response<org.json.JSONObject> parseNetworkResponse(com.czhj.volley.NetworkResponse r5) {
            r4 = this;
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Throwable -> L1d
            byte[] r1 = r5.data     // Catch: java.lang.Throwable -> L1d
            java.util.Map<java.lang.String, java.lang.String> r2 = r5.headers     // Catch: java.lang.Throwable -> L1d
            java.lang.String r3 = "utf-8"
            java.lang.String r2 = com.czhj.volley.toolbox.HttpHeaderParser.parseCharset(r2, r3)     // Catch: java.lang.Throwable -> L1d
            r0.<init>(r1, r2)     // Catch: java.lang.Throwable -> L1d
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L1d
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L1d
            com.czhj.volley.Cache$Entry r5 = com.czhj.volley.toolbox.HttpHeaderParser.parseCacheHeaders(r5)     // Catch: java.lang.Throwable -> L1d
            com.czhj.volley.Response r5 = com.czhj.volley.Response.success(r1, r5)     // Catch: java.lang.Throwable -> L1d
            return r5
        L1d:
            r5 = move-exception
            java.lang.String r0 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r0)
            com.czhj.volley.ParseError r0 = new com.czhj.volley.ParseError
            r0.<init>(r5)
            com.czhj.volley.Response r5 = com.czhj.volley.Response.error(r0)
            return r5
    }
}
